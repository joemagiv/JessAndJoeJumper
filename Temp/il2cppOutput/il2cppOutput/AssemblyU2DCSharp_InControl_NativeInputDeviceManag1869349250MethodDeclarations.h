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

// InControl.NativeInputDeviceManager
struct NativeInputDeviceManager_t1869349250;
// InControl.NativeInputDevice
struct NativeInputDevice_t1250450747;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.NativeInputDevice>
struct ReadOnlyCollection_1_t2807528283;
// InControl.NativeInputDeviceProfile
struct NativeInputDeviceProfile_t724663166;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t901821544;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_NativeDeviceInfo1383951833.h"
#include "AssemblyU2DCSharp_InControl_NativeInputDevice1250450747.h"
#include "AssemblyU2DCSharp_InControl_NativeInputDeviceProfil724663166.h"

// System.Void InControl.NativeInputDeviceManager::.ctor()
extern "C"  void NativeInputDeviceManager__ctor_m1910935457 (NativeInputDeviceManager_t1869349250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.NativeInputDeviceManager::Destroy()
extern "C"  void NativeInputDeviceManager_Destroy_m4092102329 (NativeInputDeviceManager_t1869349250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 InControl.NativeInputDeviceManager::NextPowerOfTwo(System.UInt32)
extern "C"  uint32_t NativeInputDeviceManager_NextPowerOfTwo_m3383465337 (NativeInputDeviceManager_t1869349250 * __this, uint32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.NativeInputDeviceManager::Update(System.UInt64,System.Single)
extern "C"  void NativeInputDeviceManager_Update_m1906541844 (NativeInputDeviceManager_t1869349250 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.NativeInputDeviceManager::DetectDevice(System.UInt32,InControl.NativeDeviceInfo)
extern "C"  void NativeInputDeviceManager_DetectDevice_m782265527 (NativeInputDeviceManager_t1869349250 * __this, uint32_t ___deviceHandle0, NativeDeviceInfo_t1383951833  ___deviceInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.NativeInputDeviceManager::AttachDevice(InControl.NativeInputDevice)
extern "C"  void NativeInputDeviceManager_AttachDevice_m334842337 (NativeInputDeviceManager_t1869349250 * __this, NativeInputDevice_t1250450747 * ___device0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.NativeInputDeviceManager::DetachDevice(InControl.NativeInputDevice)
extern "C"  void NativeInputDeviceManager_DetachDevice_m2668932563 (NativeInputDeviceManager_t1869349250 * __this, NativeInputDevice_t1250450747 * ___device0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.NativeInputDevice InControl.NativeInputDeviceManager::FindAttachedDevice(System.UInt32)
extern "C"  NativeInputDevice_t1250450747 * NativeInputDeviceManager_FindAttachedDevice_m3227212356 (NativeInputDeviceManager_t1869349250 * __this, uint32_t ___deviceHandle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.NativeInputDevice InControl.NativeInputDeviceManager::FindDetachedDevice(InControl.NativeDeviceInfo)
extern "C"  NativeInputDevice_t1250450747 * NativeInputDeviceManager_FindDetachedDevice_m143175187 (NativeInputDeviceManager_t1869349250 * __this, NativeDeviceInfo_t1383951833  ___deviceInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.NativeInputDevice InControl.NativeInputDeviceManager::SystemFindDetachedDevice(InControl.NativeDeviceInfo,System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.NativeInputDevice>)
extern "C"  NativeInputDevice_t1250450747 * NativeInputDeviceManager_SystemFindDetachedDevice_m1839827178 (Il2CppObject * __this /* static, unused */, NativeDeviceInfo_t1383951833  ___deviceInfo0, ReadOnlyCollection_1_t2807528283 * ___detachedDevices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.NativeInputDeviceManager::AddSystemDeviceProfile(InControl.NativeInputDeviceProfile)
extern "C"  void NativeInputDeviceManager_AddSystemDeviceProfile_m3345768880 (NativeInputDeviceManager_t1869349250 * __this, NativeInputDeviceProfile_t724663166 * ___deviceProfile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.NativeInputDeviceManager::AddSystemDeviceProfiles()
extern "C"  void NativeInputDeviceManager_AddSystemDeviceProfiles_m2444861423 (NativeInputDeviceManager_t1869349250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeInputDeviceManager::CheckPlatformSupport(System.Collections.Generic.ICollection`1<System.String>)
extern "C"  bool NativeInputDeviceManager_CheckPlatformSupport_m1442845414 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___errors0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeInputDeviceManager::Enable()
extern "C"  bool NativeInputDeviceManager_Enable_m4176711290 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
