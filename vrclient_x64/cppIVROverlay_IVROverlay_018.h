#ifdef __cplusplus
extern "C" {
#endif
extern EVROverlayError cppIVROverlay_IVROverlay_018_FindOverlay(void *, const char *, VROverlayHandle_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_CreateOverlay(void *, const char *, const char *, VROverlayHandle_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_DestroyOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetHighQualityOverlay(void *, VROverlayHandle_t);
extern VROverlayHandle_t cppIVROverlay_IVROverlay_018_GetHighQualityOverlay(void *);
extern uint32_t cppIVROverlay_IVROverlay_018_GetOverlayKey(void *, VROverlayHandle_t, char *, uint32_t, EVROverlayError *);
extern uint32_t cppIVROverlay_IVROverlay_018_GetOverlayName(void *, VROverlayHandle_t, char *, uint32_t, EVROverlayError *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayName(void *, VROverlayHandle_t, const char *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayImageData(void *, VROverlayHandle_t, void *, uint32_t, uint32_t *, uint32_t *);
extern const char * cppIVROverlay_IVROverlay_018_GetOverlayErrorNameFromEnum(void *, EVROverlayError);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayRenderingPid(void *, VROverlayHandle_t, uint32_t);
extern uint32_t cppIVROverlay_IVROverlay_018_GetOverlayRenderingPid(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayFlag(void *, VROverlayHandle_t, VROverlayFlags, bool *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayColor(void *, VROverlayHandle_t, float, float, float);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayColor(void *, VROverlayHandle_t, float *, float *, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayAlpha(void *, VROverlayHandle_t, float);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayAlpha(void *, VROverlayHandle_t, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayTexelAspect(void *, VROverlayHandle_t, float);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayTexelAspect(void *, VROverlayHandle_t, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlaySortOrder(void *, VROverlayHandle_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlaySortOrder(void *, VROverlayHandle_t, uint32_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayWidthInMeters(void *, VROverlayHandle_t, float);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayWidthInMeters(void *, VROverlayHandle_t, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayAutoCurveDistanceRangeInMeters(void *, VROverlayHandle_t, float, float);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayAutoCurveDistanceRangeInMeters(void *, VROverlayHandle_t, float *, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayTextureColorSpace(void *, VROverlayHandle_t, EColorSpace);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayTextureColorSpace(void *, VROverlayHandle_t, EColorSpace *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayTextureBounds(void *, VROverlayHandle_t, VRTextureBounds_t *);
extern uint32_t cppIVROverlay_IVROverlay_018_GetOverlayRenderModel(void *, VROverlayHandle_t, char *, uint32_t, HmdColor_t *, EVROverlayError *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayRenderModel(void *, VROverlayHandle_t, const char *, HmdColor_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayTransformType(void *, VROverlayHandle_t, VROverlayTransformType *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayTransformAbsolute(void *, VROverlayHandle_t, ETrackingUniverseOrigin, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayTransformAbsolute(void *, VROverlayHandle_t, ETrackingUniverseOrigin *, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceRelative(void *, VROverlayHandle_t, TrackedDeviceIndex_t *, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayTransformTrackedDeviceComponent(void *, VROverlayHandle_t, TrackedDeviceIndex_t, const char *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayTransformTrackedDeviceComponent(void *, VROverlayHandle_t, TrackedDeviceIndex_t *, char *, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayTransformOverlayRelative(void *, VROverlayHandle_t, VROverlayHandle_t *, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayTransformOverlayRelative(void *, VROverlayHandle_t, VROverlayHandle_t, HmdMatrix34_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_ShowOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_018_HideOverlay(void *, VROverlayHandle_t);
extern bool cppIVROverlay_IVROverlay_018_IsOverlayVisible(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetTransformForOverlayCoordinates(void *, VROverlayHandle_t, ETrackingUniverseOrigin, HmdVector2_t, HmdMatrix34_t *);
extern bool cppIVROverlay_IVROverlay_018_PollNextOverlayEvent(void *, VROverlayHandle_t, winVREvent_t_1012 *, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayInputMethod(void *, VROverlayHandle_t, VROverlayInputMethod);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayMouseScale(void *, VROverlayHandle_t, HmdVector2_t *);
extern bool cppIVROverlay_IVROverlay_018_ComputeOverlayIntersection(void *, VROverlayHandle_t, VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t *);
extern bool cppIVROverlay_IVROverlay_018_IsHoverTargetOverlay(void *, VROverlayHandle_t);
extern VROverlayHandle_t cppIVROverlay_IVROverlay_018_GetGamepadFocusOverlay(void *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetGamepadFocusOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayNeighbor(void *, EOverlayDirection, VROverlayHandle_t, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_018_MoveGamepadFocusToNeighbor(void *, EOverlayDirection, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayDualAnalogTransform(void *, VROverlayHandle_t, EDualAnalogWhich, HmdVector2_t *, float);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayDualAnalogTransform(void *, VROverlayHandle_t, EDualAnalogWhich, HmdVector2_t *, float *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayTexture(void *, VROverlayHandle_t, Texture_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_ClearOverlayTexture(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayRaw(void *, VROverlayHandle_t, void *, uint32_t, uint32_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayFromFile(void *, VROverlayHandle_t, const char *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayTexture(void *, VROverlayHandle_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, ETextureType *, EColorSpace *, VRTextureBounds_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_ReleaseNativeOverlayHandle(void *, VROverlayHandle_t, void *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayTextureSize(void *, VROverlayHandle_t, uint32_t *, uint32_t *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_CreateDashboardOverlay(void *, const char *, const char *, VROverlayHandle_t *, VROverlayHandle_t *);
extern bool cppIVROverlay_IVROverlay_018_IsDashboardVisible(void *);
extern bool cppIVROverlay_IVROverlay_018_IsActiveDashboardOverlay(void *, VROverlayHandle_t);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetDashboardOverlaySceneProcess(void *, VROverlayHandle_t, uint32_t *);
extern void cppIVROverlay_IVROverlay_018_ShowDashboard(void *, const char *);
extern TrackedDeviceIndex_t cppIVROverlay_IVROverlay_018_GetPrimaryDashboardDevice(void *);
extern EVROverlayError cppIVROverlay_IVROverlay_018_ShowKeyboard(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32_t, const char *, bool, uint64_t);
extern EVROverlayError cppIVROverlay_IVROverlay_018_ShowKeyboardForOverlay(void *, VROverlayHandle_t, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32_t, const char *, bool, uint64_t);
extern uint32_t cppIVROverlay_IVROverlay_018_GetKeyboardText(void *, char *, uint32_t);
extern void cppIVROverlay_IVROverlay_018_HideKeyboard(void *);
extern void cppIVROverlay_IVROverlay_018_SetKeyboardTransformAbsolute(void *, ETrackingUniverseOrigin, HmdMatrix34_t *);
extern void cppIVROverlay_IVROverlay_018_SetKeyboardPositionForOverlay(void *, VROverlayHandle_t, HmdRect2_t);
extern EVROverlayError cppIVROverlay_IVROverlay_018_SetOverlayIntersectionMask(void *, VROverlayHandle_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t);
extern EVROverlayError cppIVROverlay_IVROverlay_018_GetOverlayFlags(void *, VROverlayHandle_t, uint32_t *);
extern VRMessageOverlayResponse cppIVROverlay_IVROverlay_018_ShowMessageOverlay(void *, const char *, const char *, const char *, const char *, const char *, const char *);
extern void cppIVROverlay_IVROverlay_018_CloseMessageOverlay(void *);
#ifdef __cplusplus
}
#endif