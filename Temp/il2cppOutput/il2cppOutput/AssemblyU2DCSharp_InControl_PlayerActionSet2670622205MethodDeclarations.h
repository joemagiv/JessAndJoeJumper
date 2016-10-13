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

// InControl.PlayerActionSet
struct PlayerActionSet_t2670622205;
// System.Action`1<InControl.BindingSourceType>
struct Action_1_t816497204;
// InControl.InputDevice
struct InputDevice_t4071704914;
// System.Collections.Generic.List`1<InControl.InputDevice>
struct List_1_t1144923170;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.PlayerAction>
struct ReadOnlyCollection_1_t379910101;
// System.Object
struct Il2CppObject;
// InControl.PlayerAction
struct PlayerAction_t3117799861;
// System.String
struct String_t;
// InControl.PlayerOneAxisAction
struct PlayerOneAxisAction_t2138578798;
// InControl.PlayerTwoAxisAction
struct PlayerTwoAxisAction_t1043663828;
// InControl.BindingSource
struct BindingSource_t1899497234;
// InControl.BindingListenOptions
struct BindingListenOptions_t2027175824;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_InControl_PlayerAction3117799861.h"
#include "AssemblyU2DCSharp_InControl_BindingSource1899497234.h"
#include "AssemblyU2DCSharp_InControl_BindingListenOptions2027175824.h"

