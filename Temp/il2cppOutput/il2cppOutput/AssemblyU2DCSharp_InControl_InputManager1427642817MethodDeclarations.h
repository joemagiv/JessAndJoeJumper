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

// InControl.InputManager
struct InputManager_t1427642817;
// System.Action
struct Action_t3771233898;
// System.Action`2<System.UInt64,System.Single>
struct Action_2_t1184472795;
// System.Action`1<InControl.InputDevice>
struct Action_1_t172553754;
// System.String
struct String_t;
// InControl.InputDeviceManager
struct InputDeviceManager_t3034357131;
// InControl.InputDevice
struct InputDevice_t4071704914;
// System.Type
struct Type_t;
// InControl.PlayerActionSet
struct PlayerActionSet_t2670622205;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3771233898.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_InControl_InputDeviceManager3034357131.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"
#include "mscorlib_System_Type2863145774.h"
#include "AssemblyU2DCSharp_InControl_PlayerActionSet2670622205.h"
#include "AssemblyU2DCSharp_InControl_VersionInfo1214656568.h"

// System.Void InControl.InputManager::.ctor()
extern "C"  void InputManager__ctor_m2604773954 (InputManager_t1427642817 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::.cctor()
extern "C"  void InputManager__cctor_m2956485035 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::add_OnSetup(System.Action)
extern "C"  void InputManager_add_OnSetup_m3139907357 (Il2CppObject * __this /* static, unused */, Action_t3771233898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::remove_OnSetup(System.Action)
extern "C"  void InputManager_remove_OnSetup_m4050248184 (Il2CppObject * __this /* static, unused */, Action_t3771233898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::add_OnUpdate(System.Action`2<System.UInt64,System.Single>)
extern "C"  void InputManager_add_OnUpdate_m2190155431 (Il2CppObject * __this /* static, unused */, Action_2_t1184472795 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::remove_OnUpdate(System.Action`2<System.UInt64,System.Single>)
extern "C"  void InputManager_remove_OnUpdate_m3641943426 (Il2CppObject * __this /* static, unused */, Action_2_t1184472795 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::add_OnReset(System.Action)
extern "C"  void InputManager_add_OnReset_m2325548555 (Il2CppObject * __this /* static, unused */, Action_t3771233898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::remove_OnReset(System.Action)
extern "C"  void InputManager_remove_OnReset_m3235889382 (Il2CppObject * __this /* static, unused */, Action_t3771233898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::add_OnDeviceAttached(System.Action`1<InControl.InputDevice>)
extern "C"  void InputManager_add_OnDeviceAttached_m1832477551 (Il2CppObject * __this /* static, unused */, Action_1_t172553754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::remove_OnDeviceAttached(System.Action`1<InControl.InputDevice>)
extern "C"  void InputManager_remove_OnDeviceAttached_m1136369546 (Il2CppObject * __this /* static, unused */, Action_1_t172553754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::add_OnDeviceDetached(System.Action`1<InControl.InputDevice>)
extern "C"  void InputManager_add_OnDeviceDetached_m946932541 (Il2CppObject * __this /* static, unused */, Action_1_t172553754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::remove_OnDeviceDetached(System.Action`1<InControl.InputDevice>)
extern "C"  void InputManager_remove_OnDeviceDetached_m250824536 (Il2CppObject * __this /* static, unused */, Action_1_t172553754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::add_OnActiveDeviceChanged(System.Action`1<InControl.InputDevice>)
extern "C"  void InputManager_add_OnActiveDeviceChanged_m2514636017 (Il2CppObject * __this /* static, unused */, Action_1_t172553754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::remove_OnActiveDeviceChanged(System.Action`1<InControl.InputDevice>)
extern "C"  void InputManager_remove_OnActiveDeviceChanged_m293104054 (Il2CppObject * __this /* static, unused */, Action_1_t172553754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::add_OnUpdateDevices(System.Action`2<System.UInt64,System.Single>)
extern "C"  void InputManager_add_OnUpdateDevices_m3076543094 (Il2CppObject * __this /* static, unused */, Action_2_t1184472795 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::remove_OnUpdateDevices(System.Action`2<System.UInt64,System.Single>)
extern "C"  void InputManager_remove_OnUpdateDevices_m855011131 (Il2CppObject * __this /* static, unused */, Action_2_t1184472795 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::add_OnCommitDevices(System.Action`2<System.UInt64,System.Single>)
extern "C"  void InputManager_add_OnCommitDevices_m526895816 (Il2CppObject * __this /* static, unused */, Action_2_t1184472795 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::remove_OnCommitDevices(System.Action`2<System.UInt64,System.Single>)
extern "C"  void InputManager_remove_OnCommitDevices_m2600331149 (Il2CppObject * __this /* static, unused */, Action_2_t1184472795 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputManager::get_CommandWasPressed()
extern "C"  bool InputManager_get_CommandWasPressed_m2211640167 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::set_CommandWasPressed(System.Boolean)
extern "C"  void InputManager_set_CommandWasPressed_m4263429342 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputManager::get_InvertYAxis()
extern "C"  bool InputManager_get_InvertYAxis_m502556615 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::set_InvertYAxis(System.Boolean)
extern "C"  void InputManager_set_InvertYAxis_m86458686 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputManager::get_IsSetup()
extern "C"  bool InputManager_get_IsSetup_m4033094390 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::set_IsSetup(System.Boolean)
extern "C"  void InputManager_set_IsSetup_m3020709421 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.InputManager::get_Platform()
extern "C"  String_t* InputManager_get_Platform_m1262058977 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::set_Platform(System.String)
extern "C"  void InputManager_set_Platform_m2317688528 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputManager::get_MenuWasPressed()
extern "C"  bool InputManager_get_MenuWasPressed_m2007726391 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::Setup()
extern "C"  void InputManager_Setup_m1140106909 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputManager::SetupInternal()
extern "C"  bool InputManager_SetupInternal_m1100865798 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::Reset()
extern "C"  void InputManager_Reset_m251206895 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::ResetInternal()
extern "C"  void InputManager_ResetInternal_m462173836 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::Update()
extern "C"  void InputManager_Update_m870476043 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::UpdateInternal()
extern "C"  void InputManager_UpdateInternal_m3487934120 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::Reload()
extern "C"  void InputManager_Reload_m3300769243 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::AssertIsSetup()
extern "C"  void InputManager_AssertIsSetup_m3101760109 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::SetZeroTickOnAllControls()
extern "C"  void InputManager_SetZeroTickOnAllControls_m657880179 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::ClearInputState()
extern "C"  void InputManager_ClearInputState_m1517590708 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::OnApplicationFocus(System.Boolean)
extern "C"  void InputManager_OnApplicationFocus_m1968244320 (Il2CppObject * __this /* static, unused */, bool ___focusState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::OnApplicationPause(System.Boolean)
extern "C"  void InputManager_OnApplicationPause_m3422411646 (Il2CppObject * __this /* static, unused */, bool ___pauseState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::OnApplicationQuit()
extern "C"  void InputManager_OnApplicationQuit_m1192676544 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::OnLevelWasLoaded()
extern "C"  void InputManager_OnLevelWasLoaded_m2785128427 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::AddDeviceManager(InControl.InputDeviceManager)
extern "C"  void InputManager_AddDeviceManager_m3816870581 (Il2CppObject * __this /* static, unused */, InputDeviceManager_t3034357131 * ___deviceManager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::UpdateCurrentTime()
extern "C"  void InputManager_UpdateCurrentTime_m1389659389 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::UpdateDeviceManagers(System.Single)
extern "C"  void InputManager_UpdateDeviceManagers_m830502276 (Il2CppObject * __this /* static, unused */, float ___deltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::DestroyDeviceManagers()
extern "C"  void InputManager_DestroyDeviceManagers_m2475922774 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::DestroyDevices()
extern "C"  void InputManager_DestroyDevices_m2176512069 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::UpdateDevices(System.Single)
extern "C"  void InputManager_UpdateDevices_m2789337847 (Il2CppObject * __this /* static, unused */, float ___deltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::CommitDevices(System.Single)
extern "C"  void InputManager_CommitDevices_m1174189285 (Il2CppObject * __this /* static, unused */, float ___deltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::UpdateActiveDevice()
extern "C"  void InputManager_UpdateActiveDevice_m1940116519 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::AttachDevice(InControl.InputDevice)
extern "C"  void InputManager_AttachDevice_m4148448267 (Il2CppObject * __this /* static, unused */, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::DetachDevice(InControl.InputDevice)
extern "C"  void InputManager_DetachDevice_m2532445565 (Il2CppObject * __this /* static, unused */, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::HideDevicesWithProfile(System.Type)
extern "C"  void InputManager_HideDevicesWithProfile_m3502280943 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::AttachPlayerActionSet(InControl.PlayerActionSet)
extern "C"  void InputManager_AttachPlayerActionSet_m2434873239 (Il2CppObject * __this /* static, unused */, PlayerActionSet_t2670622205 * ___playerActionSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::DetachPlayerActionSet(InControl.PlayerActionSet)
extern "C"  void InputManager_DetachPlayerActionSet_m1549328229 (Il2CppObject * __this /* static, unused */, PlayerActionSet_t2670622205 * ___playerActionSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::UpdatePlayerActionSets(System.Single)
extern "C"  void InputManager_UpdatePlayerActionSets_m1243342840 (Il2CppObject * __this /* static, unused */, float ___deltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputManager::get_AnyKeyIsPressed()
extern "C"  bool InputManager_get_AnyKeyIsPressed_m3755440392 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputDevice InControl.InputManager::get_ActiveDevice()
extern "C"  InputDevice_t4071704914 * InputManager_get_ActiveDevice_m1073383696 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::set_ActiveDevice(InControl.InputDevice)
extern "C"  void InputManager_set_ActiveDevice_m2408228365 (Il2CppObject * __this /* static, unused */, InputDevice_t4071704914 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputManager::get_Enabled()
extern "C"  bool InputManager_get_Enabled_m1995246404 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::set_Enabled(System.Boolean)
extern "C"  void InputManager_set_Enabled_m1706665467 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputManager::get_SuspendInBackground()
extern "C"  bool InputManager_get_SuspendInBackground_m3376963602 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::set_SuspendInBackground(System.Boolean)
extern "C"  void InputManager_set_SuspendInBackground_m587274825 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputManager::get_EnableNativeInput()
extern "C"  bool InputManager_get_EnableNativeInput_m111466035 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::set_EnableNativeInput(System.Boolean)
extern "C"  void InputManager_set_EnableNativeInput_m232116906 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputManager::get_EnableXInput()
extern "C"  bool InputManager_get_EnableXInput_m2110421844 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::set_EnableXInput(System.Boolean)
extern "C"  void InputManager_set_EnableXInput_m265914763 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 InControl.InputManager::get_XInputUpdateRate()
extern "C"  uint32_t InputManager_get_XInputUpdateRate_m3171734401 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::set_XInputUpdateRate(System.UInt32)
extern "C"  void InputManager_set_XInputUpdateRate_m3317017888 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 InControl.InputManager::get_XInputBufferSize()
extern "C"  uint32_t InputManager_get_XInputBufferSize_m2095433881 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::set_XInputBufferSize(System.UInt32)
extern "C"  void InputManager_set_XInputBufferSize_m4087201544 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputManager::get_NativeInputEnableXInput()
extern "C"  bool InputManager_get_NativeInputEnableXInput_m3702751595 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::set_NativeInputEnableXInput(System.Boolean)
extern "C"  void InputManager_set_NativeInputEnableXInput_m3079031778 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputManager::get_NativeInputPreventSleep()
extern "C"  bool InputManager_get_NativeInputPreventSleep_m4259631413 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::set_NativeInputPreventSleep(System.Boolean)
extern "C"  void InputManager_set_NativeInputPreventSleep_m199438892 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 InControl.InputManager::get_NativeInputUpdateRate()
extern "C"  uint32_t InputManager_get_NativeInputUpdateRate_m2341444760 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::set_NativeInputUpdateRate(System.UInt32)
extern "C"  void InputManager_set_NativeInputUpdateRate_m4034863547 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputManager::get_EnableICade()
extern "C"  bool InputManager_get_EnableICade_m1950120872 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputManager::set_EnableICade(System.Boolean)
extern "C"  void InputManager_set_EnableICade_m2783071 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.VersionInfo InControl.InputManager::get_UnityVersion()
extern "C"  VersionInfo_t1214656568  InputManager_get_UnityVersion_m2591544145 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 InControl.InputManager::get_CurrentTick()
extern "C"  uint64_t InputManager_get_CurrentTick_m2291966097 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.InputManager::<AttachDevice>m__4(InControl.InputDevice,InControl.InputDevice)
extern "C"  int32_t InputManager_U3CAttachDeviceU3Em__4_m2107230924 (Il2CppObject * __this /* static, unused */, InputDevice_t4071704914 * ___d10, InputDevice_t4071704914 * ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
