#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// InControl.UnityInputDeviceProfile
struct UnityInputDeviceProfile_t2501013168;
// System.String
struct String_t;
// InControl.InputControlSource
struct InputControlSource_t4197400812;
// InControl.InputControlMapping
struct InputControlMapping_t318255021;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_VersionInfo1214656568.h"
#include "mscorlib_System_String7231557.h"

// System.Void InControl.UnityInputDeviceProfile::.ctor()
extern "C"  void UnityInputDeviceProfile__ctor_m3795264259 (UnityInputDeviceProfile_t2501013168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDeviceProfile::.cctor()
extern "C"  void UnityInputDeviceProfile__cctor_m1206978826 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.VersionInfo InControl.UnityInputDeviceProfile::get_MinUnityVersion()
extern "C"  VersionInfo_t1214656568  UnityInputDeviceProfile_get_MinUnityVersion_m550730544 (UnityInputDeviceProfile_t2501013168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDeviceProfile::set_MinUnityVersion(InControl.VersionInfo)
extern "C"  void UnityInputDeviceProfile_set_MinUnityVersion_m16251913 (UnityInputDeviceProfile_t2501013168 * __this, VersionInfo_t1214656568  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.VersionInfo InControl.UnityInputDeviceProfile::get_MaxUnityVersion()
extern "C"  VersionInfo_t1214656568  UnityInputDeviceProfile_get_MaxUnityVersion_m2530652866 (UnityInputDeviceProfile_t2501013168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDeviceProfile::set_MaxUnityVersion(InControl.VersionInfo)
extern "C"  void UnityInputDeviceProfile_set_MaxUnityVersion_m3996226487 (UnityInputDeviceProfile_t2501013168 * __this, VersionInfo_t1214656568  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityInputDeviceProfile::get_IsJoystick()
extern "C"  bool UnityInputDeviceProfile_get_IsJoystick_m1475416060 (UnityInputDeviceProfile_t2501013168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityInputDeviceProfile::HasJoystickName(System.String)
extern "C"  bool UnityInputDeviceProfile_HasJoystickName_m3066897548 (UnityInputDeviceProfile_t2501013168 * __this, String_t* ___joystickName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityInputDeviceProfile::HasLastResortRegex(System.String)
extern "C"  bool UnityInputDeviceProfile_HasLastResortRegex_m1785525423 (UnityInputDeviceProfile_t2501013168 * __this, String_t* ___joystickName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityInputDeviceProfile::HasJoystickOrRegexName(System.String)
extern "C"  bool UnityInputDeviceProfile_HasJoystickOrRegexName_m1034577756 (UnityInputDeviceProfile_t2501013168 * __this, String_t* ___joystickName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityInputDeviceProfile::get_IsSupportedOnThisPlatform()
extern "C"  bool UnityInputDeviceProfile_get_IsSupportedOnThisPlatform_m2310694880 (UnityInputDeviceProfile_t2501013168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityInputDeviceProfile::get_IsSupportedOnThisVersionOfUnity()
extern "C"  bool UnityInputDeviceProfile_get_IsSupportedOnThisVersionOfUnity_m2397052307 (UnityInputDeviceProfile_t2501013168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button(System.Int32)
extern "C"  Il2CppObject * UnityInputDeviceProfile_Button_m342599211 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog(System.Int32)
extern "C"  Il2CppObject * UnityInputDeviceProfile_Analog_m4227761001 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.UnityInputDeviceProfile::LeftStickLeftMapping(InControl.InputControlSource)
extern "C"  InputControlMapping_t318255021 * UnityInputDeviceProfile_LeftStickLeftMapping_m2685044781 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.UnityInputDeviceProfile::LeftStickRightMapping(InControl.InputControlSource)
extern "C"  InputControlMapping_t318255021 * UnityInputDeviceProfile_LeftStickRightMapping_m4184250566 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.UnityInputDeviceProfile::LeftStickUpMapping(InControl.InputControlSource)
extern "C"  InputControlMapping_t318255021 * UnityInputDeviceProfile_LeftStickUpMapping_m3005727833 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.UnityInputDeviceProfile::LeftStickDownMapping(InControl.InputControlSource)
extern "C"  InputControlMapping_t318255021 * UnityInputDeviceProfile_LeftStickDownMapping_m3008714866 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.UnityInputDeviceProfile::RightStickLeftMapping(InControl.InputControlSource)
extern "C"  InputControlMapping_t318255021 * UnityInputDeviceProfile_RightStickLeftMapping_m1922462366 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.UnityInputDeviceProfile::RightStickRightMapping(InControl.InputControlSource)
extern "C"  InputControlMapping_t318255021 * UnityInputDeviceProfile_RightStickRightMapping_m2019032181 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.UnityInputDeviceProfile::RightStickUpMapping(InControl.InputControlSource)
extern "C"  InputControlMapping_t318255021 * UnityInputDeviceProfile_RightStickUpMapping_m3688732426 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.UnityInputDeviceProfile::RightStickDownMapping(InControl.InputControlSource)
extern "C"  InputControlMapping_t318255021 * UnityInputDeviceProfile_RightStickDownMapping_m2246132451 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.UnityInputDeviceProfile::LeftTriggerMapping(InControl.InputControlSource)
extern "C"  InputControlMapping_t318255021 * UnityInputDeviceProfile_LeftTriggerMapping_m3561940492 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.UnityInputDeviceProfile::RightTriggerMapping(InControl.InputControlSource)
extern "C"  InputControlMapping_t318255021 * UnityInputDeviceProfile_RightTriggerMapping_m4244945085 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.UnityInputDeviceProfile::DPadLeftMapping(InControl.InputControlSource)
extern "C"  InputControlMapping_t318255021 * UnityInputDeviceProfile_DPadLeftMapping_m2981309891 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.UnityInputDeviceProfile::DPadRightMapping(InControl.InputControlSource)
extern "C"  InputControlMapping_t318255021 * UnityInputDeviceProfile_DPadRightMapping_m483567088 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.UnityInputDeviceProfile::DPadUpMapping(InControl.InputControlSource)
extern "C"  InputControlMapping_t318255021 * UnityInputDeviceProfile_DPadUpMapping_m2831734639 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.UnityInputDeviceProfile::DPadDownMapping(InControl.InputControlSource)
extern "C"  InputControlMapping_t318255021 * UnityInputDeviceProfile_DPadDownMapping_m3304979976 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.UnityInputDeviceProfile::DPadUpMapping2(InControl.InputControlSource)
extern "C"  InputControlMapping_t318255021 * UnityInputDeviceProfile_DPadUpMapping2_m4287627069 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.UnityInputDeviceProfile::DPadDownMapping2(InControl.InputControlSource)
extern "C"  InputControlMapping_t318255021 * UnityInputDeviceProfile_DPadDownMapping2_m1778363332 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
