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

// InControl.UnityKeyCodeSource
struct UnityKeyCodeSource_t984169328;
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_t808904983;
// InControl.InputDevice
struct InputDevice_t4071704914;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"

// System.Void InControl.UnityKeyCodeSource::.ctor()
extern "C"  void UnityKeyCodeSource__ctor_m1396609907 (UnityKeyCodeSource_t984169328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityKeyCodeSource::.ctor(UnityEngine.KeyCode[])
extern "C"  void UnityKeyCodeSource__ctor_m494641160 (UnityKeyCodeSource_t984169328 * __this, KeyCodeU5BU5D_t808904983* ___keyCodeList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.UnityKeyCodeSource::GetValue(InControl.InputDevice)
extern "C"  float UnityKeyCodeSource_GetValue_m2900404656 (UnityKeyCodeSource_t984169328 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityKeyCodeSource::GetState(InControl.InputDevice)
extern "C"  bool UnityKeyCodeSource_GetState_m4127648168 (UnityKeyCodeSource_t984169328 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
