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

// InControl.UnityMouseAxisSource
struct UnityMouseAxisSource_t1573740714;
// System.String
struct String_t;
// InControl.InputDevice
struct InputDevice_t4071704914;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"

// System.Void InControl.UnityMouseAxisSource::.ctor()
extern "C"  void UnityMouseAxisSource__ctor_m3119614329 (UnityMouseAxisSource_t1573740714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityMouseAxisSource::.ctor(System.String)
extern "C"  void UnityMouseAxisSource__ctor_m4274717225 (UnityMouseAxisSource_t1573740714 * __this, String_t* ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.UnityMouseAxisSource::GetValue(InControl.InputDevice)
extern "C"  float UnityMouseAxisSource_GetValue_m2117636278 (UnityMouseAxisSource_t1573740714 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityMouseAxisSource::GetState(InControl.InputDevice)
extern "C"  bool UnityMouseAxisSource_GetState_m1883073198 (UnityMouseAxisSource_t1573740714 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
