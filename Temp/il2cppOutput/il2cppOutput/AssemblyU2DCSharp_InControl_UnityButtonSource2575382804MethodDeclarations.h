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

// InControl.UnityButtonSource
struct UnityButtonSource_t2575382804;
// InControl.InputDevice
struct InputDevice_t4071704914;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"

// System.Void InControl.UnityButtonSource::.ctor(System.Int32)
extern "C"  void UnityButtonSource__ctor_m4265121264 (UnityButtonSource_t2575382804 * __this, int32_t ___buttonIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.UnityButtonSource::GetValue(InControl.InputDevice)
extern "C"  float UnityButtonSource_GetValue_m513152372 (UnityButtonSource_t2575382804 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityButtonSource::GetState(InControl.InputDevice)
extern "C"  bool UnityButtonSource_GetState_m287122492 (UnityButtonSource_t2575382804 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
