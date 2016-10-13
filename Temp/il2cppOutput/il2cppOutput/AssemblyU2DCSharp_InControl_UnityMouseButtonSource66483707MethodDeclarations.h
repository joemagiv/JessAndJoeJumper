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

// InControl.UnityMouseButtonSource
struct UnityMouseButtonSource_t66483707;
// InControl.InputDevice
struct InputDevice_t4071704914;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"

// System.Void InControl.UnityMouseButtonSource::.ctor()
extern "C"  void UnityMouseButtonSource__ctor_m532166984 (UnityMouseButtonSource_t66483707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityMouseButtonSource::.ctor(System.Int32)
extern "C"  void UnityMouseButtonSource__ctor_m2744271513 (UnityMouseButtonSource_t66483707 * __this, int32_t ___buttonId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.UnityMouseButtonSource::GetValue(InControl.InputDevice)
extern "C"  float UnityMouseButtonSource_GetValue_m1786308229 (UnityMouseButtonSource_t66483707 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityMouseButtonSource::GetState(InControl.InputDevice)
extern "C"  bool UnityMouseButtonSource_GetState_m1209916029 (UnityMouseButtonSource_t66483707 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
