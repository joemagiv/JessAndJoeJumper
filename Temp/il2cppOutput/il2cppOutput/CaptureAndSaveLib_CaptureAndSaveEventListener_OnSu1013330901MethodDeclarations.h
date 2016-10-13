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

// CaptureAndSaveEventListener/OnSuccess
struct OnSuccess_t1013330901;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void CaptureAndSaveEventListener/OnSuccess::.ctor(System.Object,System.IntPtr)
extern "C"  void OnSuccess__ctor_m1594524309 (OnSuccess_t1013330901 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSaveEventListener/OnSuccess::Invoke(System.String)
extern "C"  void OnSuccess_Invoke_m629490739 (OnSuccess_t1013330901 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult CaptureAndSaveEventListener/OnSuccess::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnSuccess_BeginInvoke_m211601472 (OnSuccess_t1013330901 * __this, String_t* ___msg0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSaveEventListener/OnSuccess::EndInvoke(System.IAsyncResult)
extern "C"  void OnSuccess_EndInvoke_m1623754533 (OnSuccess_t1013330901 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
