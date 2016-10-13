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

// UnityEngine.WebCamTexture
struct WebCamTexture_t1290350902;
// System.String
struct String_t;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t3721690872;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_WebCamTexture1290350902.h"

// System.Void UnityEngine.WebCamTexture::.ctor(System.String)
extern "C"  void WebCamTexture__ctor_m3625407113 (WebCamTexture_t1290350902 * __this, String_t* ___deviceName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)
extern "C"  void WebCamTexture_Internal_CreateWebCamTexture_m384251711 (Il2CppObject * __this /* static, unused */, WebCamTexture_t1290350902 * ___self0, String_t* ___scriptingDevice1, int32_t ___requestedWidth2, int32_t ___requestedHeight3, int32_t ___maxFramerate4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Play()
extern "C"  void WebCamTexture_Play_m2252445503 (WebCamTexture_t1290350902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Play(UnityEngine.WebCamTexture)
extern "C"  void WebCamTexture_INTERNAL_CALL_Play_m3478980075 (Il2CppObject * __this /* static, unused */, WebCamTexture_t1290350902 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Pause()
extern "C"  void WebCamTexture_Pause_m809763501 (WebCamTexture_t1290350902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Pause(UnityEngine.WebCamTexture)
extern "C"  void WebCamTexture_INTERNAL_CALL_Pause_m4232847003 (Il2CppObject * __this /* static, unused */, WebCamTexture_t1290350902 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern "C"  WebCamDeviceU5BU5D_t3721690872* WebCamTexture_get_devices_m3738445840 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
