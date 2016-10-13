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

// InControl.NativeAnalogSource
struct NativeAnalogSource_t1947235232;
// InControl.InputDevice
struct InputDevice_t4071704914;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"

// System.Void InControl.NativeAnalogSource::.ctor(System.Int32)
extern "C"  void NativeAnalogSource__ctor_m3577903636 (NativeAnalogSource_t1947235232 * __this, int32_t ___analogIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.NativeAnalogSource::GetValue(InControl.InputDevice)
extern "C"  float NativeAnalogSource_GetValue_m3845470080 (NativeAnalogSource_t1947235232 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeAnalogSource::GetState(InControl.InputDevice)
extern "C"  bool NativeAnalogSource_GetState_m777746296 (NativeAnalogSource_t1947235232 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
