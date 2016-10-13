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

// InControl.TouchSwipeControl
struct TouchSwipeControl_t2766249140;
// InControl.Touch
struct Touch_t2333148497;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_Touch2333148497.h"
#include "AssemblyU2DCSharp_InControl_TouchControl_ButtonTar1917211294.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "AssemblyU2DCSharp_InControl_TouchUnitType1633405775.h"

// System.Void InControl.TouchSwipeControl::.ctor()
extern "C"  void TouchSwipeControl__ctor_m213731199 (TouchSwipeControl_t2766249140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSwipeControl::CreateControl()
extern "C"  void TouchSwipeControl_CreateControl_m3192696094 (TouchSwipeControl_t2766249140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSwipeControl::DestroyControl()
extern "C"  void TouchSwipeControl_DestroyControl_m1709803560 (TouchSwipeControl_t2766249140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSwipeControl::ConfigureControl()
extern "C"  void TouchSwipeControl_ConfigureControl_m802416060 (TouchSwipeControl_t2766249140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSwipeControl::DrawGizmos()
extern "C"  void TouchSwipeControl_DrawGizmos_m3516435010 (TouchSwipeControl_t2766249140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSwipeControl::Update()
extern "C"  void TouchSwipeControl_Update_m4057561966 (TouchSwipeControl_t2766249140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSwipeControl::SubmitControlState(System.UInt64,System.Single)
extern "C"  void TouchSwipeControl_SubmitControlState_m1821665327 (TouchSwipeControl_t2766249140 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSwipeControl::CommitControlState(System.UInt64,System.Single)
extern "C"  void TouchSwipeControl_CommitControlState_m1628245488 (TouchSwipeControl_t2766249140 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSwipeControl::TouchBegan(InControl.Touch)
extern "C"  void TouchSwipeControl_TouchBegan_m1711918994 (TouchSwipeControl_t2766249140 * __this, Touch_t2333148497 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSwipeControl::TouchMoved(InControl.Touch)
extern "C"  void TouchSwipeControl_TouchMoved_m3342118096 (TouchSwipeControl_t2766249140 * __this, Touch_t2333148497 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSwipeControl::TouchEnded(InControl.Touch)
extern "C"  void TouchSwipeControl_TouchEnded_m1024249769 (TouchSwipeControl_t2766249140 * __this, Touch_t2333148497 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.TouchControl/ButtonTarget InControl.TouchSwipeControl::GetButtonTargetForVector(UnityEngine.Vector2)
extern "C"  int32_t TouchSwipeControl_GetButtonTargetForVector_m3308386679 (TouchSwipeControl_t2766249140 * __this, Vector2_t4282066565  ___vector0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect InControl.TouchSwipeControl::get_ActiveArea()
extern "C"  Rect_t4241904616  TouchSwipeControl_get_ActiveArea_m4099085023 (TouchSwipeControl_t2766249140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSwipeControl::set_ActiveArea(UnityEngine.Rect)
extern "C"  void TouchSwipeControl_set_ActiveArea_m106476890 (TouchSwipeControl_t2766249140 * __this, Rect_t4241904616  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.TouchUnitType InControl.TouchSwipeControl::get_AreaUnitType()
extern "C"  int32_t TouchSwipeControl_get_AreaUnitType_m2385195597 (TouchSwipeControl_t2766249140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSwipeControl::set_AreaUnitType(InControl.TouchUnitType)
extern "C"  void TouchSwipeControl_set_AreaUnitType_m2372820862 (TouchSwipeControl_t2766249140 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
