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

// InControl.NativeInputDeviceProfile
struct NativeInputDeviceProfile_t724663166;
// InControl.NativeInputDeviceMatcher[]
struct NativeInputDeviceMatcherU5BU5D_t4080315646;
// InControl.InputControlSource
struct InputControlSource_t4197400812;
// InControl.InputControlMapping
struct InputControlMapping_t318255021;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_NativeDeviceInfo1383951833.h"

// System.Void InControl.NativeInputDeviceProfile::.ctor()
extern "C"  void NativeInputDeviceProfile__ctor_m1384419621 (NativeInputDeviceProfile_t724663166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeInputDeviceProfile::Matches(InControl.NativeDeviceInfo)
extern "C"  bool NativeInputDeviceProfile_Matches_m1914688081 (NativeInputDeviceProfile_t724663166 * __this, NativeDeviceInfo_t1383951833  ___deviceInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeInputDeviceProfile::LastResortMatches(InControl.NativeDeviceInfo)
extern "C"  bool NativeInputDeviceProfile_LastResortMatches_m3186995914 (NativeInputDeviceProfile_t724663166 * __this, NativeDeviceInfo_t1383951833  ___deviceInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeInputDeviceProfile::Matches(InControl.NativeDeviceInfo,InControl.NativeInputDeviceMatcher[])
extern "C"  bool NativeInputDeviceProfile_Matches_m2764671764 (NativeInputDeviceProfile_t724663166 * __this, NativeDeviceInfo_t1383951833  ___deviceInfo0, NativeInputDeviceMatcherU5BU5D_t4080315646* ___matchers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlSource InControl.NativeInputDeviceProfile::Button(System.Int32)
extern "C"  Il2CppObject * NativeInputDeviceProfile_Button_m1865875099 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlSource InControl.NativeInputDeviceProfile::Analog(System.Int32)
extern "C"  Il2CppObject * NativeInputDeviceProfile_Analog_m1456069593 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::LeftStickLeftMapping(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_LeftStickLeftMapping_m147612828 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::LeftStickRightMapping(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_LeftStickRightMapping_m1600354177 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::LeftStickUpMapping(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_LeftStickUpMapping_m3470069576 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::LeftStickDownMapping(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_LeftStickDownMapping_m2239913697 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::LeftStickUpMapping2(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_LeftStickUpMapping2_m987890126 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::LeftStickDownMapping2(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_LeftStickDownMapping2_m1507763541 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::RightStickLeftMapping(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_RightStickLeftMapping_m3178365273 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::RightStickRightMapping(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_RightStickRightMapping_m1064399460 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::RightStickUpMapping(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_RightStickUpMapping_m1086633797 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::RightStickDownMapping(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_RightStickDownMapping_m975698846 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::RightStickUpMapping2(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_RightStickUpMapping2_m115825009 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::RightStickDownMapping2(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_RightStickDownMapping2_m971808824 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::LeftTriggerMapping(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_LeftTriggerMapping_m501479163 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::RightTriggerMapping(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_RightTriggerMapping_m2413010680 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::DPadLeftMapping(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_DPadLeftMapping_m389837566 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::DPadRightMapping(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_DPadRightMapping_m519386463 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::DPadUpMapping(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_DPadUpMapping_m1834569258 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::DPadDownMapping(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_DPadDownMapping_m2482138435 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::DPadUpMapping2(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_DPadUpMapping2_m1826987820 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping InControl.NativeInputDeviceProfile::DPadDownMapping2(System.Int32)
extern "C"  InputControlMapping_t318255021 * NativeInputDeviceProfile_DPadDownMapping2_m426795827 (Il2CppObject * __this /* static, unused */, int32_t ___analog0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
