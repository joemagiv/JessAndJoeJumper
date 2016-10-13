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

// InControl.NativeButtonSource
struct NativeButtonSource_t3286595682;
// InControl.InputDevice
struct InputDevice_t4071704914;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"

// System.Void InControl.NativeButtonSource::.ctor(System.Int32)
extern "C"  void NativeButtonSource__ctor_m886006418 (NativeButtonSource_t3286595682 * __this, int32_t ___buttonIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.NativeButtonSource::GetValue(InControl.InputDevice)
extern "C"  float NativeButtonSource_GetValue_m1965249278 (NativeButtonSource_t3286595682 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeButtonSource::GetState(InControl.InputDevice)
extern "C"  bool NativeButtonSource_GetState_m3192492790 (NativeButtonSource_t3286595682 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
