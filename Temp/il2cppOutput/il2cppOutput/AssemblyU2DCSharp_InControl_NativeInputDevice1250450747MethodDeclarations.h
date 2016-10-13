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

// InControl.NativeInputDevice
struct NativeInputDevice_t1250450747;
// InControl.NativeInputDeviceProfile
struct NativeInputDeviceProfile_t724663166;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_NativeDeviceInfo1383951833.h"
#include "AssemblyU2DCSharp_InControl_NativeInputDeviceProfil724663166.h"

// System.Void InControl.NativeInputDevice::.ctor()
extern "C"  void NativeInputDevice__ctor_m1231630040 (NativeInputDevice_t1250450747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 InControl.NativeInputDevice::get_Handle()
extern "C"  uint32_t NativeInputDevice_get_Handle_m3034262626 (NativeInputDevice_t1250450747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.NativeInputDevice::set_Handle(System.UInt32)
extern "C"  void NativeInputDevice_set_Handle_m1688143369 (NativeInputDevice_t1250450747 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.NativeDeviceInfo InControl.NativeInputDevice::get_Info()
extern "C"  NativeDeviceInfo_t1383951833  NativeInputDevice_get_Info_m778496407 (NativeInputDevice_t1250450747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.NativeInputDevice::set_Info(InControl.NativeDeviceInfo)
extern "C"  void NativeInputDevice_set_Info_m2476161958 (NativeInputDevice_t1250450747 * __this, NativeDeviceInfo_t1383951833  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.NativeInputDevice::Initialize(System.UInt32,InControl.NativeDeviceInfo,InControl.NativeInputDeviceProfile)
extern "C"  void NativeInputDevice_Initialize_m1258159385 (NativeInputDevice_t1250450747 * __this, uint32_t ___deviceHandle0, NativeDeviceInfo_t1383951833  ___deviceInfo1, NativeInputDeviceProfile_t724663166 * ___deviceProfile2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.NativeInputDevice::Initialize(System.UInt32,InControl.NativeDeviceInfo)
extern "C"  void NativeInputDevice_Initialize_m1540317015 (NativeInputDevice_t1250450747 * __this, uint32_t ___deviceHandle0, NativeDeviceInfo_t1383951833  ___deviceInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.NativeInputDevice::Update(System.UInt64,System.Single)
extern "C"  void NativeInputDevice_Update_m1362869195 (NativeInputDevice_t1250450747 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeInputDevice::ReadRawButtonState(System.Int32)
extern "C"  bool NativeInputDevice_ReadRawButtonState_m1808192758 (NativeInputDevice_t1250450747 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.NativeInputDevice::ReadRawAnalogValue(System.Int32)
extern "C"  float NativeInputDevice_ReadRawAnalogValue_m2955959360 (NativeInputDevice_t1250450747 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte InControl.NativeInputDevice::FloatToByte(System.Single)
extern "C"  uint8_t NativeInputDevice_FloatToByte_m3306998570 (NativeInputDevice_t1250450747 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.NativeInputDevice::Vibrate(System.Single,System.Single)
extern "C"  void NativeInputDevice_Vibrate_m3840683467 (NativeInputDevice_t1250450747 * __this, float ___leftMotor0, float ___rightMotor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.NativeInputDevice::SetLightColor(System.Single,System.Single,System.Single)
extern "C"  void NativeInputDevice_SetLightColor_m183055536 (NativeInputDevice_t1250450747 * __this, float ___red0, float ___green1, float ___blue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.NativeInputDevice::SetLightFlash(System.Single,System.Single)
extern "C"  void NativeInputDevice_SetLightFlash_m2291834782 (NativeInputDevice_t1250450747 * __this, float ___flashOnDuration0, float ___flashOffDuration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeInputDevice::HasSameVendorID(InControl.NativeDeviceInfo)
extern "C"  bool NativeInputDevice_HasSameVendorID_m3312379356 (NativeInputDevice_t1250450747 * __this, NativeDeviceInfo_t1383951833  ___deviceInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeInputDevice::HasSameProductID(InControl.NativeDeviceInfo)
extern "C"  bool NativeInputDevice_HasSameProductID_m1003706769 (NativeInputDevice_t1250450747 * __this, NativeDeviceInfo_t1383951833  ___deviceInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeInputDevice::HasSameVersionNumber(InControl.NativeDeviceInfo)
extern "C"  bool NativeInputDevice_HasSameVersionNumber_m3484494216 (NativeInputDevice_t1250450747 * __this, NativeDeviceInfo_t1383951833  ___deviceInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeInputDevice::HasSameLocation(InControl.NativeDeviceInfo)
extern "C"  bool NativeInputDevice_HasSameLocation_m4077435438 (NativeInputDevice_t1250450747 * __this, NativeDeviceInfo_t1383951833  ___deviceInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeInputDevice::HasSameSerialNumber(InControl.NativeDeviceInfo)
extern "C"  bool NativeInputDevice_HasSameSerialNumber_m3730550870 (NativeInputDevice_t1250450747 * __this, NativeDeviceInfo_t1383951833  ___deviceInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeInputDevice::get_IsSupportedOnThisPlatform()
extern "C"  bool NativeInputDevice_get_IsSupportedOnThisPlatform_m3288325045 (NativeInputDevice_t1250450747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeInputDevice::get_IsKnown()
extern "C"  bool NativeInputDevice_get_IsKnown_m2610094650 (NativeInputDevice_t1250450747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.NativeInputDevice::get_NumUnknownButtons()
extern "C"  int32_t NativeInputDevice_get_NumUnknownButtons_m11375704 (NativeInputDevice_t1250450747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.NativeInputDevice::get_NumUnknownAnalogs()
extern "C"  int32_t NativeInputDevice_get_NumUnknownAnalogs_m2592117210 (NativeInputDevice_t1250450747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
