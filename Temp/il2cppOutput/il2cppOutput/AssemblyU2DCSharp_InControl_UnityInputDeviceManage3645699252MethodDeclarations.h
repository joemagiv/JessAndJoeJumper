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

// InControl.UnityInputDeviceManager
struct UnityInputDeviceManager_t3645699252;
// InControl.UnityInputDevice
struct UnityInputDevice_t2197339721;
// System.String
struct String_t;
// InControl.UnityInputDeviceProfile
struct UnityInputDeviceProfile_t2501013168;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_UnityInputDevice2197339721.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_InControl_UnityInputDeviceProfil2501013168.h"

// System.Void InControl.UnityInputDeviceManager::.ctor()
extern "C"  void UnityInputDeviceManager__ctor_m26812799 (UnityInputDeviceManager_t3645699252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDeviceManager::Update(System.UInt64,System.Single)
extern "C"  void UnityInputDeviceManager_Update_m1980415474 (UnityInputDeviceManager_t3645699252 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDeviceManager::QueryJoystickInfo()
extern "C"  void UnityInputDeviceManager_QueryJoystickInfo_m4105334031 (UnityInputDeviceManager_t3645699252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityInputDeviceManager::get_JoystickInfoHasChanged()
extern "C"  bool UnityInputDeviceManager_get_JoystickInfoHasChanged_m689119710 (UnityInputDeviceManager_t3645699252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDeviceManager::AttachDevices()
extern "C"  void UnityInputDeviceManager_AttachDevices_m186286965 (UnityInputDeviceManager_t3645699252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDeviceManager::DetachDevices()
extern "C"  void UnityInputDeviceManager_DetachDevices_m3702387175 (UnityInputDeviceManager_t3645699252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDeviceManager::ReloadDevices()
extern "C"  void UnityInputDeviceManager_ReloadDevices_m3277680289 (UnityInputDeviceManager_t3645699252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDeviceManager::AttachDevice(InControl.UnityInputDevice)
extern "C"  void UnityInputDeviceManager_AttachDevice_m1148503167 (UnityInputDeviceManager_t3645699252 * __this, UnityInputDevice_t2197339721 * ___device0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDeviceManager::AttachKeyboardDevices()
extern "C"  void UnityInputDeviceManager_AttachKeyboardDevices_m2751585358 (UnityInputDeviceManager_t3645699252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDeviceManager::AttachJoystickDevices()
extern "C"  void UnityInputDeviceManager_AttachJoystickDevices_m4252825241 (UnityInputDeviceManager_t3645699252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityInputDeviceManager::HasAttachedDeviceWithJoystickId(System.Int32)
extern "C"  bool UnityInputDeviceManager_HasAttachedDeviceWithJoystickId_m205349555 (UnityInputDeviceManager_t3645699252 * __this, int32_t ___unityJoystickId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDeviceManager::DetectJoystickDevice(System.Int32,System.String)
extern "C"  void UnityInputDeviceManager_DetectJoystickDevice_m3903499815 (UnityInputDeviceManager_t3645699252 * __this, int32_t ___unityJoystickId0, String_t* ___unityJoystickName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDeviceManager::AddSystemDeviceProfile(InControl.UnityInputDeviceProfile)
extern "C"  void UnityInputDeviceManager_AddSystemDeviceProfile_m1591193986 (UnityInputDeviceManager_t3645699252 * __this, UnityInputDeviceProfile_t2501013168 * ___deviceProfile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityInputDeviceManager::AddSystemDeviceProfiles()
extern "C"  void UnityInputDeviceManager_AddSystemDeviceProfiles_m873117261 (UnityInputDeviceManager_t3645699252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
