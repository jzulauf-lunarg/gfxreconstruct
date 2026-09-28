/*
** Copyright (c) 2018-2023 Valve Corporation
** Copyright (c) 2018-2026 LunarG, Inc.
** Copyright (c) 2023 Advanced Micro Devices, Inc.
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

/*
** This file is generated from the Khronos Vulkan XML API Registry.
**
*/

#include "catch2/catch.hpp"

#include "generated/encode_oracles/generated_vulkan_encode_oracles.h"
#include "test/encode_oracle/encode_oracle_harness.h"

#include "vulkan/vulkan.h"
#include "vk_video/vulkan_video_codec_h264std.h"
#include "vk_video/vulkan_video_codec_h264std_decode.h"
#include "vk_video/vulkan_video_codec_h264std_encode.h"
#include "vk_video/vulkan_video_codec_h265std.h"
#include "vk_video/vulkan_video_codec_h265std_decode.h"
#include "vk_video/vulkan_video_codec_h265std_encode.h"
#include "vk_video/vulkan_video_codecs_common.h"

TEST_CASE("encode oracle: StdVideoH264SpsVuiFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoH264SpsVuiFlags, StdVideoH264SpsVuiFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoH264HrdParameters", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoH264HrdParameters, StdVideoH264HrdParameters>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoH264SequenceParameterSetVui", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoH264SequenceParameterSetVui, StdVideoH264SequenceParameterSetVui>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoH264SpsFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoH264SpsFlags, StdVideoH264SpsFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoH264ScalingLists", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoH264ScalingLists, StdVideoH264ScalingLists>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoH264SequenceParameterSet", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoH264SequenceParameterSet, StdVideoH264SequenceParameterSet>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoH264PpsFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoH264PpsFlags, StdVideoH264PpsFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoH264PictureParameterSet", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoH264PictureParameterSet, StdVideoH264PictureParameterSet>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoDecodeH264PictureInfoFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoDecodeH264PictureInfoFlags, StdVideoDecodeH264PictureInfoFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoDecodeH264PictureInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoDecodeH264PictureInfo, StdVideoDecodeH264PictureInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoDecodeH264ReferenceInfoFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoDecodeH264ReferenceInfoFlags, StdVideoDecodeH264ReferenceInfoFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoDecodeH264ReferenceInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoDecodeH264ReferenceInfo, StdVideoDecodeH264ReferenceInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeH264WeightTableFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeH264WeightTableFlags, StdVideoEncodeH264WeightTableFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeH264WeightTable", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeH264WeightTable, StdVideoEncodeH264WeightTable>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeH264SliceHeaderFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeH264SliceHeaderFlags, StdVideoEncodeH264SliceHeaderFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeH264PictureInfoFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeH264PictureInfoFlags, StdVideoEncodeH264PictureInfoFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeH264ReferenceInfoFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeH264ReferenceInfoFlags, StdVideoEncodeH264ReferenceInfoFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeH264ReferenceListsInfoFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeH264ReferenceListsInfoFlags, StdVideoEncodeH264ReferenceListsInfoFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeH264RefListModEntry", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeH264RefListModEntry, StdVideoEncodeH264RefListModEntry>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeH264RefPicMarkingEntry", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeH264RefPicMarkingEntry, StdVideoEncodeH264RefPicMarkingEntry>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeH264ReferenceListsInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeH264ReferenceListsInfo, StdVideoEncodeH264ReferenceListsInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeH264PictureInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeH264PictureInfo, StdVideoEncodeH264PictureInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeH264ReferenceInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeH264ReferenceInfo, StdVideoEncodeH264ReferenceInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeH264SliceHeader", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeH264SliceHeader, StdVideoEncodeH264SliceHeader>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoVP9ColorConfigFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoVP9ColorConfigFlags, StdVideoVP9ColorConfigFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoVP9ColorConfig", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoVP9ColorConfig, StdVideoVP9ColorConfig>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoVP9LoopFilterFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoVP9LoopFilterFlags, StdVideoVP9LoopFilterFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoVP9LoopFilter", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoVP9LoopFilter, StdVideoVP9LoopFilter>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoVP9SegmentationFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoVP9SegmentationFlags, StdVideoVP9SegmentationFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoVP9Segmentation", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoVP9Segmentation, StdVideoVP9Segmentation>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoDecodeVP9PictureInfoFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoDecodeVP9PictureInfoFlags, StdVideoDecodeVP9PictureInfoFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoDecodeVP9PictureInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoDecodeVP9PictureInfo, StdVideoDecodeVP9PictureInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1ColorConfigFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1ColorConfigFlags, StdVideoAV1ColorConfigFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1ColorConfig", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1ColorConfig, StdVideoAV1ColorConfig>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1TimingInfoFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1TimingInfoFlags, StdVideoAV1TimingInfoFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1TimingInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1TimingInfo, StdVideoAV1TimingInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1SequenceHeaderFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1SequenceHeaderFlags, StdVideoAV1SequenceHeaderFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1SequenceHeader", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1SequenceHeader, StdVideoAV1SequenceHeader>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1LoopFilterFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1LoopFilterFlags, StdVideoAV1LoopFilterFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1LoopFilter", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1LoopFilter, StdVideoAV1LoopFilter>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1QuantizationFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1QuantizationFlags, StdVideoAV1QuantizationFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1Quantization", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1Quantization, StdVideoAV1Quantization>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1Segmentation", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1Segmentation, StdVideoAV1Segmentation>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1TileInfoFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1TileInfoFlags, StdVideoAV1TileInfoFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1TileInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1TileInfo, StdVideoAV1TileInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1CDEF", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1CDEF, StdVideoAV1CDEF>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1LoopRestoration", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1LoopRestoration, StdVideoAV1LoopRestoration>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1GlobalMotion", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1GlobalMotion, StdVideoAV1GlobalMotion>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1FilmGrainFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1FilmGrainFlags, StdVideoAV1FilmGrainFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoAV1FilmGrain", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoAV1FilmGrain, StdVideoAV1FilmGrain>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoDecodeAV1PictureInfoFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoDecodeAV1PictureInfoFlags, StdVideoDecodeAV1PictureInfoFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoDecodeAV1PictureInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoDecodeAV1PictureInfo, StdVideoDecodeAV1PictureInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoDecodeAV1ReferenceInfoFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoDecodeAV1ReferenceInfoFlags, StdVideoDecodeAV1ReferenceInfoFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoDecodeAV1ReferenceInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoDecodeAV1ReferenceInfo, StdVideoDecodeAV1ReferenceInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeAV1ExtensionHeader", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeAV1ExtensionHeader, StdVideoEncodeAV1ExtensionHeader>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeAV1DecoderModelInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeAV1DecoderModelInfo, StdVideoEncodeAV1DecoderModelInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeAV1OperatingPointInfoFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeAV1OperatingPointInfoFlags, StdVideoEncodeAV1OperatingPointInfoFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeAV1OperatingPointInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeAV1OperatingPointInfo, StdVideoEncodeAV1OperatingPointInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeAV1PictureInfoFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeAV1PictureInfoFlags, StdVideoEncodeAV1PictureInfoFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeAV1PictureInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeAV1PictureInfo, StdVideoEncodeAV1PictureInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeAV1ReferenceInfoFlags", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeAV1ReferenceInfoFlags, StdVideoEncodeAV1ReferenceInfoFlags>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: StdVideoEncodeAV1ReferenceInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::StdVideoEncodeAV1ReferenceInfo, StdVideoEncodeAV1ReferenceInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExtent2D", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExtent2D, VkExtent2D>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExtent3D", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExtent3D, VkExtent3D>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkOffset2D", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkOffset2D, VkOffset2D>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkOffset3D", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkOffset3D, VkOffset3D>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRect2D", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRect2D, VkRect2D>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAllocationCallbacks", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAllocationCallbacks, VkAllocationCallbacks>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkApplicationInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkApplicationInfo, VkApplicationInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkFormatProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkFormatProperties, VkFormatProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageFormatProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageFormatProperties, VkImageFormatProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkInstanceCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkInstanceCreateInfo, VkInstanceCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryHeap", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryHeap, VkMemoryHeap>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryType", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryType, VkMemoryType>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFeatures, VkPhysicalDeviceFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceLimits", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceLimits, VkPhysicalDeviceLimits>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMemoryProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMemoryProperties, VkPhysicalDeviceMemoryProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceSparseProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceSparseProperties, VkPhysicalDeviceSparseProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceProperties, VkPhysicalDeviceProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkQueueFamilyProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkQueueFamilyProperties, VkQueueFamilyProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceQueueCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceQueueCreateInfo, VkDeviceQueueCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceCreateInfo, VkDeviceCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExtensionProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExtensionProperties, VkExtensionProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkLayerProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkLayerProperties, VkLayerProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSubmitInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSubmitInfo, VkSubmitInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMappedMemoryRange", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMappedMemoryRange, VkMappedMemoryRange>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryAllocateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryAllocateInfo, VkMemoryAllocateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryRequirements", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryRequirements, VkMemoryRequirements>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageSubresource", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageSubresource, VkImageSubresource>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSparseImageFormatProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSparseImageFormatProperties, VkSparseImageFormatProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSparseImageMemoryBind", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSparseImageMemoryBind, VkSparseImageMemoryBind>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSparseImageMemoryBindInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSparseImageMemoryBindInfo, VkSparseImageMemoryBindInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSparseImageMemoryRequirements", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSparseImageMemoryRequirements, VkSparseImageMemoryRequirements>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSparseMemoryBind", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSparseMemoryBind, VkSparseMemoryBind>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSparseBufferMemoryBindInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSparseBufferMemoryBindInfo, VkSparseBufferMemoryBindInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSparseImageOpaqueMemoryBindInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSparseImageOpaqueMemoryBindInfo, VkSparseImageOpaqueMemoryBindInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindSparseInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindSparseInfo, VkBindSparseInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkFenceCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkFenceCreateInfo, VkFenceCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSemaphoreCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSemaphoreCreateInfo, VkSemaphoreCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkQueryPoolCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkQueryPoolCreateInfo, VkQueryPoolCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBufferCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBufferCreateInfo, VkBufferCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageCreateInfo, VkImageCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSubresourceLayout", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSubresourceLayout, VkSubresourceLayout>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkComponentMapping", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkComponentMapping, VkComponentMapping>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageSubresourceRange", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageSubresourceRange, VkImageSubresourceRange>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageViewCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageViewCreateInfo, VkImageViewCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCommandPoolCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCommandPoolCreateInfo, VkCommandPoolCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCommandBufferAllocateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCommandBufferAllocateInfo, VkCommandBufferAllocateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCommandBufferInheritanceInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCommandBufferInheritanceInfo, VkCommandBufferInheritanceInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCommandBufferBeginInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCommandBufferBeginInfo, VkCommandBufferBeginInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBufferCopy", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBufferCopy, VkBufferCopy>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageSubresourceLayers", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageSubresourceLayers, VkImageSubresourceLayers>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBufferImageCopy", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBufferImageCopy, VkBufferImageCopy>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageCopy", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageCopy, VkImageCopy>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBufferMemoryBarrier", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBufferMemoryBarrier, VkBufferMemoryBarrier>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageMemoryBarrier", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageMemoryBarrier, VkImageMemoryBarrier>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryBarrier", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryBarrier, VkMemoryBarrier>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDispatchIndirectCommand", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDispatchIndirectCommand, VkDispatchIndirectCommand>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineCacheHeaderVersionOne", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineCacheHeaderVersionOne, VkPipelineCacheHeaderVersionOne>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkEventCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkEventCreateInfo, VkEventCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBufferViewCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBufferViewCreateInfo, VkBufferViewCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkShaderModuleCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkShaderModuleCreateInfo, VkShaderModuleCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineCacheCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineCacheCreateInfo, VkPipelineCacheCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSpecializationMapEntry", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSpecializationMapEntry, VkSpecializationMapEntry>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSpecializationInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSpecializationInfo, VkSpecializationInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineShaderStageCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineShaderStageCreateInfo, VkPipelineShaderStageCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkComputePipelineCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkComputePipelineCreateInfo, VkComputePipelineCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPushConstantRange", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPushConstantRange, VkPushConstantRange>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineLayoutCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineLayoutCreateInfo, VkPipelineLayoutCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSamplerCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSamplerCreateInfo, VkSamplerCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyDescriptorSet", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyDescriptorSet, VkCopyDescriptorSet>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorBufferInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorBufferInfo, VkDescriptorBufferInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorPoolSize", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorPoolSize, VkDescriptorPoolSize>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorPoolCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorPoolCreateInfo, VkDescriptorPoolCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorSetAllocateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorSetAllocateInfo, VkDescriptorSetAllocateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorSetLayoutBinding", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorSetLayoutBinding, VkDescriptorSetLayoutBinding>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorSetLayoutCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorSetLayoutCreateInfo, VkDescriptorSetLayoutCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDrawIndexedIndirectCommand", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDrawIndexedIndirectCommand, VkDrawIndexedIndirectCommand>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDrawIndirectCommand", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDrawIndirectCommand, VkDrawIndirectCommand>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkStencilOpState", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkStencilOpState, VkStencilOpState>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVertexInputAttributeDescription", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVertexInputAttributeDescription, VkVertexInputAttributeDescription>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVertexInputBindingDescription", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVertexInputBindingDescription, VkVertexInputBindingDescription>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkViewport", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkViewport, VkViewport>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineColorBlendAttachmentState", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineColorBlendAttachmentState, VkPipelineColorBlendAttachmentState>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineColorBlendStateCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineColorBlendStateCreateInfo, VkPipelineColorBlendStateCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineDepthStencilStateCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineDepthStencilStateCreateInfo, VkPipelineDepthStencilStateCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineDynamicStateCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineDynamicStateCreateInfo, VkPipelineDynamicStateCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineInputAssemblyStateCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineInputAssemblyStateCreateInfo, VkPipelineInputAssemblyStateCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineMultisampleStateCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineMultisampleStateCreateInfo, VkPipelineMultisampleStateCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineRasterizationStateCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineRasterizationStateCreateInfo, VkPipelineRasterizationStateCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineTessellationStateCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineTessellationStateCreateInfo, VkPipelineTessellationStateCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineVertexInputStateCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineVertexInputStateCreateInfo, VkPipelineVertexInputStateCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineViewportStateCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineViewportStateCreateInfo, VkPipelineViewportStateCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGraphicsPipelineCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGraphicsPipelineCreateInfo, VkGraphicsPipelineCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAttachmentDescription", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAttachmentDescription, VkAttachmentDescription>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAttachmentReference", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAttachmentReference, VkAttachmentReference>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkFramebufferCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkFramebufferCreateInfo, VkFramebufferCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSubpassDependency", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSubpassDependency, VkSubpassDependency>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSubpassDescription", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSubpassDescription, VkSubpassDescription>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassCreateInfo, VkRenderPassCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkClearDepthStencilValue", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkClearDepthStencilValue, VkClearDepthStencilValue>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkClearRect", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkClearRect, VkClearRect>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkClearAttachment", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkClearAttachment, VkClearAttachment>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageBlit", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageBlit, VkImageBlit>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageResolve", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageResolve, VkImageResolve>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassBeginInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassBeginInfo, VkRenderPassBeginInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindBufferMemoryInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindBufferMemoryInfo, VkBindBufferMemoryInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindImageMemoryInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindImageMemoryInfo, VkBindImageMemoryInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryDedicatedRequirements", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryDedicatedRequirements, VkMemoryDedicatedRequirements>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryDedicatedAllocateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryDedicatedAllocateInfo, VkMemoryDedicatedAllocateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryAllocateFlagsInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryAllocateFlagsInfo, VkMemoryAllocateFlagsInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceGroupCommandBufferBeginInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceGroupCommandBufferBeginInfo, VkDeviceGroupCommandBufferBeginInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceGroupSubmitInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceGroupSubmitInfo, VkDeviceGroupSubmitInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceGroupBindSparseInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceGroupBindSparseInfo, VkDeviceGroupBindSparseInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindBufferMemoryDeviceGroupInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindBufferMemoryDeviceGroupInfo, VkBindBufferMemoryDeviceGroupInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindImageMemoryDeviceGroupInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindImageMemoryDeviceGroupInfo, VkBindImageMemoryDeviceGroupInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceGroupProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceGroupProperties, VkPhysicalDeviceGroupProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceGroupDeviceCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceGroupDeviceCreateInfo, VkDeviceGroupDeviceCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBufferMemoryRequirementsInfo2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBufferMemoryRequirementsInfo2, VkBufferMemoryRequirementsInfo2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageMemoryRequirementsInfo2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageMemoryRequirementsInfo2, VkImageMemoryRequirementsInfo2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageSparseMemoryRequirementsInfo2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageSparseMemoryRequirementsInfo2, VkImageSparseMemoryRequirementsInfo2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryRequirements2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryRequirements2, VkMemoryRequirements2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSparseImageMemoryRequirements2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSparseImageMemoryRequirements2, VkSparseImageMemoryRequirements2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFeatures2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFeatures2, VkPhysicalDeviceFeatures2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceProperties2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceProperties2, VkPhysicalDeviceProperties2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkFormatProperties2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkFormatProperties2, VkFormatProperties2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageFormatProperties2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageFormatProperties2, VkImageFormatProperties2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImageFormatInfo2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImageFormatInfo2, VkPhysicalDeviceImageFormatInfo2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkQueueFamilyProperties2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkQueueFamilyProperties2, VkQueueFamilyProperties2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMemoryProperties2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMemoryProperties2, VkPhysicalDeviceMemoryProperties2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSparseImageFormatProperties2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSparseImageFormatProperties2, VkSparseImageFormatProperties2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceSparseImageFormatInfo2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceSparseImageFormatInfo2, VkPhysicalDeviceSparseImageFormatInfo2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageViewUsageCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageViewUsageCreateInfo, VkImageViewUsageCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceProtectedMemoryFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceProtectedMemoryFeatures, VkPhysicalDeviceProtectedMemoryFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceProtectedMemoryProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceProtectedMemoryProperties, VkPhysicalDeviceProtectedMemoryProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceQueueInfo2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceQueueInfo2, VkDeviceQueueInfo2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkProtectedSubmitInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkProtectedSubmitInfo, VkProtectedSubmitInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindImagePlaneMemoryInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindImagePlaneMemoryInfo, VkBindImagePlaneMemoryInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImagePlaneMemoryRequirementsInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImagePlaneMemoryRequirementsInfo, VkImagePlaneMemoryRequirementsInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExternalMemoryProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExternalMemoryProperties, VkExternalMemoryProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceExternalImageFormatInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceExternalImageFormatInfo, VkPhysicalDeviceExternalImageFormatInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExternalImageFormatProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExternalImageFormatProperties, VkExternalImageFormatProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceExternalBufferInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceExternalBufferInfo, VkPhysicalDeviceExternalBufferInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExternalBufferProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExternalBufferProperties, VkExternalBufferProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceIDProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceIDProperties, VkPhysicalDeviceIDProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExternalMemoryImageCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExternalMemoryImageCreateInfo, VkExternalMemoryImageCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExternalMemoryBufferCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExternalMemoryBufferCreateInfo, VkExternalMemoryBufferCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExportMemoryAllocateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExportMemoryAllocateInfo, VkExportMemoryAllocateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceExternalFenceInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceExternalFenceInfo, VkPhysicalDeviceExternalFenceInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExternalFenceProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExternalFenceProperties, VkExternalFenceProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExportFenceCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExportFenceCreateInfo, VkExportFenceCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExportSemaphoreCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExportSemaphoreCreateInfo, VkExportSemaphoreCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceExternalSemaphoreInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceExternalSemaphoreInfo, VkPhysicalDeviceExternalSemaphoreInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExternalSemaphoreProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExternalSemaphoreProperties, VkExternalSemaphoreProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceSubgroupProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceSubgroupProperties, VkPhysicalDeviceSubgroupProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevice16BitStorageFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevice16BitStorageFeatures, VkPhysicalDevice16BitStorageFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVariablePointersFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVariablePointersFeatures, VkPhysicalDeviceVariablePointersFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorUpdateTemplateEntry", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorUpdateTemplateEntry, VkDescriptorUpdateTemplateEntry>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorUpdateTemplateCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorUpdateTemplateCreateInfo, VkDescriptorUpdateTemplateCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMaintenance3Properties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMaintenance3Properties, VkPhysicalDeviceMaintenance3Properties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorSetLayoutSupport", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorSetLayoutSupport, VkDescriptorSetLayoutSupport>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSamplerYcbcrConversionCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSamplerYcbcrConversionCreateInfo, VkSamplerYcbcrConversionCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSamplerYcbcrConversionInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSamplerYcbcrConversionInfo, VkSamplerYcbcrConversionInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceSamplerYcbcrConversionFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceSamplerYcbcrConversionFeatures, VkPhysicalDeviceSamplerYcbcrConversionFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSamplerYcbcrConversionImageFormatProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSamplerYcbcrConversionImageFormatProperties, VkSamplerYcbcrConversionImageFormatProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceGroupRenderPassBeginInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceGroupRenderPassBeginInfo, VkDeviceGroupRenderPassBeginInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePointClippingProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePointClippingProperties, VkPhysicalDevicePointClippingProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkInputAttachmentAspectReference", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkInputAttachmentAspectReference, VkInputAttachmentAspectReference>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassInputAttachmentAspectCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassInputAttachmentAspectCreateInfo, VkRenderPassInputAttachmentAspectCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineTessellationDomainOriginStateCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineTessellationDomainOriginStateCreateInfo, VkPipelineTessellationDomainOriginStateCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassMultiviewCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassMultiviewCreateInfo, VkRenderPassMultiviewCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMultiviewFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMultiviewFeatures, VkPhysicalDeviceMultiviewFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMultiviewProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMultiviewProperties, VkPhysicalDeviceMultiviewProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderDrawParametersFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderDrawParametersFeatures, VkPhysicalDeviceShaderDrawParametersFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkConformanceVersion", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkConformanceVersion, VkConformanceVersion>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDriverProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDriverProperties, VkPhysicalDeviceDriverProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVulkan11Features", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVulkan11Features, VkPhysicalDeviceVulkan11Features>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVulkan11Properties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVulkan11Properties, VkPhysicalDeviceVulkan11Properties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVulkan12Features", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVulkan12Features, VkPhysicalDeviceVulkan12Features>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVulkan12Properties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVulkan12Properties, VkPhysicalDeviceVulkan12Properties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageFormatListCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageFormatListCreateInfo, VkImageFormatListCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVulkanMemoryModelFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVulkanMemoryModelFeatures, VkPhysicalDeviceVulkanMemoryModelFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceHostQueryResetFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceHostQueryResetFeatures, VkPhysicalDeviceHostQueryResetFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceTimelineSemaphoreFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceTimelineSemaphoreFeatures, VkPhysicalDeviceTimelineSemaphoreFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceTimelineSemaphoreProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceTimelineSemaphoreProperties, VkPhysicalDeviceTimelineSemaphoreProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSemaphoreTypeCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSemaphoreTypeCreateInfo, VkSemaphoreTypeCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTimelineSemaphoreSubmitInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTimelineSemaphoreSubmitInfo, VkTimelineSemaphoreSubmitInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSemaphoreWaitInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSemaphoreWaitInfo, VkSemaphoreWaitInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSemaphoreSignalInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSemaphoreSignalInfo, VkSemaphoreSignalInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceBufferDeviceAddressFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceBufferDeviceAddressFeatures, VkPhysicalDeviceBufferDeviceAddressFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBufferDeviceAddressInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBufferDeviceAddressInfo, VkBufferDeviceAddressInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBufferOpaqueCaptureAddressCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBufferOpaqueCaptureAddressCreateInfo, VkBufferOpaqueCaptureAddressCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryOpaqueCaptureAddressAllocateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryOpaqueCaptureAddressAllocateInfo, VkMemoryOpaqueCaptureAddressAllocateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceMemoryOpaqueCaptureAddressInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceMemoryOpaqueCaptureAddressInfo, VkDeviceMemoryOpaqueCaptureAddressInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevice8BitStorageFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevice8BitStorageFeatures, VkPhysicalDevice8BitStorageFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderAtomicInt64Features", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderAtomicInt64Features, VkPhysicalDeviceShaderAtomicInt64Features>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderFloat16Int8Features", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderFloat16Int8Features, VkPhysicalDeviceShaderFloat16Int8Features>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFloatControlsProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFloatControlsProperties, VkPhysicalDeviceFloatControlsProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorSetLayoutBindingFlagsCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorSetLayoutBindingFlagsCreateInfo, VkDescriptorSetLayoutBindingFlagsCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDescriptorIndexingFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDescriptorIndexingFeatures, VkPhysicalDeviceDescriptorIndexingFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDescriptorIndexingProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDescriptorIndexingProperties, VkPhysicalDeviceDescriptorIndexingProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorSetVariableDescriptorCountAllocateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorSetVariableDescriptorCountAllocateInfo, VkDescriptorSetVariableDescriptorCountAllocateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorSetVariableDescriptorCountLayoutSupport", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorSetVariableDescriptorCountLayoutSupport, VkDescriptorSetVariableDescriptorCountLayoutSupport>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceScalarBlockLayoutFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceScalarBlockLayoutFeatures, VkPhysicalDeviceScalarBlockLayoutFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSamplerReductionModeCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSamplerReductionModeCreateInfo, VkSamplerReductionModeCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceSamplerFilterMinmaxProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceSamplerFilterMinmaxProperties, VkPhysicalDeviceSamplerFilterMinmaxProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceUniformBufferStandardLayoutFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceUniformBufferStandardLayoutFeatures, VkPhysicalDeviceUniformBufferStandardLayoutFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures, VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAttachmentDescription2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAttachmentDescription2, VkAttachmentDescription2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAttachmentReference2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAttachmentReference2, VkAttachmentReference2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSubpassDescription2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSubpassDescription2, VkSubpassDescription2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSubpassDependency2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSubpassDependency2, VkSubpassDependency2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSubpassBeginInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSubpassBeginInfo, VkSubpassBeginInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSubpassEndInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSubpassEndInfo, VkSubpassEndInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassCreateInfo2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassCreateInfo2, VkRenderPassCreateInfo2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSubpassDescriptionDepthStencilResolve", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSubpassDescriptionDepthStencilResolve, VkSubpassDescriptionDepthStencilResolve>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDepthStencilResolveProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDepthStencilResolveProperties, VkPhysicalDeviceDepthStencilResolveProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageStencilUsageCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageStencilUsageCreateInfo, VkImageStencilUsageCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImagelessFramebufferFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImagelessFramebufferFeatures, VkPhysicalDeviceImagelessFramebufferFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkFramebufferAttachmentImageInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkFramebufferAttachmentImageInfo, VkFramebufferAttachmentImageInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassAttachmentBeginInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassAttachmentBeginInfo, VkRenderPassAttachmentBeginInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkFramebufferAttachmentsCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkFramebufferAttachmentsCreateInfo, VkFramebufferAttachmentsCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures, VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAttachmentReferenceStencilLayout", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAttachmentReferenceStencilLayout, VkAttachmentReferenceStencilLayout>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAttachmentDescriptionStencilLayout", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAttachmentDescriptionStencilLayout, VkAttachmentDescriptionStencilLayout>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVulkan13Features", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVulkan13Features, VkPhysicalDeviceVulkan13Features>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVulkan13Properties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVulkan13Properties, VkPhysicalDeviceVulkan13Properties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceToolProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceToolProperties, VkPhysicalDeviceToolProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePrivateDataFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePrivateDataFeatures, VkPhysicalDevicePrivateDataFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDevicePrivateDataCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDevicePrivateDataCreateInfo, VkDevicePrivateDataCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPrivateDataSlotCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPrivateDataSlotCreateInfo, VkPrivateDataSlotCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryBarrier2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryBarrier2, VkMemoryBarrier2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBufferMemoryBarrier2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBufferMemoryBarrier2, VkBufferMemoryBarrier2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageMemoryBarrier2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageMemoryBarrier2, VkImageMemoryBarrier2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDependencyInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDependencyInfo, VkDependencyInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSemaphoreSubmitInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSemaphoreSubmitInfo, VkSemaphoreSubmitInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCommandBufferSubmitInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCommandBufferSubmitInfo, VkCommandBufferSubmitInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSubmitInfo2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSubmitInfo2, VkSubmitInfo2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceSynchronization2Features", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceSynchronization2Features, VkPhysicalDeviceSynchronization2Features>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBufferCopy2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBufferCopy2, VkBufferCopy2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyBufferInfo2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyBufferInfo2, VkCopyBufferInfo2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageCopy2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageCopy2, VkImageCopy2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyImageInfo2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyImageInfo2, VkCopyImageInfo2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBufferImageCopy2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBufferImageCopy2, VkBufferImageCopy2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyBufferToImageInfo2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyBufferToImageInfo2, VkCopyBufferToImageInfo2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyImageToBufferInfo2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyImageToBufferInfo2, VkCopyImageToBufferInfo2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceTextureCompressionASTCHDRFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceTextureCompressionASTCHDRFeatures, VkPhysicalDeviceTextureCompressionASTCHDRFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkFormatProperties3", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkFormatProperties3, VkFormatProperties3>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMaintenance4Features", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMaintenance4Features, VkPhysicalDeviceMaintenance4Features>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMaintenance4Properties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMaintenance4Properties, VkPhysicalDeviceMaintenance4Properties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceBufferMemoryRequirements", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceBufferMemoryRequirements, VkDeviceBufferMemoryRequirements>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceImageMemoryRequirements", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceImageMemoryRequirements, VkDeviceImageMemoryRequirements>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineCreationFeedback", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineCreationFeedback, VkPipelineCreationFeedback>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineCreationFeedbackCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineCreationFeedbackCreateInfo, VkPipelineCreationFeedbackCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderTerminateInvocationFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderTerminateInvocationFeatures, VkPhysicalDeviceShaderTerminateInvocationFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures, VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePipelineCreationCacheControlFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePipelineCreationCacheControlFeatures, VkPhysicalDevicePipelineCreationCacheControlFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures, VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImageRobustnessFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImageRobustnessFeatures, VkPhysicalDeviceImageRobustnessFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceSubgroupSizeControlFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceSubgroupSizeControlFeatures, VkPhysicalDeviceSubgroupSizeControlFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceSubgroupSizeControlProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceSubgroupSizeControlProperties, VkPhysicalDeviceSubgroupSizeControlProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineShaderStageRequiredSubgroupSizeCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineShaderStageRequiredSubgroupSizeCreateInfo, VkPipelineShaderStageRequiredSubgroupSizeCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceInlineUniformBlockFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceInlineUniformBlockFeatures, VkPhysicalDeviceInlineUniformBlockFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceInlineUniformBlockProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceInlineUniformBlockProperties, VkPhysicalDeviceInlineUniformBlockProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkWriteDescriptorSetInlineUniformBlock", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkWriteDescriptorSetInlineUniformBlock, VkWriteDescriptorSetInlineUniformBlock>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorPoolInlineUniformBlockCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorPoolInlineUniformBlockCreateInfo, VkDescriptorPoolInlineUniformBlockCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderIntegerDotProductFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderIntegerDotProductFeatures, VkPhysicalDeviceShaderIntegerDotProductFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderIntegerDotProductProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderIntegerDotProductProperties, VkPhysicalDeviceShaderIntegerDotProductProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceTexelBufferAlignmentProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceTexelBufferAlignmentProperties, VkPhysicalDeviceTexelBufferAlignmentProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageBlit2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageBlit2, VkImageBlit2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBlitImageInfo2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBlitImageInfo2, VkBlitImageInfo2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageResolve2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageResolve2, VkImageResolve2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkResolveImageInfo2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkResolveImageInfo2, VkResolveImageInfo2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderingAttachmentInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderingAttachmentInfo, VkRenderingAttachmentInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderingInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderingInfo, VkRenderingInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineRenderingCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineRenderingCreateInfo, VkPipelineRenderingCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDynamicRenderingFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDynamicRenderingFeatures, VkPhysicalDeviceDynamicRenderingFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCommandBufferInheritanceRenderingInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCommandBufferInheritanceRenderingInfo, VkCommandBufferInheritanceRenderingInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVulkan14Features", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVulkan14Features, VkPhysicalDeviceVulkan14Features>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVulkan14Properties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVulkan14Properties, VkPhysicalDeviceVulkan14Properties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceQueueGlobalPriorityCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceQueueGlobalPriorityCreateInfo, VkDeviceQueueGlobalPriorityCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceGlobalPriorityQueryFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceGlobalPriorityQueryFeatures, VkPhysicalDeviceGlobalPriorityQueryFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkQueueFamilyGlobalPriorityProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkQueueFamilyGlobalPriorityProperties, VkQueueFamilyGlobalPriorityProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceIndexTypeUint8Features", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceIndexTypeUint8Features, VkPhysicalDeviceIndexTypeUint8Features>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryMapInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryMapInfo, VkMemoryMapInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryUnmapInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryUnmapInfo, VkMemoryUnmapInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMaintenance5Features", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMaintenance5Features, VkPhysicalDeviceMaintenance5Features>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMaintenance5Properties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMaintenance5Properties, VkPhysicalDeviceMaintenance5Properties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSubresourceLayout2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSubresourceLayout2, VkSubresourceLayout2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageSubresource2", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageSubresource2, VkImageSubresource2>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceImageSubresourceInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceImageSubresourceInfo, VkDeviceImageSubresourceInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBufferUsageFlags2CreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBufferUsageFlags2CreateInfo, VkBufferUsageFlags2CreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMaintenance6Features", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMaintenance6Features, VkPhysicalDeviceMaintenance6Features>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMaintenance6Properties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMaintenance6Properties, VkPhysicalDeviceMaintenance6Properties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindMemoryStatus", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindMemoryStatus, VkBindMemoryStatus>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceHostImageCopyFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceHostImageCopyFeatures, VkPhysicalDeviceHostImageCopyFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceHostImageCopyProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceHostImageCopyProperties, VkPhysicalDeviceHostImageCopyProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyImageToImageInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyImageToImageInfo, VkCopyImageToImageInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkHostImageLayoutTransitionInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkHostImageLayoutTransitionInfo, VkHostImageLayoutTransitionInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSubresourceHostMemcpySize", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSubresourceHostMemcpySize, VkSubresourceHostMemcpySize>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkHostImageCopyDevicePerformanceQuery", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkHostImageCopyDevicePerformanceQuery, VkHostImageCopyDevicePerformanceQuery>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderSubgroupRotateFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderSubgroupRotateFeatures, VkPhysicalDeviceShaderSubgroupRotateFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderFloatControls2Features", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderFloatControls2Features, VkPhysicalDeviceShaderFloatControls2Features>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderExpectAssumeFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderExpectAssumeFeatures, VkPhysicalDeviceShaderExpectAssumeFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineCreateFlags2CreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineCreateFlags2CreateInfo, VkPipelineCreateFlags2CreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePushDescriptorProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePushDescriptorProperties, VkPhysicalDevicePushDescriptorProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindDescriptorSetsInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindDescriptorSetsInfo, VkBindDescriptorSetsInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPushConstantsInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPushConstantsInfo, VkPushConstantsInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPushDescriptorSetInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPushDescriptorSetInfo, VkPushDescriptorSetInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePipelineProtectedAccessFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePipelineProtectedAccessFeatures, VkPhysicalDevicePipelineProtectedAccessFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePipelineRobustnessFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePipelineRobustnessFeatures, VkPhysicalDevicePipelineRobustnessFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePipelineRobustnessProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePipelineRobustnessProperties, VkPhysicalDevicePipelineRobustnessProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineRobustnessCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineRobustnessCreateInfo, VkPipelineRobustnessCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceLineRasterizationFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceLineRasterizationFeatures, VkPhysicalDeviceLineRasterizationFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceLineRasterizationProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceLineRasterizationProperties, VkPhysicalDeviceLineRasterizationProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineRasterizationLineStateCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineRasterizationLineStateCreateInfo, VkPipelineRasterizationLineStateCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVertexAttributeDivisorProperties", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVertexAttributeDivisorProperties, VkPhysicalDeviceVertexAttributeDivisorProperties>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVertexInputBindingDivisorDescription", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVertexInputBindingDivisorDescription, VkVertexInputBindingDivisorDescription>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineVertexInputDivisorStateCreateInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineVertexInputDivisorStateCreateInfo, VkPipelineVertexInputDivisorStateCreateInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVertexAttributeDivisorFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVertexAttributeDivisorFeatures, VkPhysicalDeviceVertexAttributeDivisorFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderingAreaInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderingAreaInfo, VkRenderingAreaInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDynamicRenderingLocalReadFeatures", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDynamicRenderingLocalReadFeatures, VkPhysicalDeviceDynamicRenderingLocalReadFeatures>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderingAttachmentLocationInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderingAttachmentLocationInfo, VkRenderingAttachmentLocationInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderingInputAttachmentIndexInfo", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderingInputAttachmentIndexInfo, VkRenderingInputAttachmentIndexInfo>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSurfaceCapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSurfaceCapabilitiesKHR, VkSurfaceCapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSurfaceFormatKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSurfaceFormatKHR, VkSurfaceFormatKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSwapchainCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSwapchainCreateInfoKHR, VkSwapchainCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPresentInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPresentInfoKHR, VkPresentInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageSwapchainCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageSwapchainCreateInfoKHR, VkImageSwapchainCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindImageMemorySwapchainInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindImageMemorySwapchainInfoKHR, VkBindImageMemorySwapchainInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAcquireNextImageInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAcquireNextImageInfoKHR, VkAcquireNextImageInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceGroupPresentCapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceGroupPresentCapabilitiesKHR, VkDeviceGroupPresentCapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceGroupPresentInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceGroupPresentInfoKHR, VkDeviceGroupPresentInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceGroupSwapchainCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceGroupSwapchainCreateInfoKHR, VkDeviceGroupSwapchainCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplayModeParametersKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplayModeParametersKHR, VkDisplayModeParametersKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplayModeCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplayModeCreateInfoKHR, VkDisplayModeCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplayModePropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplayModePropertiesKHR, VkDisplayModePropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplayPlaneCapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplayPlaneCapabilitiesKHR, VkDisplayPlaneCapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplayPlanePropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplayPlanePropertiesKHR, VkDisplayPlanePropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplayPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplayPropertiesKHR, VkDisplayPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplaySurfaceCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplaySurfaceCreateInfoKHR, VkDisplaySurfaceCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplayPresentInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplayPresentInfoKHR, VkDisplayPresentInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkXlibSurfaceCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkXlibSurfaceCreateInfoKHR, VkXlibSurfaceCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkXcbSurfaceCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkXcbSurfaceCreateInfoKHR, VkXcbSurfaceCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkWaylandSurfaceCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkWaylandSurfaceCreateInfoKHR, VkWaylandSurfaceCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAndroidSurfaceCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAndroidSurfaceCreateInfoKHR, VkAndroidSurfaceCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkWin32SurfaceCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkWin32SurfaceCreateInfoKHR, VkWin32SurfaceCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkQueueFamilyQueryResultStatusPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkQueueFamilyQueryResultStatusPropertiesKHR, VkQueueFamilyQueryResultStatusPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkQueueFamilyVideoPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkQueueFamilyVideoPropertiesKHR, VkQueueFamilyVideoPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoProfileInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoProfileInfoKHR, VkVideoProfileInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoProfileListInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoProfileListInfoKHR, VkVideoProfileListInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoCapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoCapabilitiesKHR, VkVideoCapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVideoFormatInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVideoFormatInfoKHR, VkPhysicalDeviceVideoFormatInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoFormatPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoFormatPropertiesKHR, VkVideoFormatPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoPictureResourceInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoPictureResourceInfoKHR, VkVideoPictureResourceInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoReferenceSlotInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoReferenceSlotInfoKHR, VkVideoReferenceSlotInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoSessionMemoryRequirementsKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoSessionMemoryRequirementsKHR, VkVideoSessionMemoryRequirementsKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindVideoSessionMemoryInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindVideoSessionMemoryInfoKHR, VkBindVideoSessionMemoryInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoSessionCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoSessionCreateInfoKHR, VkVideoSessionCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoSessionParametersCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoSessionParametersCreateInfoKHR, VkVideoSessionParametersCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoSessionParametersUpdateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoSessionParametersUpdateInfoKHR, VkVideoSessionParametersUpdateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoBeginCodingInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoBeginCodingInfoKHR, VkVideoBeginCodingInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEndCodingInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEndCodingInfoKHR, VkVideoEndCodingInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoCodingControlInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoCodingControlInfoKHR, VkVideoCodingControlInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoDecodeCapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoDecodeCapabilitiesKHR, VkVideoDecodeCapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoDecodeUsageInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoDecodeUsageInfoKHR, VkVideoDecodeUsageInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoDecodeInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoDecodeInfoKHR, VkVideoDecodeInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH264CapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH264CapabilitiesKHR, VkVideoEncodeH264CapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH264QpKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH264QpKHR, VkVideoEncodeH264QpKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH264QualityLevelPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH264QualityLevelPropertiesKHR, VkVideoEncodeH264QualityLevelPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH264SessionCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH264SessionCreateInfoKHR, VkVideoEncodeH264SessionCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH264SessionParametersAddInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH264SessionParametersAddInfoKHR, VkVideoEncodeH264SessionParametersAddInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH264SessionParametersCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH264SessionParametersCreateInfoKHR, VkVideoEncodeH264SessionParametersCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH264SessionParametersGetInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH264SessionParametersGetInfoKHR, VkVideoEncodeH264SessionParametersGetInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH264SessionParametersFeedbackInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH264SessionParametersFeedbackInfoKHR, VkVideoEncodeH264SessionParametersFeedbackInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH264NaluSliceInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH264NaluSliceInfoKHR, VkVideoEncodeH264NaluSliceInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH264PictureInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH264PictureInfoKHR, VkVideoEncodeH264PictureInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH264DpbSlotInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH264DpbSlotInfoKHR, VkVideoEncodeH264DpbSlotInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH264ProfileInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH264ProfileInfoKHR, VkVideoEncodeH264ProfileInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH264RateControlInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH264RateControlInfoKHR, VkVideoEncodeH264RateControlInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH264FrameSizeKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH264FrameSizeKHR, VkVideoEncodeH264FrameSizeKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH264RateControlLayerInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH264RateControlLayerInfoKHR, VkVideoEncodeH264RateControlLayerInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH264GopRemainingFrameInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH264GopRemainingFrameInfoKHR, VkVideoEncodeH264GopRemainingFrameInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoDecodeH264ProfileInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoDecodeH264ProfileInfoKHR, VkVideoDecodeH264ProfileInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoDecodeH264CapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoDecodeH264CapabilitiesKHR, VkVideoDecodeH264CapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoDecodeH264SessionParametersAddInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoDecodeH264SessionParametersAddInfoKHR, VkVideoDecodeH264SessionParametersAddInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoDecodeH264SessionParametersCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoDecodeH264SessionParametersCreateInfoKHR, VkVideoDecodeH264SessionParametersCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoDecodeH264PictureInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoDecodeH264PictureInfoKHR, VkVideoDecodeH264PictureInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoDecodeH264DpbSlotInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoDecodeH264DpbSlotInfoKHR, VkVideoDecodeH264DpbSlotInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImportMemoryWin32HandleInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImportMemoryWin32HandleInfoKHR, VkImportMemoryWin32HandleInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExportMemoryWin32HandleInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExportMemoryWin32HandleInfoKHR, VkExportMemoryWin32HandleInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryWin32HandlePropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryWin32HandlePropertiesKHR, VkMemoryWin32HandlePropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryGetWin32HandleInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryGetWin32HandleInfoKHR, VkMemoryGetWin32HandleInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImportMemoryFdInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImportMemoryFdInfoKHR, VkImportMemoryFdInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryFdPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryFdPropertiesKHR, VkMemoryFdPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryGetFdInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryGetFdInfoKHR, VkMemoryGetFdInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkWin32KeyedMutexAcquireReleaseInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkWin32KeyedMutexAcquireReleaseInfoKHR, VkWin32KeyedMutexAcquireReleaseInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImportSemaphoreWin32HandleInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImportSemaphoreWin32HandleInfoKHR, VkImportSemaphoreWin32HandleInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExportSemaphoreWin32HandleInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExportSemaphoreWin32HandleInfoKHR, VkExportSemaphoreWin32HandleInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkD3D12FenceSubmitInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkD3D12FenceSubmitInfoKHR, VkD3D12FenceSubmitInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSemaphoreGetWin32HandleInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSemaphoreGetWin32HandleInfoKHR, VkSemaphoreGetWin32HandleInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImportSemaphoreFdInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImportSemaphoreFdInfoKHR, VkImportSemaphoreFdInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSemaphoreGetFdInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSemaphoreGetFdInfoKHR, VkSemaphoreGetFdInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRectLayerKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRectLayerKHR, VkRectLayerKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPresentRegionKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPresentRegionKHR, VkPresentRegionKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPresentRegionsKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPresentRegionsKHR, VkPresentRegionsKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSharedPresentSurfaceCapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSharedPresentSurfaceCapabilitiesKHR, VkSharedPresentSurfaceCapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImportFenceWin32HandleInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImportFenceWin32HandleInfoKHR, VkImportFenceWin32HandleInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExportFenceWin32HandleInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExportFenceWin32HandleInfoKHR, VkExportFenceWin32HandleInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkFenceGetWin32HandleInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkFenceGetWin32HandleInfoKHR, VkFenceGetWin32HandleInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImportFenceFdInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImportFenceFdInfoKHR, VkImportFenceFdInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkFenceGetFdInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkFenceGetFdInfoKHR, VkFenceGetFdInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePerformanceQueryFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePerformanceQueryFeaturesKHR, VkPhysicalDevicePerformanceQueryFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePerformanceQueryPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePerformanceQueryPropertiesKHR, VkPhysicalDevicePerformanceQueryPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPerformanceCounterKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPerformanceCounterKHR, VkPerformanceCounterKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPerformanceCounterDescriptionKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPerformanceCounterDescriptionKHR, VkPerformanceCounterDescriptionKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkQueryPoolPerformanceCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkQueryPoolPerformanceCreateInfoKHR, VkQueryPoolPerformanceCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAcquireProfilingLockInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAcquireProfilingLockInfoKHR, VkAcquireProfilingLockInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPerformanceQuerySubmitInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPerformanceQuerySubmitInfoKHR, VkPerformanceQuerySubmitInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceSurfaceInfo2KHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceSurfaceInfo2KHR, VkPhysicalDeviceSurfaceInfo2KHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSurfaceCapabilities2KHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSurfaceCapabilities2KHR, VkSurfaceCapabilities2KHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSurfaceFormat2KHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSurfaceFormat2KHR, VkSurfaceFormat2KHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplayProperties2KHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplayProperties2KHR, VkDisplayProperties2KHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplayPlaneProperties2KHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplayPlaneProperties2KHR, VkDisplayPlaneProperties2KHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplayModeProperties2KHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplayModeProperties2KHR, VkDisplayModeProperties2KHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplayPlaneInfo2KHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplayPlaneInfo2KHR, VkDisplayPlaneInfo2KHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplayPlaneCapabilities2KHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplayPlaneCapabilities2KHR, VkDisplayPlaneCapabilities2KHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderBfloat16FeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderBfloat16FeaturesKHR, VkPhysicalDeviceShaderBfloat16FeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePortabilitySubsetFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePortabilitySubsetFeaturesKHR, VkPhysicalDevicePortabilitySubsetFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePortabilitySubsetPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePortabilitySubsetPropertiesKHR, VkPhysicalDevicePortabilitySubsetPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderClockFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderClockFeaturesKHR, VkPhysicalDeviceShaderClockFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkFragmentShadingRateAttachmentInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkFragmentShadingRateAttachmentInfoKHR, VkFragmentShadingRateAttachmentInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineFragmentShadingRateStateCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineFragmentShadingRateStateCreateInfoKHR, VkPipelineFragmentShadingRateStateCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFragmentShadingRateFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFragmentShadingRateFeaturesKHR, VkPhysicalDeviceFragmentShadingRateFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFragmentShadingRatePropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFragmentShadingRatePropertiesKHR, VkPhysicalDeviceFragmentShadingRatePropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFragmentShadingRateKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFragmentShadingRateKHR, VkPhysicalDeviceFragmentShadingRateKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderingFragmentShadingRateAttachmentInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderingFragmentShadingRateAttachmentInfoKHR, VkRenderingFragmentShadingRateAttachmentInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderConstantDataFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderConstantDataFeaturesKHR, VkPhysicalDeviceShaderConstantDataFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderAbortFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderAbortFeaturesKHR, VkPhysicalDeviceShaderAbortFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceFaultShaderAbortMessageInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceFaultShaderAbortMessageInfoKHR, VkDeviceFaultShaderAbortMessageInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderAbortPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderAbortPropertiesKHR, VkPhysicalDeviceShaderAbortPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderQuadControlFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderQuadControlFeaturesKHR, VkPhysicalDeviceShaderQuadControlFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSurfaceProtectedCapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSurfaceProtectedCapabilitiesKHR, VkSurfaceProtectedCapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePresentWaitFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePresentWaitFeaturesKHR, VkPhysicalDevicePresentWaitFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR, VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineInfoKHR, VkPipelineInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineExecutablePropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineExecutablePropertiesKHR, VkPipelineExecutablePropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineExecutableInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineExecutableInfoKHR, VkPipelineExecutableInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineExecutableStatisticKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineExecutableStatisticKHR, VkPipelineExecutableStatisticKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineExecutableInternalRepresentationKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineExecutableInternalRepresentationKHR, VkPipelineExecutableInternalRepresentationKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineLibraryCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineLibraryCreateInfoKHR, VkPipelineLibraryCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPresentIdKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPresentIdKHR, VkPresentIdKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePresentIdFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePresentIdFeaturesKHR, VkPhysicalDevicePresentIdFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeInfoKHR, VkVideoEncodeInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeCapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeCapabilitiesKHR, VkVideoEncodeCapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkQueryPoolVideoEncodeFeedbackCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkQueryPoolVideoEncodeFeedbackCreateInfoKHR, VkQueryPoolVideoEncodeFeedbackCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeUsageInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeUsageInfoKHR, VkVideoEncodeUsageInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeRateControlLayerInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeRateControlLayerInfoKHR, VkVideoEncodeRateControlLayerInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeRateControlInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeRateControlInfoKHR, VkVideoEncodeRateControlInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR, VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeQualityLevelPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeQualityLevelPropertiesKHR, VkVideoEncodeQualityLevelPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeQualityLevelInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeQualityLevelInfoKHR, VkVideoEncodeQualityLevelInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeSessionParametersGetInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeSessionParametersGetInfoKHR, VkVideoEncodeSessionParametersGetInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeSessionParametersFeedbackInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeSessionParametersFeedbackInfoKHR, VkVideoEncodeSessionParametersFeedbackInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceAddressRangeKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceAddressRangeKHR, VkDeviceAddressRangeKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkStridedDeviceAddressRangeKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkStridedDeviceAddressRangeKHR, VkStridedDeviceAddressRangeKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceMemoryCopyKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceMemoryCopyKHR, VkDeviceMemoryCopyKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyDeviceMemoryInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyDeviceMemoryInfoKHR, VkCopyDeviceMemoryInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceMemoryImageCopyKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceMemoryImageCopyKHR, VkDeviceMemoryImageCopyKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyDeviceMemoryImageInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyDeviceMemoryImageInfoKHR, VkCopyDeviceMemoryImageInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryRangeBarrierKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryRangeBarrierKHR, VkMemoryRangeBarrierKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryRangeBarriersInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryRangeBarriersInfoKHR, VkMemoryRangeBarriersInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR, VkPhysicalDeviceDeviceAddressCommandsFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindIndexBuffer3InfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindIndexBuffer3InfoKHR, VkBindIndexBuffer3InfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindVertexBuffer3InfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindVertexBuffer3InfoKHR, VkBindVertexBuffer3InfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDrawIndirect2InfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDrawIndirect2InfoKHR, VkDrawIndirect2InfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDrawIndirectCount2InfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDrawIndirectCount2InfoKHR, VkDrawIndirectCount2InfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDispatchIndirect2InfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDispatchIndirect2InfoKHR, VkDispatchIndirect2InfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkConditionalRenderingBeginInfo2EXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkConditionalRenderingBeginInfo2EXT, VkConditionalRenderingBeginInfo2EXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindTransformFeedbackBuffer2InfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindTransformFeedbackBuffer2InfoEXT, VkBindTransformFeedbackBuffer2InfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryMarkerInfoAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryMarkerInfoAMD, VkMemoryMarkerInfoAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureCreateInfo2KHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureCreateInfo2KHR, VkAccelerationStructureCreateInfo2KHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR, VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR, VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR, VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR, VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR, VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTraceRaysIndirectCommand2KHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTraceRaysIndirectCommand2KHR, VkTraceRaysIndirectCommand2KHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderUntypedPointersFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderUntypedPointersFeaturesKHR, VkPhysicalDeviceShaderUntypedPointersFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR, VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSurfaceCapabilitiesPresentId2KHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSurfaceCapabilitiesPresentId2KHR, VkSurfaceCapabilitiesPresentId2KHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPresentId2KHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPresentId2KHR, VkPresentId2KHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePresentId2FeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePresentId2FeaturesKHR, VkPhysicalDevicePresentId2FeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSurfaceCapabilitiesPresentWait2KHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSurfaceCapabilitiesPresentWait2KHR, VkSurfaceCapabilitiesPresentWait2KHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePresentWait2FeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePresentWait2FeaturesKHR, VkPhysicalDevicePresentWait2FeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPresentWait2InfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPresentWait2InfoKHR, VkPresentWait2InfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR, VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePipelineBinaryFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePipelineBinaryFeaturesKHR, VkPhysicalDevicePipelineBinaryFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePipelineBinaryPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePipelineBinaryPropertiesKHR, VkPhysicalDevicePipelineBinaryPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDevicePipelineBinaryInternalCacheControlKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDevicePipelineBinaryInternalCacheControlKHR, VkDevicePipelineBinaryInternalCacheControlKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineBinaryKeyKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineBinaryKeyKHR, VkPipelineBinaryKeyKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineBinaryDataKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineBinaryDataKHR, VkPipelineBinaryDataKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineBinaryKeysAndDataKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineBinaryKeysAndDataKHR, VkPipelineBinaryKeysAndDataKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineCreateInfoKHR, VkPipelineCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineBinaryCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineBinaryCreateInfoKHR, VkPipelineBinaryCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineBinaryInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineBinaryInfoKHR, VkPipelineBinaryInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkReleaseCapturedPipelineDataInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkReleaseCapturedPipelineDataInfoKHR, VkReleaseCapturedPipelineDataInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineBinaryDataInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineBinaryDataInfoKHR, VkPipelineBinaryDataInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineBinaryHandlesInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineBinaryHandlesInfoKHR, VkPipelineBinaryHandlesInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSurfacePresentModeKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSurfacePresentModeKHR, VkSurfacePresentModeKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSurfacePresentScalingCapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSurfacePresentScalingCapabilitiesKHR, VkSurfacePresentScalingCapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSurfacePresentModeCompatibilityKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSurfacePresentModeCompatibilityKHR, VkSurfacePresentModeCompatibilityKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR, VkPhysicalDeviceSwapchainMaintenance1FeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSwapchainPresentFenceInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSwapchainPresentFenceInfoKHR, VkSwapchainPresentFenceInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSwapchainPresentModesCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSwapchainPresentModesCreateInfoKHR, VkSwapchainPresentModesCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSwapchainPresentModeInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSwapchainPresentModeInfoKHR, VkSwapchainPresentModeInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSwapchainPresentScalingCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSwapchainPresentScalingCreateInfoKHR, VkSwapchainPresentScalingCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkReleaseSwapchainImagesInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkReleaseSwapchainImagesInfoKHR, VkReleaseSwapchainImagesInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR, VkPhysicalDeviceInternallySynchronizedQueuesFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCooperativeMatrixPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCooperativeMatrixPropertiesKHR, VkCooperativeMatrixPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCooperativeMatrixFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCooperativeMatrixFeaturesKHR, VkPhysicalDeviceCooperativeMatrixFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCooperativeMatrixPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCooperativeMatrixPropertiesKHR, VkPhysicalDeviceCooperativeMatrixPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR, VkPhysicalDeviceComputeShaderDerivativesFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceComputeShaderDerivativesPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceComputeShaderDerivativesPropertiesKHR, VkPhysicalDeviceComputeShaderDerivativesPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoDecodeAV1ProfileInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoDecodeAV1ProfileInfoKHR, VkVideoDecodeAV1ProfileInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoDecodeAV1CapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoDecodeAV1CapabilitiesKHR, VkVideoDecodeAV1CapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoDecodeAV1SessionParametersCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoDecodeAV1SessionParametersCreateInfoKHR, VkVideoDecodeAV1SessionParametersCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoDecodeAV1PictureInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoDecodeAV1PictureInfoKHR, VkVideoDecodeAV1PictureInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoDecodeAV1DpbSlotInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoDecodeAV1DpbSlotInfoKHR, VkVideoDecodeAV1DpbSlotInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVideoEncodeAV1FeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVideoEncodeAV1FeaturesKHR, VkPhysicalDeviceVideoEncodeAV1FeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeAV1CapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeAV1CapabilitiesKHR, VkVideoEncodeAV1CapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeAV1QIndexKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeAV1QIndexKHR, VkVideoEncodeAV1QIndexKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeAV1QualityLevelPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeAV1QualityLevelPropertiesKHR, VkVideoEncodeAV1QualityLevelPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeAV1SessionCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeAV1SessionCreateInfoKHR, VkVideoEncodeAV1SessionCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeAV1SessionParametersCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeAV1SessionParametersCreateInfoKHR, VkVideoEncodeAV1SessionParametersCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeAV1PictureInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeAV1PictureInfoKHR, VkVideoEncodeAV1PictureInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeAV1DpbSlotInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeAV1DpbSlotInfoKHR, VkVideoEncodeAV1DpbSlotInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeAV1ProfileInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeAV1ProfileInfoKHR, VkVideoEncodeAV1ProfileInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeAV1FrameSizeKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeAV1FrameSizeKHR, VkVideoEncodeAV1FrameSizeKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeAV1GopRemainingFrameInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeAV1GopRemainingFrameInfoKHR, VkVideoEncodeAV1GopRemainingFrameInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeAV1RateControlInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeAV1RateControlInfoKHR, VkVideoEncodeAV1RateControlInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeAV1RateControlLayerInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeAV1RateControlLayerInfoKHR, VkVideoEncodeAV1RateControlLayerInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVideoDecodeVP9FeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVideoDecodeVP9FeaturesKHR, VkPhysicalDeviceVideoDecodeVP9FeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoDecodeVP9ProfileInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoDecodeVP9ProfileInfoKHR, VkVideoDecodeVP9ProfileInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoDecodeVP9CapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoDecodeVP9CapabilitiesKHR, VkVideoDecodeVP9CapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoDecodeVP9PictureInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoDecodeVP9PictureInfoKHR, VkVideoDecodeVP9PictureInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVideoMaintenance1FeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVideoMaintenance1FeaturesKHR, VkPhysicalDeviceVideoMaintenance1FeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoInlineQueryInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoInlineQueryInfoKHR, VkVideoInlineQueryInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR, VkPhysicalDeviceUnifiedImageLayoutsFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAttachmentFeedbackLoopInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAttachmentFeedbackLoopInfoEXT, VkAttachmentFeedbackLoopInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCalibratedTimestampInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCalibratedTimestampInfoKHR, VkCalibratedTimestampInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSetDescriptorBufferOffsetsInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSetDescriptorBufferOffsetsInfoEXT, VkSetDescriptorBufferOffsetsInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindDescriptorBufferEmbeddedSamplersInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindDescriptorBufferEmbeddedSamplersInfoEXT, VkBindDescriptorBufferEmbeddedSamplersInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyMemoryIndirectCommandKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyMemoryIndirectCommandKHR, VkCopyMemoryIndirectCommandKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyMemoryIndirectInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyMemoryIndirectInfoKHR, VkCopyMemoryIndirectInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyMemoryToImageIndirectCommandKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyMemoryToImageIndirectCommandKHR, VkCopyMemoryToImageIndirectCommandKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyMemoryToImageIndirectInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyMemoryToImageIndirectInfoKHR, VkCopyMemoryToImageIndirectInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR, VkPhysicalDeviceCopyMemoryIndirectFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCopyMemoryIndirectPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCopyMemoryIndirectPropertiesKHR, VkPhysicalDeviceCopyMemoryIndirectPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeIntraRefreshCapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeIntraRefreshCapabilitiesKHR, VkVideoEncodeIntraRefreshCapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeSessionIntraRefreshCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeSessionIntraRefreshCreateInfoKHR, VkVideoEncodeSessionIntraRefreshCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeIntraRefreshInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeIntraRefreshInfoKHR, VkVideoEncodeIntraRefreshInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoReferenceIntraRefreshInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoReferenceIntraRefreshInfoKHR, VkVideoReferenceIntraRefreshInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR, VkPhysicalDeviceVideoEncodeIntraRefreshFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeQuantizationMapCapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeQuantizationMapCapabilitiesKHR, VkVideoEncodeQuantizationMapCapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoFormatQuantizationMapPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoFormatQuantizationMapPropertiesKHR, VkVideoFormatQuantizationMapPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeQuantizationMapInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeQuantizationMapInfoKHR, VkVideoEncodeQuantizationMapInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeQuantizationMapSessionParametersCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeQuantizationMapSessionParametersCreateInfoKHR, VkVideoEncodeQuantizationMapSessionParametersCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR, VkPhysicalDeviceVideoEncodeQuantizationMapFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH264QuantizationMapCapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH264QuantizationMapCapabilitiesKHR, VkVideoEncodeH264QuantizationMapCapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeH265QuantizationMapCapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeH265QuantizationMapCapabilitiesKHR, VkVideoEncodeH265QuantizationMapCapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoFormatH265QuantizationMapPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoFormatH265QuantizationMapPropertiesKHR, VkVideoFormatH265QuantizationMapPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeAV1QuantizationMapCapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeAV1QuantizationMapCapabilitiesKHR, VkVideoEncodeAV1QuantizationMapCapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoFormatAV1QuantizationMapPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoFormatAV1QuantizationMapPropertiesKHR, VkVideoFormatAV1QuantizationMapPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR, VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMaintenance7FeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMaintenance7FeaturesKHR, VkPhysicalDeviceMaintenance7FeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMaintenance7PropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMaintenance7PropertiesKHR, VkPhysicalDeviceMaintenance7PropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceLayeredApiPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceLayeredApiPropertiesKHR, VkPhysicalDeviceLayeredApiPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceLayeredApiPropertiesListKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceLayeredApiPropertiesListKHR, VkPhysicalDeviceLayeredApiPropertiesListKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceLayeredApiVulkanPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceLayeredApiVulkanPropertiesKHR, VkPhysicalDeviceLayeredApiVulkanPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFaultFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFaultFeaturesKHR, VkPhysicalDeviceFaultFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFaultPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFaultPropertiesKHR, VkPhysicalDeviceFaultPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceFaultAddressInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceFaultAddressInfoKHR, VkDeviceFaultAddressInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceFaultVendorInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceFaultVendorInfoKHR, VkDeviceFaultVendorInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceFaultInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceFaultInfoKHR, VkDeviceFaultInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceFaultDebugInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceFaultDebugInfoKHR, VkDeviceFaultDebugInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceFaultVendorBinaryHeaderVersionOneKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceFaultVendorBinaryHeaderVersionOneKHR, VkDeviceFaultVendorBinaryHeaderVersionOneKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryBarrierAccessFlags3KHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryBarrierAccessFlags3KHR, VkMemoryBarrierAccessFlags3KHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMaintenance8FeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMaintenance8FeaturesKHR, VkPhysicalDeviceMaintenance8FeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderFmaFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderFmaFeaturesKHR, VkPhysicalDeviceShaderFmaFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMaintenance9FeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMaintenance9FeaturesKHR, VkPhysicalDeviceMaintenance9FeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMaintenance9PropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMaintenance9PropertiesKHR, VkPhysicalDeviceMaintenance9PropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkQueueFamilyOwnershipTransferPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkQueueFamilyOwnershipTransferPropertiesKHR, VkQueueFamilyOwnershipTransferPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR, VkPhysicalDeviceVideoEncodeFeedback2FeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeFeedback2CapabilitiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeFeedback2CapabilitiesKHR, VkVideoEncodeFeedback2CapabilitiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkQueryPoolVideoEncodePerPartitionFeedbackCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkQueryPoolVideoEncodePerPartitionFeedbackCreateInfoKHR, VkQueryPoolVideoEncodePerPartitionFeedbackCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDepthClampZeroOneFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDepthClampZeroOneFeaturesKHR, VkPhysicalDeviceDepthClampZeroOneFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRobustness2FeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRobustness2FeaturesKHR, VkPhysicalDeviceRobustness2FeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRobustness2PropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRobustness2PropertiesKHR, VkPhysicalDeviceRobustness2PropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR, VkPhysicalDevicePresentModeFifoLatestReadyFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMicromapUsageKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMicromapUsageKHR, VkMicromapUsageKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureGeometryMicromapDataKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureGeometryMicromapDataKHR, VkAccelerationStructureGeometryMicromapDataKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceOpacityMicromapFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceOpacityMicromapFeaturesKHR, VkPhysicalDeviceOpacityMicromapFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceOpacityMicromapPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceOpacityMicromapPropertiesKHR, VkPhysicalDeviceOpacityMicromapPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMicromapTriangleKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMicromapTriangleKHR, VkMicromapTriangleKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureTrianglesOpacityMicromapKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureTrianglesOpacityMicromapKHR, VkAccelerationStructureTrianglesOpacityMicromapKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMaintenance10FeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMaintenance10FeaturesKHR, VkPhysicalDeviceMaintenance10FeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMaintenance10PropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMaintenance10PropertiesKHR, VkPhysicalDeviceMaintenance10PropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderingEndInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderingEndInfoKHR, VkRenderingEndInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderingAttachmentFlagsInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderingAttachmentFlagsInfoKHR, VkRenderingAttachmentFlagsInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkResolveImageModeInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkResolveImageModeInfoKHR, VkResolveImageModeInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMaintenance11FeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMaintenance11FeaturesKHR, VkPhysicalDeviceMaintenance11FeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkQueueFamilyOptimalImageTransferGranularityPropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkQueueFamilyOptimalImageTransferGranularityPropertiesKHR, VkQueueFamilyOptimalImageTransferGranularityPropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkFormatProperties4KHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkFormatProperties4KHR, VkFormatProperties4KHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageUsageFlags2CreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageUsageFlags2CreateInfoKHR, VkImageUsageFlags2CreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageCreateFlags2CreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageCreateFlags2CreateInfoKHR, VkImageCreateFlags2CreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageViewUsage2CreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageViewUsage2CreateInfoKHR, VkImageViewUsage2CreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceExtendedFlagsFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceExtendedFlagsFeaturesKHR, VkPhysicalDeviceExtendedFlagsFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageStencilUsage2CreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageStencilUsage2CreateInfoKHR, VkImageStencilUsage2CreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSharedPresentSurfaceCapabilities2KHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSharedPresentSurfaceCapabilities2KHR, VkSharedPresentSurfaceCapabilities2KHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDebugReportCallbackCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDebugReportCallbackCreateInfoEXT, VkDebugReportCallbackCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineRasterizationStateRasterizationOrderAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineRasterizationStateRasterizationOrderAMD, VkPipelineRasterizationStateRasterizationOrderAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDebugMarkerObjectNameInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDebugMarkerObjectNameInfoEXT, VkDebugMarkerObjectNameInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDebugMarkerObjectTagInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDebugMarkerObjectTagInfoEXT, VkDebugMarkerObjectTagInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDebugMarkerMarkerInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDebugMarkerMarkerInfoEXT, VkDebugMarkerMarkerInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDedicatedAllocationImageCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDedicatedAllocationImageCreateInfoNV, VkDedicatedAllocationImageCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDedicatedAllocationBufferCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDedicatedAllocationBufferCreateInfoNV, VkDedicatedAllocationBufferCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDedicatedAllocationMemoryAllocateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDedicatedAllocationMemoryAllocateInfoNV, VkDedicatedAllocationMemoryAllocateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceTransformFeedbackFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceTransformFeedbackFeaturesEXT, VkPhysicalDeviceTransformFeedbackFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceTransformFeedbackPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceTransformFeedbackPropertiesEXT, VkPhysicalDeviceTransformFeedbackPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineRasterizationStateStreamCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineRasterizationStateStreamCreateInfoEXT, VkPipelineRasterizationStateStreamCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageViewHandleInfoNVX", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageViewHandleInfoNVX, VkImageViewHandleInfoNVX>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageViewAddressPropertiesNVX", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageViewAddressPropertiesNVX, VkImageViewAddressPropertiesNVX>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTextureLODGatherFormatPropertiesAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTextureLODGatherFormatPropertiesAMD, VkTextureLODGatherFormatPropertiesAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkShaderResourceUsageAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkShaderResourceUsageAMD, VkShaderResourceUsageAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkShaderStatisticsInfoAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkShaderStatisticsInfoAMD, VkShaderStatisticsInfoAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkStreamDescriptorSurfaceCreateInfoGGP", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkStreamDescriptorSurfaceCreateInfoGGP, VkStreamDescriptorSurfaceCreateInfoGGP>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCornerSampledImageFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCornerSampledImageFeaturesNV, VkPhysicalDeviceCornerSampledImageFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExternalImageFormatPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExternalImageFormatPropertiesNV, VkExternalImageFormatPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExternalMemoryImageCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExternalMemoryImageCreateInfoNV, VkExternalMemoryImageCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExportMemoryAllocateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExportMemoryAllocateInfoNV, VkExportMemoryAllocateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImportMemoryWin32HandleInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImportMemoryWin32HandleInfoNV, VkImportMemoryWin32HandleInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExportMemoryWin32HandleInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExportMemoryWin32HandleInfoNV, VkExportMemoryWin32HandleInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkWin32KeyedMutexAcquireReleaseInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkWin32KeyedMutexAcquireReleaseInfoNV, VkWin32KeyedMutexAcquireReleaseInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkValidationFlagsEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkValidationFlagsEXT, VkValidationFlagsEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkViSurfaceCreateInfoNN", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkViSurfaceCreateInfoNN, VkViSurfaceCreateInfoNN>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageViewASTCDecodeModeEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageViewASTCDecodeModeEXT, VkImageViewASTCDecodeModeEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceASTCDecodeFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceASTCDecodeFeaturesEXT, VkPhysicalDeviceASTCDecodeFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkConditionalRenderingBeginInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkConditionalRenderingBeginInfoEXT, VkConditionalRenderingBeginInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceConditionalRenderingFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceConditionalRenderingFeaturesEXT, VkPhysicalDeviceConditionalRenderingFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCommandBufferInheritanceConditionalRenderingInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCommandBufferInheritanceConditionalRenderingInfoEXT, VkCommandBufferInheritanceConditionalRenderingInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkViewportWScalingNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkViewportWScalingNV, VkViewportWScalingNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineViewportWScalingStateCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineViewportWScalingStateCreateInfoNV, VkPipelineViewportWScalingStateCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSurfaceCapabilities2EXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSurfaceCapabilities2EXT, VkSurfaceCapabilities2EXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplayPowerInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplayPowerInfoEXT, VkDisplayPowerInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceEventInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceEventInfoEXT, VkDeviceEventInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplayEventInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplayEventInfoEXT, VkDisplayEventInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSwapchainCounterCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSwapchainCounterCreateInfoEXT, VkSwapchainCounterCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRefreshCycleDurationGOOGLE", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRefreshCycleDurationGOOGLE, VkRefreshCycleDurationGOOGLE>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPastPresentationTimingGOOGLE", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPastPresentationTimingGOOGLE, VkPastPresentationTimingGOOGLE>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPresentTimeGOOGLE", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPresentTimeGOOGLE, VkPresentTimeGOOGLE>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPresentTimesInfoGOOGLE", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPresentTimesInfoGOOGLE, VkPresentTimesInfoGOOGLE>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX, VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMultiviewPerViewAttributesInfoNVX", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMultiviewPerViewAttributesInfoNVX, VkMultiviewPerViewAttributesInfoNVX>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkViewportSwizzleNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkViewportSwizzleNV, VkViewportSwizzleNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineViewportSwizzleStateCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineViewportSwizzleStateCreateInfoNV, VkPipelineViewportSwizzleStateCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDiscardRectanglePropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDiscardRectanglePropertiesEXT, VkPhysicalDeviceDiscardRectanglePropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineDiscardRectangleStateCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineDiscardRectangleStateCreateInfoEXT, VkPipelineDiscardRectangleStateCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceConservativeRasterizationPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceConservativeRasterizationPropertiesEXT, VkPhysicalDeviceConservativeRasterizationPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineRasterizationConservativeStateCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineRasterizationConservativeStateCreateInfoEXT, VkPipelineRasterizationConservativeStateCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDepthClipEnableFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDepthClipEnableFeaturesEXT, VkPhysicalDeviceDepthClipEnableFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineRasterizationDepthClipStateCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineRasterizationDepthClipStateCreateInfoEXT, VkPipelineRasterizationDepthClipStateCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkXYColorEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkXYColorEXT, VkXYColorEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkHdrMetadataEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkHdrMetadataEXT, VkHdrMetadataEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG, VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkIOSSurfaceCreateInfoMVK", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkIOSSurfaceCreateInfoMVK, VkIOSSurfaceCreateInfoMVK>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMacOSSurfaceCreateInfoMVK", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMacOSSurfaceCreateInfoMVK, VkMacOSSurfaceCreateInfoMVK>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDebugUtilsLabelEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDebugUtilsLabelEXT, VkDebugUtilsLabelEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDebugUtilsObjectNameInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDebugUtilsObjectNameInfoEXT, VkDebugUtilsObjectNameInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDebugUtilsMessengerCallbackDataEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDebugUtilsMessengerCallbackDataEXT, VkDebugUtilsMessengerCallbackDataEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDebugUtilsMessengerCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDebugUtilsMessengerCreateInfoEXT, VkDebugUtilsMessengerCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDebugUtilsObjectTagInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDebugUtilsObjectTagInfoEXT, VkDebugUtilsObjectTagInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAndroidHardwareBufferUsageANDROID", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAndroidHardwareBufferUsageANDROID, VkAndroidHardwareBufferUsageANDROID>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAndroidHardwareBufferPropertiesANDROID", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAndroidHardwareBufferPropertiesANDROID, VkAndroidHardwareBufferPropertiesANDROID>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAndroidHardwareBufferFormatPropertiesANDROID", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAndroidHardwareBufferFormatPropertiesANDROID, VkAndroidHardwareBufferFormatPropertiesANDROID>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImportAndroidHardwareBufferInfoANDROID", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImportAndroidHardwareBufferInfoANDROID, VkImportAndroidHardwareBufferInfoANDROID>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryGetAndroidHardwareBufferInfoANDROID", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryGetAndroidHardwareBufferInfoANDROID, VkMemoryGetAndroidHardwareBufferInfoANDROID>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExternalFormatANDROID", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExternalFormatANDROID, VkExternalFormatANDROID>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAndroidHardwareBufferFormatProperties2ANDROID", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAndroidHardwareBufferFormatProperties2ANDROID, VkAndroidHardwareBufferFormatProperties2ANDROID>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGpaPerfBlockPropertiesAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGpaPerfBlockPropertiesAMD, VkGpaPerfBlockPropertiesAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceGpaFeaturesAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceGpaFeaturesAMD, VkPhysicalDeviceGpaFeaturesAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceGpaPropertiesAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceGpaPropertiesAMD, VkPhysicalDeviceGpaPropertiesAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceGpaProperties2AMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceGpaProperties2AMD, VkPhysicalDeviceGpaProperties2AMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGpaPerfCounterAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGpaPerfCounterAMD, VkGpaPerfCounterAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGpaSampleBeginInfoAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGpaSampleBeginInfoAMD, VkGpaSampleBeginInfoAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGpaDeviceClockModeInfoAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGpaDeviceClockModeInfoAMD, VkGpaDeviceClockModeInfoAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGpaDeviceGetClockInfoAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGpaDeviceGetClockInfoAMD, VkGpaDeviceGetClockInfoAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGpaSessionCreateInfoAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGpaSessionCreateInfoAMD, VkGpaSessionCreateInfoAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAttachmentSampleCountInfoAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAttachmentSampleCountInfoAMD, VkAttachmentSampleCountInfoAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSampleLocationEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSampleLocationEXT, VkSampleLocationEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSampleLocationsInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSampleLocationsInfoEXT, VkSampleLocationsInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAttachmentSampleLocationsEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAttachmentSampleLocationsEXT, VkAttachmentSampleLocationsEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSubpassSampleLocationsEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSubpassSampleLocationsEXT, VkSubpassSampleLocationsEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassSampleLocationsBeginInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassSampleLocationsBeginInfoEXT, VkRenderPassSampleLocationsBeginInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineSampleLocationsStateCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineSampleLocationsStateCreateInfoEXT, VkPipelineSampleLocationsStateCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceSampleLocationsPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceSampleLocationsPropertiesEXT, VkPhysicalDeviceSampleLocationsPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMultisamplePropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMultisamplePropertiesEXT, VkMultisamplePropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT, VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT, VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineColorBlendAdvancedStateCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineColorBlendAdvancedStateCreateInfoEXT, VkPipelineColorBlendAdvancedStateCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineCoverageToColorStateCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineCoverageToColorStateCreateInfoNV, VkPipelineCoverageToColorStateCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineCoverageModulationStateCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineCoverageModulationStateCreateInfoNV, VkPipelineCoverageModulationStateCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderSMBuiltinsPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderSMBuiltinsPropertiesNV, VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderSMBuiltinsFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderSMBuiltinsFeaturesNV, VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDrmFormatModifierPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDrmFormatModifierPropertiesEXT, VkDrmFormatModifierPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDrmFormatModifierPropertiesListEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDrmFormatModifierPropertiesListEXT, VkDrmFormatModifierPropertiesListEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImageDrmFormatModifierInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImageDrmFormatModifierInfoEXT, VkPhysicalDeviceImageDrmFormatModifierInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageDrmFormatModifierListCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageDrmFormatModifierListCreateInfoEXT, VkImageDrmFormatModifierListCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageDrmFormatModifierExplicitCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageDrmFormatModifierExplicitCreateInfoEXT, VkImageDrmFormatModifierExplicitCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageDrmFormatModifierPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageDrmFormatModifierPropertiesEXT, VkImageDrmFormatModifierPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDrmFormatModifierProperties2EXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDrmFormatModifierProperties2EXT, VkDrmFormatModifierProperties2EXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDrmFormatModifierPropertiesList2EXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDrmFormatModifierPropertiesList2EXT, VkDrmFormatModifierPropertiesList2EXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkValidationCacheCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkValidationCacheCreateInfoEXT, VkValidationCacheCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkShaderModuleValidationCacheCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkShaderModuleValidationCacheCreateInfoEXT, VkShaderModuleValidationCacheCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkShadingRatePaletteNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkShadingRatePaletteNV, VkShadingRatePaletteNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineViewportShadingRateImageStateCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineViewportShadingRateImageStateCreateInfoNV, VkPipelineViewportShadingRateImageStateCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShadingRateImageFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShadingRateImageFeaturesNV, VkPhysicalDeviceShadingRateImageFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShadingRateImagePropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShadingRateImagePropertiesNV, VkPhysicalDeviceShadingRateImagePropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCoarseSampleLocationNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCoarseSampleLocationNV, VkCoarseSampleLocationNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCoarseSampleOrderCustomNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCoarseSampleOrderCustomNV, VkCoarseSampleOrderCustomNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineViewportCoarseSampleOrderStateCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineViewportCoarseSampleOrderStateCreateInfoNV, VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRayTracingShaderGroupCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRayTracingShaderGroupCreateInfoNV, VkRayTracingShaderGroupCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRayTracingPipelineCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRayTracingPipelineCreateInfoNV, VkRayTracingPipelineCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGeometryTrianglesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGeometryTrianglesNV, VkGeometryTrianglesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGeometryAABBNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGeometryAABBNV, VkGeometryAABBNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGeometryDataNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGeometryDataNV, VkGeometryDataNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGeometryNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGeometryNV, VkGeometryNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureInfoNV, VkAccelerationStructureInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureCreateInfoNV, VkAccelerationStructureCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindAccelerationStructureMemoryInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindAccelerationStructureMemoryInfoNV, VkBindAccelerationStructureMemoryInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkWriteDescriptorSetAccelerationStructureNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkWriteDescriptorSetAccelerationStructureNV, VkWriteDescriptorSetAccelerationStructureNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureMemoryRequirementsInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureMemoryRequirementsInfoNV, VkAccelerationStructureMemoryRequirementsInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRayTracingPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRayTracingPropertiesNV, VkPhysicalDeviceRayTracingPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTransformMatrixKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTransformMatrixKHR, VkTransformMatrixKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAabbPositionsKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAabbPositionsKHR, VkAabbPositionsKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureInstanceKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureInstanceKHR, VkAccelerationStructureInstanceKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV, VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineRepresentativeFragmentTestStateCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineRepresentativeFragmentTestStateCreateInfoNV, VkPipelineRepresentativeFragmentTestStateCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImageViewImageFormatInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImageViewImageFormatInfoEXT, VkPhysicalDeviceImageViewImageFormatInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkFilterCubicImageViewImageFormatPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkFilterCubicImageViewImageFormatPropertiesEXT, VkFilterCubicImageViewImageFormatPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM, VkPhysicalDeviceCooperativeMatrixConversionFeaturesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM, VkPhysicalDeviceElapsedTimerQueryFeaturesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImportMemoryHostPointerInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImportMemoryHostPointerInfoEXT, VkImportMemoryHostPointerInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryHostPointerPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryHostPointerPropertiesEXT, VkMemoryHostPointerPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceExternalMemoryHostPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceExternalMemoryHostPropertiesEXT, VkPhysicalDeviceExternalMemoryHostPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineCompilerControlCreateInfoAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineCompilerControlCreateInfoAMD, VkPipelineCompilerControlCreateInfoAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderCorePropertiesAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderCorePropertiesAMD, VkPhysicalDeviceShaderCorePropertiesAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceMemoryOverallocationCreateInfoAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceMemoryOverallocationCreateInfoAMD, VkDeviceMemoryOverallocationCreateInfoAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT, VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPresentFrameTokenGGP", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPresentFrameTokenGGP, VkPresentFrameTokenGGP>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMeshShaderFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMeshShaderFeaturesNV, VkPhysicalDeviceMeshShaderFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMeshShaderPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMeshShaderPropertiesNV, VkPhysicalDeviceMeshShaderPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDrawMeshTasksIndirectCommandNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDrawMeshTasksIndirectCommandNV, VkDrawMeshTasksIndirectCommandNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderImageFootprintFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderImageFootprintFeaturesNV, VkPhysicalDeviceShaderImageFootprintFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineViewportExclusiveScissorStateCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineViewportExclusiveScissorStateCreateInfoNV, VkPipelineViewportExclusiveScissorStateCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceExclusiveScissorFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceExclusiveScissorFeaturesNV, VkPhysicalDeviceExclusiveScissorFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkQueueFamilyCheckpointPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkQueueFamilyCheckpointPropertiesNV, VkQueueFamilyCheckpointPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCheckpointDataNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCheckpointDataNV, VkCheckpointDataNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkQueueFamilyCheckpointProperties2NV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkQueueFamilyCheckpointProperties2NV, VkQueueFamilyCheckpointProperties2NV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCheckpointData2NV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCheckpointData2NV, VkCheckpointData2NV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePresentTimingFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePresentTimingFeaturesEXT, VkPhysicalDevicePresentTimingFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPresentTimingSurfaceCapabilitiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPresentTimingSurfaceCapabilitiesEXT, VkPresentTimingSurfaceCapabilitiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSwapchainCalibratedTimestampInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSwapchainCalibratedTimestampInfoEXT, VkSwapchainCalibratedTimestampInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSwapchainTimingPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSwapchainTimingPropertiesEXT, VkSwapchainTimingPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSwapchainTimeDomainPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSwapchainTimeDomainPropertiesEXT, VkSwapchainTimeDomainPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPastPresentationTimingInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPastPresentationTimingInfoEXT, VkPastPresentationTimingInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPresentStageTimeEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPresentStageTimeEXT, VkPresentStageTimeEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPastPresentationTimingEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPastPresentationTimingEXT, VkPastPresentationTimingEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPastPresentationTimingPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPastPresentationTimingPropertiesEXT, VkPastPresentationTimingPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPresentTimingInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPresentTimingInfoEXT, VkPresentTimingInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPresentTimingsInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPresentTimingsInfoEXT, VkPresentTimingsInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL, VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkInitializePerformanceApiInfoINTEL", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkInitializePerformanceApiInfoINTEL, VkInitializePerformanceApiInfoINTEL>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkQueryPoolPerformanceQueryCreateInfoINTEL", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkQueryPoolPerformanceQueryCreateInfoINTEL, VkQueryPoolPerformanceQueryCreateInfoINTEL>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPerformanceMarkerInfoINTEL", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPerformanceMarkerInfoINTEL, VkPerformanceMarkerInfoINTEL>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPerformanceStreamMarkerInfoINTEL", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPerformanceStreamMarkerInfoINTEL, VkPerformanceStreamMarkerInfoINTEL>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPerformanceOverrideInfoINTEL", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPerformanceOverrideInfoINTEL, VkPerformanceOverrideInfoINTEL>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPerformanceConfigurationAcquireInfoINTEL", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPerformanceConfigurationAcquireInfoINTEL, VkPerformanceConfigurationAcquireInfoINTEL>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePCIBusInfoPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePCIBusInfoPropertiesEXT, VkPhysicalDevicePCIBusInfoPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplayNativeHdrSurfaceCapabilitiesAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplayNativeHdrSurfaceCapabilitiesAMD, VkDisplayNativeHdrSurfaceCapabilitiesAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSwapchainDisplayNativeHdrCreateInfoAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSwapchainDisplayNativeHdrCreateInfoAMD, VkSwapchainDisplayNativeHdrCreateInfoAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImagePipeSurfaceCreateInfoFUCHSIA", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImagePipeSurfaceCreateInfoFUCHSIA, VkImagePipeSurfaceCreateInfoFUCHSIA>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMetalSurfaceCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMetalSurfaceCreateInfoEXT, VkMetalSurfaceCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFragmentDensityMapFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFragmentDensityMapFeaturesEXT, VkPhysicalDeviceFragmentDensityMapFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFragmentDensityMapPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFragmentDensityMapPropertiesEXT, VkPhysicalDeviceFragmentDensityMapPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassFragmentDensityMapCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassFragmentDensityMapCreateInfoEXT, VkRenderPassFragmentDensityMapCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderingFragmentDensityMapAttachmentInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderingFragmentDensityMapAttachmentInfoEXT, VkRenderingFragmentDensityMapAttachmentInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderCoreProperties2AMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderCoreProperties2AMD, VkPhysicalDeviceShaderCoreProperties2AMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCoherentMemoryFeaturesAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCoherentMemoryFeaturesAMD, VkPhysicalDeviceCoherentMemoryFeaturesAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT, VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMemoryBudgetPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMemoryBudgetPropertiesEXT, VkPhysicalDeviceMemoryBudgetPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMemoryPriorityFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMemoryPriorityFeaturesEXT, VkPhysicalDeviceMemoryPriorityFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryPriorityAllocateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryPriorityAllocateInfoEXT, VkMemoryPriorityAllocateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV, VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceBufferDeviceAddressFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceBufferDeviceAddressFeaturesEXT, VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBufferDeviceAddressCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBufferDeviceAddressCreateInfoEXT, VkBufferDeviceAddressCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkValidationFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkValidationFeaturesEXT, VkValidationFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCooperativeMatrixPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCooperativeMatrixPropertiesNV, VkCooperativeMatrixPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCooperativeMatrixFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCooperativeMatrixFeaturesNV, VkPhysicalDeviceCooperativeMatrixFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCooperativeMatrixPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCooperativeMatrixPropertiesNV, VkPhysicalDeviceCooperativeMatrixPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCoverageReductionModeFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCoverageReductionModeFeaturesNV, VkPhysicalDeviceCoverageReductionModeFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineCoverageReductionStateCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineCoverageReductionStateCreateInfoNV, VkPipelineCoverageReductionStateCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkFramebufferMixedSamplesCombinationNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkFramebufferMixedSamplesCombinationNV, VkFramebufferMixedSamplesCombinationNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT, VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceYcbcrImageArraysFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceYcbcrImageArraysFeaturesEXT, VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceProvokingVertexFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceProvokingVertexFeaturesEXT, VkPhysicalDeviceProvokingVertexFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceProvokingVertexPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceProvokingVertexPropertiesEXT, VkPhysicalDeviceProvokingVertexPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineRasterizationProvokingVertexStateCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineRasterizationProvokingVertexStateCreateInfoEXT, VkPipelineRasterizationProvokingVertexStateCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSurfaceFullScreenExclusiveInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSurfaceFullScreenExclusiveInfoEXT, VkSurfaceFullScreenExclusiveInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSurfaceCapabilitiesFullScreenExclusiveEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSurfaceCapabilitiesFullScreenExclusiveEXT, VkSurfaceCapabilitiesFullScreenExclusiveEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSurfaceFullScreenExclusiveWin32InfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSurfaceFullScreenExclusiveWin32InfoEXT, VkSurfaceFullScreenExclusiveWin32InfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkHeadlessSurfaceCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkHeadlessSurfaceCreateInfoEXT, VkHeadlessSurfaceCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderAtomicFloatFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderAtomicFloatFeaturesEXT, VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceExtendedDynamicStateFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceExtendedDynamicStateFeaturesEXT, VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMapMemoryPlacedFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMapMemoryPlacedFeaturesEXT, VkPhysicalDeviceMapMemoryPlacedFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMapMemoryPlacedPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMapMemoryPlacedPropertiesEXT, VkPhysicalDeviceMapMemoryPlacedPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryMapPlacedInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryMapPlacedInfoEXT, VkMemoryMapPlacedInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT, VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV, VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV, VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGraphicsShaderGroupCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGraphicsShaderGroupCreateInfoNV, VkGraphicsShaderGroupCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGraphicsPipelineShaderGroupsCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGraphicsPipelineShaderGroupsCreateInfoNV, VkGraphicsPipelineShaderGroupsCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindShaderGroupIndirectCommandNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindShaderGroupIndirectCommandNV, VkBindShaderGroupIndirectCommandNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindIndexBufferIndirectCommandNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindIndexBufferIndirectCommandNV, VkBindIndexBufferIndirectCommandNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindVertexBufferIndirectCommandNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindVertexBufferIndirectCommandNV, VkBindVertexBufferIndirectCommandNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSetStateFlagsIndirectCommandNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSetStateFlagsIndirectCommandNV, VkSetStateFlagsIndirectCommandNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkIndirectCommandsStreamNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkIndirectCommandsStreamNV, VkIndirectCommandsStreamNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkIndirectCommandsLayoutTokenNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkIndirectCommandsLayoutTokenNV, VkIndirectCommandsLayoutTokenNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkIndirectCommandsLayoutCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkIndirectCommandsLayoutCreateInfoNV, VkIndirectCommandsLayoutCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGeneratedCommandsInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGeneratedCommandsInfoNV, VkGeneratedCommandsInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGeneratedCommandsMemoryRequirementsInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGeneratedCommandsMemoryRequirementsInfoNV, VkGeneratedCommandsMemoryRequirementsInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceInheritedViewportScissorFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceInheritedViewportScissorFeaturesNV, VkPhysicalDeviceInheritedViewportScissorFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCommandBufferInheritanceViewportScissorInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCommandBufferInheritanceViewportScissorInfoNV, VkCommandBufferInheritanceViewportScissorInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT, VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassTransformBeginInfoQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassTransformBeginInfoQCOM, VkRenderPassTransformBeginInfoQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCommandBufferInheritanceRenderPassTransformInfoQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCommandBufferInheritanceRenderPassTransformInfoQCOM, VkCommandBufferInheritanceRenderPassTransformInfoQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDepthBiasControlFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDepthBiasControlFeaturesEXT, VkPhysicalDeviceDepthBiasControlFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDepthBiasInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDepthBiasInfoEXT, VkDepthBiasInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDepthBiasRepresentationInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDepthBiasRepresentationInfoEXT, VkDepthBiasRepresentationInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDeviceMemoryReportFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDeviceMemoryReportFeaturesEXT, VkPhysicalDeviceDeviceMemoryReportFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceMemoryReportCallbackDataEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceMemoryReportCallbackDataEXT, VkDeviceMemoryReportCallbackDataEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceDeviceMemoryReportCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceDeviceMemoryReportCreateInfoEXT, VkDeviceDeviceMemoryReportCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSamplerCustomBorderColorCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSamplerCustomBorderColorCreateInfoEXT, VkSamplerCustomBorderColorCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCustomBorderColorPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCustomBorderColorPropertiesEXT, VkPhysicalDeviceCustomBorderColorPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCustomBorderColorFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCustomBorderColorFeaturesEXT, VkPhysicalDeviceCustomBorderColorFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT, VkPhysicalDeviceTextureCompressionASTC3DFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePresentBarrierFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePresentBarrierFeaturesNV, VkPhysicalDevicePresentBarrierFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSurfaceCapabilitiesPresentBarrierNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSurfaceCapabilitiesPresentBarrierNV, VkSurfaceCapabilitiesPresentBarrierNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSwapchainPresentBarrierCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSwapchainPresentBarrierCreateInfoNV, VkSwapchainPresentBarrierCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDiagnosticsConfigFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDiagnosticsConfigFeaturesNV, VkPhysicalDeviceDiagnosticsConfigFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceDiagnosticsConfigCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceDiagnosticsConfigCreateInfoNV, VkDeviceDiagnosticsConfigCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPerfHintInfoQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPerfHintInfoQCOM, VkPerfHintInfoQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceQueuePerfHintFeaturesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceQueuePerfHintFeaturesQCOM, VkPhysicalDeviceQueuePerfHintFeaturesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceQueuePerfHintPropertiesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceQueuePerfHintPropertiesQCOM, VkPhysicalDeviceQueuePerfHintPropertiesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImageProcessing3FeaturesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImageProcessing3FeaturesQCOM, VkPhysicalDeviceImageProcessing3FeaturesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM, VkPhysicalDeviceShaderMultipleWaitQueuesFeaturesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderMultipleWaitQueuesPropertiesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderMultipleWaitQueuesPropertiesQCOM, VkPhysicalDeviceShaderMultipleWaitQueuesPropertiesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderSplitBarrierFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderSplitBarrierFeaturesEXT, VkPhysicalDeviceShaderSplitBarrierFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderSplitBarrierPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderSplitBarrierPropertiesEXT, VkPhysicalDeviceShaderSplitBarrierPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceTileShadingFeaturesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceTileShadingFeaturesQCOM, VkPhysicalDeviceTileShadingFeaturesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceTileShadingPropertiesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceTileShadingPropertiesQCOM, VkPhysicalDeviceTileShadingPropertiesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassTileShadingCreateInfoQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassTileShadingCreateInfoQCOM, VkRenderPassTileShadingCreateInfoQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPerTileBeginInfoQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPerTileBeginInfoQCOM, VkPerTileBeginInfoQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPerTileEndInfoQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPerTileEndInfoQCOM, VkPerTileEndInfoQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDispatchTileInfoQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDispatchTileInfoQCOM, VkDispatchTileInfoQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDescriptorBufferPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDescriptorBufferPropertiesEXT, VkPhysicalDeviceDescriptorBufferPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDescriptorBufferFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDescriptorBufferFeaturesEXT, VkPhysicalDeviceDescriptorBufferFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorAddressInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorAddressInfoEXT, VkDescriptorAddressInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorBufferBindingInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorBufferBindingInfoEXT, VkDescriptorBufferBindingInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorBufferBindingPushDescriptorBufferHandleEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorBufferBindingPushDescriptorBufferHandleEXT, VkDescriptorBufferBindingPushDescriptorBufferHandleEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBufferCaptureDescriptorDataInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBufferCaptureDescriptorDataInfoEXT, VkBufferCaptureDescriptorDataInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageCaptureDescriptorDataInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageCaptureDescriptorDataInfoEXT, VkImageCaptureDescriptorDataInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageViewCaptureDescriptorDataInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageViewCaptureDescriptorDataInfoEXT, VkImageViewCaptureDescriptorDataInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSamplerCaptureDescriptorDataInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSamplerCaptureDescriptorDataInfoEXT, VkSamplerCaptureDescriptorDataInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkOpaqueCaptureDescriptorDataCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkOpaqueCaptureDescriptorDataCreateInfoEXT, VkOpaqueCaptureDescriptorDataCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureCaptureDescriptorDataInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureCaptureDescriptorDataInfoEXT, VkAccelerationStructureCaptureDescriptorDataInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT, VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT, VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT, VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGraphicsPipelineLibraryCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGraphicsPipelineLibraryCreateInfoEXT, VkGraphicsPipelineLibraryCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD, VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV, VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV, VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineFragmentShadingRateEnumStateCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineFragmentShadingRateEnumStateCreateInfoNV, VkPipelineFragmentShadingRateEnumStateCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureGeometryMotionTrianglesDataNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureGeometryMotionTrianglesDataNV, VkAccelerationStructureGeometryMotionTrianglesDataNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureMotionInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureMotionInfoNV, VkAccelerationStructureMotionInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureMatrixMotionInstanceNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureMatrixMotionInstanceNV, VkAccelerationStructureMatrixMotionInstanceNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSRTDataNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSRTDataNV, VkSRTDataNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureSRTMotionInstanceNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureSRTMotionInstanceNV, VkAccelerationStructureSRTMotionInstanceNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRayTracingMotionBlurFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRayTracingMotionBlurFeaturesNV, VkPhysicalDeviceRayTracingMotionBlurFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT, VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFragmentDensityMap2FeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFragmentDensityMap2FeaturesEXT, VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFragmentDensityMap2PropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFragmentDensityMap2PropertiesEXT, VkPhysicalDeviceFragmentDensityMap2PropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyCommandTransformInfoQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyCommandTransformInfoQCOM, VkCopyCommandTransformInfoQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImageCompressionControlFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImageCompressionControlFeaturesEXT, VkPhysicalDeviceImageCompressionControlFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageCompressionControlEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageCompressionControlEXT, VkImageCompressionControlEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageCompressionPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageCompressionPropertiesEXT, VkImageCompressionPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT, VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevice4444FormatsFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevice4444FormatsFeaturesEXT, VkPhysicalDevice4444FormatsFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFaultFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFaultFeaturesEXT, VkPhysicalDeviceFaultFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceFaultCountsEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceFaultCountsEXT, VkDeviceFaultCountsEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceFaultInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceFaultInfoEXT, VkDeviceFaultInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT, VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT, VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDirectFBSurfaceCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDirectFBSurfaceCreateInfoEXT, VkDirectFBSurfaceCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT, VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMutableDescriptorTypeListEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMutableDescriptorTypeListEXT, VkMutableDescriptorTypeListEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMutableDescriptorTypeCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMutableDescriptorTypeCreateInfoEXT, VkMutableDescriptorTypeCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT, VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVertexInputBindingDescription2EXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVertexInputBindingDescription2EXT, VkVertexInputBindingDescription2EXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVertexInputAttributeDescription2EXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVertexInputAttributeDescription2EXT, VkVertexInputAttributeDescription2EXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDrmPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDrmPropertiesEXT, VkPhysicalDeviceDrmPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceAddressBindingReportFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceAddressBindingReportFeaturesEXT, VkPhysicalDeviceAddressBindingReportFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceAddressBindingCallbackDataEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceAddressBindingCallbackDataEXT, VkDeviceAddressBindingCallbackDataEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDepthClipControlFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDepthClipControlFeaturesEXT, VkPhysicalDeviceDepthClipControlFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineViewportDepthClipControlCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineViewportDepthClipControlCreateInfoEXT, VkPipelineViewportDepthClipControlCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT, VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImportMemoryZirconHandleInfoFUCHSIA", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImportMemoryZirconHandleInfoFUCHSIA, VkImportMemoryZirconHandleInfoFUCHSIA>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryZirconHandlePropertiesFUCHSIA", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryZirconHandlePropertiesFUCHSIA, VkMemoryZirconHandlePropertiesFUCHSIA>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryGetZirconHandleInfoFUCHSIA", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryGetZirconHandleInfoFUCHSIA, VkMemoryGetZirconHandleInfoFUCHSIA>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImportSemaphoreZirconHandleInfoFUCHSIA", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImportSemaphoreZirconHandleInfoFUCHSIA, VkImportSemaphoreZirconHandleInfoFUCHSIA>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSemaphoreGetZirconHandleInfoFUCHSIA", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSemaphoreGetZirconHandleInfoFUCHSIA, VkSemaphoreGetZirconHandleInfoFUCHSIA>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceInvocationMaskFeaturesHUAWEI", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceInvocationMaskFeaturesHUAWEI, VkPhysicalDeviceInvocationMaskFeaturesHUAWEI>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryGetRemoteAddressInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryGetRemoteAddressInfoNV, VkMemoryGetRemoteAddressInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceExternalMemoryRDMAFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceExternalMemoryRDMAFeaturesNV, VkPhysicalDeviceExternalMemoryRDMAFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFrameBoundaryFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFrameBoundaryFeaturesEXT, VkPhysicalDeviceFrameBoundaryFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkFrameBoundaryEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkFrameBoundaryEXT, VkFrameBoundaryEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT, VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSubpassResolvePerformanceQueryEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSubpassResolvePerformanceQueryEXT, VkSubpassResolvePerformanceQueryEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMultisampledRenderToSingleSampledInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMultisampledRenderToSingleSampledInfoEXT, VkMultisampledRenderToSingleSampledInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceExtendedDynamicState2FeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceExtendedDynamicState2FeaturesEXT, VkPhysicalDeviceExtendedDynamicState2FeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkScreenSurfaceCreateInfoQNX", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkScreenSurfaceCreateInfoQNX, VkScreenSurfaceCreateInfoQNX>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceColorWriteEnableFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceColorWriteEnableFeaturesEXT, VkPhysicalDeviceColorWriteEnableFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineColorWriteCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineColorWriteCreateInfoEXT, VkPipelineColorWriteCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT, VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE, VkPhysicalDeviceVideoEncodeRgbConversionFeaturesVALVE>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeRgbConversionCapabilitiesVALVE", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeRgbConversionCapabilitiesVALVE, VkVideoEncodeRgbConversionCapabilitiesVALVE>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeProfileRgbConversionInfoVALVE", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeProfileRgbConversionInfoVALVE, VkVideoEncodeProfileRgbConversionInfoVALVE>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkVideoEncodeSessionRgbConversionCreateInfoVALVE", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkVideoEncodeSessionRgbConversionCreateInfoVALVE, VkVideoEncodeSessionRgbConversionCreateInfoVALVE>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImageViewMinLodFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImageViewMinLodFeaturesEXT, VkPhysicalDeviceImageViewMinLodFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageViewMinLodCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageViewMinLodCreateInfoEXT, VkImageViewMinLodCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMultiDrawFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMultiDrawFeaturesEXT, VkPhysicalDeviceMultiDrawFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMultiDrawPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMultiDrawPropertiesEXT, VkPhysicalDeviceMultiDrawPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMultiDrawInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMultiDrawInfoEXT, VkMultiDrawInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMultiDrawIndexedInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMultiDrawIndexedInfoEXT, VkMultiDrawIndexedInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImage2DViewOf3DFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImage2DViewOf3DFeaturesEXT, VkPhysicalDeviceImage2DViewOf3DFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderTileImageFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderTileImageFeaturesEXT, VkPhysicalDeviceShaderTileImageFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderTileImagePropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderTileImagePropertiesEXT, VkPhysicalDeviceShaderTileImagePropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMicromapUsageEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMicromapUsageEXT, VkMicromapUsageEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMicromapBuildInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMicromapBuildInfoEXT, VkMicromapBuildInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMicromapCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMicromapCreateInfoEXT, VkMicromapCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceOpacityMicromapFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceOpacityMicromapFeaturesEXT, VkPhysicalDeviceOpacityMicromapFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceOpacityMicromapPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceOpacityMicromapPropertiesEXT, VkPhysicalDeviceOpacityMicromapPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMicromapVersionInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMicromapVersionInfoEXT, VkMicromapVersionInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyMicromapToMemoryInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyMicromapToMemoryInfoEXT, VkCopyMicromapToMemoryInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyMemoryToMicromapInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyMemoryToMicromapInfoEXT, VkCopyMemoryToMicromapInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyMicromapInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyMicromapInfoEXT, VkCopyMicromapInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMicromapBuildSizesInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMicromapBuildSizesInfoEXT, VkMicromapBuildSizesInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureTrianglesOpacityMicromapEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureTrianglesOpacityMicromapEXT, VkAccelerationStructureTrianglesOpacityMicromapEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDisplacementMicromapFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDisplacementMicromapFeaturesNV, VkPhysicalDeviceDisplacementMicromapFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDisplacementMicromapPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDisplacementMicromapPropertiesNV, VkPhysicalDeviceDisplacementMicromapPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureTrianglesDisplacementMicromapNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureTrianglesDisplacementMicromapNV, VkAccelerationStructureTrianglesDisplacementMicromapNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI, VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI, VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI, VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceBorderColorSwizzleFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceBorderColorSwizzleFeaturesEXT, VkPhysicalDeviceBorderColorSwizzleFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSamplerBorderColorComponentMappingCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSamplerBorderColorComponentMappingCreateInfoEXT, VkSamplerBorderColorComponentMappingCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT, VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderCorePropertiesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderCorePropertiesARM, VkPhysicalDeviceShaderCorePropertiesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceQueueShaderCoreControlCreateInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceQueueShaderCoreControlCreateInfoARM, VkDeviceQueueShaderCoreControlCreateInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceSchedulingControlsFeaturesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceSchedulingControlsFeaturesARM, VkPhysicalDeviceSchedulingControlsFeaturesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceSchedulingControlsPropertiesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceSchedulingControlsPropertiesARM, VkPhysicalDeviceSchedulingControlsPropertiesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDispatchParametersARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDispatchParametersARM, VkDispatchParametersARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceSchedulingControlsDispatchParametersPropertiesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceSchedulingControlsDispatchParametersPropertiesARM, VkPhysicalDeviceSchedulingControlsDispatchParametersPropertiesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT, VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageViewSlicedCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageViewSlicedCreateInfoEXT, VkImageViewSlicedCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE, VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorSetBindingReferenceVALVE", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorSetBindingReferenceVALVE, VkDescriptorSetBindingReferenceVALVE>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorSetLayoutHostMappingInfoVALVE", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorSetLayoutHostMappingInfoVALVE, VkDescriptorSetLayoutHostMappingInfoVALVE>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT, VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRenderPassStripedFeaturesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRenderPassStripedFeaturesARM, VkPhysicalDeviceRenderPassStripedFeaturesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRenderPassStripedPropertiesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRenderPassStripedPropertiesARM, VkPhysicalDeviceRenderPassStripedPropertiesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassStripeInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassStripeInfoARM, VkRenderPassStripeInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassStripeBeginInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassStripeBeginInfoARM, VkRenderPassStripeBeginInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassStripeSubmitInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassStripeSubmitInfoARM, VkRenderPassStripeSubmitInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT, VkPhysicalDeviceFragmentDensityMapOffsetFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFragmentDensityMapOffsetPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFragmentDensityMapOffsetPropertiesEXT, VkPhysicalDeviceFragmentDensityMapOffsetPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassFragmentDensityMapOffsetEndInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassFragmentDensityMapOffsetEndInfoEXT, VkRenderPassFragmentDensityMapOffsetEndInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV, VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkComputePipelineIndirectBufferInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkComputePipelineIndirectBufferInfoNV, VkComputePipelineIndirectBufferInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineIndirectDeviceAddressInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineIndirectDeviceAddressInfoNV, VkPipelineIndirectDeviceAddressInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindPipelineIndirectCommandNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindPipelineIndirectCommandNV, VkBindPipelineIndirectCommandNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV, VkPhysicalDeviceRayTracingLinearSweptSpheresFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureGeometryLinearSweptSpheresDataNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureGeometryLinearSweptSpheresDataNV, VkAccelerationStructureGeometryLinearSweptSpheresDataNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureGeometrySpheresDataNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureGeometrySpheresDataNV, VkAccelerationStructureGeometrySpheresDataNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceLinearColorAttachmentFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceLinearColorAttachmentFeaturesNV, VkPhysicalDeviceLinearColorAttachmentFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT, VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageViewSampleWeightCreateInfoQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageViewSampleWeightCreateInfoQCOM, VkImageViewSampleWeightCreateInfoQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImageProcessingFeaturesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImageProcessingFeaturesQCOM, VkPhysicalDeviceImageProcessingFeaturesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImageProcessingPropertiesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImageProcessingPropertiesQCOM, VkPhysicalDeviceImageProcessingPropertiesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceNestedCommandBufferFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceNestedCommandBufferFeaturesEXT, VkPhysicalDeviceNestedCommandBufferFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceNestedCommandBufferPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceNestedCommandBufferPropertiesEXT, VkPhysicalDeviceNestedCommandBufferPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExternalMemoryAcquireUnmodifiedEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExternalMemoryAcquireUnmodifiedEXT, VkExternalMemoryAcquireUnmodifiedEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceExtendedDynamicState3FeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceExtendedDynamicState3FeaturesEXT, VkPhysicalDeviceExtendedDynamicState3FeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceExtendedDynamicState3PropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceExtendedDynamicState3PropertiesEXT, VkPhysicalDeviceExtendedDynamicState3PropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkColorBlendEquationEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkColorBlendEquationEXT, VkColorBlendEquationEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkColorBlendAdvancedEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkColorBlendAdvancedEXT, VkColorBlendAdvancedEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT, VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassCreationControlEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassCreationControlEXT, VkRenderPassCreationControlEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassCreationFeedbackInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassCreationFeedbackInfoEXT, VkRenderPassCreationFeedbackInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassCreationFeedbackCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassCreationFeedbackCreateInfoEXT, VkRenderPassCreationFeedbackCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassSubpassFeedbackInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassSubpassFeedbackInfoEXT, VkRenderPassSubpassFeedbackInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassSubpassFeedbackCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassSubpassFeedbackCreateInfoEXT, VkRenderPassSubpassFeedbackCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDirectDriverLoadingInfoLUNARG", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDirectDriverLoadingInfoLUNARG, VkDirectDriverLoadingInfoLUNARG>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDirectDriverLoadingListLUNARG", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDirectDriverLoadingListLUNARG, VkDirectDriverLoadingListLUNARG>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTensorDescriptionARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTensorDescriptionARM, VkTensorDescriptionARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTensorCreateInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTensorCreateInfoARM, VkTensorCreateInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTensorViewCreateInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTensorViewCreateInfoARM, VkTensorViewCreateInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTensorMemoryRequirementsInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTensorMemoryRequirementsInfoARM, VkTensorMemoryRequirementsInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindTensorMemoryInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindTensorMemoryInfoARM, VkBindTensorMemoryInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkWriteDescriptorSetTensorARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkWriteDescriptorSetTensorARM, VkWriteDescriptorSetTensorARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTensorFormatPropertiesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTensorFormatPropertiesARM, VkTensorFormatPropertiesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceTensorPropertiesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceTensorPropertiesARM, VkPhysicalDeviceTensorPropertiesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTensorMemoryBarrierARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTensorMemoryBarrierARM, VkTensorMemoryBarrierARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTensorDependencyInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTensorDependencyInfoARM, VkTensorDependencyInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceTensorFeaturesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceTensorFeaturesARM, VkPhysicalDeviceTensorFeaturesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDeviceTensorMemoryRequirementsARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDeviceTensorMemoryRequirementsARM, VkDeviceTensorMemoryRequirementsARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTensorCopyARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTensorCopyARM, VkTensorCopyARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyTensorInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyTensorInfoARM, VkCopyTensorInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryDedicatedAllocateInfoTensorARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryDedicatedAllocateInfoTensorARM, VkMemoryDedicatedAllocateInfoTensorARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceExternalTensorInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceExternalTensorInfoARM, VkPhysicalDeviceExternalTensorInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExternalTensorPropertiesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExternalTensorPropertiesARM, VkExternalTensorPropertiesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkExternalMemoryTensorCreateInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkExternalMemoryTensorCreateInfoARM, VkExternalMemoryTensorCreateInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDescriptorBufferTensorFeaturesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDescriptorBufferTensorFeaturesARM, VkPhysicalDeviceDescriptorBufferTensorFeaturesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDescriptorBufferTensorPropertiesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDescriptorBufferTensorPropertiesARM, VkPhysicalDeviceDescriptorBufferTensorPropertiesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDescriptorGetTensorInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDescriptorGetTensorInfoARM, VkDescriptorGetTensorInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTensorCaptureDescriptorDataInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTensorCaptureDescriptorDataInfoARM, VkTensorCaptureDescriptorDataInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTensorViewCaptureDescriptorDataInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTensorViewCaptureDescriptorDataInfoARM, VkTensorViewCaptureDescriptorDataInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkFrameBoundaryTensorsARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkFrameBoundaryTensorsARM, VkFrameBoundaryTensorsARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT, VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT, VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineShaderStageModuleIdentifierCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineShaderStageModuleIdentifierCreateInfoEXT, VkPipelineShaderStageModuleIdentifierCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkShaderModuleIdentifierEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkShaderModuleIdentifierEXT, VkShaderModuleIdentifierEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceOpticalFlowFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceOpticalFlowFeaturesNV, VkPhysicalDeviceOpticalFlowFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceOpticalFlowPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceOpticalFlowPropertiesNV, VkPhysicalDeviceOpticalFlowPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkOpticalFlowImageFormatInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkOpticalFlowImageFormatInfoNV, VkOpticalFlowImageFormatInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkOpticalFlowImageFormatPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkOpticalFlowImageFormatPropertiesNV, VkOpticalFlowImageFormatPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkOpticalFlowSessionCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkOpticalFlowSessionCreateInfoNV, VkOpticalFlowSessionCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkOpticalFlowSessionCreatePrivateDataInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkOpticalFlowSessionCreatePrivateDataInfoNV, VkOpticalFlowSessionCreatePrivateDataInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkOpticalFlowExecuteInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkOpticalFlowExecuteInfoNV, VkOpticalFlowExecuteInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceLegacyDitheringFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceLegacyDitheringFeaturesEXT, VkPhysicalDeviceLegacyDitheringFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceExternalFormatResolveFeaturesANDROID", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceExternalFormatResolveFeaturesANDROID, VkPhysicalDeviceExternalFormatResolveFeaturesANDROID>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceExternalFormatResolvePropertiesANDROID", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceExternalFormatResolvePropertiesANDROID, VkPhysicalDeviceExternalFormatResolvePropertiesANDROID>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAndroidHardwareBufferFormatResolvePropertiesANDROID", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAndroidHardwareBufferFormatResolvePropertiesANDROID, VkAndroidHardwareBufferFormatResolvePropertiesANDROID>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceAntiLagFeaturesAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceAntiLagFeaturesAMD, VkPhysicalDeviceAntiLagFeaturesAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAntiLagPresentationInfoAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAntiLagPresentationInfoAMD, VkAntiLagPresentationInfoAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAntiLagDataAMD", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAntiLagDataAMD, VkAntiLagDataAMD>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderObjectFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderObjectFeaturesEXT, VkPhysicalDeviceShaderObjectFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderObjectPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderObjectPropertiesEXT, VkPhysicalDeviceShaderObjectPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkShaderCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkShaderCreateInfoEXT, VkShaderCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDepthClampRangeEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDepthClampRangeEXT, VkDepthClampRangeEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceTilePropertiesFeaturesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceTilePropertiesFeaturesQCOM, VkPhysicalDeviceTilePropertiesFeaturesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTilePropertiesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTilePropertiesQCOM, VkTilePropertiesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceAmigoProfilingFeaturesSEC", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceAmigoProfilingFeaturesSEC, VkPhysicalDeviceAmigoProfilingFeaturesSEC>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAmigoProfilingSubmitInfoSEC", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAmigoProfilingSubmitInfoSEC, VkAmigoProfilingSubmitInfoSEC>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM, VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV, VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV, VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCooperativeVectorPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCooperativeVectorPropertiesNV, VkPhysicalDeviceCooperativeVectorPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCooperativeVectorFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCooperativeVectorFeaturesNV, VkPhysicalDeviceCooperativeVectorFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCooperativeVectorPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCooperativeVectorPropertiesNV, VkCooperativeVectorPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkConvertCooperativeVectorMatrixInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkConvertCooperativeVectorMatrixInfoNV, VkConvertCooperativeVectorMatrixInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV, VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV, VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT, VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT, VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkLayerSettingsCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkLayerSettingsCreateInfoEXT, VkLayerSettingsCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM, VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM, VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT, VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT, VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkLatencySleepModeInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkLatencySleepModeInfoNV, VkLatencySleepModeInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkLatencySleepInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkLatencySleepInfoNV, VkLatencySleepInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSetLatencyMarkerInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSetLatencyMarkerInfoNV, VkSetLatencyMarkerInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkLatencyTimingsFrameReportNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkLatencyTimingsFrameReportNV, VkLatencyTimingsFrameReportNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGetLatencyMarkerInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGetLatencyMarkerInfoNV, VkGetLatencyMarkerInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkLatencySubmissionPresentIdNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkLatencySubmissionPresentIdNV, VkLatencySubmissionPresentIdNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSwapchainLatencyCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSwapchainLatencyCreateInfoNV, VkSwapchainLatencyCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkOutOfBandQueueTypeInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkOutOfBandQueueTypeInfoNV, VkOutOfBandQueueTypeInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkLatencySurfaceCapabilitiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkLatencySurfaceCapabilitiesNV, VkLatencySurfaceCapabilitiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDataGraphFeaturesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDataGraphFeaturesARM, VkPhysicalDeviceDataGraphFeaturesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineResourceInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineResourceInfoARM, VkDataGraphPipelineResourceInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineCompilerControlCreateInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineCompilerControlCreateInfoARM, VkDataGraphPipelineCompilerControlCreateInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineCreateInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineCreateInfoARM, VkDataGraphPipelineCreateInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineShaderModuleCreateInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineShaderModuleCreateInfoARM, VkDataGraphPipelineShaderModuleCreateInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineSessionCreateInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineSessionCreateInfoARM, VkDataGraphPipelineSessionCreateInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineSessionBindPointRequirementsInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineSessionBindPointRequirementsInfoARM, VkDataGraphPipelineSessionBindPointRequirementsInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineSessionBindPointRequirementARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineSessionBindPointRequirementARM, VkDataGraphPipelineSessionBindPointRequirementARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineSessionMemoryRequirementsInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineSessionMemoryRequirementsInfoARM, VkDataGraphPipelineSessionMemoryRequirementsInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindDataGraphPipelineSessionMemoryInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindDataGraphPipelineSessionMemoryInfoARM, VkBindDataGraphPipelineSessionMemoryInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineInfoARM, VkDataGraphPipelineInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelinePropertyQueryResultARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelinePropertyQueryResultARM, VkDataGraphPipelinePropertyQueryResultARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineIdentifierCreateInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineIdentifierCreateInfoARM, VkDataGraphPipelineIdentifierCreateInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineDispatchInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineDispatchInfoARM, VkDataGraphPipelineDispatchInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDataGraphProcessingEngineARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDataGraphProcessingEngineARM, VkPhysicalDeviceDataGraphProcessingEngineARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDataGraphOperationSupportARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDataGraphOperationSupportARM, VkPhysicalDeviceDataGraphOperationSupportARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkQueueFamilyDataGraphPropertiesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkQueueFamilyDataGraphPropertiesARM, VkQueueFamilyDataGraphPropertiesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphProcessingEngineCreateInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphProcessingEngineCreateInfoARM, VkDataGraphProcessingEngineCreateInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceQueueFamilyDataGraphProcessingEngineInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceQueueFamilyDataGraphProcessingEngineInfoARM, VkPhysicalDeviceQueueFamilyDataGraphProcessingEngineInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkQueueFamilyDataGraphProcessingEnginePropertiesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkQueueFamilyDataGraphProcessingEnginePropertiesARM, VkQueueFamilyDataGraphProcessingEnginePropertiesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineConstantTensorSemiStructuredSparsityInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineConstantTensorSemiStructuredSparsityInfoARM, VkDataGraphPipelineConstantTensorSemiStructuredSparsityInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM, VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM, VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePerStageDescriptorSetFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePerStageDescriptorSetFeaturesNV, VkPhysicalDevicePerStageDescriptorSetFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImageProcessing2FeaturesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImageProcessing2FeaturesQCOM, VkPhysicalDeviceImageProcessing2FeaturesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImageProcessing2PropertiesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImageProcessing2PropertiesQCOM, VkPhysicalDeviceImageProcessing2PropertiesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSamplerBlockMatchWindowCreateInfoQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSamplerBlockMatchWindowCreateInfoQCOM, VkSamplerBlockMatchWindowCreateInfoQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCubicWeightsFeaturesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCubicWeightsFeaturesQCOM, VkPhysicalDeviceCubicWeightsFeaturesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSamplerCubicWeightsCreateInfoQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSamplerCubicWeightsCreateInfoQCOM, VkSamplerCubicWeightsCreateInfoQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBlitImageCubicWeightsInfoQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBlitImageCubicWeightsInfoQCOM, VkBlitImageCubicWeightsInfoQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceYcbcrDegammaFeaturesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceYcbcrDegammaFeaturesQCOM, VkPhysicalDeviceYcbcrDegammaFeaturesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM, VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCubicClampFeaturesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCubicClampFeaturesQCOM, VkPhysicalDeviceCubicClampFeaturesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT, VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceLayeredDriverPropertiesMSFT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceLayeredDriverPropertiesMSFT, VkPhysicalDeviceLayeredDriverPropertiesMSFT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV, VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceTileMemoryHeapFeaturesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceTileMemoryHeapFeaturesQCOM, VkPhysicalDeviceTileMemoryHeapFeaturesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceTileMemoryHeapPropertiesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceTileMemoryHeapPropertiesQCOM, VkPhysicalDeviceTileMemoryHeapPropertiesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTileMemoryRequirementsQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTileMemoryRequirementsQCOM, VkTileMemoryRequirementsQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTileMemoryBindInfoQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTileMemoryBindInfoQCOM, VkTileMemoryBindInfoQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTileMemorySizeInfoQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTileMemorySizeInfoQCOM, VkTileMemorySizeInfoQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDecompressMemoryRegionEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDecompressMemoryRegionEXT, VkDecompressMemoryRegionEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDecompressMemoryInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDecompressMemoryInfoEXT, VkDecompressMemoryInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMemoryDecompressionFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMemoryDecompressionFeaturesEXT, VkPhysicalDeviceMemoryDecompressionFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMemoryDecompressionPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMemoryDecompressionPropertiesEXT, VkPhysicalDeviceMemoryDecompressionPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplaySurfaceStereoCreateInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplaySurfaceStereoCreateInfoNV, VkDisplaySurfaceStereoCreateInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDisplayModeStereoPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDisplayModeStereoPropertiesNV, VkDisplayModeStereoPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRawAccessChainsFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRawAccessChainsFeaturesNV, VkPhysicalDeviceRawAccessChainsFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCommandBufferInheritanceFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCommandBufferInheritanceFeaturesNV, VkPhysicalDeviceCommandBufferInheritanceFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV, VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT, VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTensorRollingBackingCreateInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTensorRollingBackingCreateInfoARM, VkTensorRollingBackingCreateInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTensorExplicitTilingFormatPropertiesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTensorExplicitTilingFormatPropertiesARM, VkTensorExplicitTilingFormatPropertiesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderFloat8FeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderFloat8FeaturesEXT, VkPhysicalDeviceShaderFloat8FeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRayTracingValidationFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRayTracingValidationFeaturesNV, VkPhysicalDeviceRayTracingValidationFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV, VkPhysicalDevicePartitionedAccelerationStructureFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePartitionedAccelerationStructurePropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePartitionedAccelerationStructurePropertiesNV, VkPhysicalDevicePartitionedAccelerationStructurePropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPartitionedAccelerationStructureFlagsNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPartitionedAccelerationStructureFlagsNV, VkPartitionedAccelerationStructureFlagsNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkStridedDeviceAddressNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkStridedDeviceAddressNV, VkStridedDeviceAddressNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBuildPartitionedAccelerationStructureIndirectCommandNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBuildPartitionedAccelerationStructureIndirectCommandNV, VkBuildPartitionedAccelerationStructureIndirectCommandNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPartitionedAccelerationStructureWriteInstanceDataNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPartitionedAccelerationStructureWriteInstanceDataNV, VkPartitionedAccelerationStructureWriteInstanceDataNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPartitionedAccelerationStructureUpdateInstanceDataNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPartitionedAccelerationStructureUpdateInstanceDataNV, VkPartitionedAccelerationStructureUpdateInstanceDataNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPartitionedAccelerationStructureWritePartitionTranslationDataNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPartitionedAccelerationStructureWritePartitionTranslationDataNV, VkPartitionedAccelerationStructureWritePartitionTranslationDataNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkWriteDescriptorSetPartitionedAccelerationStructureNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkWriteDescriptorSetPartitionedAccelerationStructureNV, VkWriteDescriptorSetPartitionedAccelerationStructureNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPartitionedAccelerationStructureInstancesInputNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPartitionedAccelerationStructureInstancesInputNV, VkPartitionedAccelerationStructureInstancesInputNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBuildPartitionedAccelerationStructureInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBuildPartitionedAccelerationStructureInfoNV, VkBuildPartitionedAccelerationStructureInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureBuildSizesInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureBuildSizesInfoKHR, VkAccelerationStructureBuildSizesInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT, VkPhysicalDeviceDeviceGeneratedCommandsFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDeviceGeneratedCommandsPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDeviceGeneratedCommandsPropertiesEXT, VkPhysicalDeviceDeviceGeneratedCommandsPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGeneratedCommandsMemoryRequirementsInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGeneratedCommandsMemoryRequirementsInfoEXT, VkGeneratedCommandsMemoryRequirementsInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkIndirectExecutionSetPipelineInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkIndirectExecutionSetPipelineInfoEXT, VkIndirectExecutionSetPipelineInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkIndirectExecutionSetShaderLayoutInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkIndirectExecutionSetShaderLayoutInfoEXT, VkIndirectExecutionSetShaderLayoutInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkIndirectExecutionSetShaderInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkIndirectExecutionSetShaderInfoEXT, VkIndirectExecutionSetShaderInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGeneratedCommandsInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGeneratedCommandsInfoEXT, VkGeneratedCommandsInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkWriteIndirectExecutionSetPipelineEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkWriteIndirectExecutionSetPipelineEXT, VkWriteIndirectExecutionSetPipelineEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkIndirectCommandsPushConstantTokenEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkIndirectCommandsPushConstantTokenEXT, VkIndirectCommandsPushConstantTokenEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkIndirectCommandsVertexBufferTokenEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkIndirectCommandsVertexBufferTokenEXT, VkIndirectCommandsVertexBufferTokenEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkIndirectCommandsIndexBufferTokenEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkIndirectCommandsIndexBufferTokenEXT, VkIndirectCommandsIndexBufferTokenEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkIndirectCommandsExecutionSetTokenEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkIndirectCommandsExecutionSetTokenEXT, VkIndirectCommandsExecutionSetTokenEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkIndirectCommandsLayoutCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkIndirectCommandsLayoutCreateInfoEXT, VkIndirectCommandsLayoutCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDrawIndirectCountIndirectCommandEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDrawIndirectCountIndirectCommandEXT, VkDrawIndirectCountIndirectCommandEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindVertexBufferIndirectCommandEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindVertexBufferIndirectCommandEXT, VkBindVertexBufferIndirectCommandEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBindIndexBufferIndirectCommandEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBindIndexBufferIndirectCommandEXT, VkBindIndexBufferIndirectCommandEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGeneratedCommandsPipelineInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGeneratedCommandsPipelineInfoEXT, VkGeneratedCommandsPipelineInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkGeneratedCommandsShaderInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkGeneratedCommandsShaderInfoEXT, VkGeneratedCommandsShaderInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkWriteIndirectExecutionSetShaderEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkWriteIndirectExecutionSetShaderEXT, VkWriteIndirectExecutionSetShaderEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImageAlignmentControlFeaturesMESA", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImageAlignmentControlFeaturesMESA, VkPhysicalDeviceImageAlignmentControlFeaturesMESA>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImageAlignmentControlPropertiesMESA", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImageAlignmentControlPropertiesMESA, VkPhysicalDeviceImageAlignmentControlPropertiesMESA>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageAlignmentControlCreateInfoMESA", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageAlignmentControlCreateInfoMESA, VkImageAlignmentControlCreateInfoMESA>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPushConstantBankInfoNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPushConstantBankInfoNV, VkPushConstantBankInfoNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePushConstantBankFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePushConstantBankFeaturesNV, VkPhysicalDevicePushConstantBankFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePushConstantBankPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePushConstantBankPropertiesNV, VkPhysicalDevicePushConstantBankPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRayTracingInvocationReorderPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRayTracingInvocationReorderPropertiesEXT, VkPhysicalDeviceRayTracingInvocationReorderPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT, VkPhysicalDeviceRayTracingInvocationReorderFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDepthClampControlFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDepthClampControlFeaturesEXT, VkPhysicalDeviceDepthClampControlFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineViewportDepthClampControlCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineViewportDepthClampControlCreateInfoEXT, VkPipelineViewportDepthClampControlCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceHdrVividFeaturesHUAWEI", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceHdrVividFeaturesHUAWEI, VkPhysicalDeviceHdrVividFeaturesHUAWEI>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkHdrVividDynamicMetadataHUAWEI", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkHdrVividDynamicMetadataHUAWEI, VkHdrVividDynamicMetadataHUAWEI>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCooperativeMatrixFlexibleDimensionsPropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCooperativeMatrixFlexibleDimensionsPropertiesNV, VkCooperativeMatrixFlexibleDimensionsPropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCooperativeMatrix2FeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCooperativeMatrix2FeaturesNV, VkPhysicalDeviceCooperativeMatrix2FeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCooperativeMatrix2PropertiesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCooperativeMatrix2PropertiesNV, VkPhysicalDeviceCooperativeMatrix2PropertiesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePipelineOpacityMicromapFeaturesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePipelineOpacityMicromapFeaturesARM, VkPhysicalDevicePipelineOpacityMicromapFeaturesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImportMemoryMetalHandleInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImportMemoryMetalHandleInfoEXT, VkImportMemoryMetalHandleInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryMetalHandlePropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryMetalHandlePropertiesEXT, VkMemoryMetalHandlePropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkMemoryGetMetalHandleInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkMemoryGetMetalHandleInfoEXT, VkMemoryGetMetalHandleInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePerformanceCountersByRegionFeaturesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePerformanceCountersByRegionFeaturesARM, VkPhysicalDevicePerformanceCountersByRegionFeaturesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePerformanceCountersByRegionPropertiesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePerformanceCountersByRegionPropertiesARM, VkPhysicalDevicePerformanceCountersByRegionPropertiesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPerformanceCounterARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPerformanceCounterARM, VkPerformanceCounterARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPerformanceCounterDescriptionARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPerformanceCounterDescriptionARM, VkPerformanceCounterDescriptionARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRenderPassPerformanceCountersByRegionBeginInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRenderPassPerformanceCountersByRegionBeginInfoARM, VkRenderPassPerformanceCountersByRegionBeginInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT, VkPhysicalDeviceVertexAttributeRobustnessFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFormatPackFeaturesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFormatPackFeaturesARM, VkPhysicalDeviceFormatPackFeaturesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE, VkPhysicalDeviceFragmentDensityMapLayeredFeaturesVALVE>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceFragmentDensityMapLayeredPropertiesVALVE", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceFragmentDensityMapLayeredPropertiesVALVE, VkPhysicalDeviceFragmentDensityMapLayeredPropertiesVALVE>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineFragmentDensityMapLayeredCreateInfoVALVE", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineFragmentDensityMapLayeredCreateInfoVALVE, VkPipelineFragmentDensityMapLayeredCreateInfoVALVE>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSetPresentConfigNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSetPresentConfigNV, VkSetPresentConfigNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePresentMeteringFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePresentMeteringFeaturesNV, VkPhysicalDevicePresentMeteringFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT, VkPhysicalDeviceMultisampledRenderToSwapchainFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkSwapchainFlagsSurfaceCapabilitiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkSwapchainFlagsSurfaceCapabilitiesEXT, VkSwapchainFlagsSurfaceCapabilitiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT, VkPhysicalDeviceZeroInitializeDeviceMemoryFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShader64BitIndexingFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShader64BitIndexingFeaturesEXT, VkPhysicalDeviceShader64BitIndexingFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCustomResolveFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCustomResolveFeaturesEXT, VkPhysicalDeviceCustomResolveFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkBeginCustomResolveInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkBeginCustomResolveInfoEXT, VkBeginCustomResolveInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCustomResolveCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCustomResolveCreateInfoEXT, VkCustomResolveCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPipelineCacheHeaderVersionDataGraphQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPipelineCacheHeaderVersionDataGraphQCOM, VkPipelineCacheHeaderVersionDataGraphQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineBuiltinModelCreateInfoQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineBuiltinModelCreateInfoQCOM, VkDataGraphPipelineBuiltinModelCreateInfoQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDataGraphModelFeaturesQCOM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDataGraphModelFeaturesQCOM, VkPhysicalDeviceDataGraphModelFeaturesQCOM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM, VkPhysicalDeviceDataGraphOpticalFlowFeaturesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkQueueFamilyDataGraphOpticalFlowPropertiesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkQueueFamilyDataGraphOpticalFlowPropertiesARM, VkQueueFamilyDataGraphOpticalFlowPropertiesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineOpticalFlowCreateInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineOpticalFlowCreateInfoARM, VkDataGraphPipelineOpticalFlowCreateInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphOpticalFlowImageFormatPropertiesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphOpticalFlowImageFormatPropertiesARM, VkDataGraphOpticalFlowImageFormatPropertiesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphOpticalFlowImageFormatInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphOpticalFlowImageFormatInfoARM, VkDataGraphOpticalFlowImageFormatInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineOpticalFlowDispatchInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineOpticalFlowDispatchInfoARM, VkDataGraphPipelineOpticalFlowDispatchInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineResourceInfoImageLayoutARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineResourceInfoImageLayoutARM, VkDataGraphPipelineResourceInfoImageLayoutARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineSingleNodeConnectionARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineSingleNodeConnectionARM, VkDataGraphPipelineSingleNodeConnectionARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineSingleNodeCreateInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineSingleNodeCreateInfoARM, VkDataGraphPipelineSingleNodeCreateInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderLongVectorFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderLongVectorFeaturesEXT, VkPhysicalDeviceShaderLongVectorFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderLongVectorPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderLongVectorPropertiesEXT, VkPhysicalDeviceShaderLongVectorPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC, VkPhysicalDevicePipelineCacheIncrementalModeFeaturesSEC>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT, VkPhysicalDeviceShaderUniformBufferUnsizedArrayFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkComputeOccupancyPriorityParametersNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkComputeOccupancyPriorityParametersNV, VkComputeOccupancyPriorityParametersNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV, VkPhysicalDeviceComputeOccupancyPriorityFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCooperativeMatrixProperties2EXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCooperativeMatrixProperties2EXT, VkCooperativeMatrixProperties2EXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCooperativeMatrixInfo2EXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCooperativeMatrixInfo2EXT, VkPhysicalDeviceCooperativeMatrixInfo2EXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT, VkPhysicalDeviceCooperativeMatrixMaintenance1FeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT, VkPhysicalDeviceShaderSubgroupPartitionedFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT, VkPhysicalDeviceShaderOCPMicroscalingTypesFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE, VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkThrottleHintSubmitInfoSEC", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkThrottleHintSubmitInfoSEC, VkThrottleHintSubmitInfoSEC>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceThrottleHintFeaturesSEC", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceThrottleHintFeaturesSEC, VkPhysicalDeviceThrottleHintFeaturesSEC>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM, VkPhysicalDeviceDataGraphNeuralAcceleratorStatisticsFeaturesARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineNeuralStatisticsCreateInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineNeuralStatisticsCreateInfoARM, VkDataGraphPipelineNeuralStatisticsCreateInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDataGraphPipelineSessionNeuralStatisticsCreateInfoARM", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDataGraphPipelineSessionNeuralStatisticsCreateInfoARM, VkDataGraphPipelineSessionNeuralStatisticsCreateInfoARM>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT, VkPhysicalDevicePrimitiveRestartIndexFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceImageTilingControlFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceImageTilingControlFeaturesEXT, VkPhysicalDeviceImageTilingControlFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkImageTilingControlCreateInfoEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkImageTilingControlCreateInfoEXT, VkImageTilingControlCreateInfoEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV, VkPhysicalDeviceCooperativeMatrixDecodeVectorFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDevicePrivateDataBaseHandleFeaturesNV", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDevicePrivateDataBaseHandleFeaturesNV, VkPhysicalDevicePrivateDataBaseHandleFeaturesNV>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureBuildRangeInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureBuildRangeInfoKHR, VkAccelerationStructureBuildRangeInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureGeometryTrianglesDataKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureGeometryTrianglesDataKHR, VkAccelerationStructureGeometryTrianglesDataKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureGeometryAabbsDataKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureGeometryAabbsDataKHR, VkAccelerationStructureGeometryAabbsDataKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureGeometryInstancesDataKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureGeometryInstancesDataKHR, VkAccelerationStructureGeometryInstancesDataKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureBuildGeometryInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureBuildGeometryInfoKHR, VkAccelerationStructureBuildGeometryInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureCreateInfoKHR, VkAccelerationStructureCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkWriteDescriptorSetAccelerationStructureKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkWriteDescriptorSetAccelerationStructureKHR, VkWriteDescriptorSetAccelerationStructureKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceAccelerationStructureFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceAccelerationStructureFeaturesKHR, VkPhysicalDeviceAccelerationStructureFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceAccelerationStructurePropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceAccelerationStructurePropertiesKHR, VkPhysicalDeviceAccelerationStructurePropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureDeviceAddressInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureDeviceAddressInfoKHR, VkAccelerationStructureDeviceAddressInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkAccelerationStructureVersionInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkAccelerationStructureVersionInfoKHR, VkAccelerationStructureVersionInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyAccelerationStructureToMemoryInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyAccelerationStructureToMemoryInfoKHR, VkCopyAccelerationStructureToMemoryInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyMemoryToAccelerationStructureInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyMemoryToAccelerationStructureInfoKHR, VkCopyMemoryToAccelerationStructureInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkCopyAccelerationStructureInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkCopyAccelerationStructureInfoKHR, VkCopyAccelerationStructureInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRayTracingShaderGroupCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRayTracingShaderGroupCreateInfoKHR, VkRayTracingShaderGroupCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRayTracingPipelineInterfaceCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRayTracingPipelineInterfaceCreateInfoKHR, VkRayTracingPipelineInterfaceCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkRayTracingPipelineCreateInfoKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkRayTracingPipelineCreateInfoKHR, VkRayTracingPipelineCreateInfoKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRayTracingPipelineFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRayTracingPipelineFeaturesKHR, VkPhysicalDeviceRayTracingPipelineFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRayTracingPipelinePropertiesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRayTracingPipelinePropertiesKHR, VkPhysicalDeviceRayTracingPipelinePropertiesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkStridedDeviceAddressRegionKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkStridedDeviceAddressRegionKHR, VkStridedDeviceAddressRegionKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkTraceRaysIndirectCommandKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkTraceRaysIndirectCommandKHR, VkTraceRaysIndirectCommandKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceRayQueryFeaturesKHR", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceRayQueryFeaturesKHR, VkPhysicalDeviceRayQueryFeaturesKHR>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMeshShaderFeaturesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMeshShaderFeaturesEXT, VkPhysicalDeviceMeshShaderFeaturesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkPhysicalDeviceMeshShaderPropertiesEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkPhysicalDeviceMeshShaderPropertiesEXT, VkPhysicalDeviceMeshShaderPropertiesEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

TEST_CASE("encode oracle: VkDrawMeshTasksIndirectCommandEXT", "[oracle]")
{
    const auto result = gfxrecon::test::encode_oracle::CompareEncodeToOracle<gfxrecon::schema::vulkan::api_types::VkDrawMeshTasksIndirectCommandEXT, VkDrawMeshTasksIndirectCommandEXT>();
    INFO("library bytes " << result.library_size << ", oracle bytes " << result.oracle_size);
    CHECK(result.same);
}

