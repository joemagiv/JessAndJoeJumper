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

// System.Comparison`1<InControl.LogMessage>
struct Comparison_1_t560070852;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_InControl_LogMessage1843709665.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Comparison`1<InControl.LogMessage>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m2640757040_gshared (Comparison_1_t560070852 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Comparison_1__ctor_m2640757040(__this, ___object0, ___method1, method) ((  void (*) (Comparison_1_t560070852 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m2640757040_gshared)(__this, ___object0, ___method1, method)
// System.Int32 System.Comparison`1<InControl.LogMessage>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m2490154184_gshared (Comparison_1_t560070852 * __this, LogMessage_t1843709665  ___x0, LogMessage_t1843709665  ___y1, const MethodInfo* method);
#define Comparison_1_Invoke_m2490154184(__this, ___x0, ___y1, method) ((  int32_t (*) (Comparison_1_t560070852 *, LogMessage_t1843709665 , LogMessage_t1843709665 , const MethodInfo*))Comparison_1_Invoke_m2490154184_gshared)(__this, ___x0, ___y1, method)
// System.IAsyncResult System.Comparison`1<InControl.LogMessage>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m679612945_gshared (Comparison_1_t560070852 * __this, LogMessage_t1843709665  ___x0, LogMessage_t1843709665  ___y1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m679612945(__this, ___x0, ___y1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Comparison_1_t560070852 *, LogMessage_t1843709665 , LogMessage_t1843709665 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m679612945_gshared)(__this, ___x0, ___y1, ___callback2, ___object3, method)
// System.Int32 System.Comparison`1<InControl.LogMessage>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m2618846884_gshared (Comparison_1_t560070852 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Comparison_1_EndInvoke_m2618846884(__this, ___result0, method) ((  int32_t (*) (Comparison_1_t560070852 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m2618846884_gshared)(__this, ___result0, method)
