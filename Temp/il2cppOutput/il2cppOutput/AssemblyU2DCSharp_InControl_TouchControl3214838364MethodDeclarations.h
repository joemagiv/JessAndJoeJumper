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

// InControl.TouchControl
struct TouchControl_t3214838364;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_InControl_TouchControlAnchor508992049.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_InControl_TouchUnitType1633405775.h"
#include "AssemblyU2DCSharp_InControl_TouchControl_ButtonTar1917211294.h"
#include "AssemblyU2DCSharp_InControl_TouchControl_AnalogTarg577850844.h"
#include "AssemblyU2DCSharp_InControl_TouchControl_SnapAngle2095647845.h"

// System.Void InControl.TouchControl::.ctor()
extern "C"  void TouchControl__ctor_m2976956423 (TouchControl_t3214838364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchControl::OnEnable()
extern "C"  void TouchControl_OnEnable_m1800680991 (TouchControl_t3214838364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchControl::OnDisable()
extern "C"  void TouchControl_OnDisable_m427473134 (TouchControl_t3214838364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchControl::Setup()
extern "C"  void TouchControl_Setup_m1512289378 (TouchControl_t3214838364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 InControl.TouchControl::OffsetToWorldPosition(InControl.TouchControlAnchor,UnityEngine.Vector2,InControl.TouchUnitType,System.Boolean)
extern "C"  Vector3_t4282066566  TouchControl_OffsetToWorldPosition_m3781281173 (TouchControl_t3214838364 * __this, int32_t ___anchor0, Vector2_t4282066565  ___offset1, int32_t ___offsetUnitType2, bool ___lockAspectRatio3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchControl::SubmitButtonState(InControl.TouchControl/ButtonTarget,System.Boolean,System.UInt64,System.Single)
extern "C"  void TouchControl_SubmitButtonState_m2178611439 (TouchControl_t3214838364 * __this, int32_t ___target0, bool ___state1, uint64_t ___updateTick2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchControl::CommitButton(InControl.TouchControl/ButtonTarget)
extern "C"  void TouchControl_CommitButton_m2261226222 (TouchControl_t3214838364 * __this, int32_t ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchControl::SubmitAnalogValue(InControl.TouchControl/AnalogTarget,UnityEngine.Vector2,System.Single,System.Single,System.UInt64,System.Single)
extern "C"  void TouchControl_SubmitAnalogValue_m722970400 (TouchControl_t3214838364 * __this, int32_t ___target0, Vector2_t4282066565  ___value1, float ___lowerDeadZone2, float ___upperDeadZone3, uint64_t ___updateTick4, float ___deltaTime5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchControl::CommitAnalog(InControl.TouchControl/AnalogTarget)
extern "C"  void TouchControl_CommitAnalog_m4041284722 (TouchControl_t3214838364 * __this, int32_t ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchControl::SubmitRawAnalogValue(InControl.TouchControl/AnalogTarget,UnityEngine.Vector2,System.UInt64,System.Single)
extern "C"  void TouchControl_SubmitRawAnalogValue_m3074625462 (TouchControl_t3214838364 * __this, int32_t ___target0, Vector2_t4282066565  ___rawValue1, uint64_t ___updateTick2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 InControl.TouchControl::SnapTo(UnityEngine.Vector2,InControl.TouchControl/SnapAngles)
extern "C"  Vector3_t4282066566  TouchControl_SnapTo_m3486725349 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___vector0, int32_t ___snapAngles1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 InControl.TouchControl::SnapTo(UnityEngine.Vector2,System.Single)
extern "C"  Vector3_t4282066566  TouchControl_SnapTo_m3758066467 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___vector0, float ___snapAngle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchControl::OnDrawGizmosSelected()
extern "C"  void TouchControl_OnDrawGizmosSelected_m1302423348 (TouchControl_t3214838364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchControl::OnDrawGizmos()
extern "C"  void TouchControl_OnDrawGizmos_m1902742329 (TouchControl_t3214838364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
