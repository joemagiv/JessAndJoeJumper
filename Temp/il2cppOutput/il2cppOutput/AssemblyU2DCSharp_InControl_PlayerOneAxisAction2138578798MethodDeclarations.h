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

// InControl.PlayerOneAxisAction
struct PlayerOneAxisAction_t2138578798;
// InControl.PlayerAction
struct PlayerAction_t3117799861;
// System.Action`1<InControl.BindingSourceType>
struct Action_1_t816497204;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_PlayerAction3117799861.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void InControl.PlayerOneAxisAction::.ctor(InControl.PlayerAction,InControl.PlayerAction)
extern "C"  void PlayerOneAxisAction__ctor_m435953345 (PlayerOneAxisAction_t2138578798 * __this, PlayerAction_t3117799861 * ___negativeAction0, PlayerAction_t3117799861 * ___positiveAction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerOneAxisAction::add_OnLastInputTypeChanged(System.Action`1<InControl.BindingSourceType>)
extern "C"  void PlayerOneAxisAction_add_OnLastInputTypeChanged_m3704997170 (PlayerOneAxisAction_t2138578798 * __this, Action_1_t816497204 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerOneAxisAction::remove_OnLastInputTypeChanged(System.Action`1<InControl.BindingSourceType>)
extern "C"  void PlayerOneAxisAction_remove_OnLastInputTypeChanged_m2194571891 (PlayerOneAxisAction_t2138578798 * __this, Action_1_t816497204 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object InControl.PlayerOneAxisAction::get_UserData()
extern "C"  Il2CppObject * PlayerOneAxisAction_get_UserData_m62589288 (PlayerOneAxisAction_t2138578798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerOneAxisAction::set_UserData(System.Object)
extern "C"  void PlayerOneAxisAction_set_UserData_m1420782019 (PlayerOneAxisAction_t2138578798 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerOneAxisAction::Update(System.UInt64,System.Single)
extern "C"  void PlayerOneAxisAction_Update_m958419832 (PlayerOneAxisAction_t2138578798 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerOneAxisAction::ProcessActionUpdate(InControl.PlayerAction)
extern "C"  void PlayerOneAxisAction_ProcessActionUpdate_m2633070084 (PlayerOneAxisAction_t2138578798 * __this, PlayerAction_t3117799861 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.PlayerOneAxisAction::get_LowerDeadZone()
extern "C"  float PlayerOneAxisAction_get_LowerDeadZone_m3147335959 (PlayerOneAxisAction_t2138578798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerOneAxisAction::set_LowerDeadZone(System.Single)
extern "C"  void PlayerOneAxisAction_set_LowerDeadZone_m1222425268 (PlayerOneAxisAction_t2138578798 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.PlayerOneAxisAction::get_UpperDeadZone()
extern "C"  float PlayerOneAxisAction_get_UpperDeadZone_m1083695480 (PlayerOneAxisAction_t2138578798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerOneAxisAction::set_UpperDeadZone(System.Single)
extern "C"  void PlayerOneAxisAction_set_UpperDeadZone_m3969239027 (PlayerOneAxisAction_t2138578798 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
