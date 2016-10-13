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

// InControl.TouchStickControl
struct TouchStickControl_t3456167582;
// InControl.Touch
struct Touch_t2333148497;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_Touch2333148497.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_InControl_TouchControlAnchor508992049.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_InControl_TouchUnitType1633405775.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"

// System.Void InControl.TouchStickControl::.ctor()
extern "C"  void TouchStickControl__ctor_m1047166165 (TouchStickControl_t3456167582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchStickControl::CreateControl()
extern "C"  void TouchStickControl_CreateControl_m3975294068 (TouchStickControl_t3456167582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchStickControl::DestroyControl()
extern "C"  void TouchStickControl_DestroyControl_m200536978 (TouchStickControl_t3456167582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchStickControl::ConfigureControl()
extern "C"  void TouchStickControl_ConfigureControl_m2096176806 (TouchStickControl_t3456167582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchStickControl::DrawGizmos()
extern "C"  void TouchStickControl_DrawGizmos_m2812623532 (TouchStickControl_t3456167582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchStickControl::Update()
extern "C"  void TouchStickControl_Update_m4124242136 (TouchStickControl_t3456167582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchStickControl::SubmitControlState(System.UInt64,System.Single)
extern "C"  void TouchStickControl_SubmitControlState_m334958469 (TouchStickControl_t3456167582 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchStickControl::CommitControlState(System.UInt64,System.Single)
extern "C"  void TouchStickControl_CommitControlState_m141538630 (TouchStickControl_t3456167582 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchStickControl::TouchBegan(InControl.Touch)
extern "C"  void TouchStickControl_TouchBegan_m3849125352 (TouchStickControl_t3456167582 * __this, Touch_t2333148497 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchStickControl::TouchMoved(InControl.Touch)
extern "C"  void TouchStickControl_TouchMoved_m1184357158 (TouchStickControl_t3456167582 * __this, Touch_t2333148497 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchStickControl::TouchEnded(InControl.Touch)
extern "C"  void TouchStickControl_TouchEnded_m3161456127 (TouchStickControl_t3456167582 * __this, Touch_t2333148497 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TouchStickControl::get_IsActive()
extern "C"  bool TouchStickControl_get_IsActive_m2244476404 (TouchStickControl_t3456167582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TouchStickControl::get_IsNotActive()
extern "C"  bool TouchStickControl_get_IsNotActive_m1013182445 (TouchStickControl_t3456167582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 InControl.TouchStickControl::get_RingPosition()
extern "C"  Vector3_t4282066566  TouchStickControl_get_RingPosition_m29450583 (TouchStickControl_t3456167582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchStickControl::set_RingPosition(UnityEngine.Vector3)
extern "C"  void TouchStickControl_set_RingPosition_m3869525044 (TouchStickControl_t3456167582 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 InControl.TouchStickControl::get_KnobPosition()
extern "C"  Vector3_t4282066566  TouchStickControl_get_KnobPosition_m2625250845 (TouchStickControl_t3456167582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchStickControl::set_KnobPosition(UnityEngine.Vector3)
extern "C"  void TouchStickControl_set_KnobPosition_m809029038 (TouchStickControl_t3456167582 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.TouchControlAnchor InControl.TouchStickControl::get_Anchor()
extern "C"  int32_t TouchStickControl_get_Anchor_m2851529625 (TouchStickControl_t3456167582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchStickControl::set_Anchor(InControl.TouchControlAnchor)
extern "C"  void TouchStickControl_set_Anchor_m636590648 (TouchStickControl_t3456167582 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InControl.TouchStickControl::get_Offset()
extern "C"  Vector2_t4282066565  TouchStickControl_get_Offset_m944511728 (TouchStickControl_t3456167582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchStickControl::set_Offset(UnityEngine.Vector2)
extern "C"  void TouchStickControl_set_Offset_m2248322811 (TouchStickControl_t3456167582 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.TouchUnitType InControl.TouchStickControl::get_OffsetUnitType()
extern "C"  int32_t TouchStickControl_get_OffsetUnitType_m2838249725 (TouchStickControl_t3456167582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchStickControl::set_OffsetUnitType(InControl.TouchUnitType)
extern "C"  void TouchStickControl_set_OffsetUnitType_m1413153486 (TouchStickControl_t3456167582 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect InControl.TouchStickControl::get_ActiveArea()
extern "C"  Rect_t4241904616  TouchStickControl_get_ActiveArea_m2589818441 (TouchStickControl_t3456167582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchStickControl::set_ActiveArea(UnityEngine.Rect)
extern "C"  void TouchStickControl_set_ActiveArea_m3196259524 (TouchStickControl_t3456167582 * __this, Rect_t4241904616  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.TouchUnitType InControl.TouchStickControl::get_AreaUnitType()
extern "C"  int32_t TouchStickControl_get_AreaUnitType_m3678956343 (TouchStickControl_t3456167582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchStickControl::set_AreaUnitType(InControl.TouchUnitType)
extern "C"  void TouchStickControl_set_AreaUnitType_m2153693012 (TouchStickControl_t3456167582 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
