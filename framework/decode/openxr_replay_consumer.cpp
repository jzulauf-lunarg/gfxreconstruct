/*
** Copyright (c) 2024 LunarG, Inc.
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

#if ENABLE_OPENXR_SUPPORT
#include <array>
#include "util/platform.h"
#include "util/defines.h"

#ifdef XR_NO_PROTOTYPES
#undef XR_NO_PROTOTYPES
#endif
#include "format/platform_types.h"
#include "openxr/openxr_platform.h"
#include "openxr_next_node.h"

#include "openxr_replay_consumer.h"
#include "vulkan_replay_consumer_base.h"
#include "Vulkan-Utility-Libraries/vk_format_utils.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)
OpenXrReplayConsumer::OpenXrReplayConsumer() {}

OpenXrReplayConsumer::~OpenXrReplayConsumer() {}

void OpenXrReplayConsumer::SwapchainData::MapVulkanSwapchainImageFlags(XrSwapchainUsageFlags xr_flags,
                                                                       VkImageCreateInfo&    info)
{
    // NOTE: This is Vulkan specific.
    struct ImageUsageMap
    {
        XrSwapchainUsageFlags xr;
        VkImageUsageFlagBits  vk;
    };
    struct ImageCreateMap
    {
        XrSwapchainUsageFlags xr;
        VkImageCreateFlagBits vk;
    };
    static std::array<ImageUsageMap, 7> usage_map = {
        { { XR_SWAPCHAIN_USAGE_COLOR_ATTACHMENT_BIT, VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT },
          { XR_SWAPCHAIN_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT, VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT },
          { XR_SWAPCHAIN_USAGE_UNORDERED_ACCESS_BIT, VK_IMAGE_USAGE_STORAGE_BIT },
          { XR_SWAPCHAIN_USAGE_TRANSFER_SRC_BIT, VK_IMAGE_USAGE_TRANSFER_SRC_BIT },
          { XR_SWAPCHAIN_USAGE_TRANSFER_DST_BIT, VK_IMAGE_USAGE_TRANSFER_DST_BIT },
          { XR_SWAPCHAIN_USAGE_SAMPLED_BIT, VK_IMAGE_USAGE_SAMPLED_BIT },
          { XR_SWAPCHAIN_USAGE_INPUT_ATTACHMENT_BIT_KHR, VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT } }
    };
    static std::array<ImageCreateMap, 1> create_map = { {
        { XR_SWAPCHAIN_USAGE_MUTABLE_FORMAT_BIT, VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT },
    } };

    XrSwapchainUsageFlags mapped_flags = 0;
    for (const auto& entry : usage_map)
    {
        if (entry.xr & xr_flags)
        {
            info.usage |= entry.vk;
            mapped_flags |= entry.xr;
        }
    }
    for (const auto& entry : create_map)
    {
        if (entry.xr & xr_flags)
        {
            info.flags |= entry.vk;
            mapped_flags |= entry.xr;
        }
    }
    // WIP: Properly log and handle this
    assert(xr_flags == mapped_flags);
}

XrResult OpenXrReplayConsumer::SwapchainData::InitSwapchainData(const XrSwapchainCreateInfo& xr_info,
                                                                VulkanSwapchainInfo&         vk_swap)
{
    XrResult xr_result = XR_SUCCESS; // WIP: Determine if there is a better code for this

    // Set up the flags and usages
    VkImageCreateInfo& image_create_info = vk_swap.image_create_info;
    image_create_info                    = VkImageCreateInfo{ VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO, nullptr };

    MapVulkanSwapchainImageFlags(xr_info.usageFlags, image_create_info);

    // Grab supported extension structs
    auto xr_info_meta = gfxrecon::util::GetNextOfType<XrVulkanSwapchainCreateInfoMETA>(xr_info.next);
    if (xr_info_meta)
    {
        // Apply the extension information
        image_create_info.usage |= xr_info_meta->additionalUsageFlags;
        image_create_info.flags |= xr_info_meta->additionalCreateFlags;

        // Backing store for the deep copy is within the VulkanSwapchainInfo
        vk_swap.xr_info_meta      = *xr_info_meta;
        vk_swap.xr_info_meta.next = nullptr;
        create_info.next          = &vk_swap.xr_info_meta;
    }

    // Need to be able to copy to the real swapchain
    image_create_info.usage |= VK_IMAGE_USAGE_TRANSFER_SRC_BIT;

    // Cube swapchains specific flags
    if (xr_info.faceCount == 6)
    {
        image_create_info.flags |= VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT;
    }

    // And the reset of the create info
    image_create_info.imageType = VK_IMAGE_TYPE_2D;
    image_create_info.format    = static_cast<VkFormat>(xr_info.format);
    VkExtent3D& extent          = image_create_info.extent;
    extent.width                = xr_info.width;
    extent.height               = xr_info.height;
    extent.depth                = 1U;
    image_create_info.mipLevels = xr_info.mipCount;

    // NOTE: Not sure if these are in face major or array major order, but shouldn't matter
    //       to replay unless runtimes vary.
    image_create_info.arrayLayers = xr_info.arraySize * xr_info.faceCount,

    image_create_info.samples = VK_SAMPLE_COUNT_1_BIT;
    image_create_info.tiling  = VK_IMAGE_TILING_OPTIMAL;

    image_create_info.sharingMode   = VK_SHARING_MODE_EXCLUSIVE;
    image_create_info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;

    VkImageSubresourceRange& subres_range = vk_swap.whole_range;
    subres_range.aspectMask               = 0;
    subres_range.aspectMask |= vkuFormatHasDepth(image_create_info.format) ? VK_IMAGE_ASPECT_DEPTH_BIT : 0;
    subres_range.aspectMask |= vkuFormatHasStencil(image_create_info.format) ? VK_IMAGE_ASPECT_STENCIL_BIT : 0;

    if (subres_range.aspectMask)
    {
        vk_swap.layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    }
    else if (vkuFormatIsColor(image_create_info.format))
    {
        subres_range.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        vk_swap.layout          = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    }
    else
    {
        // WIP: Properly log and handle this
        assert(subres_range.aspectMask);
        vk_swap.layout = VK_IMAGE_LAYOUT_UNDEFINED;
    }

    subres_range.baseMipLevel   = 0;
    subres_range.levelCount     = image_create_info.mipLevels;
    subres_range.baseArrayLayer = 0;
    subres_range.layerCount     = image_create_info.arrayLayers;

    return xr_result;
}

void OpenXrReplayConsumer::SetVulkanReplayConsumer(VulkanReplayConsumerBase* vulkan_replay_consumer)
{
    vulkan_replay_consumer_ = vulkan_replay_consumer;
}

void OpenXrReplayConsumer::Process_xrCreateApiLayerInstance(
    const ApiCallInfo&                                  call_info,
    XrResult                                            returnValue,
    StructPointerDecoder<Decoded_XrInstanceCreateInfo>* info,
    StructPointerDecoder<Decoded_XrApiLayerCreateInfo>* apiLayerInfo,
    HandlePointerDecoder<XrInstance>*                   instance)
{

    if (!instance->IsNull())
    {
        instance->SetHandleLength(1);
    }
    XrInstance* replay_instance = instance->GetHandlePointer();

    XrInstanceCreateInfo* create_info = info->GetPointer();
    assert(create_info);

    auto result = xrCreateInstance(create_info, replay_instance);
    if (result >= 0)
    {
        // Create the mapping between the recorded and replay instance handles
        AddHandleMapping(format::kNullHandleId, *instance, instance_info_map_);
    }
    else
    {
        // WIP: Properly log and handle this
        assert(result > 0);
    }
}

void OpenXrReplayConsumer::Process_xrGetSystem(const ApiCallInfo&                             call_info,
                                               XrResult                                       returnValue,
                                               format::HandleId                               instance,
                                               StructPointerDecoder<Decoded_XrSystemGetInfo>* getInfo,
                                               HandlePointerDecoder<XrSystemId>*              systemId)
{
    // WIP: Properly log and handle this
    assert(systemId->GetPointer());

    auto* instance_info = GetMappingInfo(instance, instance_info_map_);

    // Get a system that matches the request info (from capture
    XrSystemId replay_system_id;
    auto       result = xrGetSystem(instance_info->handle, getInfo->GetPointer(), &replay_system_id);
    if (result < 0)
    {
        assert("always assert: text = " == "GetSystem failed");
    }
    AddValueMapping(*systemId, replay_system_id, system_id_info_map_);
}

void OpenXrReplayConsumer::Process_xrEnumerateViewConfigurationViews(
    const ApiCallInfo&                                     call_info,
    XrResult                                               returnValue,
    format::HandleId                                       instance,
    XrSystemId                                             systemId,
    XrViewConfigurationType                                viewConfigurationType,
    uint32_t                                               viewCapacityInput,
    PointerDecoder<uint32_t>*                              viewCountOutput,
    StructPointerDecoder<Decoded_XrViewConfigurationView>* views)
{}

void OpenXrReplayConsumer::Process_xrGetVulkanGraphicsRequirementsKHR(
    const ApiCallInfo&                                             call_info,
    XrResult                                                       returnValue,
    format::HandleId                                               instance,
    XrSystemId                                                     systemId,
    StructPointerDecoder<Decoded_XrGraphicsRequirementsVulkanKHR>* graphicsRequirements)
{
    auto* instance_info = GetMappingInfo(instance, instance_info_map_);

    // WIP: Build a table of commonly used extension entry points
    PFN_xrGetVulkanGraphicsRequirementsKHR getVulkanGraphicsRequirementsKHR;

    xrGetInstanceProcAddr(instance_info->handle,
                          "xrGetVulkanGraphicsRequirementsKHR",
                          (PFN_xrVoidFunction*)(&getVulkanGraphicsRequirementsKHR));
    // WIP: Properly compare/adjust? The graphic requirement from the playback runtime with the
    //      captured graphicsRequirements
    // WIP: Properly compare/adjust systemId on playback and runtime
    XrGraphicsRequirementsVulkanKHR dummy{ XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN_KHR };
    auto                            system_id_mapping = GetMappingInfo(systemId, system_id_info_map_);
    auto result = getVulkanGraphicsRequirementsKHR(instance_info->handle, system_id_mapping->replay_value, &dummy);
    if (result < 0)
    {
        assert("always assert: text = " == "GetVulkanRequirements failed");
    }
}

void OpenXrReplayConsumer::Process_xrGetVulkanGraphicsDeviceKHR(
    const ApiCallInfo&                      call_info,
    XrResult                                returnValue,
    format::HandleId                        instance,
    XrSystemId                              systemId,
    format::HandleId                        vkInstance,
    HandlePointerDecoder<VkPhysicalDevice>* vkPhysicalDevice)
{
    // Map the inputs
    auto*      instance_info      = GetMappingInfo(instance, instance_info_map_);
    auto*      system_id_info     = GetMappingInfo(systemId, system_id_info_map_);
    VkInstance replay_vk_instance = vulkan_replay_consumer_->MapInstance(vkInstance);

    // WIP: Properly log and handle this
    assert(instance_info);
    assert(system_id_info);
    assert(replay_vk_instance != VK_NULL_HANDLE);

    // Set up the output
    if (!vkPhysicalDevice->IsNull())
    {
        vkPhysicalDevice->SetHandleLength(1);
    }
    VkPhysicalDevice* replay_device = vkPhysicalDevice->GetHandlePointer();

    // WIP: Build a table of commonly used extension entry points
    PFN_xrGetVulkanGraphicsDeviceKHR getVulkanGraphicsDeviceKHR;
    xrGetInstanceProcAddr(
        instance_info->handle, "xrGetVulkanGraphicsDeviceKHR", (PFN_xrVoidFunction*)(&getVulkanGraphicsDeviceKHR));

    auto result = getVulkanGraphicsDeviceKHR(
        instance_info->handle, system_id_info->replay_value, replay_vk_instance, replay_device);

    // Create result mapping
    if (result >= 0)
    {
        // Create the mapping between the recorded and replay instance handles
        AddHandleMapping(format::kNullHandleId, *vkPhysicalDevice, vk_physical_device_info_map_);
    }
    else
    {
        // WIP: Properly log and handle this
        assert(result > 0);
    }
}

void OpenXrReplayConsumer::Process_xrCreateSession(const ApiCallInfo&                                 call_info,
                                                   XrResult                                           returnValue,
                                                   gfxrecon::format::HandleId                         instance,
                                                   StructPointerDecoder<Decoded_XrSessionCreateInfo>* info,
                                                   HandlePointerDecoder<XrSession>*                   session)
{
    if (!session->IsNull())
    {
        session->SetHandleLength(1);
    }
    XrSession* replay_session = session->GetHandlePointer();

    XrSessionCreateInfo* create_info = info->GetPointer();
    assert(create_info);

    auto* instance_info = GetMappingInfo(instance, instance_info_map_);
    // WIP: Properly log and handle this
    assert(instance_info);

    auto* decoded_info = info->GetMetaStructPointer();

    // Find and translate the graphics binding
    MapStructHandles(decoded_info);

    // XrSessionCreateInfo
    auto result = xrCreateSession(instance_info->handle, create_info, replay_session);
    if (result >= 0)
    {
        AddHandleMapping(instance, *session, session_info_map_);
        SessionData& session_data = AddSessionData(*replay_session);
        session_data.AddGraphicsBinding(MakeGraphicsBinding(decoded_info));
    }
    else
    {
        // WIP: Properly log and handle this
        assert(result > 0);
    }
}
void OpenXrReplayConsumer::Process_xrCreateSwapchain(const ApiCallInfo&                                   call_info,
                                                     XrResult                                             returnValue,
                                                     format::HandleId                                     session,
                                                     StructPointerDecoder<Decoded_XrSwapchainCreateInfo>* createInfo,
                                                     HandlePointerDecoder<XrSwapchain>*                   swapchain)
{

    if (!swapchain->IsNull())
    {
        swapchain->SetHandleLength(1);
    }
    XrSwapchain* replay_swapchain = swapchain->GetHandlePointer();

    XrSwapchainCreateInfo* create_info = createInfo->GetPointer();
    assert(create_info);
    // WIP: Properly log and handle this
    assert(create_info);

    auto* session_info = GetMappingInfo(session, session_info_map_);
    // WIP: Properly log and handle this
    assert(session_info);

    // Add transfer dest to allow virtual swapchain to copy
    XrSwapchainCreateInfo amended_info = *create_info;
    amended_info.usageFlags |= XR_SWAPCHAIN_USAGE_TRANSFER_DST_BIT;

    auto result = xrCreateSwapchain(session_info->handle, &amended_info, replay_swapchain);
    if (result >= 0)
    {
        AddHandleMapping(session, *swapchain, swapchain_info_map_);
        auto&          session_data = GetSessionData(session_info->handle);
        SwapchainData& swap_data    = AddSwapchainData(*replay_swapchain);
        swap_data.InitSwapchainData(session_data.GetGraphicsBinding(), *create_info, *replay_swapchain);
    }
    else
    {
        // WIP: Properly log and handle this
        assert(result >= 0);
    }
}

void OpenXrReplayConsumer::Process_xrEnumerateSwapchainImages(
    const ApiCallInfo&                                        call_info,
    XrResult                                                  returnValue,
    format::HandleId                                          swapchain,
    uint32_t                                                  imageCapacityInput,
    PointerDecoder<uint32_t>*                                 imageCountOutput,
    StructPointerDecoder<Decoded_XrSwapchainImageBaseHeader>* images)
{
    // WIP: Is there anything we actually need to do until there's a real payload?
    if (imageCapacityInput == 0)
        return;

    if (returnValue != XR_SUCCESS)
        return;

    auto* swapchain_info = GetMappingInfo(swapchain, swapchain_info_map_);
    // WIP: Properly log and handle this
    assert(swapchain_info);
    XrSwapchain replay_handle  = swapchain_info->handle;
    auto&       swapchain_data = GetSwapchainData(replay_handle);

    XrResult result = swapchain_data.EnumerateReplaySwapchain();

    if (result >= 0)
    {
        result = swapchain_data.InitVirtualSwapchain(imageCountOutput, images);
    }
}

void OpenXrReplayConsumer::Process_xrAcquireSwapchainImage(
    const ApiCallInfo&                                         call_info,
    XrResult                                                   returnValue,
    format::HandleId                                           swapchain,
    StructPointerDecoder<Decoded_XrSwapchainImageAcquireInfo>* acquireInfo,
    PointerDecoder<uint32_t>*                                  index)
{
    auto swapchain_info = GetMappingInfo(swapchain, swapchain_info_map_);
    // WIP: Properly log and handle this
    assert(swapchain_info);
    XrSwapchain replay_handle = swapchain_info->handle;

    // WIP add handle mapping for acquireInfo, though only needed for non-null next

    if (!index->IsNull())
    {
        index->AllocateOutputData(1);
    }
    uint32_t* replay_index = index->GetOutputPointer();

    auto result = xrAcquireSwapchainImage(replay_handle, acquireInfo->GetPointer(), replay_index);

    if (result >= 0)
    {
        // Need to map indexes between capture and replay, and store acquire order, and prepare the proxy images
        XrResult xr_result = GetSwapchainData(replay_handle).AcquireSwapchainImage(*index->GetPointer(), *replay_index);
        if (xr_result != XR_SUCCESS)
        {
            // WIP: Properly log and handle this
            assert(xr_result == XR_SUCCESS);
        }
    }
    else
    {
        // WIP: Properly log and handle this
        assert(result >= 0);
    }
}

void OpenXrReplayConsumer::Process_xrWaitSwapchainImage(
    const ApiCallInfo&                                      call_info,
    XrResult                                                returnValue,
    format::HandleId                                        swapchain,
    StructPointerDecoder<Decoded_XrSwapchainImageWaitInfo>* waitInfo)
{
    auto swapchain_info = GetMappingInfo(swapchain, swapchain_info_map_);
    // WIP: Properly log and handle this
    assert(swapchain_info);

    if (returnValue == XR_SUCCESS)
    {
        // Only attempt to wait if the captured wait succeeded
        assert(waitInfo);

        // WIP: Call MapStructHandles for wait_info->next mapping (extensions only)
        XrSwapchainImageWaitInfo* wait_info = waitInfo->GetPointer();
        // WIP: Properly log and handle this
        assert(wait_info);
        XrResult result;

        // WIP: Add retry limit
        do
        {
            result = xrWaitSwapchainImage(swapchain_info->handle, wait_info);
        } while (!XR_SUCCEEDED(result) && (result == XR_TIMEOUT_EXPIRED));

        if (XR_SUCCEEDED(result))
        {
            GetSwapchainData(swapchain_info->handle).WaitedWithoutTimeout();
        }

        // WIP: Properly log and handle this
        assert(result == XR_SUCCESS);
    }
}

void OpenXrReplayConsumer::Process_xrReleaseSwapchainImage(
    const ApiCallInfo&                                         call_info,
    XrResult                                                   returnValue,
    format::HandleId                                           swapchain,
    StructPointerDecoder<Decoded_XrSwapchainImageReleaseInfo>* releaseInfo)
{
    auto swapchain_info = GetMappingInfo(swapchain, swapchain_info_map_);
    // WIP: Properly log and handle this
    assert(swapchain_info);

    // NULL release value is valid
    XrSwapchainImageReleaseInfo* release_info = nullptr;
    if (releaseInfo)
    {
        release_info = releaseInfo->GetPointer();
    }

    if (release_info)
    {
        // WIP: MapStructHandles for next, extensions only
    }

    // Run the virtual swapchain logic *before* the call, as the runtime assumes the application
    // (and here replay is in the role of the application) will not touch the swapchain images *after* they
    // are released
    GetSwapchainData(swapchain_info->handle).ReleaseSwapchainImage(releaseInfo);

    auto result = xrReleaseSwapchainImage(swapchain_info->handle, release_info);

    if (result < 0)
    {
        // WIP: Properly log and handle this
        assert(result > 0);
    }
}

void OpenXrReplayConsumer::Process_xrPollEvent(const ApiCallInfo&                               call_info,
                                               XrResult                                         returnValue,
                                               format::HandleId                                 instance,
                                               StructPointerDecoder<Decoded_XrEventDataBuffer>* eventData)
{
    if (returnValue != XR_SUCCESS)
    {
        // Capture did not return an event, skip
        return;
    }

    auto* instance_info = GetMappingInfo(instance, instance_info_map_);
    // WIP: Properly log and handle this
    assert(instance_info);

    XrEventDataBuffer* capture_event = eventData->GetPointer();

    XrEventDataBuffer replay_event;
    // WIP: Put this constant somewhere interesting
    const uint32_t kRetryLimit = 10000;
    uint32_t       retry_count = 0;

    do
    {
        replay_event = XrEventDataBuffer{ XR_TYPE_EVENT_DATA_BUFFER };
        auto result  = xrPollEvent(instance_info->handle, &replay_event);
        retry_count++;

        if (capture_event->type != replay_event.type)
        {
            if (result == XR_SUCCESS)
            {
                GFXRECON_LOG_WARNING("Skipping event %u", replay_event.type);
            }
            else
            {
                // Yield and retry
                std::this_thread::sleep_for(std::chrono::nanoseconds(1));
            }
        }
    } while ((retry_count < kRetryLimit) && capture_event->type != replay_event.type);

    if (capture_event->type != replay_event.type)
    {
        assert("always assert: text=" == "event not found");
    }
}
void OpenXrReplayConsumer::Process_xrBeginSession(const ApiCallInfo&                                call_info,
                                                  XrResult                                          returnValue,
                                                  format::HandleId                                  session,
                                                  StructPointerDecoder<Decoded_XrSessionBeginInfo>* beginInfo)
{
    auto* session_info = GetMappingInfo(session, session_info_map_);
    // WIP: Properly log and handle this
    assert(session_info);

    XrSessionBeginInfo* begin_info = beginInfo->GetPointer();
    assert(begin_info);

    auto result = xrBeginSession(session_info->handle, begin_info);

    if (result < 0)
    {
        // WIP: Properly log and handle this
        assert(result > 0);
    }
}

void OpenXrReplayConsumer::Process_xrWaitFrame(const ApiCallInfo&                             call_info,
                                               XrResult                                       returnValue,
                                               format::HandleId                               session,
                                               StructPointerDecoder<Decoded_XrFrameWaitInfo>* frameWaitInfo,
                                               StructPointerDecoder<Decoded_XrFrameState>*    frameState)
{
    auto* session_info = GetMappingInfo(session, session_info_map_);
    // WIP: Properly log and handle this
    assert(session_info);

    XrFrameWaitInfo* capture_frame_wait_info = frameWaitInfo->GetPointer();

    XrFrameState replay_frame_state = { XR_TYPE_FRAME_STATE };
    auto         result             = xrWaitFrame(session_info->handle, capture_frame_wait_info, &replay_frame_state);
    if (result < 0)
    {
        // WIP: Properly log and handle this
        assert("always assert: text=" == "wait frame failed");
    }
    else
    {
        // Store wait frame information for this session if needed later
        SessionData& session_data      = GetSessionData(session_info->handle);
        session_data.SetDisplayTime(replay_frame_state.predictedDisplayTime);
    }
}

void OpenXrReplayConsumer::Process_xrBeginFrame(const ApiCallInfo&                              call_info,
                                                XrResult                                        returnValue,
                                                format::HandleId                                session,
                                                StructPointerDecoder<Decoded_XrFrameBeginInfo>* frameBeginInfo)
{
    auto* session_info = GetMappingInfo(session, session_info_map_);
    // WIP: Properly log and handle this
    assert(session_info);

    XrFrameBeginInfo* capture_frame_begin_info = frameBeginInfo->GetPointer();
    auto              result                   = xrBeginFrame(session_info->handle, capture_frame_begin_info);

    if (result < 0)
    {
        // WIP: Properly log and handle this
        assert("always assert: text=" == "begin frame failed");
    }
}

void OpenXrReplayConsumer::Process_xrEndFrame(const ApiCallInfo&                            call_info,
                                              XrResult                                      returnValue,
                                              format::HandleId                              session,
                                              StructPointerDecoder<Decoded_XrFrameEndInfo>* frameEndInfo)
{
    auto* session_info = GetMappingInfo(session, session_info_map_);
    // WIP: Properly log and handle this
    assert(session_info);
    XrSession replay_session = session_info->handle;

    MapStructHandles(frameEndInfo->GetMetaStructPointer());
    XrFrameEndInfo replay_end_info = *frameEndInfo->GetPointer();
    replay_end_info.displayTime    = GetSessionData(replay_session).GetDisplayTime();
    auto result                    = xrEndFrame(replay_session, &replay_end_info);

    if (result < 0)
    {
        // WIP: Properly log and handle this
        assert("always assert: text=" == "end frame failed");
    }
}

void OpenXrReplayConsumer::Process_xrEnumerateReferenceSpaces(const ApiCallInfo&                    call_info,
                                                              XrResult                              returnValue,
                                                              format::HandleId                      session,
                                                              uint32_t                              spaceCapacityInput,
                                                              PointerDecoder<uint32_t>*             spaceCountOutput,
                                                              PointerDecoder<XrReferenceSpaceType>* spaces)
{
    auto* session_info = GetMappingInfo(session, session_info_map_);
    // WIP: Properly log and handle this
    assert(session_info);

    // Only make the call when we're going to look at the results
    if (spaceCapacityInput)
    {
        const XrSession replay_session = session_info->handle;
        uint32_t*       output_count   = spaceCountOutput->GetPointer();
        if (output_count && *output_count)
        {
            uint32_t replay_req = 0;
            xrEnumerateReferenceSpaces(replay_session, 0, &replay_req, nullptr);
            std::vector<XrReferenceSpaceType> replay_reference_spaces(replay_req);
            uint32_t                          replay_count = 0;
            xrEnumerateReferenceSpaces(replay_session, replay_req, &replay_count, replay_reference_spaces.data());

            GetSessionData(replay_session).AddReferenceSpaces(replay_reference_spaces);

            // Don't check whether a captured space type is missing, only report if/when a space is being created
        }
    }
}

void OpenXrReplayConsumer::Process_xrCreateReferenceSpace(
    const ApiCallInfo&                                        call_info,
    XrResult                                                  returnValue,
    format::HandleId                                          session,
    StructPointerDecoder<Decoded_XrReferenceSpaceCreateInfo>* createInfo,
    HandlePointerDecoder<XrSpace>*                            space)
{
    auto* session_info = GetMappingInfo(session, session_info_map_);
    // WIP: Properly log and handle this
    assert(session_info);

    if (!space->IsNull())
    {
        space->SetHandleLength(1);
    }
    XrSpace* replay_space = space->GetHandlePointer();

    MapStructHandles(createInfo->GetMetaStructPointer());

    auto result = xrCreateReferenceSpace(session_info->handle, createInfo->GetPointer(), replay_space);

    if (result >= 0)
    {
        // Create the mapping between the recorded and replay instance handles
        AddHandleMapping(session, *space, space_info_map_);
    }
    else
    {
        // WIP: Properly log and handle this
        assert(result > 0);
    }
}

void OpenXrReplayConsumer::MapNextStructHandles(OpenXrNextNode* next)
{
    if (!next)
        return; // Don't require callers to validate next

    void* value   = next->GetPointer();
    void* wrapper = next->GetMetaStructPointer();

    if (!value || !wrapper)
    {
        return;
    }

    const XrBaseInStructure* base = reinterpret_cast<const XrBaseInStructure*>(value);
    switch (base->type)
    {
        default:
            // TODO: Report or raise fatal error for unrecongized sType?
            assert("always assert: text=" == "unknown struct type");
            break;
        case XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR:
            MapStructHandles(reinterpret_cast<Decoded_XrGraphicsBindingVulkanKHR*>(wrapper));
    }
}

void OpenXrReplayConsumer::MapStructHandles(Decoded_XrSessionCreateInfo* wrapper)
{
    assert(wrapper);
    MapNextStructHandles(wrapper->next);

    auto                 system_id_info = GetMappingInfo(wrapper->systemId, system_id_info_map_);
    XrSessionCreateInfo* value          = wrapper->decoded_value;
    value->systemId                     = system_id_info->replay_value;
}

void OpenXrReplayConsumer::MapStructHandles(Decoded_XrReferenceSpaceCreateInfo* wrapper)
{
    assert(wrapper);
    MapNextStructHandles(wrapper->next);
}

void OpenXrReplayConsumer::MapStructHandles(Decoded_XrFrameEndInfo* wrapper)
{
    assert(wrapper);
    MapNextStructHandles(wrapper->next);

    XrFrameEndInfo* value = wrapper->decoded_value;
    MapStructHandles(value->layerCount, wrapper->layers->GetMetaStructPointer());
}

void OpenXrReplayConsumer::MapStructHandles(uint32_t layer_count, Decoded_XrCompositionLayerBaseHeader** layer_wrappers)
{
    if (!layer_wrappers || (layer_count == 0))
    {
        return;
    }

    for (uint32_t layer = 0; layer < layer_count; layer++)
    {
        Decoded_XrCompositionLayerBaseHeader* base_wrapper = layer_wrappers[layer];
        if (!base_wrapper)
        {
            continue;
        }
        XrCompositionLayerBaseHeader* base_value = base_wrapper->decoded_value;
        switch (base_value->type)
        {
            default:
                // WIP: Properly log and handle this
                assert("always assert: text = " == "Unknown composition layer type");
                break;
            case XR_TYPE_COMPOSITION_LAYER_PROJECTION:
                MapStructHandles(reinterpret_cast<Decoded_XrCompositionLayerProjection*>(base_wrapper));
                break;
        }
    }
}

void OpenXrReplayConsumer::MapStructHandles(Decoded_XrCompositionLayerProjection* wrapper)
{
    assert(wrapper);
    MapNextStructHandles(wrapper->next);

    XrCompositionLayerProjection* value = wrapper->decoded_value;
    if (!value)
    {
        return;
    }

    auto* space_info = GetMappingInfo(wrapper->space, space_info_map_);
    // WIP: Properly log and handle this
    assert(space_info);

    value->space = space_info->handle;

    if (wrapper->views)
    {
        for (uint32_t view = 0; view < value->viewCount; view++)
        {
            MapStructHandles(wrapper->views[view].GetMetaStructPointer());
        }
    }
}

void OpenXrReplayConsumer::MapStructHandles(Decoded_XrCompositionLayerProjectionView* wrapper)
{
    assert(wrapper);
    MapNextStructHandles(wrapper->next);

    if (wrapper->subImage)
    {
        MapStructHandles(wrapper->subImage);
    }
}

void OpenXrReplayConsumer::MapStructHandles(Decoded_XrSwapchainSubImage* wrapper)
{
    assert(wrapper);

    auto* value = wrapper->decoded_value;
    if (!value)
    {
        return;
    }

    auto replay_swapchain = GetMappingInfo(wrapper->swapchain, swapchain_info_map_);
    // WIP: Properly log and handle this
    assert(replay_swapchain);

    value->swapchain = replay_swapchain->handle;
}

void OpenXrReplayConsumer::MapStructHandles(Decoded_XrGraphicsBindingVulkanKHR* wrapper)
{
    assert(wrapper);
    MapNextStructHandles(wrapper->next);

    XrGraphicsBindingVulkanKHR* value = wrapper->decoded_value;
    if (!value)
    {
        return;
    }

    value->instance       = vulkan_replay_consumer_->MapInstance(wrapper->instance);
    value->device         = vulkan_replay_consumer_->MapDevice(wrapper->device);
    // Note: Xr has a different mapping for the physical device, because at record time the Vulkan
    //       encoder handle id maps to the *unwrapped* VkPhysicalDevice value, thus at
    //       replay the handle id Xr gets is the one correlated to the *wrapped* physical device and we
    //       are stuck with two different handle id's in the replay for the same object
    value->physicalDevice = GetMappingInfo(wrapper->physicalDevice, vk_physical_device_info_map_)->handle;
}

void OpenXrReplayConsumer::SwapchainData::InitSwapchainData(const GraphicsBinding&       binding,
                                                            const XrSwapchainCreateInfo& info,
                                                            XrSwapchain                  replay_handle)
{
    // Save off a reference to the session's graphics binding information
    graphics_binding_ = &binding;

    // Store off a shallow copy
    create_info      = info;
    create_info.next = nullptr; // Add supported deep copies below

    replay_handle_ = replay_handle;
    if (binding.IsVulkan())
    {
        // The type of the swapchain must match the type of the session
        swapchain_graphics_info_.type = GraphicsBindingType::kVulkan;
        swapchain_graphics_info_.vulkan_info.emplace();
        InitSwapchainData(info, *swapchain_graphics_info_.vulkan_info);
    }
    else
    {
        // WIP: Properly log and handle this
        // WIP: For now catch this to ensure we don't need support
        assert("always assert: text = " == "Unsupported graphics binding");
    }
}

XrResult OpenXrReplayConsumer::SwapchainData::EnumerateReplaySwapchain()
{

    XrSwapchainImageBaseHeader* replay_image_arg = nullptr;
    uint32_t                    replay_capacity_output;
    auto result = xrEnumerateSwapchainImages(replay_handle_, 0, &replay_capacity_output, replay_image_arg);

    if (result < 0)
    {
        return result;
    }

    if (graphics_binding_->IsVulkan())
    {
        assert(swapchain_graphics_info_.vulkan_info.has_value());
        VulkanSwapchainInfo& vk_info = *swapchain_graphics_info_.vulkan_info;
        vk_info.replay_images        = std::vector<XrSwapchainImageVulkanKHR>(
            replay_capacity_output, XrSwapchainImageVulkanKHR{ XR_TYPE_SWAPCHAIN_IMAGE_VULKAN_KHR, nullptr });
        replay_image_arg = reinterpret_cast<XrSwapchainImageBaseHeader*>(vk_info.replay_images.data());
    }
    if (!replay_image_arg)
    {
        // WIP: Properly log and handle this
        assert("always assert: text = " == "Unsupported graphics binding");
        return XR_ERROR_VALIDATION_FAILURE;
    }

    uint32_t replay_capacity_input = replay_capacity_output;
    result =
        xrEnumerateSwapchainImages(replay_handle_, replay_capacity_input, &replay_capacity_output, replay_image_arg);
    return result;
}

XrResult OpenXrReplayConsumer::SwapchainData::InitVirtualSwapchain(
    PointerDecoder<uint32_t>*                                 imageCountOutput,
    StructPointerDecoder<Decoded_XrSwapchainImageBaseHeader>* capture_images)
{
    // This call is invalid without a Session with a graphics binding specified
    assert(graphics_binding_);

    XrResult result = XR_ERROR_API_VERSION_UNSUPPORTED; // WIP: Determine if there is a better code for this

    if (graphics_binding_->IsVulkan())
    {
        auto* vk_capture_images =
            reinterpret_cast<StructPointerDecoder<Decoded_XrSwapchainImageVulkanKHR>*>(capture_images);
        result = InitVirtualSwapchain(imageCountOutput, vk_capture_images);
    }
    else
    {
        // This call is only supported for Vulkan graphics bindings
        // WIP: Properly log and handle this
        assert("always assert: text = " == "unsupported graphics binding");
    }
    return XR_ERROR_RUNTIME_FAILURE;
}

XrResult OpenXrReplayConsumer::SwapchainData::InitVirtualSwapchain(
    PointerDecoder<uint32_t>* imageCountOutput, StructPointerDecoder<Decoded_XrSwapchainImageVulkanKHR>* capture_images)
{

    // Unpack the graphics binding info, we shouldn't be called unless the binding *is* Vulkan
    assert(graphics_binding_->IsVulkan());

    XrResult xr_result = XR_SUCCESS; // WIP: Determine if there is a better code for this

    const VulkanGraphicsBinding& vk_binding     = graphics_binding_->GetVulkanBinding();
    const VkDevice               vk_device      = vk_binding.device;
    const format::HandleId       device_id      = vk_binding.device_id;
    const VkPhysicalDevice       vk_physical    = vk_binding.physicalDevice;
    auto*                        device_table   = vk_binding.device_table;
    auto*                        instance_table = vk_binding.instance_table;

    assert(swapchain_graphics_info_.vulkan_info.has_value());
    VulkanSwapchainInfo& vk_swap = *swapchain_graphics_info_.vulkan_info;

    // Allocate command buffers
    VkCommandPoolCreateInfo create_info = { VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO,
                                            nullptr,
                                            VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT,
                                            vk_binding.queueFamilyIndex };

    VkResult result = device_table->CreateCommandPool(vk_device, &create_info, nullptr, &vk_swap.command_pool);
    // WIP: Properly log and handle this
    assert(result == VK_SUCCESS);

    vk_swap.transfer_commandbuffer.resize(vk_swap.replay_images.size());
    VkCommandBufferAllocateInfo cb_alloc_info = {
        VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO,
        nullptr,
        vk_swap.command_pool,
        VK_COMMAND_BUFFER_LEVEL_PRIMARY,
        1,
    };

    VkFenceCreateInfo cb_fence_info = {
        VK_STRUCTURE_TYPE_FENCE_CREATE_INFO,
        nullptr,
        VK_FENCE_CREATE_SIGNALED_BIT // The first thing we do is wait on the signal
    };

    // Create the virtual images
    uint32_t* output_count = imageCountOutput->GetPointer();
    assert(output_count);

    const Decoded_XrSwapchainImageVulkanKHR* wrappers = capture_images->GetMetaStructPointer();

    VulkanSwapchainInfo::ProxyImage proxy;

    vk_swap.proxy_images.reserve(*output_count);

    for (uint32_t image_entry = 0; image_entry < *output_count; image_entry++)
    {
        const format::HandleId& image_id = wrappers[image_entry].image;

        VkResult vk_result = device_table->CreateImage(vk_device, &vk_swap.image_create_info, nullptr, &proxy.image);
        // WIP: Properly log and handle this
        assert(vk_result == VK_SUCCESS);

        VkMemoryRequirements memory_reqs{};
        device_table->GetImageMemoryRequirements(vk_device, proxy.image, &memory_reqs);

        VkMemoryPropertyFlags property_flags    = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
        uint32_t              memory_type_index = std::numeric_limits<uint32_t>::max();
        {
            VkPhysicalDeviceMemoryProperties properties;
            instance_table->GetPhysicalDeviceMemoryProperties(vk_physical, &properties);

            for (uint32_t i = 0; i < properties.memoryTypeCount; i++)
            {
                if ((memory_reqs.memoryTypeBits & (1 << i)) &&
                    ((properties.memoryTypes[i].propertyFlags & property_flags) != 0))
                {
                    memory_type_index = i;
                    break;
                }
            }
            assert(memory_type_index != std::numeric_limits<uint32_t>::max());
        }

        if (memory_type_index == std::numeric_limits<uint32_t>::max())
        {
            // WIP: Properly log and handle this
            break;
        }

        VkMemoryAllocateInfo alloc_info = { VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO };
        alloc_info.pNext                = nullptr;
        alloc_info.memoryTypeIndex      = memory_type_index;
        alloc_info.allocationSize       = memory_reqs.size;

        VkResult result = device_table->AllocateMemory(vk_device, &alloc_info, nullptr, &proxy.memory);

        if (result != VK_SUCCESS)
        {
            // WIP: Properly log and handle this
            break;
        }

        result = device_table->BindImageMemory(vk_device, proxy.image, proxy.memory, 0);

        if (result != VK_SUCCESS)
        {
            // WIP: Properly log and handle this
            break;
        }

        result = device_table->AllocateCommandBuffers(vk_device, &cb_alloc_info, &proxy.command_buffer);
        if (result != VK_SUCCESS)
        {
            // WIP: Properly log and handle this
            break;
        }

        result = device_table->CreateFence(vk_device, &cb_fence_info, nullptr, &proxy.cb_fence);
        if (result != VK_SUCCESS)
        {
            // WIP: Properly log and handle this
            break;
        }

        // Now tell the Vulkan Consumer to map the proxy image to the matching captured image id
        VulkanImageInfo handle_info;
        handle_info.handle             = proxy.image;
        handle_info.memory             = proxy.memory;
        handle_info.is_swapchain_image = true;
        vk_binding.vulkan_consumer->AddImageHandle(device_id, image_id, proxy.image, std::move(handle_info));

        vk_swap.proxy_images.emplace_back(proxy);

        // Safe the unwind on sucess
        proxy = VulkanSwapchainInfo::ProxyImage();
    }

    if (result != VK_SUCCESS)
    {
        xr_result = XR_ERROR_VALIDATION_FAILURE; // WIP: Determine if there is a better code for this
    }

    // If we failed above, need to unwind any work in progress.
    // WIP: Decide what to do about partial swapchain construction
    if (proxy.memory != VK_NULL_HANDLE)
    {
        device_table->FreeMemory(vk_device, proxy.memory, nullptr);
    }

    if (proxy.image != VK_NULL_HANDLE)
    {
        device_table->DestroyImage(vk_device, proxy.image, nullptr);
    }

    if (proxy.command_buffer != VK_NULL_HANDLE)
    {
        device_table->DestroyFence(vk_device, proxy.cb_fence, nullptr);
    }

    if (proxy.command_buffer != VK_NULL_HANDLE)
    {
        device_table->FreeCommandBuffers(vk_device, vk_swap.command_pool, 1, &proxy.command_buffer);
    }

    return xr_result;
}

XrResult OpenXrReplayConsumer::SwapchainData::AcquireSwapchainImage(uint32_t capture_index, uint32_t replay_index)
{
    capture_to_replay_map_[capture_index] = replay_index;
    acquire_release_fifo_.push_front(capture_index);

    if (graphics_binding_->IsVulkan())
    {
        return AcquireSwapchainImage(capture_index, replay_index, *swapchain_graphics_info_.vulkan_info);
    }

    // WIP: Properly log and handle this
    assert("always assert: text = " == "unsupported graphics binding");
    return XR_ERROR_VALIDATION_FAILURE;
}

XrResult OpenXrReplayConsumer::SwapchainData::ReleaseSwapchainImage(
    StructPointerDecoder<Decoded_XrSwapchainImageReleaseInfo>* releaseInfo)
{
    XrResult xr_result = XR_SUCCESS;

    if (graphics_binding_->IsVulkan())
    {
        return ReleaseSwapchainImage(releaseInfo, *swapchain_graphics_info_.vulkan_info);
    }

    // WIP: Properly log and handle this
    assert("always assert: text = " == "unsupported graphics binding");
    return XR_ERROR_VALIDATION_FAILURE;
}

void OpenXrReplayConsumer::SwapchainData::WaitedWithoutTimeout()
{
    // WIP: Do we need to track anything here?
    // The calling order will be enforced by the runtime at replay time, and if the application
    // didn't handle XR_TIMEOUT correctly, that's an invalid trace, which the replay runtime may respond poorly
    // to, but it's unsure whether we can do anything about it.
}

XrResult OpenXrReplayConsumer::SwapchainData::AcquireSwapchainImage(uint32_t             capture_index,
                                                                    uint32_t             replay_index,
                                                                    VulkanSwapchainInfo& swap)
{
    // Unpack the graphics binding info, we shouldn't be called unless the binding *is* Vulkan
    assert(graphics_binding_->IsVulkan());

    XrResult xr_result = XR_SUCCESS; // WIP: Determine if there is a better code for this

    const VulkanGraphicsBinding& vk_binding   = graphics_binding_->GetVulkanBinding();
    const VkDevice               vk_device    = vk_binding.device;
    auto*                        device_table = vk_binding.device_table;

    VulkanSwapchainInfo::ProxyImage& proxy = swap.proxy_images[capture_index];
    xr_result                              = vk_binding.ResetCommandBuffer(proxy);
    if (!XR_SUCCEEDED(xr_result))
    {
        assert(XR_SUCCEEDED(xr_result));
        return xr_result;
    }

    VkCommandBufferBeginInfo cb_begin = {
        VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO, nullptr, VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT, nullptr
    };

    VkImageMemoryBarrier barrier = { VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,
                                     nullptr,
                                     VK_ACCESS_MEMORY_READ_BIT |
                                         VK_ACCESS_MEMORY_WRITE_BIT, // WIP: Determine the optimal set of accesses
                                     VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT,
                                     VK_IMAGE_LAYOUT_UNDEFINED,
                                     swap.layout,
                                     VK_QUEUE_FAMILY_IGNORED,
                                     VK_QUEUE_FAMILY_IGNORED,
                                     proxy.image,
                                     swap.whole_range };

    VkResult vk_result = device_table->BeginCommandBuffer(proxy.command_buffer, &cb_begin);
    if (vk_result != VK_SUCCESS)
        return XR_ERROR_RUNTIME_FAILURE;

    device_table->CmdPipelineBarrier(proxy.command_buffer,
                                     VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                                     VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                                     0,
                                     0,
                                     nullptr,
                                     0,
                                     nullptr,
                                     1,
                                     &barrier);
    vk_result = device_table->EndCommandBuffer(proxy.command_buffer);
    if (vk_result != VK_SUCCESS)
        return XR_ERROR_RUNTIME_FAILURE;

    VkSubmitInfo submit_info = { VK_STRUCTURE_TYPE_SUBMIT_INFO, nullptr, 0,      nullptr, nullptr, 1,
                                 &proxy.command_buffer,         0,       nullptr };
    vk_result                = device_table->QueueSubmit(vk_binding.queue, 1, &submit_info, proxy.cb_fence);
    if (vk_result != VK_SUCCESS)
        return XR_ERROR_RUNTIME_FAILURE;

    return XR_SUCCESS;
}

XrResult OpenXrReplayConsumer::SwapchainData::ReleaseSwapchainImage(
    StructPointerDecoder<Decoded_XrSwapchainImageReleaseInfo>* releaseInfo, VulkanSwapchainInfo& vk_swap)
{

    // Unpack the graphics binding info, we shouldn't be called unless the binding *is* Vulkan
    assert(graphics_binding_->IsVulkan());

    XrResult xr_result = XR_SUCCESS; // WIP: Determine if there is a better code for this

    const VulkanGraphicsBinding& vk_binding     = graphics_binding_->GetVulkanBinding();
    const VkDevice               vk_device      = vk_binding.device;
    const format::HandleId       device_id      = vk_binding.device_id;
    const VkPhysicalDevice       vk_physical    = vk_binding.physicalDevice;
    auto*                        device_table   = vk_binding.device_table;
    auto*                        instance_table = vk_binding.instance_table;

    // Copy the head of the AcquireRelease FIFO from the proxy image to the replay image
    assert(!acquire_release_fifo_.empty());
    uint32_t capture_index = acquire_release_fifo_.back();
    acquire_release_fifo_.pop_back();
    auto replay_it = capture_to_replay_map_.find(capture_index);
    assert(replay_it != capture_to_replay_map_.end());
    uint32_t replay_index = replay_it->second;
    VkImage  replay_image = vk_swap.replay_images[replay_index].image;
    capture_to_replay_map_.erase(replay_it);

    VulkanSwapchainInfo::ProxyImage& proxy = vk_swap.proxy_images[capture_index];
    xr_result                              = vk_binding.ResetCommandBuffer(proxy);
    assert(XR_SUCCEEDED(xr_result));

    VkCommandBufferBeginInfo cb_begin = {
        VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO, nullptr, VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT, nullptr
    };

    VkImageMemoryBarrier barriers[2] = {
        { VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,
          nullptr,
          VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT, // WIP: Determine the optimal set of accesses
          VK_ACCESS_TRANSFER_READ_BIT,
          vk_swap.layout,
          VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
          VK_QUEUE_FAMILY_IGNORED,
          VK_QUEUE_FAMILY_IGNORED,
          proxy.image,
          vk_swap.whole_range },
        { VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,
          nullptr,
          VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT, // WIP: Determine the optimal set of accesses
          VK_ACCESS_TRANSFER_WRITE_BIT,
          vk_swap.layout,
          VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
          VK_QUEUE_FAMILY_IGNORED,
          VK_QUEUE_FAMILY_IGNORED,
          replay_image,
          vk_swap.whole_range }

    };

    VkResult vk_result = device_table->BeginCommandBuffer(proxy.command_buffer, &cb_begin);
    if (vk_result != VK_SUCCESS)
        return XR_ERROR_RUNTIME_FAILURE;

    device_table->CmdPipelineBarrier(proxy.command_buffer,
                                     VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                                     VK_PIPELINE_STAGE_TRANSFER_BIT,
                                     0,
                                     0,
                                     nullptr,
                                     0,
                                     nullptr,
                                     2,
                                     barriers);

    VkImageSubresourceLayers subres_layers = {
        vk_swap.whole_range.aspectMask, 0, vk_swap.whole_range.baseArrayLayer, vk_swap.whole_range.layerCount
    };
    VkOffset3D zero_offset = { 0, 0, 0 };
    VkExtent3D mip_extent  = vk_swap.image_create_info.extent;

    VkImageCopy copy_region = {
        subres_layers, zero_offset, subres_layers, zero_offset, vk_swap.image_create_info.extent
    };

    uint32_t                 mip_count = vk_swap.image_create_info.mipLevels;
    std::vector<VkImageCopy> copy_regions;
    copy_regions.reserve(mip_count);
    for (uint32_t mip_level = 0; mip_level < mip_count; mip_level++)
    {
        subres_layers.mipLevel = mip_level;

        VkExtent3D mip_extent = vk_swap.image_create_info.extent;
        mip_extent.width >>= mip_level;
        mip_extent.height >>= mip_level;

        VkImageCopy copy_region = { subres_layers, zero_offset, subres_layers, zero_offset, mip_extent };
        copy_regions.push_back(copy_region);
    }

    device_table->CmdCopyImage(proxy.command_buffer,
                               proxy.image,
                               VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                               replay_image,
                               VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                               mip_count,
                               copy_regions.data());

    // Transition replay to the required layout
    // We'll defer the proxy image transition until the next acquire
    barriers[1].oldLayout     = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    barriers[1].newLayout     = vk_swap.layout;
    barriers[1].srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    barriers[1].dstAccessMask =
        VK_ACCESS_MEMORY_READ_BIT | VK_ACCESS_MEMORY_WRITE_BIT; // WIP: Determine the optimal set of accesses

    device_table->CmdPipelineBarrier(proxy.command_buffer,
                                     VK_PIPELINE_STAGE_TRANSFER_BIT,
                                     VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                                     0,
                                     0,
                                     nullptr,
                                     0,
                                     nullptr,
                                     1,
                                     &barriers[1]);
    vk_result = device_table->EndCommandBuffer(proxy.command_buffer);
    if (vk_result != VK_SUCCESS)
        return XR_ERROR_RUNTIME_FAILURE;

    VkSubmitInfo submit_info = { VK_STRUCTURE_TYPE_SUBMIT_INFO, nullptr, 0,      nullptr, nullptr, 1,
                                 &proxy.command_buffer,         0,       nullptr };
    vk_result                = device_table->QueueSubmit(vk_binding.queue, 1, &submit_info, proxy.cb_fence);
    if (vk_result != VK_SUCCESS)
        return XR_ERROR_RUNTIME_FAILURE;

    return XR_SUCCESS;
}

OpenXrReplayConsumer::GraphicsBinding
OpenXrReplayConsumer::MakeGraphicsBinding(Decoded_XrSessionCreateInfo* create_info)
{
    auto* vk_binding = gfxrecon::decode::GetNextMetaStruct<Decoded_XrGraphicsBindingVulkanKHR>(create_info->next);
    if (vk_binding)
    {
        assert(vulkan_replay_consumer_);
        assert(vk_binding->decoded_value);

        return GraphicsBinding(VulkanGraphicsBinding(*vulkan_replay_consumer_, *vk_binding));
    }

    // Add additional bindings below this

    // Default constructed object !IsValid()
    return GraphicsBinding();
}

bool OpenXrReplayConsumer::SessionData::AddGraphicsBinding(GraphicsBinding& binding)
{
    graphics_binding_ = binding;
    return graphics_binding_.IsValid();
}

void OpenXrReplayConsumer::SessionData::AddReferenceSpaces(const std::vector<XrReferenceSpaceType>& replay_spaces)
{
    reference_spaces_.clear();
    for (const auto& space : replay_spaces)
    {
        reference_spaces_.insert(space);
    }
}

OpenXrReplayConsumer::VulkanGraphicsBinding::VulkanGraphicsBinding(
    VulkanReplayConsumerBase& vulkan_consumer, const Decoded_XrGraphicsBindingVulkanKHR& xr_binding) :
    XrGraphicsBindingVulkanKHR(*xr_binding.decoded_value),
    vulkan_consumer(&vulkan_consumer), instance_table(vulkan_consumer.GetInstanceTable(physicalDevice)),
    device_table(vulkan_consumer.GetDeviceTable(device)), instance_id(xr_binding.instance),
    physicalDevice_id(xr_binding.physicalDevice), device_id(xr_binding.device)
{
    next = nullptr; // We don't have a safe (deep) copy of the original so stub out the copies downchain pointer

    //
    device_table->GetDeviceQueue(device, queueFamilyIndex, queueIndex, &queue);
}

XrResult OpenXrReplayConsumer::VulkanGraphicsBinding::ResetCommandBuffer(VulkanSwapchainInfo::ProxyImage& proxy) const
{
    XrResult xr_result = XR_SUCCESS;
    uint32_t kTimeout  = std::numeric_limits<uint32_t>::max(); // WIP: Better timeout and timeout reporting
    VkResult vk_result = device_table->WaitForFences(device, 1, &proxy.cb_fence, VK_TRUE, kTimeout);

    if (vk_result != VK_SUCCESS)
    {
        xr_result = XR_ERROR_RUNTIME_FAILURE;

        // WIP: Properly log and handle this
        assert(xr_result == XR_SUCCESS);
    }

    // Create and submit the ILT need to for
    device_table->ResetFences(device, 1, &proxy.cb_fence);
    return xr_result;
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // ENABLE_OPENXR_SUPPORT
