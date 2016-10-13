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

// InControl.UnityInputDevice
struct UnityInputDevice_t2197339721;
// InControl.UnityInputDeviceProfileBase
struct UnityInputDeviceProfileBase_t1946940833;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_UnityInputDeviceProfil1946940833.h"
#include "mscorlib_System_String7231557.h"

// System.Void InControl.UnityInputDevice::.ctor(InControl.UnityInputDeviceProfileBase)
extern "C"  void UnityInputDevice__ctor_m3939356927 (UnityInputDevice_t2197339721 * __this, UnityInputDeviceProfileBase_t1946940833 * ___deviceProfile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDevice::.ctor(System.Int32,System.String)
extern "C"  void UnityInputDevice__ctor_m976634375 (UnityInputDevice_t2197339721 * __this, int32_t ___joystickId0, String_t* ___joystickName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDevice::.ctor(InControl.UnityInputDeviceProfileBase,System.Int32,System.String)
extern "C"  void UnityInputDevice__ctor_m814221428 (UnityInputDevice_t2197339721 * __this, UnityInputDeviceProfileBase_t1946940833 * ___deviceProfile0, int32_t ___joystickId1, String_t* ___joystickName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.UnityInputDevice::get_JoystickId()
extern "C"  int32_t UnityInputDevice_get_JoystickId_m4064610584 (UnityInputDevice_t2197339721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDevice::set_JoystickId(System.Int32)
extern "C"  void UnityInputDevice_set_JoystickId_m3629421263 (UnityInputDevice_t2197339721 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDevice::Update(System.UInt64,System.Single)
extern "C"  void UnityInputDevice_Update_m1266000045 (UnityInputDevice_t2197339721 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDevice::SetupAnalogQueries()
extern "C"  void UnityInputDevice_SetupAnalogQueries_m2683620899 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDevice::SetupButtonQueries()
extern "C"  void UnityInputDevice_SetupButtonQueries_m3324607009 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.UnityInputDevice::GetAnalogKey(System.Int32,System.Int32)
extern "C"  String_t* UnityInputDevice_GetAnalogKey_m44992224 (Il2CppObject * __this /* static, unused */, int32_t ___joystickId0, int32_t ___analogId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.UnityInputDevice::GetButtonKey(System.Int32,System.Int32)
extern "C"  String_t* UnityInputDevice_GetButtonKey_m1364321698 (Il2CppObject * __this /* static, unused */, int32_t ___joystickId0, int32_t ___buttonId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityInputDevice::ReadRawButtonState(System.Int32)
extern "C"  bool UnityInputDevice_ReadRawButtonState_m3197789756 (UnityInputDevice_t2197339721 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.UnityInputDevice::ReadRawAnalogValue(System.Int32)
extern "C"  float UnityInputDevice_ReadRawAnalogValue_m1503862454 (UnityInputDevice_t2197339721 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityInputDevice::get_IsSupportedOnThisPlatform()
extern "C"  bool UnityInputDevice_get_IsSupportedOnThisPlatform_m3748792751 (UnityInputDevice_t2197339721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityInputDevice::get_IsKnown()
extern "C"  bool UnityInputDevice_get_IsKnown_m487094964 (UnityInputDevice_t2197339721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.UnityInputDevice::get_NumUnknownButtons()
extern "C"  int32_t UnityInputDevice_get_NumUnknownButtons_m640185438 (UnityInputDevice_t2197339721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.UnityInputDevice::get_NumUnknownAnalogs()
extern "C"  int32_t UnityInputDevice_get_NumUnknownAnalogs_m3220926944 (UnityInputDevice_t2197339721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
