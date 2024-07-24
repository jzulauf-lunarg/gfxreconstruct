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

#ifndef GFXRECON_DECODE_OPENXR_JSON_CONSUMER_BASE_H
#define GFXRECON_DECODE_OPENXR_JSON_CONSUMER_BASE_H

#if ENABLE_OPENXR_SUPPORT
#include <deque>
#include <optional>
#include <unordered_map>
#include <unordered_set>
#include "generated/generated_openxr_consumer.h"
#include "generated/generated_vulkan_dispatch_table.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)
class VulkanReplayConsumerBase;

class OpenXrReplayConsumer : public OpenXrConsumer
{
  public:
    OpenXrReplayConsumer();
    ~OpenXrReplayConsumer() override;

    void SetVulkanReplayConsumer(VulkanReplayConsumerBase* vulkan_replay_consumer);

    virtual void Process_xrCreateApiLayerInstance(const ApiCallInfo&                                  call_info,
                                                  XrResult                                            returnValue,
                                                  StructPointerDecoder<Decoded_XrInstanceCreateInfo>* info,
                                                  StructPointerDecoder<Decoded_XrApiLayerCreateInfo>* apiLayerInfo,
                                                  HandlePointerDecoder<XrInstance>*) override;
    virtual void Process_xrGetSystem(const ApiCallInfo&                             call_info,
                                     XrResult                                       returnValue,
                                     format::HandleId                               instance,
                                     StructPointerDecoder<Decoded_XrSystemGetInfo>* getInfo,
                                     HandlePointerDecoder<XrSystemId>*              systemId) override;
    virtual void
                 Process_xrEnumerateViewConfigurationViews(const ApiCallInfo&        call_info,
                                                           XrResult                  returnValue,
                                                           format::HandleId          instance,
                                                           XrSystemId                systemId,
                                                           XrViewConfigurationType   viewConfigurationType,
                                                           uint32_t                  viewCapacityInput,
                                                           PointerDecoder<uint32_t>* viewCountOutput,
                                                           StructPointerDecoder<Decoded_XrViewConfigurationView>* views) override;
    virtual void Process_xrGetVulkanGraphicsRequirementsKHR(
        const ApiCallInfo&                                             call_info,
        XrResult                                                       returnValue,
        format::HandleId                                               instance,
        XrSystemId                                                     systemId,
        StructPointerDecoder<Decoded_XrGraphicsRequirementsVulkanKHR>* graphicsRequirements) override;
    virtual void
    Process_xrGetVulkanGraphicsDeviceKHR(const ApiCallInfo&                      call_info,
                                         XrResult                                returnValue,
                                         format::HandleId                        instance,
                                         XrSystemId                              systemId,
                                         format::HandleId                        vkInstance,
                                         HandlePointerDecoder<VkPhysicalDevice>* vkPhysicalDevice) override;

    virtual void Process_xrCreateSession(const ApiCallInfo&         call_info,
                                         XrResult                   returnValue,
                                         gfxrecon::format::HandleId instance,
                                         StructPointerDecoder<Decoded_XrSessionCreateInfo>*,
                                         HandlePointerDecoder<XrSession>*) override;
    virtual void Process_xrCreateSwapchain(const ApiCallInfo&                                   call_info,
                                           XrResult                                             returnValue,
                                           format::HandleId                                     session,
                                           StructPointerDecoder<Decoded_XrSwapchainCreateInfo>* createInfo,
                                           HandlePointerDecoder<XrSwapchain>*                   swapchain) override;
    virtual void
                 Process_xrEnumerateSwapchainImages(const ApiCallInfo&                                        call_info,
                                                    XrResult                                                  returnValue,
                                                    format::HandleId                                          swapchain,
                                                    uint32_t                                                  imageCapacityInput,
                                                    PointerDecoder<uint32_t>*                                 imageCountOutput,
                                                    StructPointerDecoder<Decoded_XrSwapchainImageBaseHeader>* images) override;
    virtual void Process_xrAcquireSwapchainImage(const ApiCallInfo&                                         call_info,
                                                 XrResult                                                   returnValue,
                                                 format::HandleId                                           swapchain,
                                                 StructPointerDecoder<Decoded_XrSwapchainImageAcquireInfo>* acquireInfo,
                                                 PointerDecoder<uint32_t>* index) override;

    virtual void
    Process_xrWaitSwapchainImage(const ApiCallInfo&                                      call_info,
                                 XrResult                                                returnValue,
                                 format::HandleId                                        swapchain,
                                 StructPointerDecoder<Decoded_XrSwapchainImageWaitInfo>* waitInfo) override;

