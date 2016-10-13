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

// System.Action`1<System.Int32>
struct Action_1_t1549654636;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_ICadeState1693133511.h"

// System.Void InControl.ICadeNative::_SetActive(System.Boolean)
extern "C"  void ICadeNative__SetActive_m249319394 (Il2CppObject * __this /* static, unused */, bool ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.ICadeNative::_SetStateCallback(System.Action`1<System.Int32>)
extern "C"  void ICadeNative__SetStateCallback_m3926975398 (Il2CppObject * __this /* static, unused */, Action_1_t1549654636 * ___cntCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.ICadeNative::_GetState()
extern "C"  int32_t ICadeNative__GetState_m1167638216 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.ICadeNative::SetActive(System.Boolean)
extern "C"  void ICadeNative_SetActive_m3732767167 (Il2CppObject * __this /* static, unused */, bool ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.ICadeNative::OnStateChanged(System.Int32)
extern "C"  void ICadeNative_OnStateChanged_m1670868565 (Il2CppObject * __this /* static, unused */, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ICadeNative_OnStateChanged_m1670868565(int32_t ___state0);
// InControl.ICadeState InControl.ICadeNative::GetState()
extern "C"  int32_t ICadeNative_GetState_m4109175327 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
