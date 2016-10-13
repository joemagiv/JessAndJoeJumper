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

// InControl.TouchButtonControl
struct TouchButtonControl_t2354215306;
// InControl.Touch
struct Touch_t2333148497;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_Touch2333148497.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_InControl_TouchControlAnchor508992049.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_InControl_TouchUnitType1633405775.h"

// System.Void InControl.TouchButtonControl::.ctor()
extern "C"  void TouchButtonControl__ctor_m1754305177 (TouchButtonControl_t2354215306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchButtonControl::CreateControl()
extern "C"  void TouchButtonControl_CreateControl_m2996321848 (TouchButtonControl_t2354215306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchButtonControl::DestroyControl()
extern "C"  void TouchButtonControl_DestroyControl_m4212136526 (TouchButtonControl_t2354215306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchButtonControl::ConfigureControl()
extern "C"  void TouchButtonControl_ConfigureControl_m362710626 (TouchButtonControl_t2354215306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchButtonControl::DrawGizmos()
extern "C"  void TouchButtonControl_DrawGizmos_m158998376 (TouchButtonControl_t2354215306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchButtonControl::Update()
extern "C"  void TouchButtonControl_Update_m275747732 (TouchButtonControl_t2354215306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchButtonControl::SubmitControlState(System.UInt64,System.Single)
extern "C"  void TouchButtonControl_SubmitControlState_m1850020169 (TouchButtonControl_t2354215306 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchButtonControl::CommitControlState(System.UInt64,System.Single)
extern "C"  void TouchButtonControl_CommitControlState_m1656600330 (TouchButtonControl_t2354215306 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchButtonControl::TouchBegan(InControl.Touch)
extern "C"  void TouchButtonControl_TouchBegan_m2983365036 (TouchButtonControl_t2354215306 * __this, Touch_t2333148497 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchButtonControl::TouchMoved(InControl.Touch)
extern "C"  void TouchButtonControl_TouchMoved_m318596842 (TouchButtonControl_t2354215306 * __this, Touch_t2333148497 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchButtonControl::TouchEnded(InControl.Touch)
extern "C"  void TouchButtonControl_TouchEnded_m2295695811 (TouchButtonControl_t2354215306 * __this, Touch_t2333148497 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TouchButtonControl::get_ButtonState()
extern "C"  bool TouchButtonControl_get_ButtonState_m3324488345 (TouchButtonControl_t2354215306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchButtonControl::set_ButtonState(System.Boolean)
extern "C"  void TouchButtonControl_set_ButtonState_m307066256 (TouchButtonControl_t2354215306 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 InControl.TouchButtonControl::get_ButtonPosition()
extern "C"  Vector3_t4282066566  TouchButtonControl_get_ButtonPosition_m699491977 (TouchButtonControl_t2354215306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchButtonControl::set_ButtonPosition(UnityEngine.Vector3)
extern "C"  void TouchButtonControl_set_ButtonPosition_m261497590 (TouchButtonControl_t2354215306 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.TouchControlAnchor InControl.TouchButtonControl::get_Anchor()
extern "C"  int32_t TouchButtonControl_get_Anchor_m1496766909 (TouchButtonControl_t2354215306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchButtonControl::set_Anchor(InControl.TouchControlAnchor)
extern "C"  void TouchButtonControl_set_Anchor_m3220458740 (TouchButtonControl_t2354215306 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InControl.TouchButtonControl::get_Offset()
extern "C"  Vector2_t4282066565  TouchButtonControl_get_Offset_m347833922 (TouchButtonControl_t2354215306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchButtonControl::set_Offset(UnityEngine.Vector2)
extern "C"  void TouchButtonControl_set_Offset_m1232386239 (TouchButtonControl_t2354215306 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.TouchUnitType InControl.TouchButtonControl::get_OffsetUnitType()
extern "C"  int32_t TouchButtonControl_get_OffsetUnitType_m3574665489 (TouchButtonControl_t2354215306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchButtonControl::set_OffsetUnitType(InControl.TouchUnitType)
extern "C"  void TouchButtonControl_set_OffsetUnitType_m3023603346 (TouchButtonControl_t2354215306 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