    virtual void
    Process_xrReleaseSwapchainImage(const ApiCallInfo&                                         call_info,
                                    XrResult                                                   returnValue,
                                    format::HandleId                                           swapchain,
                                    StructPointerDecoder<Decoded_XrSwapchainImageReleaseInfo>* releaseInfo) override;

    virtual void Process_xrPollEvent(const ApiCallInfo&                               call_info,
                                     XrResult                                         returnValue,
                                     format::HandleId                                 instance,
                                     StructPointerDecoder<Decoded_XrEventDataBuffer>* eventData) override;

    virtual void Process_xrBeginSession(const ApiCallInfo&                                call_info,
                                        XrResult                                          returnValue,
                                        format::HandleId                                  session,
                                        StructPointerDecoder<Decoded_XrSessionBeginInfo>* beginInfo) override;
    virtual void Process_xrWaitFrame(const ApiCallInfo&                             call_info,
                                     XrResult                                       returnValue,
                                     format::HandleId                               session,
                                     StructPointerDecoder<Decoded_XrFrameWaitInfo>* frameWaitInfo,
                                     StructPointerDecoder<Decoded_XrFrameState>*    frameState) override;

    virtual void Process_xrBeginFrame(const ApiCallInfo&                              call_info,
                                      XrResult                                        returnValue,
                                      format::HandleId                                session,
                                      StructPointerDecoder<Decoded_XrFrameBeginInfo>* frameBeginInfo) override;

    virtual void Process_xrEndFrame(const ApiCallInfo&                            call_info,
                                    XrResult                                      returnValue,
                                    format::HandleId                              session,
                                    StructPointerDecoder<Decoded_XrFrameEndInfo>* frameEndInfo) override;

    virtual void Process_xrEnumerateReferenceSpaces(const ApiCallInfo&                    call_info,
                                                    XrResult                              returnValue,
                                                    format::HandleId                      session,
                                                    uint32_t                              spaceCapacityInput,
                                                    PointerDecoder<uint32_t>*             spaceCountOutput,
                                                    PointerDecoder<XrReferenceSpaceType>* spaces) override;

    virtual void Process_xrCreateReferenceSpace(const ApiCallInfo&                                        call_info,
                                                XrResult                                                  returnValue,
                                                format::HandleId                                          session,
                                                StructPointerDecoder<Decoded_XrReferenceSpaceCreateInfo>* createInfo,
                                                HandlePointerDecoder<XrSpace>* space) override;

  private:
    // WIP Refactor out of consumer object to something like the vulkan approach
    void MapNextStructHandles(OpenXrNextNode* next);
    void MapStructHandles(Decoded_XrSessionCreateInfo* wrapper);
    void MapStructHandles(Decoded_XrReferenceSpaceCreateInfo* wrapper);
    void MapStructHandles(Decoded_XrFrameEndInfo* wrapper);
    void MapStructHandles(uint32_t layer_count, Decoded_XrCompositionLayerBaseHeader** layer_wrappers);
    void MapStructHandles(Decoded_XrCompositionLayerProjection* wrapper);
    void MapStructHandles(Decoded_XrCompositionLayerProjectionView* wrapper);
    void MapStructHandles(Decoded_XrSwapchainSubImage* wrapper);
    void MapStructHandles(Decoded_XrGraphicsBindingVulkanKHR* wrapper);

    template <typename T>
    struct OpenXrObjectInfo
    {
        using HandleType = T;
        // Standard info stored for all XR objects.
        HandleType       handle{ XR_NULL_HANDLE };            // Handle created for the object during replay.
        format::HandleId capture_id{ format::kNullHandleId }; // ID assigned to the object at capture.
        format::HandleId parent_id{ format::kNullHandleId };  // ID of the object's parent instance/device object.
    };

    template <typename T>
    struct OpenXrValueInfo
    {
        using ValueType = T;
        ValueType replay_value;  // Value returned for during replay.
        ValueType capture_value; // Value returned at capture.
    };

    template <typename HandleType>
    using HandleMap = std::unordered_map<format::HandleId, OpenXrObjectInfo<HandleType>>;
    template <typename ValueType>
    using ValueMap = std::unordered_map<ValueType, OpenXrValueInfo<ValueType>>;

    HandleMap<XrInstance>       instance_info_map_;
    HandleMap<XrSession>        session_info_map_;
    HandleMap<XrSwapchain>      swapchain_info_map_;
    ValueMap<XrSystemId>        system_id_info_map_;
    HandleMap<VkPhysicalDevice> vk_physical_device_info_map_; // This is the wrapped physical device handle
    HandleMap<XrSpace>          space_info_map_;

