/*
** Copyright (c) 2018-2023 Valve Corporation
** Copyright (c) 2018-2024 LunarG, Inc.
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
** This file is generated from the Khronos OpenXR XML API Registry.
**
*/

#ifndef  GFXRECON_GENERATED_OPENXR_ENUM_TO_STRING_H
#define  GFXRECON_GENERATED_OPENXR_ENUM_TO_STRING_H

#include "format/platform_types.h"
#include "util/to_string.h"
#include <openxr/openxr.h>
GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(util)
template <> std::string ToString<XrActionType>(const XrActionType& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string XrCompositionLayerFlagBitsToString(const XrCompositionLayerFlagBits value);
std::string XrCompositionLayerFlagsToString(VkFlags64 vkFlags);
template <> std::string ToString<XrEnvironmentBlendMode>(const XrEnvironmentBlendMode& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrEyeVisibility>(const XrEyeVisibility& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFormFactor>(const XrFormFactor& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string XrInputSourceLocalizedNameFlagBitsToString(const XrInputSourceLocalizedNameFlagBits value);
std::string XrInputSourceLocalizedNameFlagsToString(VkFlags64 vkFlags);
std::string XrInstanceCreateFlagBitsToString(const XrInstanceCreateFlagBits value);
std::string XrInstanceCreateFlagsToString(VkFlags64 vkFlags);
template <> std::string ToString<XrObjectType>(const XrObjectType& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrReferenceSpaceType>(const XrReferenceSpaceType& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrResult>(const XrResult& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string XrSessionCreateFlagBitsToString(const XrSessionCreateFlagBits value);
std::string XrSessionCreateFlagsToString(VkFlags64 vkFlags);
template <> std::string ToString<XrSessionState>(const XrSessionState& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string XrSpaceLocationFlagBitsToString(const XrSpaceLocationFlagBits value);
std::string XrSpaceLocationFlagsToString(VkFlags64 vkFlags);
std::string XrSpaceVelocityFlagBitsToString(const XrSpaceVelocityFlagBits value);
std::string XrSpaceVelocityFlagsToString(VkFlags64 vkFlags);
template <> std::string ToString<XrStructureType>(const XrStructureType& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string XrSwapchainCreateFlagBitsToString(const XrSwapchainCreateFlagBits value);
std::string XrSwapchainCreateFlagsToString(VkFlags64 vkFlags);
std::string XrSwapchainUsageFlagBitsToString(const XrSwapchainUsageFlagBits value);
std::string XrSwapchainUsageFlagsToString(VkFlags64 vkFlags);
template <> std::string ToString<XrViewConfigurationType>(const XrViewConfigurationType& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string XrViewStateFlagBitsToString(const XrViewStateFlagBits value);
std::string XrViewStateFlagsToString(VkFlags64 vkFlags);
template <> std::string ToString<XrLoaderInterfaceStructs>(const XrLoaderInterfaceStructs& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrAndroidThreadTypeKHR>(const XrAndroidThreadTypeKHR& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
#ifdef XR_USE_PLATFORM_ANDROID
#endif /* XR_USE_PLATFORM_ANDROID */
#ifdef XR_USE_GRAPHICS_API_VULKAN
#endif /* XR_USE_GRAPHICS_API_VULKAN */
#ifdef XR_USE_GRAPHICS_API_OPENGL
#endif /* XR_USE_GRAPHICS_API_OPENGL */
#ifdef XR_USE_GRAPHICS_API_OPENGL_ES
#endif /* XR_USE_GRAPHICS_API_OPENGL_ES */
#ifdef XR_USE_GRAPHICS_API_VULKAN
#endif /* XR_USE_GRAPHICS_API_VULKAN */
#ifdef XR_USE_GRAPHICS_API_D3D11
#endif /* XR_USE_GRAPHICS_API_D3D11 */
#ifdef XR_USE_GRAPHICS_API_D3D12
#endif /* XR_USE_GRAPHICS_API_D3D12 */
template <> std::string ToString<XrVisibilityMaskTypeKHR>(const XrVisibilityMaskTypeKHR& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
#ifdef XR_USE_PLATFORM_ANDROID
#endif /* XR_USE_PLATFORM_ANDROID */
#ifdef XR_USE_GRAPHICS_API_VULKAN
template <> std::string ToString<XrVulkanDeviceCreateFlagBitsKHR>(const XrVulkanDeviceCreateFlagBitsKHR& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrVulkanDeviceCreateFlagBitsKHR>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrVulkanInstanceCreateFlagBitsKHR>(const XrVulkanInstanceCreateFlagBitsKHR& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrVulkanInstanceCreateFlagBitsKHR>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
#endif /* XR_USE_GRAPHICS_API_VULKAN */
template <> std::string ToString<XrPerfSettingsDomainEXT>(const XrPerfSettingsDomainEXT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPerfSettingsLevelEXT>(const XrPerfSettingsLevelEXT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPerfSettingsNotificationLevelEXT>(const XrPerfSettingsNotificationLevelEXT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPerfSettingsSubDomainEXT>(const XrPerfSettingsSubDomainEXT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrDebugUtilsMessageSeverityFlagBitsEXT>(const XrDebugUtilsMessageSeverityFlagBitsEXT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrDebugUtilsMessageSeverityFlagBitsEXT>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrDebugUtilsMessageTypeFlagBitsEXT>(const XrDebugUtilsMessageTypeFlagBitsEXT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrDebugUtilsMessageTypeFlagBitsEXT>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrOverlayMainSessionFlagBitsEXTX>(const XrOverlayMainSessionFlagBitsEXTX& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrOverlayMainSessionFlagBitsEXTX>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrOverlaySessionCreateFlagBitsEXTX>(const XrOverlaySessionCreateFlagBitsEXTX& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrOverlaySessionCreateFlagBitsEXTX>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrCompositionLayerImageLayoutFlagBitsFB>(const XrCompositionLayerImageLayoutFlagBitsFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrCompositionLayerImageLayoutFlagBitsFB>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrBlendFactorFB>(const XrBlendFactorFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
#ifdef XR_USE_PLATFORM_EGL
#endif /* XR_USE_PLATFORM_EGL */
template <> std::string ToString<XrSpatialGraphNodeTypeMSFT>(const XrSpatialGraphNodeTypeMSFT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrHandEXT>(const XrHandEXT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrHandJointEXT>(const XrHandJointEXT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrHandJointSetEXT>(const XrHandJointSetEXT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrHandPoseTypeMSFT>(const XrHandPoseTypeMSFT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
#ifdef XR_USE_PLATFORM_WIN32
#endif /* XR_USE_PLATFORM_WIN32 */
template <> std::string ToString<XrReprojectionModeMSFT>(const XrReprojectionModeMSFT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
#ifdef XR_USE_PLATFORM_ANDROID
template <> std::string ToString<XrAndroidSurfaceSwapchainFlagBitsFB>(const XrAndroidSurfaceSwapchainFlagBitsFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrAndroidSurfaceSwapchainFlagBitsFB>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
#endif /* XR_USE_PLATFORM_ANDROID */
template <> std::string ToString<XrCompositionLayerSecureContentFlagBitsFB>(const XrCompositionLayerSecureContentFlagBitsFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrCompositionLayerSecureContentFlagBitsFB>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrBodyJointFB>(const XrBodyJointFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrBodyJointSetFB>(const XrBodyJointSetFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrHandJointsMotionRangeEXT>(const XrHandJointsMotionRangeEXT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrMeshComputeLodMSFT>(const XrMeshComputeLodMSFT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrSceneComponentTypeMSFT>(const XrSceneComponentTypeMSFT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrSceneComputeConsistencyMSFT>(const XrSceneComputeConsistencyMSFT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrSceneComputeFeatureMSFT>(const XrSceneComputeFeatureMSFT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrSceneComputeStateMSFT>(const XrSceneComputeStateMSFT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrSceneObjectTypeMSFT>(const XrSceneObjectTypeMSFT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrScenePlaneAlignmentTypeMSFT>(const XrScenePlaneAlignmentTypeMSFT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrEyeExpressionHTC>(const XrEyeExpressionHTC& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFacialTrackingTypeHTC>(const XrFacialTrackingTypeHTC& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrLipExpressionHTC>(const XrLipExpressionHTC& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrColorSpaceFB>(const XrColorSpaceFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrHandTrackingAimFlagBitsFB>(const XrHandTrackingAimFlagBitsFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrHandTrackingAimFlagBitsFB>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrSpaceComponentTypeFB>(const XrSpaceComponentTypeFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrSwapchainCreateFoveationFlagBitsFB>(const XrSwapchainCreateFoveationFlagBitsFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrSwapchainCreateFoveationFlagBitsFB>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrSwapchainStateFoveationFlagBitsFB>(const XrSwapchainStateFoveationFlagBitsFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrSwapchainStateFoveationFlagBitsFB>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFoveationDynamicFB>(const XrFoveationDynamicFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFoveationLevelFB>(const XrFoveationLevelFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrKeyboardTrackingFlagBitsFB>(const XrKeyboardTrackingFlagBitsFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrKeyboardTrackingFlagBitsFB>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrKeyboardTrackingQueryFlagBitsFB>(const XrKeyboardTrackingQueryFlagBitsFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrKeyboardTrackingQueryFlagBitsFB>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrTriangleMeshFlagBitsFB>(const XrTriangleMeshFlagBitsFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrTriangleMeshFlagBitsFB>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrWindingOrderFB>(const XrWindingOrderFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPassthroughCapabilityFlagBitsFB>(const XrPassthroughCapabilityFlagBitsFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPassthroughCapabilityFlagBitsFB>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPassthroughFlagBitsFB>(const XrPassthroughFlagBitsFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPassthroughFlagBitsFB>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPassthroughLayerPurposeFB>(const XrPassthroughLayerPurposeFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPassthroughStateChangedFlagBitsFB>(const XrPassthroughStateChangedFlagBitsFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPassthroughStateChangedFlagBitsFB>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrRenderModelFlagBitsFB>(const XrRenderModelFlagBitsFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrRenderModelFlagBitsFB>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFrameEndInfoFlagBitsML>(const XrFrameEndInfoFlagBitsML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFrameEndInfoFlagBitsML>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrGlobalDimmerFrameEndInfoFlagBitsML>(const XrGlobalDimmerFrameEndInfoFlagBitsML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrGlobalDimmerFrameEndInfoFlagBitsML>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
#ifdef XR_USE_PLATFORM_ML
#endif /* XR_USE_PLATFORM_ML */
template <> std::string ToString<XrMarkerAprilTagDictML>(const XrMarkerAprilTagDictML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrMarkerArucoDictML>(const XrMarkerArucoDictML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrMarkerDetectorCameraML>(const XrMarkerDetectorCameraML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrMarkerDetectorCornerRefineMethodML>(const XrMarkerDetectorCornerRefineMethodML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrMarkerDetectorFpsML>(const XrMarkerDetectorFpsML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrMarkerDetectorFullAnalysisIntervalML>(const XrMarkerDetectorFullAnalysisIntervalML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrMarkerDetectorProfileML>(const XrMarkerDetectorProfileML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrMarkerDetectorResolutionML>(const XrMarkerDetectorResolutionML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrMarkerDetectorStatusML>(const XrMarkerDetectorStatusML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrMarkerTypeML>(const XrMarkerTypeML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrLocalizationMapConfidenceML>(const XrLocalizationMapConfidenceML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrLocalizationMapErrorFlagBitsML>(const XrLocalizationMapErrorFlagBitsML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrLocalizationMapErrorFlagBitsML>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrLocalizationMapStateML>(const XrLocalizationMapStateML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrLocalizationMapTypeML>(const XrLocalizationMapTypeML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrSceneMarkerQRCodeSymbolTypeMSFT>(const XrSceneMarkerQRCodeSymbolTypeMSFT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrSceneMarkerTypeMSFT>(const XrSceneMarkerTypeMSFT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrHandForearmJointULTRALEAP>(const XrHandForearmJointULTRALEAP& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrSpaceQueryActionFB>(const XrSpaceQueryActionFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrSpaceStorageLocationFB>(const XrSpaceStorageLocationFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrSpacePersistenceModeFB>(const XrSpacePersistenceModeFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
#ifdef XR_USE_GRAPHICS_API_VULKAN
#endif /* XR_USE_GRAPHICS_API_VULKAN */
#ifdef XR_USE_PLATFORM_ANDROID
#endif /* XR_USE_PLATFORM_ANDROID */
#ifdef XR_USE_GRAPHICS_API_OPENGL_ES
#endif /* XR_USE_GRAPHICS_API_OPENGL_ES */
#ifdef XR_USE_GRAPHICS_API_VULKAN
#endif /* XR_USE_GRAPHICS_API_VULKAN */
template <> std::string ToString<XrCompositionLayerSpaceWarpInfoFlagBitsFB>(const XrCompositionLayerSpaceWarpInfoFlagBitsFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrCompositionLayerSpaceWarpInfoFlagBitsFB>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrSemanticLabelsSupportFlagBitsFB>(const XrSemanticLabelsSupportFlagBitsFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrSemanticLabelsSupportFlagBitsFB>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrDigitalLensControlFlagBitsALMALENCE>(const XrDigitalLensControlFlagBitsALMALENCE& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrDigitalLensControlFlagBitsALMALENCE>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFoveationEyeTrackedProfileCreateFlagBitsMETA>(const XrFoveationEyeTrackedProfileCreateFlagBitsMETA& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFoveationEyeTrackedProfileCreateFlagBitsMETA>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFoveationEyeTrackedStateFlagBitsMETA>(const XrFoveationEyeTrackedStateFlagBitsMETA& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFoveationEyeTrackedStateFlagBitsMETA>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFaceConfidenceFB>(const XrFaceConfidenceFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFaceExpressionFB>(const XrFaceExpressionFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFaceExpressionSetFB>(const XrFaceExpressionSetFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrEyePositionFB>(const XrEyePositionFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrCompositionLayerSettingsFlagBitsFB>(const XrCompositionLayerSettingsFlagBitsFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrCompositionLayerSettingsFlagBitsFB>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrCompareOpFB>(const XrCompareOpFB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrLocalDimmingModeMETA>(const XrLocalDimmingModeMETA& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPassthroughPreferenceFlagBitsMETA>(const XrPassthroughPreferenceFlagBitsMETA& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPassthroughPreferenceFlagBitsMETA>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrVirtualKeyboardInputSourceMETA>(const XrVirtualKeyboardInputSourceMETA& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrVirtualKeyboardInputStateFlagBitsMETA>(const XrVirtualKeyboardInputStateFlagBitsMETA& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrVirtualKeyboardInputStateFlagBitsMETA>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrVirtualKeyboardLocationTypeMETA>(const XrVirtualKeyboardLocationTypeMETA& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrExternalCameraAttachedToDeviceOCULUS>(const XrExternalCameraAttachedToDeviceOCULUS& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrExternalCameraStatusFlagBitsOCULUS>(const XrExternalCameraStatusFlagBitsOCULUS& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrExternalCameraStatusFlagBitsOCULUS>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
#ifdef XR_USE_GRAPHICS_API_VULKAN
#endif /* XR_USE_GRAPHICS_API_VULKAN */
template <> std::string ToString<XrPerformanceMetricsCounterFlagBitsMETA>(const XrPerformanceMetricsCounterFlagBitsMETA& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPerformanceMetricsCounterFlagBitsMETA>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPerformanceMetricsCounterUnitMETA>(const XrPerformanceMetricsCounterUnitMETA& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPassthroughColorLutChannelsMETA>(const XrPassthroughColorLutChannelsMETA& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFaceConfidence2FB>(const XrFaceConfidence2FB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFaceExpression2FB>(const XrFaceExpression2FB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFaceExpressionSet2FB>(const XrFaceExpressionSet2FB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFaceTrackingDataSource2FB>(const XrFaceTrackingDataSource2FB& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPassthroughFormHTC>(const XrPassthroughFormHTC& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrTrackingOptimizationSettingsDomainQCOM>(const XrTrackingOptimizationSettingsDomainQCOM& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrTrackingOptimizationSettingsHintQCOM>(const XrTrackingOptimizationSettingsHintQCOM& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFoveationDynamicFlagBitsHTC>(const XrFoveationDynamicFlagBitsHTC& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFoveationDynamicFlagBitsHTC>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFoveationLevelHTC>(const XrFoveationLevelHTC& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrFoveationModeHTC>(const XrFoveationModeHTC& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrForceFeedbackCurlLocationMNDX>(const XrForceFeedbackCurlLocationMNDX& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrHandTrackingDataSourceEXT>(const XrHandTrackingDataSourceEXT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPlaneDetectionCapabilityFlagBitsEXT>(const XrPlaneDetectionCapabilityFlagBitsEXT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPlaneDetectionCapabilityFlagBitsEXT>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPlaneDetectionStateEXT>(const XrPlaneDetectionStateEXT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPlaneDetectorFlagBitsEXT>(const XrPlaneDetectorFlagBitsEXT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPlaneDetectorFlagBitsEXT>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPlaneDetectorOrientationEXT>(const XrPlaneDetectorOrientationEXT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrPlaneDetectorSemanticTypeEXT>(const XrPlaneDetectorSemanticTypeEXT& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrEyeCalibrationStatusML>(const XrEyeCalibrationStatusML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
template <> std::string ToString<XrHeadsetFitStatusML>(const XrHeadsetFitStatusML& value, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
GFXRECON_END_NAMESPACE(util)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif //  GFXRECON_GENERATED_OPENXR_ENUM_TO_STRING_H