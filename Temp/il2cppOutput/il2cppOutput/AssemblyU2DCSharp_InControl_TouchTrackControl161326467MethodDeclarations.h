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

// InControl.TouchTrackControl
struct TouchTrackControl_t161326467;
// InControl.Touch
struct Touch_t2333148497;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_Touch2333148497.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "AssemblyU2DCSharp_InControl_TouchUnitType1633405775.h"

// System.Void InControl.TouchTrackControl::.ctor()
extern "C"  void TouchTrackControl__ctor_m242005904 (TouchTrackControl_t161326467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchTrackControl::CreateControl()
extern "C"  void TouchTrackControl_CreateControl_m1779924015 (TouchTrackControl_t161326467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchTrackControl::DestroyControl()
extern "C"  void TouchTrackControl_DestroyControl_m863542071 (TouchTrackControl_t161326467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchTrackControl::ConfigureControl()
extern "C"  void TouchTrackControl_ConfigureControl_m3588911371 (TouchTrackControl_t161326467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchTrackControl::DrawGizmos()
extern "C"  void TouchTrackControl_DrawGizmos_m3239148753 (TouchTrackControl_t161326467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchTrackControl::OnValidate()
extern "C"  void TouchTrackControl_OnValidate_m1651588169 (TouchTrackControl_t161326467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchTrackControl::Update()
extern "C"  void TouchTrackControl_Update_m639110525 (TouchTrackControl_t161326467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchTrackControl::SubmitControlState(System.UInt64,System.Single)
extern "C"  void TouchTrackControl_SubmitControlState_m1018606400 (TouchTrackControl_t161326467 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchTrackControl::CommitControlState(System.UInt64,System.Single)
extern "C"  void TouchTrackControl_CommitControlState_m825186561 (TouchTrackControl_t161326467 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchTrackControl::TouchBegan(InControl.Touch)
extern "C"  void TouchTrackControl_TouchBegan_m2076806435 (TouchTrackControl_t161326467 * __this, Touch_t2333148497 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchTrackControl::TouchMoved(InControl.Touch)
extern "C"  void TouchTrackControl_TouchMoved_m3707005537 (TouchTrackControl_t161326467 * __this, Touch_t2333148497 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchTrackControl::TouchEnded(InControl.Touch)
extern "C"  void TouchTrackControl_TouchEnded_m1389137210 (TouchTrackControl_t161326467 * __this, Touch_t2333148497 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect InControl.TouchTrackControl::get_ActiveArea()
extern "C"  Rect_t4241904616  TouchTrackControl_get_ActiveArea_m3252823534 (TouchTrackControl_t161326467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchTrackControl::set_ActiveArea(UnityEngine.Rect)
extern "C"  void TouchTrackControl_set_ActiveArea_m727042665 (TouchTrackControl_t161326467 * __this, Rect_t4241904616  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.TouchUnitType InControl.TouchTrackControl::get_AreaUnitType()
extern "C"  int32_t TouchTrackControl_get_AreaUnitType_m876723612 (TouchTrackControl_t161326467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchTrackControl::set_AreaUnitType(InControl.TouchUnitType)
extern "C"  void TouchTrackControl_set_AreaUnitType_m195464015 (TouchTrackControl_t161326467 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