    // TODO: Should DRY the handle remapping code with the Vulkan side at least.
    template <typename HandleDecoder, typename Map>
    void AddHandleMapping(format::HandleId parent, HandleDecoder& handle_decoder, Map& map)
    {
        using HandleType               = typename HandleDecoder::HandleType;
        using Info                     = OpenXrObjectInfo<HandleType>;
        format::HandleId capture_id    = *handle_decoder.GetPointer();
        HandleType       replay_handle = *handle_decoder.GetHandlePointer();
        map.insert(std::make_pair(capture_id, Info{ replay_handle, capture_id, parent }));
    }

    template <typename PointerDecoder, typename ValueType, typename Map>
    void AddValueMapping(PointerDecoder& pointer_decoder, ValueType& replay_value, Map& map)
    {
        using Info                     = OpenXrValueInfo<ValueType>;
        const ValueType& capture_value = *pointer_decoder.GetPointer();
        map.insert(std::make_pair(capture_value, Info{ replay_value, capture_value }));
    }

    template <typename Map, typename InfoType = typename Map::mapped_type>
    InfoType* GetMappingInfo(typename Map::key_type key, Map& map)
    {
        InfoType* info     = nullptr;
        auto      found_it = map.find(key);
        if (found_it != map.end())
        {
            info = &found_it->second;
        }
        return info;
    }

    using ReferenceSpaceSet = std::unordered_set<XrReferenceSpaceType>;

    // Supported graphics bindings for OpenXr replay
    enum class GraphicsBindingType
    {
        kVulkan,
        kUnknown
    };

    struct VulkanSwapchainInfo
    {

        // Structure necessary to track the necessary information related to the virtual swapchain images
        struct ProxyImage
        {
            VkImage         image{ VK_NULL_HANDLE };
            VkDeviceMemory  memory{ VK_NULL_HANDLE };
            VkFence         cb_fence{ VK_NULL_HANDLE };
            VkCommandBuffer command_buffer{ VK_NULL_HANDLE };
        };

        VkImageCreateInfo               image_create_info{ VK_STRUCTURE_TYPE_MAX_ENUM };
        VkImageSubresourceRange         whole_range;
        VkImageLayout                   layout;
        XrVulkanSwapchainCreateInfoMETA xr_info_meta{ XR_TYPE_UNKNOWN }; // Backing store for deep copy

        std::vector<ProxyImage>                proxy_images;
        std::vector<XrSwapchainImageVulkanKHR> replay_images;
        std::vector<VkCommandBuffer>           transfer_commandbuffer; // Indexed by replay image index
        VkCommandPool                          command_pool = VK_NULL_HANDLE;
    };

    struct SwapchainGraphicsInfo
    {
        GraphicsBindingType                type = GraphicsBindingType::kUnknown;
        std::optional<VulkanSwapchainInfo> vulkan_info;
    };
    struct VulkanGraphicsBinding : public XrGraphicsBindingVulkanKHR
    {
        VulkanGraphicsBinding(VulkanReplayConsumerBase& vulkan_consumer, const Decoded_XrGraphicsBindingVulkanKHR& xr);
        VulkanReplayConsumerBase*          vulkan_consumer = nullptr;
        const encode::VulkanInstanceTable* instance_table{ nullptr };
        const encode::VulkanDeviceTable*   device_table{ nullptr };
        format::HandleId                   instance_id{ format::kNullHandleId };
        format::HandleId                   physicalDevice_id{ format::kNullHandleId };
        format::HandleId                   device_id{ format::kNullHandleId };
        VkQueue                            queue = VK_NULL_HANDLE;

        XrResult ResetCommandBuffer(VulkanSwapchainInfo::ProxyImage& proxy) const;
    };

    class GraphicsBinding
    {
      public:
        GraphicsBinding() : type(GraphicsBindingType::kUnknown){};
        GraphicsBinding(VulkanGraphicsBinding& binding) : type(GraphicsBindingType::kVulkan)
        {
            vulkan_binding.emplace(binding);
        }
        GraphicsBindingType GetType() const { return type; }
        bool                IsValid() const { return type != GraphicsBindingType::kUnknown; }
        bool                IsVulkan() const { return type == GraphicsBindingType::kVulkan; }

        const VulkanGraphicsBinding& GetVulkanBinding() const
        {
            assert(type == GraphicsBindingType::kVulkan);
            assert(vulkan_binding.has_value());
            return *vulkan_binding;
        }

