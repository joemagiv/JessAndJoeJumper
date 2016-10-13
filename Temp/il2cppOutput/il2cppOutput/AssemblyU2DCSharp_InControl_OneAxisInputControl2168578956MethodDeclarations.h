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

// InControl.OneAxisInputControl
struct OneAxisInputControl_t2168578956;
// InControl.InputControl
struct InputControl_t1543925617;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_InputControl1543925617.h"
#include "AssemblyU2DCSharp_InControl_OneAxisInputControl2168578956.h"

// System.Void InControl.OneAxisInputControl::.ctor()
extern "C"  void OneAxisInputControl__ctor_m2756057511 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 InControl.OneAxisInputControl::get_UpdateTick()
extern "C"  uint64_t OneAxisInputControl_get_UpdateTick_m3169878896 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.OneAxisInputControl::set_UpdateTick(System.UInt64)
extern "C"  void OneAxisInputControl_set_UpdateTick_m2226511739 (OneAxisInputControl_t2168578956 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.OneAxisInputControl::PrepareForUpdate(System.UInt64)
extern "C"  void OneAxisInputControl_PrepareForUpdate_m3171869139 (OneAxisInputControl_t2168578956 * __this, uint64_t ___updateTick0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.OneAxisInputControl::UpdateWithState(System.Boolean,System.UInt64,System.Single)
extern "C"  bool OneAxisInputControl_UpdateWithState_m115835820 (OneAxisInputControl_t2168578956 * __this, bool ___state0, uint64_t ___updateTick1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.OneAxisInputControl::UpdateWithValue(System.Single,System.UInt64,System.Single)
extern "C"  bool OneAxisInputControl_UpdateWithValue_m2653752298 (OneAxisInputControl_t2168578956 * __this, float ___value0, uint64_t ___updateTick1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.OneAxisInputControl::UpdateWithRawValue(System.Single,System.UInt64,System.Single)
extern "C"  bool OneAxisInputControl_UpdateWithRawValue_m4198426404 (OneAxisInputControl_t2168578956 * __this, float ___value0, uint64_t ___updateTick1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.OneAxisInputControl::SetValue(System.Single,System.UInt64)
extern "C"  void OneAxisInputControl_SetValue_m2303827316 (OneAxisInputControl_t2168578956 * __this, float ___value0, uint64_t ___updateTick1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.OneAxisInputControl::ClearInputState()
extern "C"  void OneAxisInputControl_ClearInputState_m2963195353 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.OneAxisInputControl::Commit()
extern "C"  void OneAxisInputControl_Commit_m3635378996 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.OneAxisInputControl::CommitWithState(System.Boolean,System.UInt64,System.Single)
extern "C"  void OneAxisInputControl_CommitWithState_m896689738 (OneAxisInputControl_t2168578956 * __this, bool ___state0, uint64_t ___updateTick1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.OneAxisInputControl::CommitWithValue(System.Single,System.UInt64,System.Single)
extern "C"  void OneAxisInputControl_CommitWithValue_m462183820 (OneAxisInputControl_t2168578956 * __this, float ___value0, uint64_t ___updateTick1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.OneAxisInputControl::CommitWithSides(InControl.InputControl,InControl.InputControl,System.UInt64,System.Single)
extern "C"  void OneAxisInputControl_CommitWithSides_m2761976348 (OneAxisInputControl_t2168578956 * __this, InputControl_t1543925617 * ___negativeSide0, InputControl_t1543925617 * ___positiveSide1, uint64_t ___updateTick2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.OneAxisInputControl::get_State()
extern "C"  bool OneAxisInputControl_get_State_m2394136289 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.OneAxisInputControl::get_LastState()
extern "C"  bool OneAxisInputControl_get_LastState_m3254669291 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.OneAxisInputControl::get_Value()
extern "C"  float OneAxisInputControl_get_Value_m579060697 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.OneAxisInputControl::get_LastValue()
extern "C"  float OneAxisInputControl_get_LastValue_m295217379 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.OneAxisInputControl::get_RawValue()
extern "C"  float OneAxisInputControl_get_RawValue_m3193497059 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.OneAxisInputControl::get_NextRawValue()
extern "C"  float OneAxisInputControl_get_NextRawValue_m2468500662 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.OneAxisInputControl::get_HasChanged()
extern "C"  bool OneAxisInputControl_get_HasChanged_m2881933580 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.OneAxisInputControl::get_IsPressed()
extern "C"  bool OneAxisInputControl_get_IsPressed_m3536767144 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.OneAxisInputControl::get_WasPressed()
extern "C"  bool OneAxisInputControl_get_WasPressed_m2453612427 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.OneAxisInputControl::get_WasReleased()
extern "C"  bool OneAxisInputControl_get_WasReleased_m3948898582 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.OneAxisInputControl::get_WasRepeated()
extern "C"  bool OneAxisInputControl_get_WasRepeated_m2331128851 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.OneAxisInputControl::get_Sensitivity()
extern "C"  float OneAxisInputControl_get_Sensitivity_m4023755847 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.OneAxisInputControl::set_Sensitivity(System.Single)
extern "C"  void OneAxisInputControl_set_Sensitivity_m1626570116 (OneAxisInputControl_t2168578956 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.OneAxisInputControl::get_LowerDeadZone()
extern "C"  float OneAxisInputControl_get_LowerDeadZone_m134030265 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.OneAxisInputControl::set_LowerDeadZone(System.Single)
extern "C"  void OneAxisInputControl_set_LowerDeadZone_m2560358226 (OneAxisInputControl_t2168578956 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.OneAxisInputControl::get_UpperDeadZone()
extern "C"  float OneAxisInputControl_get_UpperDeadZone_m2365357082 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.OneAxisInputControl::set_UpperDeadZone(System.Single)
extern "C"  void OneAxisInputControl_set_UpperDeadZone_m1012204689 (OneAxisInputControl_t2168578956 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.OneAxisInputControl::get_StateThreshold()
extern "C"  float OneAxisInputControl_get_StateThreshold_m2595630996 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.OneAxisInputControl::set_StateThreshold(System.Single)
extern "C"  void OneAxisInputControl_set_StateThreshold_m641455575 (OneAxisInputControl_t2168578956 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.OneAxisInputControl::get_IsNull()
extern "C"  bool OneAxisInputControl_get_IsNull_m3820253923 (OneAxisInputControl_t2168578956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.OneAxisInputControl::op_Implicit(InControl.OneAxisInputControl)
extern "C"  bool OneAxisInputControl_op_Implicit_m2205927154 (Il2CppObject * __this /* static, unused */, OneAxisInputControl_t2168578956 * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.OneAxisInputControl::op_Implicit(InControl.OneAxisInputControl)
extern "C"  float OneAxisInputControl_op_Implicit_m424784858 (Il2CppObject * __this /* static, unused */, OneAxisInputControl_t2168578956 * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
