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

// CaptureAndSaveEventListener/OnScreenShot
struct OnScreenShot_t3427048564;
// System.Object
struct Il2CppObject;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Texture2D3884108195.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void CaptureAndSaveEventListener/OnScreenShot::.ctor(System.Object,System.IntPtr)
extern "C"  void OnScreenShot__ctor_m954799378 (OnScreenShot_t3427048564 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSaveEventListener/OnScreenShot::Invoke(UnityEngine.Texture2D)
extern "C"  void OnScreenShot_Invoke_m3599849904 (OnScreenShot_t3427048564 * __this, Texture2D_t3884108195 * ___tex2D0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult CaptureAndSaveEventListener/OnScreenShot::BeginInvoke(UnityEngine.Texture2D,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnScreenShot_BeginInvoke_m3553517505 (OnScreenShot_t3427048564 * __this, Texture2D_t3884108195 * ___tex2D0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSaveEventListener/OnScreenShot::EndInvoke(System.IAsyncResult)
extern "C"  void OnScreenShot_EndInvoke_m3408257058 (OnScreenShot_t3427048564 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