      private:
        GraphicsBindingType type;

        // NOTE: Add other supported bindings here
        std::optional<VulkanGraphicsBinding> vulkan_binding;
    };

    GraphicsBinding MakeGraphicsBinding(Decoded_XrSessionCreateInfo* create_info);

    class SessionData
    {
      public:
        bool                   AddGraphicsBinding(GraphicsBinding& binding);
        const GraphicsBinding& GetGraphicsBinding() const { return graphics_binding_; }

        void   AddReferenceSpaces(const std::vector<XrReferenceSpaceType>& replay_spaces);
        void   SetDisplayTime(const XrTime& predicted) { last_display_time_ = predicted; }
        XrTime GetDisplayTime() const { return last_display_time_; }

      protected:
        ReferenceSpaceSet reference_spaces_;
        XrTime            last_display_time_ = XrTime();

        // These are the replay handles
        GraphicsBinding graphics_binding_;
    };
    using SessionDataMap = std::unordered_map<XrSession, SessionData>;

    class SwapchainData
    {
      public:
        void
        InitSwapchainData(const GraphicsBinding& binding, const XrSwapchainCreateInfo& info, XrSwapchain replay_handle);
        XrResult EnumerateReplaySwapchain();
        XrResult InitVirtualSwapchain(PointerDecoder<uint32_t>*                                 imageCountOutput,
                                      StructPointerDecoder<Decoded_XrSwapchainImageBaseHeader>* capture_images);
        XrResult InitVirtualSwapchain(PointerDecoder<uint32_t>*                                imageCountOutput,
                                      StructPointerDecoder<Decoded_XrSwapchainImageVulkanKHR>* vk_capture_images);
        XrResult AcquireSwapchainImage(uint32_t capture_index, uint32_t replay_index);
        XrResult ReleaseSwapchainImage(StructPointerDecoder<Decoded_XrSwapchainImageReleaseInfo>* releaseInfo);
        void     WaitedWithoutTimeout();

      protected:
        static void MapVulkanSwapchainImageFlags(XrSwapchainUsageFlags xr_flags, VkImageCreateInfo& info);
        XrResult    InitSwapchainData(const XrSwapchainCreateInfo& xr_info, VulkanSwapchainInfo& vk_info);
        XrResult AcquireSwapchainImage(uint32_t capture_index, uint32_t replay_index, VulkanSwapchainInfo& swap_info);
        XrResult ReleaseSwapchainImage(StructPointerDecoder<Decoded_XrSwapchainImageReleaseInfo>* releaseInfo,
                                       VulkanSwapchainInfo&                                       swap_info);

        XrSwapchainCreateInfo                  create_info;
        std::unordered_map<uint32_t, uint32_t> capture_to_replay_map_;
        std::deque<uint32_t>                   acquire_release_fifo_;
        SwapchainGraphicsInfo                  swapchain_graphics_info_;
        const GraphicsBinding*                 graphics_binding_ = nullptr;
        XrSwapchain                            replay_handle_    = XR_NULL_HANDLE; // handy to keep a copy here
    };
    using SwapchainDataMap = std::unordered_map<XrSwapchain, SwapchainData>;

    template <typename Handle, typename DataMap>
    static typename DataMap::iterator AddHandleData(Handle handle, DataMap& data_map)
    {
        auto insert_info = data_map.insert(std::make_pair(handle, typename DataMap::mapped_type()));
        assert(insert_info.second);
        return insert_info.first;
    }

    template <typename Handle, typename DataMap, typename Data = typename DataMap::mapped_type>
    static Data& GetHandleData(Handle handle, DataMap& data_map)
    {
        auto find_it = data_map.find(handle);
        assert(find_it != data_map.end());
        return find_it->second;
    }

    SessionData&   AddSessionData(XrSession session) { return AddHandleData(session, session_data_)->second; }
    SwapchainData& AddSwapchainData(XrSwapchain swapchain) { return AddHandleData(swapchain, swapchain_data_)->second; }

    SessionData&   GetSessionData(XrSession session) { return GetHandleData(session, session_data_); }
    SwapchainData& GetSwapchainData(XrSwapchain swapchain) { return GetHandleData(swapchain, swapchain_data_); }

    VulkanReplayConsumerBase* vulkan_replay_consumer_ = nullptr;

    SessionDataMap   session_data_;
    SwapchainDataMap swapchain_data_;
};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // ENABLE_OPENXR_SUPPORT

#endif // GFXRECON_DECODE_OPENXR_JSON_CONSUMER_BASE_H
