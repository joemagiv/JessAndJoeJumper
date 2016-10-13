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

// InControl.InControlInputModule
struct InControlInputModule_t2818848380;
// InControl.PlayerAction
struct PlayerAction_t3117799861;
// InControl.PlayerTwoAxisAction
struct PlayerTwoAxisAction_t1043663828;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1848751023;
// InControl.InputDevice
struct InputDevice_t4071704914;
// InControl.InputControl
struct InputControl_t1543925617;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_PlayerAction3117799861.h"
#include "AssemblyU2DCSharp_InControl_PlayerTwoAxisAction1043663828.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1848751023.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"

// System.Void InControl.InControlInputModule::.ctor()
extern "C"  void InControlInputModule__ctor_m198778855 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.PlayerAction InControl.InControlInputModule::get_SubmitAction()
extern "C"  PlayerAction_t3117799861 * InControlInputModule_get_SubmitAction_m3991555748 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InControlInputModule::set_SubmitAction(InControl.PlayerAction)
extern "C"  void InControlInputModule_set_SubmitAction_m1809959643 (InControlInputModule_t2818848380 * __this, PlayerAction_t3117799861 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.PlayerAction InControl.InControlInputModule::get_CancelAction()
extern "C"  PlayerAction_t3117799861 * InControlInputModule_get_CancelAction_m1173142278 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InControlInputModule::set_CancelAction(InControl.PlayerAction)
extern "C"  void InControlInputModule_set_CancelAction_m1242030525 (InControlInputModule_t2818848380 * __this, PlayerAction_t3117799861 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.PlayerTwoAxisAction InControl.InControlInputModule::get_MoveAction()
extern "C"  PlayerTwoAxisAction_t1043663828 * InControlInputModule_get_MoveAction_m3500649780 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InControlInputModule::set_MoveAction(InControl.PlayerTwoAxisAction)
extern "C"  void InControlInputModule_set_MoveAction_m792076901 (InControlInputModule_t2818848380 * __this, PlayerTwoAxisAction_t1043663828 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InControlInputModule::UpdateModule()
extern "C"  void InControlInputModule_UpdateModule_m4263622610 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InControlInputModule::IsModuleSupported()
extern "C"  bool InControlInputModule_IsModuleSupported_m826461929 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InControlInputModule::ShouldActivateModule()
extern "C"  bool InControlInputModule_ShouldActivateModule_m4026089859 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InControlInputModule::ActivateModule()
extern "C"  void InControlInputModule_ActivateModule_m3893140220 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InControlInputModule::Process()
extern "C"  void InControlInputModule_Process_m600560308 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InControlInputModule::SendButtonEventToSelectedObject()
extern "C"  bool InControlInputModule_SendButtonEventToSelectedObject_m1704790438 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InControlInputModule::SendVectorEventToSelectedObject()
extern "C"  bool InControlInputModule_SendVectorEventToSelectedObject_m3027143797 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InControlInputModule::ProcessMove(UnityEngine.EventSystems.PointerEventData)
extern "C"  void InControlInputModule_ProcessMove_m1895244345 (InControlInputModule_t2818848380 * __this, PointerEventData_t1848751023 * ___pointerEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InControlInputModule::Update()
extern "C"  void InControlInputModule_Update_m3594039302 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InControlInputModule::UpdateInputState()
extern "C"  void InControlInputModule_UpdateInputState_m4019744525 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InControlInputModule::set_Device(InControl.InputDevice)
extern "C"  void InControlInputModule_set_Device_m3590828632 (InControlInputModule_t2818848380 * __this, InputDevice_t4071704914 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputDevice InControl.InControlInputModule::get_Device()
extern "C"  InputDevice_t4071704914 * InControlInputModule_get_Device_m2721812133 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InControlInputModule::get_SubmitButton()
extern "C"  InputControl_t1543925617 * InControlInputModule_get_SubmitButton_m3679539556 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InControlInputModule::get_CancelButton()
extern "C"  InputControl_t1543925617 * InControlInputModule_get_CancelButton_m861126086 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InControlInputModule::SetVectorRepeatTimer()
extern "C"  void InControlInputModule_SetVectorRepeatTimer_m3585838114 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InControlInputModule::get_VectorIsPressed()
extern "C"  bool InControlInputModule_get_VectorIsPressed_m2414240637 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InControlInputModule::get_VectorIsReleased()
extern "C"  bool InControlInputModule_get_VectorIsReleased_m2728373092 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InControlInputModule::get_VectorHasChanged()
extern "C"  bool InControlInputModule_get_VectorHasChanged_m2443350231 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InControlInputModule::get_VectorWasPressed()
extern "C"  bool InControlInputModule_get_VectorWasPressed_m2015029078 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InControlInputModule::get_SubmitWasPressed()
extern "C"  bool InControlInputModule_get_SubmitWasPressed_m1883549355 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InControlInputModule::get_SubmitWasReleased()
extern "C"  bool InControlInputModule_get_SubmitWasReleased_m3456812534 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InControlInputModule::get_CancelWasPressed()
extern "C"  bool InControlInputModule_get_CancelWasPressed_m4002814477 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InControlInputModule::get_MouseHasMoved()
extern "C"  bool InControlInputModule_get_MouseHasMoved_m799167846 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InControlInputModule::get_MouseButtonIsPressed()
extern "C"  bool InControlInputModule_get_MouseButtonIsPressed_m956686363 (InControlInputModule_t2818848380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
