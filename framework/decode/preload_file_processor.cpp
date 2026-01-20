/*
** Copyright (c) 2023 LunarG, Inc.
** Copyright (c) 2023 Arm Limited and/or its affiliates <open-source-office@arm.com>
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and associated documentation files (the "Software"),
** to deal in the Software without restriction, including without limitation
** the rights to use, copy, modify, merge, publish, distribute, sublicense,
** and/or sell copies of the Software, and to permit persons to whom the
** Software is furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
*/

#include "decode/preload_file_processor.h"
#include "util/logging.h"

#include <memory>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

PreloadFileProcessor::PreloadFileProcessor() {}

void PreloadFileProcessor::PreloadNextFrames(size_t count)
{
    // Block processing will update current_frame_number_, so save and restore it,
    // as callers rely on it remaining unchanged by preload.
    const uint64_t save_current_frame = current_frame_number_;
    bool           success            = true;

    // Escalate block reference policy to owned to retain backing store for preloaded blocks
    auto save_policy = block_parser_->GetBlockReferencePolicy();
    if (save_policy == ParsedBlock::BlockReferencePolicy::kNonOwnedReference)
    {
        // Only need to change if was non-owned
        block_parser_->SetBlockReferencePolicy(ParsedBlock::BlockReferencePolicy::kOwnedReferenceAsNeeded);
    }

    preloaded_frames_.clear();
    preloaded_frames_.reserve(count);

    while (count != 0U && success)
    {
        uint64_t          current_preload_frame = current_frame_number_;
        PreloadedFramePtr preload_frame         = std::make_unique<PreloadedFrame>(current_preload_frame);
        success =
            DoProcessNextFrame([this, &preload_frame]() { return this->PreloadBlocksOneFrame(preload_frame->blocks); });
        if (success)
        {
            if (current_frame_number_ == current_preload_frame)
            {
                // Deal with the frame marker after implied frame kFunctionCallBlock frame boundary case
                // Append the blocks leading up to the frame marker to the previous frame
                GFXRECON_ASSERT(current_frame_number_ == (kFirstFrame + 1));
                GFXRECON_ASSERT(!preload_frame->blocks.empty());
                ParsedBlockQueue& current_blocks = preload_frame->blocks;
                ParsedBlockQueue& prev_blocks    = preloaded_frames_.back()->blocks;
                prev_blocks.insert(prev_blocks.end(),
                                   std::make_move_iterator(current_blocks.begin()),
                                   std::make_move_iterator(current_blocks.end()));
                preload_frame.reset();
            }
            else
            {
                preloaded_frames_.emplace_back(std::move(preload_frame));
                count--;
            }
        }
    }
    current_preloaded_frame_ = preloaded_frames_.begin();

    // Restore the original block reference policy
    block_parser_->SetBlockReferencePolicy(save_policy);

    // Restore saved frame number callers expect it to be unchanged by preload
    current_frame_number_ = save_current_frame;
}

bool PreloadFileProcessor::PreloadBlocksOneFrame(ParsedBlockQueue& frame_queue)
{
    // Use queue-optimized to set early decompression for "small" parsed blocks
    block_parser_->SetDecompressionPolicy(BlockParser::DecompressionPolicy::kQueueOptimized);
    DispatchFunction dispatch = [&frame_queue](uint64_t block_index, ParsedBlock& block) {
        frame_queue.emplace_back(std::make_unique<ParsedBlock>(std::move(block)));
        return ProcessBlockState::kRunning;
    };

    ProcessBlockState process_result = ProcessBlocks(dispatch, false /* check decoder completion */);
    return ContinueProcessing(process_result);
}

bool PreloadFileProcessor::ProcessBlocksOneFrame()
{
    // Passthrough if no preloaded frame.
    if (!preloaded_frames_.empty() && current_preloaded_frame_ == preloaded_frames_.end())
    {
        preloaded_frames_.clear();
        current_preloaded_frame_ = preloaded_frames_.end();
    }

    if (preloaded_frames_.empty())
    {
        return FileProcessor::ProcessBlocksOneFrame();
    }

    PreloadedFrame&   frame          = *(current_preloaded_frame_->get());
    ProcessBlockState process_result = ReplayOneFrame(frame);
    ++current_preloaded_frame_;

    if (process_result == ProcessBlockState::kFrameBoundary)
    {
        current_frame_number_++;
    }

    return ContinueProcessing(process_result);
}

FileProcessor::ProcessBlockState PreloadFileProcessor::ReplayOneFrame(PreloadedFrame& frame)
{
    BlockParser&    block_parser = GetBlockParser();
    DispatchVisitor dispatch_visitor(decoders_, annotation_handler_);
    SetDecoderFrameNumber(frame.frame_number);

    ProcessBlockState process_state = ProcessBlockState::kFrameBoundary;
    for (auto& queued_block_ptr : frame.blocks)
    {
        auto&    queued_block = *queued_block_ptr;
        uint64_t block_index = queued_block.GetBlockIndex();
        if (!ContinueDecoding(block_index, true /* check decoder completion */))
        {
            process_state = ProcessBlockState::kEndProcessing;
            break;
        }

        // We assume that only known, vistable blocks were preloaded
        GFXRECON_ASSERT(queued_block.IsVisitable());

        bool decompressed = false;
        if (queued_block.NeedsDecompression())
        {
            if (!queued_block.Decompress(block_parser))
            {
                process_state = ProcessBlockState::kError;
                break;
            }
            decompressed = true;
        }

        SetDecoderBlockIndex(block_index);
        std::visit(dispatch_visitor, queued_block.GetArgs());
        block_index++;

#if 0 // WIP WIP: don't know if with want to do any cleanup during replay
      // Cleanup large decompressed blocks after processing to reduce memory usage during replay
        if (decompressed)
        {
            queued_block.TrimBlock(block_parser);
        }
#endif
    }

    return process_state;
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
