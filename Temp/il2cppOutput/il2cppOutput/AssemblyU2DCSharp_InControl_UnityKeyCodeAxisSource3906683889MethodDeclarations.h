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

// InControl.UnityKeyCodeAxisSource
struct UnityKeyCodeAxisSource_t3906683889;
// InControl.InputDevice
struct InputDevice_t4071704914;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"

// System.Void InControl.UnityKeyCodeAxisSource::.ctor()
extern "C"  void UnityKeyCodeAxisSource__ctor_m159170578 (UnityKeyCodeAxisSource_t3906683889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityKeyCodeAxisSource::.ctor(UnityEngine.KeyCode,UnityEngine.KeyCode)
extern "C"  void UnityKeyCodeAxisSource__ctor_m275482722 (UnityKeyCodeAxisSource_t3906683889 * __this, int32_t ___negativeKeyCode0, int32_t ___positiveKeyCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.UnityKeyCodeAxisSource::GetValue(InControl.InputDevice)
extern "C"  float UnityKeyCodeAxisSource_GetValue_m3735564111 (UnityKeyCodeAxisSource_t3906683889 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityKeyCodeAxisSource::GetState(InControl.InputDevice)
extern "C"  bool UnityKeyCodeAxisSource_GetState_m3159171911 (UnityKeyCodeAxisSource_t3906683889 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
