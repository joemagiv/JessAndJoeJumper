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

// InControl.InputControlState
struct InputControlState_t3860714800;
struct InputControlState_t3860714800_marshaled_pinvoke;
struct InputControlState_t3860714800_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_InputControlState3860714800.h"

// System.Void InControl.InputControlState::Reset()
extern "C"  void InputControlState_Reset_m1191855408 (InputControlState_t3860714800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputControlState::Set(System.Single)
extern "C"  void InputControlState_Set_m1978628872 (InputControlState_t3860714800 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputControlState::Set(System.Single,System.Single)
extern "C"  void InputControlState_Set_m538056685 (InputControlState_t3860714800 * __this, float ___value0, float ___threshold1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputControlState::Set(System.Boolean)
extern "C"  void InputControlState_Set_m2708039610 (InputControlState_t3860714800 * __this, bool ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputControlState::op_Implicit(InControl.InputControlState)
extern "C"  bool InputControlState_op_Implicit_m1605916338 (Il2CppObject * __this /* static, unused */, InputControlState_t3860714800  ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.InputControlState::op_Implicit(InControl.InputControlState)
extern "C"  float InputControlState_op_Implicit_m1243150234 (Il2CppObject * __this /* static, unused */, InputControlState_t3860714800  ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputControlState::op_Equality(InControl.InputControlState,InControl.InputControlState)
extern "C"  bool InputControlState_op_Equality_m1496091393 (Il2CppObject * __this /* static, unused */, InputControlState_t3860714800  ___a0, InputControlState_t3860714800  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputControlState::op_Inequality(InControl.InputControlState,InControl.InputControlState)
extern "C"  bool InputControlState_op_Inequality_m411860732 (Il2CppObject * __this /* static, unused */, InputControlState_t3860714800  ___a0, InputControlState_t3860714800  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct InputControlState_t3860714800;
struct InputControlState_t3860714800_marshaled_pinvoke;

extern "C" void InputControlState_t3860714800_marshal_pinvoke(const InputControlState_t3860714800& unmarshaled, InputControlState_t3860714800_marshaled_pinvoke& marshaled);
extern "C" void InputControlState_t3860714800_marshal_pinvoke_back(const InputControlState_t3860714800_marshaled_pinvoke& marshaled, InputControlState_t3860714800& unmarshaled);
extern "C" void InputControlState_t3860714800_marshal_pinvoke_cleanup(InputControlState_t3860714800_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct InputControlState_t3860714800;
struct InputControlState_t3860714800_marshaled_com;

extern "C" void InputControlState_t3860714800_marshal_com(const InputControlState_t3860714800& unmarshaled, InputControlState_t3860714800_marshaled_com& marshaled);
extern "C" void InputControlState_t3860714800_marshal_com_back(const InputControlState_t3860714800_marshaled_com& marshaled, InputControlState_t3860714800& unmarshaled);
extern "C" void InputControlState_t3860714800_marshal_com_cleanup(InputControlState_t3860714800_marshaled_com& marshaled);
