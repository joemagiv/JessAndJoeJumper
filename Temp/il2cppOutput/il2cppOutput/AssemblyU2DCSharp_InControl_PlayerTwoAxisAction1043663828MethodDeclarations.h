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

// InControl.PlayerTwoAxisAction
struct PlayerTwoAxisAction_t1043663828;
// InControl.PlayerAction
struct PlayerAction_t3117799861;
// System.Action`1<InControl.BindingSourceType>
struct Action_1_t816497204;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_PlayerAction3117799861.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void InControl.PlayerTwoAxisAction::.ctor(InControl.PlayerAction,InControl.PlayerAction,InControl.PlayerAction,InControl.PlayerAction)
extern "C"  void PlayerTwoAxisAction__ctor_m2161806919 (PlayerTwoAxisAction_t1043663828 * __this, PlayerAction_t3117799861 * ___negativeXAction0, PlayerAction_t3117799861 * ___positiveXAction1, PlayerAction_t3117799861 * ___negativeYAction2, PlayerAction_t3117799861 * ___positiveYAction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerTwoAxisAction::add_OnLastInputTypeChanged(System.Action`1<InControl.BindingSourceType>)
extern "C"  void PlayerTwoAxisAction_add_OnLastInputTypeChanged_m2808134168 (PlayerTwoAxisAction_t1043663828 * __this, Action_1_t816497204 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerTwoAxisAction::remove_OnLastInputTypeChanged(System.Action`1<InControl.BindingSourceType>)
extern "C"  void PlayerTwoAxisAction_remove_OnLastInputTypeChanged_m2740427725 (PlayerTwoAxisAction_t1043663828 * __this, Action_1_t816497204 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.PlayerTwoAxisAction::get_InvertXAxis()
extern "C"  bool PlayerTwoAxisAction_get_InvertXAxis_m3020654411 (PlayerTwoAxisAction_t1043663828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerTwoAxisAction::set_InvertXAxis(System.Boolean)
extern "C"  void PlayerTwoAxisAction_set_InvertXAxis_m3768390874 (PlayerTwoAxisAction_t1043663828 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.PlayerTwoAxisAction::get_InvertYAxis()
extern "C"  bool PlayerTwoAxisAction_get_InvertYAxis_m3908158092 (PlayerTwoAxisAction_t1043663828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerTwoAxisAction::set_InvertYAxis(System.Boolean)
extern "C"  void PlayerTwoAxisAction_set_InvertYAxis_m3979741787 (PlayerTwoAxisAction_t1043663828 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object InControl.PlayerTwoAxisAction::get_UserData()
extern "C"  Il2CppObject * PlayerTwoAxisAction_get_UserData_m2261674446 (PlayerTwoAxisAction_t1043663828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerTwoAxisAction::set_UserData(System.Object)
extern "C"  void PlayerTwoAxisAction_set_UserData_m3530972957 (PlayerTwoAxisAction_t1043663828 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerTwoAxisAction::Update(System.UInt64,System.Single)
extern "C"  void PlayerTwoAxisAction_Update_m791760594 (PlayerTwoAxisAction_t1043663828 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerTwoAxisAction::ProcessActionUpdate(InControl.PlayerAction)
extern "C"  void PlayerTwoAxisAction_ProcessActionUpdate_m3152443230 (PlayerTwoAxisAction_t1043663828 * __this, PlayerAction_t3117799861 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.PlayerTwoAxisAction::get_LowerDeadZone()
extern "C"  float PlayerTwoAxisAction_get_LowerDeadZone_m2880403569 (PlayerTwoAxisAction_t1043663828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerTwoAxisAction::set_LowerDeadZone(System.Single)
extern "C"  void PlayerTwoAxisAction_set_LowerDeadZone_m599461274 (PlayerTwoAxisAction_t1043663828 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.PlayerTwoAxisAction::get_UpperDeadZone()
extern "C"  float PlayerTwoAxisAction_get_UpperDeadZone_m816763090 (PlayerTwoAxisAction_t1043663828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerTwoAxisAction::set_UpperDeadZone(System.Single)
extern "C"  void PlayerTwoAxisAction_set_UpperDeadZone_m3346275033 (PlayerTwoAxisAction_t1043663828 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
