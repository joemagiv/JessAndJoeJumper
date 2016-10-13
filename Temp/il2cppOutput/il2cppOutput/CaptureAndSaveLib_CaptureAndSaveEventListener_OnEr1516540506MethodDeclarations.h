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

// CaptureAndSaveEventListener/OnError
struct OnError_t1516540506;
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

// System.Void CaptureAndSaveEventListener/OnError::.ctor(System.Object,System.IntPtr)
extern "C"  void OnError__ctor_m3869093594 (OnError_t1516540506 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSaveEventListener/OnError::Invoke(System.String)
extern "C"  void OnError_Invoke_m3553004494 (OnError_t1516540506 * __this, String_t* ___err0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult CaptureAndSaveEventListener/OnError::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnError_BeginInvoke_m829483483 (OnError_t1516540506 * __this, String_t* ___err0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSaveEventListener/OnError::EndInvoke(System.IAsyncResult)
extern "C"  void OnError_EndInvoke_m1920900586 (OnError_t1516540506 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
