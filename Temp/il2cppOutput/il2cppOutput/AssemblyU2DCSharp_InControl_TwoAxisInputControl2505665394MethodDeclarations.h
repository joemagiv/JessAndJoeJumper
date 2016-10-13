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

// InControl.TwoAxisInputControl
struct TwoAxisInputControl_t2505665394;
// InControl.OneAxisInputControl
struct OneAxisInputControl_t2168578956;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_OneAxisInputControl2168578956.h"
#include "AssemblyU2DCSharp_InControl_TwoAxisInputControl2505665394.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void InControl.TwoAxisInputControl::.ctor()
extern "C"  void TwoAxisInputControl__ctor_m1857164417 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TwoAxisInputControl::.cctor()
extern "C"  void TwoAxisInputControl__cctor_m1255425868 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.TwoAxisInputControl::get_X()
extern "C"  float TwoAxisInputControl_get_X_m3334370170 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TwoAxisInputControl::set_X(System.Single)
extern "C"  void TwoAxisInputControl_set_X_m2163812657 (TwoAxisInputControl_t2505665394 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.TwoAxisInputControl::get_Y()
extern "C"  float TwoAxisInputControl_get_Y_m3334371131 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TwoAxisInputControl::set_Y(System.Single)
extern "C"  void TwoAxisInputControl_set_Y_m1653278480 (TwoAxisInputControl_t2505665394 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.OneAxisInputControl InControl.TwoAxisInputControl::get_Left()
extern "C"  OneAxisInputControl_t2168578956 * TwoAxisInputControl_get_Left_m1047694532 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TwoAxisInputControl::set_Left(InControl.OneAxisInputControl)
extern "C"  void TwoAxisInputControl_set_Left_m1662646503 (TwoAxisInputControl_t2505665394 * __this, OneAxisInputControl_t2168578956 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.OneAxisInputControl InControl.TwoAxisInputControl::get_Right()
extern "C"  OneAxisInputControl_t2168578956 * TwoAxisInputControl_get_Right_m3558969889 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TwoAxisInputControl::set_Right(InControl.OneAxisInputControl)
extern "C"  void TwoAxisInputControl_set_Right_m1345398224 (TwoAxisInputControl_t2505665394 * __this, OneAxisInputControl_t2168578956 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.OneAxisInputControl InControl.TwoAxisInputControl::get_Up()
extern "C"  OneAxisInputControl_t2168578956 * TwoAxisInputControl_get_Up_m434885976 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TwoAxisInputControl::set_Up(InControl.OneAxisInputControl)
extern "C"  void TwoAxisInputControl_set_Up_m1193251859 (TwoAxisInputControl_t2505665394 * __this, OneAxisInputControl_t2168578956 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.OneAxisInputControl InControl.TwoAxisInputControl::get_Down()
extern "C"  OneAxisInputControl_t2168578956 * TwoAxisInputControl_get_Down_m828397215 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TwoAxisInputControl::set_Down(InControl.OneAxisInputControl)
extern "C"  void TwoAxisInputControl_set_Down_m3116605676 (TwoAxisInputControl_t2505665394 * __this, OneAxisInputControl_t2168578956 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 InControl.TwoAxisInputControl::get_UpdateTick()
extern "C"  uint64_t TwoAxisInputControl_get_UpdateTick_m971513302 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TwoAxisInputControl::set_UpdateTick(System.UInt64)
extern "C"  void TwoAxisInputControl_set_UpdateTick_m2059852501 (TwoAxisInputControl_t2505665394 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TwoAxisInputControl::ClearInputState()
extern "C"  void TwoAxisInputControl_ClearInputState_m3533338675 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TwoAxisInputControl::Filter(InControl.TwoAxisInputControl,System.Single)
extern "C"  void TwoAxisInputControl_Filter_m3393013042 (TwoAxisInputControl_t2505665394 * __this, TwoAxisInputControl_t2505665394 * ___twoAxisInputControl0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TwoAxisInputControl::UpdateWithAxes(System.Single,System.Single,System.UInt64,System.Single)
extern "C"  void TwoAxisInputControl_UpdateWithAxes_m2166840627 (TwoAxisInputControl_t2505665394 * __this, float ___x0, float ___y1, uint64_t ___updateTick2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.TwoAxisInputControl::get_Sensitivity()
extern "C"  float TwoAxisInputControl_get_Sensitivity_m298931873 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TwoAxisInputControl::set_Sensitivity(System.Single)
extern "C"  void TwoAxisInputControl_set_Sensitivity_m755101034 (TwoAxisInputControl_t2505665394 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.TwoAxisInputControl::get_StateThreshold()
extern "C"  float TwoAxisInputControl_get_StateThreshold_m1139681018 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TwoAxisInputControl::set_StateThreshold(System.Single)
extern "C"  void TwoAxisInputControl_set_StateThreshold_m1783338033 (TwoAxisInputControl_t2505665394 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.TwoAxisInputControl::get_LowerDeadZone()
extern "C"  float TwoAxisInputControl_get_LowerDeadZone_m2580916115 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TwoAxisInputControl::set_LowerDeadZone(System.Single)
extern "C"  void TwoAxisInputControl_set_LowerDeadZone_m2597193144 (TwoAxisInputControl_t2505665394 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.TwoAxisInputControl::get_UpperDeadZone()
extern "C"  float TwoAxisInputControl_get_UpperDeadZone_m517275636 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TwoAxisInputControl::set_UpperDeadZone(System.Single)
extern "C"  void TwoAxisInputControl_set_UpperDeadZone_m1049039607 (TwoAxisInputControl_t2505665394 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TwoAxisInputControl::get_State()
extern "C"  bool TwoAxisInputControl_get_State_m4203912379 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TwoAxisInputControl::get_LastState()
extern "C"  bool TwoAxisInputControl_get_LastState_m135712965 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InControl.TwoAxisInputControl::get_Value()
extern "C"  Vector2_t4282066565  TwoAxisInputControl_get_Value_m3893393282 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InControl.TwoAxisInputControl::get_LastValue()
extern "C"  Vector2_t4282066565  TwoAxisInputControl_get_LastValue_m350314508 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InControl.TwoAxisInputControl::get_Vector()
extern "C"  Vector2_t4282066565  TwoAxisInputControl_get_Vector_m3727905332 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TwoAxisInputControl::get_HasChanged()
extern "C"  bool TwoAxisInputControl_get_HasChanged_m683567986 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TwoAxisInputControl::set_HasChanged(System.Boolean)
extern "C"  void TwoAxisInputControl_set_HasChanged_m4265602833 (TwoAxisInputControl_t2505665394 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TwoAxisInputControl::get_IsPressed()
extern "C"  bool TwoAxisInputControl_get_IsPressed_m417810818 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TwoAxisInputControl::get_WasPressed()
extern "C"  bool TwoAxisInputControl_get_WasPressed_m255246833 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TwoAxisInputControl::get_WasReleased()
extern "C"  bool TwoAxisInputControl_get_WasReleased_m224074608 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.TwoAxisInputControl::get_Angle()
extern "C"  float TwoAxisInputControl_get_Angle_m1298421909 (TwoAxisInputControl_t2505665394 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TwoAxisInputControl::op_Implicit(InControl.TwoAxisInputControl)
extern "C"  bool TwoAxisInputControl_op_Implicit_m854393522 (Il2CppObject * __this /* static, unused */, TwoAxisInputControl_t2505665394 * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InControl.TwoAxisInputControl::op_Implicit(InControl.TwoAxisInputControl)
extern "C"  Vector2_t4282066565  TwoAxisInputControl_op_Implicit_m3047309291 (Il2CppObject * __this /* static, unused */, TwoAxisInputControl_t2505665394 * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 InControl.TwoAxisInputControl::op_Implicit(InControl.TwoAxisInputControl)
extern "C"  Vector3_t4282066566  TwoAxisInputControl_op_Implicit_m3914361516 (Il2CppObject * __this /* static, unused */, TwoAxisInputControl_t2505665394 * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
