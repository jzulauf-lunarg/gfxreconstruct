/*
** Copyright (c) 2019-2024 LunarG, Inc.
** Copyright (c) 2023 Advanced Micro Devices, Inc. All rights reserved.
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

#ifndef GFXRECON_ENCODE_OPENXR_HANDLE_WRAPPERS_H
#define GFXRECON_ENCODE_OPENXR_HANDLE_WRAPPERS_H

#if ENABLE_OPENXR_SUPPORT

#include "encode/openxr_state_info.h"
#include "format/format.h"
#include "generated/generated_openxr_dispatch_table.h"
#include "util/defines.h"

#include "openxr/openxr.h"

#include <limits>
#include <memory>
#include <set>
#include <unordered_map>
#include <vector>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(encode)
GFXRECON_BEGIN_NAMESPACE(openxr_wrappers)

//
// Handle wrappers for storing object state information with object handles.
//

template <typename T>
struct HandleWrapper
{
    typedef T HandleType;

    // Dispatch table key for dispatchable handles. Must be the first struct member to be compatible with the
    // loader defined handles.
    void* dispatch_key{ nullptr };

    // Standard state info required for all handles.
    HandleType        handle{ XR_NULL_HANDLE };           // Original handle value provided by the driver.
    format::HandleId  handle_id{ format::kNullHandleId }; // Globally unique ID assigned to the handle by the layer.
    format::ApiCallId create_call_id{ format::ApiCallId::ApiCall_Unknown };
    openxr_state_info::CreateParameters create_parameters;
};

//
// OpenXR Handle wrappers
//

// Vendor wrappers

struct BodyTrackerFBWrapper : public HandleWrapper<XrBodyTrackerFB>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct EyeTrackerFBWrapper : public HandleWrapper<XrEyeTrackerFB>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct FaceTrackerFBWrapper : public HandleWrapper<XrFaceTrackerFB>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct FaceTracker2FBWrapper : public HandleWrapper<XrFaceTracker2FB>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct FoveationProfileFBWrapper : public HandleWrapper<XrFoveationProfileFB>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct GeometryInstanceFBWrapper : public HandleWrapper<XrGeometryInstanceFB>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct PassthroughFBWrapper : public HandleWrapper<XrPassthroughFB>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct PassthroughLayerFBWrapper : public HandleWrapper<XrPassthroughLayerFB>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct SpaceUserFBWrapper : public HandleWrapper<XrSpaceUserFB>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct TriangleMeshFBWrapper : public HandleWrapper<XrTriangleMeshFB>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
    XrTriangleMeshCreateInfoFB create_info{};
};

struct FacialTrackerHTCWrapper : public HandleWrapper<XrFacialTrackerHTC>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct PassthroughHTCWrapper : public HandleWrapper<XrPassthroughHTC>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct ExportedLocalizationMapMLWrapper : public HandleWrapper<XrExportedLocalizationMapML>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct SceneMSFTWrapper : public HandleWrapper<XrSceneMSFT>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct SceneObserverMSFTWrapper : public HandleWrapper<XrSceneObserverMSFT>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct SpatialAnchorMSFTWrapper : public HandleWrapper<XrSpatialAnchorMSFT>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct SpatialAnchorStoreConnectionMSFTWrapper : public HandleWrapper<XrSpatialAnchorStoreConnectionMSFT>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct SpatialGraphNodeBindingMSFTWrapper : public HandleWrapper<XrSpatialGraphNodeBindingMSFT>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct VirtualKeyboardMETAWrapper : public HandleWrapper<XrVirtualKeyboardMETA>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct PassthroughColorLutMETAWrapper : public HandleWrapper<XrPassthroughColorLutMETA>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

// EXT wrappers

struct DebugUtilsMessengerEXTWrapper : public HandleWrapper<XrDebugUtilsMessengerEXT>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct HandTrackerEXTWrapper : public HandleWrapper<XrHandTrackerEXT>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct PlaneDetectorEXTWrapper : public HandleWrapper<XrPlaneDetectorEXT>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

// KHR wrappers

struct DisplayModeKHRWrapper : public HandleWrapper<VkDisplayModeKHR>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct ActionWrapper : public HandleWrapper<XrAction>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct ActionSetWrapper : public HandleWrapper<XrActionSet>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct SpaceWrapper : public HandleWrapper<XrSpace>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

struct SwapchainWrapper : public HandleWrapper<XrSwapchain>
{
    OpenXrInstanceTable* layer_table_ref{ nullptr };
};

//
// Atom Wrappers
//

template <typename T>
struct AtomWrapper
{
    typedef T HandleType;

    // Dispatch table key for dispatchable handles. Must be the first struct member to be compatible with the
    // loader defined handles.
    void* dispatch_key{ nullptr };

    // Standard state info required for all handles.
    HandleType        handle{ 0ULL };                     // Original handle value provided by the driver.
    format::HandleId  handle_id{ format::kNullHandleId }; // Globally unique ID assigned to the handle by the layer.
    format::ApiCallId create_call_id{ format::ApiCallId::ApiCall_Unknown };
    openxr_state_info::CreateParameters create_parameters;
};

// clang-format off
struct SystemIdWrapper : public AtomWrapper<XrSystemId> {};
struct PathWrapper : public AtomWrapper<XrPath> {};
struct AsyncRequestIdFBWrapper : public AtomWrapper<XrAsyncRequestIdFB> {};
struct RenderModelKeyFBWrapper : public AtomWrapper<XrRenderModelKeyFB> {};
struct MarkerMLWrapper : public AtomWrapper<XrMarkerML> {};
struct ControllerModelKeyMSFTWrapper : public AtomWrapper<XrControllerModelKeyMSFT> {};
// clang-format on

//
// Container Wrappers
//

struct MarkerDetectorMLWrapper : public AtomWrapper<XrMarkerDetectorML>
{
    OpenXrInstanceTable*          layer_table_ref{ nullptr };
    std::vector<MarkerMLWrapper*> child_markers;
};

struct SessionWrapper : public AtomWrapper<XrSession>
{
    OpenXrInstanceTable*                        layer_table_ref{ nullptr };
    std::vector<PassthroughFBWrapper*>          child_passthroughs;
    std::vector<AsyncRequestIdFBWrapper*>       child_async_req_ids;
    std::vector<RenderModelKeyFBWrapper*>       child_render_model_keys;
    std::vector<ControllerModelKeyMSFTWrapper*> child_controller_model_keys;
};

struct InstanceWrapper : public AtomWrapper<XrInstance>
{
    OpenXrInstanceTable            layer_table;
    XrVersion                      api_version{ XR_MAKE_VERSION(1, 0, 0) };
    std::vector<SessionWrapper*>   child_sessions;
    std::vector<ActionSetWrapper*> child_action_sets;
    std::vector<SystemIdWrapper*>  child_system_ids;
    std::vector<PathWrapper*>      child_paths;
};

GFXRECON_END_NAMESPACE(openxr_wrappers)
GFXRECON_END_NAMESPACE(encode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // ENABLE_OPENXR_SUPPORT

#endif // GFXRECON_ENCODE_OPENXR_HANDLE_WRAPPERS_H