// System.Void InControl.PlayerActionSet::.ctor()
extern "C"  void PlayerActionSet__ctor_m1833003606 (PlayerActionSet_t2670622205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerActionSet::add_OnLastInputTypeChanged(System.Action`1<InControl.BindingSourceType>)
extern "C"  void PlayerActionSet_add_OnLastInputTypeChanged_m3052423425 (PlayerActionSet_t2670622205 * __this, Action_1_t816497204 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerActionSet::remove_OnLastInputTypeChanged(System.Action`1<InControl.BindingSourceType>)
extern "C"  void PlayerActionSet_remove_OnLastInputTypeChanged_m392116292 (PlayerActionSet_t2670622205 * __this, Action_1_t816497204 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputDevice InControl.PlayerActionSet::get_Device()
extern "C"  InputDevice_t4071704914 * PlayerActionSet_get_Device_m3975756004 (PlayerActionSet_t2670622205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerActionSet::set_Device(InControl.InputDevice)
extern "C"  void PlayerActionSet_set_Device_m242073607 (PlayerActionSet_t2670622205 * __this, InputDevice_t4071704914 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<InControl.InputDevice> InControl.PlayerActionSet::get_IncludeDevices()
extern "C"  List_1_t1144923170 * PlayerActionSet_get_IncludeDevices_m1069440993 (PlayerActionSet_t2670622205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerActionSet::set_IncludeDevices(System.Collections.Generic.List`1<InControl.InputDevice>)
extern "C"  void PlayerActionSet_set_IncludeDevices_m1334721422 (PlayerActionSet_t2670622205 * __this, List_1_t1144923170 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<InControl.InputDevice> InControl.PlayerActionSet::get_ExcludeDevices()
extern "C"  List_1_t1144923170 * PlayerActionSet_get_ExcludeDevices_m1007226607 (PlayerActionSet_t2670622205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerActionSet::set_ExcludeDevices(System.Collections.Generic.List`1<InControl.InputDevice>)
extern "C"  void PlayerActionSet_set_ExcludeDevices_m639133852 (PlayerActionSet_t2670622205 * __this, List_1_t1144923170 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.PlayerAction> InControl.PlayerActionSet::get_Actions()
extern "C"  ReadOnlyCollection_1_t379910101 * PlayerActionSet_get_Actions_m3566808537 (PlayerActionSet_t2670622205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerActionSet::set_Actions(System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.PlayerAction>)
extern "C"  void PlayerActionSet_set_Actions_m3965304348 (PlayerActionSet_t2670622205 * __this, ReadOnlyCollection_1_t379910101 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 InControl.PlayerActionSet::get_UpdateTick()
extern "C"  uint64_t PlayerActionSet_get_UpdateTick_m1856346529 (PlayerActionSet_t2670622205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerActionSet::set_UpdateTick(System.UInt64)
extern "C"  void PlayerActionSet_set_UpdateTick_m3342660330 (PlayerActionSet_t2670622205 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.PlayerActionSet::get_Enabled()
extern "C"  bool PlayerActionSet_get_Enabled_m1592302912 (PlayerActionSet_t2670622205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerActionSet::set_Enabled(System.Boolean)
extern "C"  void PlayerActionSet_set_Enabled_m782273551 (PlayerActionSet_t2670622205 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object InControl.PlayerActionSet::get_UserData()
extern "C"  Il2CppObject * PlayerActionSet_get_UserData_m150379383 (PlayerActionSet_t2670622205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerActionSet::set_UserData(System.Object)
extern "C"  void PlayerActionSet_set_UserData_m3790300564 (PlayerActionSet_t2670622205 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerActionSet::Destroy()
extern "C"  void PlayerActionSet_Destroy_m2214037550 (PlayerActionSet_t2670622205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.PlayerAction InControl.PlayerActionSet::CreatePlayerAction(System.String)
extern "C"  PlayerAction_t3117799861 * PlayerActionSet_CreatePlayerAction_m864285585 (PlayerActionSet_t2670622205 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerActionSet::AddPlayerAction(InControl.PlayerAction)
extern "C"  void PlayerActionSet_AddPlayerAction_m4140546143 (PlayerActionSet_t2670622205 * __this, PlayerAction_t3117799861 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.PlayerOneAxisAction InControl.PlayerActionSet::CreateOneAxisPlayerAction(InControl.PlayerAction,InControl.PlayerAction)
extern "C"  PlayerOneAxisAction_t2138578798 * PlayerActionSet_CreateOneAxisPlayerAction_m4093539779 (PlayerActionSet_t2670622205 * __this, PlayerAction_t3117799861 * ___negativeAction0, PlayerAction_t3117799861 * ___positiveAction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.PlayerTwoAxisAction InControl.PlayerActionSet::CreateTwoAxisPlayerAction(InControl.PlayerAction,InControl.PlayerAction,InControl.PlayerAction,InControl.PlayerAction)
extern "C"  PlayerTwoAxisAction_t1043663828 * PlayerActionSet_CreateTwoAxisPlayerAction_m252881187 (PlayerActionSet_t2670622205 * __this, PlayerAction_t3117799861 * ___negativeXAction0, PlayerAction_t3117799861 * ___positiveXAction1, PlayerAction_t3117799861 * ___negativeYAction2, PlayerAction_t3117799861 * ___positiveYAction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.PlayerAction InControl.PlayerActionSet::get_Item(System.String)
extern "C"  PlayerAction_t3117799861 * PlayerActionSet_get_Item_m2861527400 (PlayerActionSet_t2670622205 * __this, String_t* ___actionName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.PlayerAction InControl.PlayerActionSet::GetPlayerActionByName(System.String)
extern "C"  PlayerAction_t3117799861 * PlayerActionSet_GetPlayerActionByName_m708278319 (PlayerActionSet_t2670622205 * __this, String_t* ___actionName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerActionSet::Update(System.UInt64,System.Single)
extern "C"  void PlayerActionSet_Update_m2148527689 (PlayerActionSet_t2670622205 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerActionSet::Reset()
extern "C"  void PlayerActionSet_Reset_m3774403843 (PlayerActionSet_t2670622205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputDevice InControl.PlayerActionSet::FindActiveDevice()
extern "C"  InputDevice_t4071704914 * PlayerActionSet_FindActiveDevice_m2370611802 (PlayerActionSet_t2670622205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerActionSet::ClearInputState()
extern "C"  void PlayerActionSet_ClearInputState_m4228663240 (PlayerActionSet_t2670622205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.PlayerActionSet::HasBinding(InControl.BindingSource)
extern "C"  bool PlayerActionSet_HasBinding_m3074860355 (PlayerActionSet_t2670622205 * __this, BindingSource_t1899497234 * ___binding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerActionSet::RemoveBinding(InControl.BindingSource)
extern "C"  void PlayerActionSet_RemoveBinding_m2975379123 (PlayerActionSet_t2670622205 * __this, BindingSource_t1899497234 * ___binding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.BindingListenOptions InControl.PlayerActionSet::get_ListenOptions()
extern "C"  BindingListenOptions_t2027175824 * PlayerActionSet_get_ListenOptions_m71736343 (PlayerActionSet_t2670622205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerActionSet::set_ListenOptions(InControl.BindingListenOptions)
extern "C"  void PlayerActionSet_set_ListenOptions_m390513702 (PlayerActionSet_t2670622205 * __this, BindingListenOptions_t2027175824 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.PlayerActionSet::Save()
extern "C"  String_t* PlayerActionSet_Save_m3198897320 (PlayerActionSet_t2670622205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerActionSet::Load(System.String)
extern "C"  void PlayerActionSet_Load_m591088622 (PlayerActionSet_t2670622205 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
