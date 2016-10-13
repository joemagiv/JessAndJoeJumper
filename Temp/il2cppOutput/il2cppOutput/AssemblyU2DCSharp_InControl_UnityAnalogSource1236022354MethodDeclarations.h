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

// InControl.UnityAnalogSource
struct UnityAnalogSource_t1236022354;
// InControl.InputDevice
struct InputDevice_t4071704914;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"

// System.Void InControl.UnityAnalogSource::.ctor(System.Int32)
extern "C"  void UnityAnalogSource__ctor_m2662051186 (UnityAnalogSource_t1236022354 * __this, int32_t ___analogIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.UnityAnalogSource::GetValue(InControl.InputDevice)
extern "C"  float UnityAnalogSource_GetValue_m2393373174 (UnityAnalogSource_t1236022354 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityAnalogSource::GetState(InControl.InputDevice)
extern "C"  bool UnityAnalogSource_GetState_m2167343294 (UnityAnalogSource_t1236022354 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
