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

// CaptureAndSave
struct CaptureAndSave_t700313070;
// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "CaptureAndSaveLib_ImageType1125820181.h"
#include "UnityEngine_UnityEngine_Texture2D3884108195.h"

// System.Void CaptureAndSave::.ctor()
extern "C"  void CaptureAndSave__ctor_m2839589910 (CaptureAndSave_t700313070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::SetAlbumPath(System.String)
extern "C"  void CaptureAndSave_SetAlbumPath_m1200194850 (CaptureAndSave_t700313070 * __this, String_t* ___albumPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::CaptureAndSaveToAlbum(System.Int32,System.Int32,UnityEngine.Camera,ImageType)
extern "C"  void CaptureAndSave_CaptureAndSaveToAlbum_m1006194421 (CaptureAndSave_t700313070 * __this, int32_t ___targetWidth0, int32_t ___targetHeight1, Camera_t2727095145 * ___camera2, int32_t ___imgType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::CaptureAndSaveAtPath(System.Int32,System.Int32,UnityEngine.Camera,System.String,ImageType)
extern "C"  void CaptureAndSave_CaptureAndSaveAtPath_m2689293131 (CaptureAndSave_t700313070 * __this, int32_t ___targetWidth0, int32_t ___targetHeight1, Camera_t2727095145 * ___camera2, String_t* ___path3, int32_t ___imgType4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::CaptureAndSaveAtPath(System.String,ImageType)
extern "C"  void CaptureAndSave_CaptureAndSaveAtPath_m3439077541 (CaptureAndSave_t700313070 * __this, String_t* ___path0, int32_t ___imgType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::CaptureAndSaveAtPath(System.Int32,System.Int32,System.Int32,System.Int32,System.String,ImageType)
extern "C"  void CaptureAndSave_CaptureAndSaveAtPath_m3109496421 (CaptureAndSave_t700313070 * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, String_t* ___path4, int32_t ___imgType5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::SaveTextureAtPath(UnityEngine.Texture2D,System.String,ImageType)
extern "C"  void CaptureAndSave_SaveTextureAtPath_m808158949 (CaptureAndSave_t700313070 * __this, Texture2D_t3884108195 * ___tex2D0, String_t* ___path1, int32_t ___imgType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::SaveTextureToGallery(UnityEngine.Texture2D,ImageType)
extern "C"  void CaptureAndSave_SaveTextureToGallery_m1530839788 (CaptureAndSave_t700313070 * __this, Texture2D_t3884108195 * ___tex2D0, int32_t ___imgType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::CaptureAndSaveToAlbum(ImageType)
extern "C"  void CaptureAndSave_CaptureAndSaveToAlbum_m3265519171 (CaptureAndSave_t700313070 * __this, int32_t ___imgType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::CaptureAndSaveToAlbum(System.Int32,System.Int32,System.Int32,System.Int32,ImageType)
extern "C"  void CaptureAndSave_CaptureAndSaveToAlbum_m390648579 (CaptureAndSave_t700313070 * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___imgType4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::SaveTexture(UnityEngine.Texture2D,System.String,ImageType)
extern "C"  void CaptureAndSave_SaveTexture_m2864148541 (CaptureAndSave_t700313070 * __this, Texture2D_t3884108195 * ___tex2D0, String_t* ___path1, int32_t ___imgType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CaptureAndSave::SaveToAlbum(System.Int32,System.Int32,System.Int32,System.Int32,System.String,ImageType)
extern "C"  Il2CppObject * CaptureAndSave_SaveToAlbum_m2550512552 (CaptureAndSave_t700313070 * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, String_t* ___path4, int32_t ___imgType5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CaptureAndSave::GetFileName()
extern "C"  String_t* CaptureAndSave_GetFileName_m2566544846 (CaptureAndSave_t700313070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CaptureAndSave::GetFullPath(System.String)
extern "C"  String_t* CaptureAndSave_GetFullPath_m2394925863 (CaptureAndSave_t700313070 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D CaptureAndSave::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,ImageType)
extern "C"  Texture2D_t3884108195 * CaptureAndSave_GetPixels_m1882752963 (CaptureAndSave_t700313070 * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___imgType4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CaptureAndSave::GetScreenPixels(System.Int32,System.Int32,System.Int32,System.Int32,ImageType)
extern "C"  Il2CppObject * CaptureAndSave_GetScreenPixels_m175010932 (CaptureAndSave_t700313070 * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___imgType4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D CaptureAndSave::GetScreenShot(System.Int32,System.Int32,UnityEngine.Camera,ImageType)
extern "C"  Texture2D_t3884108195 * CaptureAndSave_GetScreenShot_m2602002446 (CaptureAndSave_t700313070 * __this, int32_t ___targetWidth0, int32_t ___targetHeight1, Camera_t2727095145 * ___camera2, int32_t ___imgType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::GetScreenShot(System.Int32,System.Int32,System.Int32,System.Int32,ImageType)
extern "C"  void CaptureAndSave_GetScreenShot_m2957471437 (CaptureAndSave_t700313070 * __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, int32_t ___imgType4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::GetFullScreenShot(ImageType)
extern "C"  void CaptureAndSave_GetFullScreenShot_m2596668478 (CaptureAndSave_t700313070 * __this, int32_t ___imgType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::CopyImageToCameraRoll(System.String)
extern "C"  void CaptureAndSave_CopyImageToCameraRoll_m1468462539 (CaptureAndSave_t700313070 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::CopyVideoToCameraRoll(System.String)
extern "C"  void CaptureAndSave_CopyVideoToCameraRoll_m99063467 (CaptureAndSave_t700313070 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::MoveImageToCameraRoll(System.String)
extern "C"  void CaptureAndSave_MoveImageToCameraRoll_m2078478887 (CaptureAndSave_t700313070 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::MoveVideoToCameraRoll(System.String)
extern "C"  void CaptureAndSave_MoveVideoToCameraRoll_m709079815 (CaptureAndSave_t700313070 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::AndroidGalleryPath(System.String)
extern "C"  void CaptureAndSave_AndroidGalleryPath_m2832616556 (CaptureAndSave_t700313070 * __this, String_t* ___androidPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::OnError(System.String)
extern "C"  void CaptureAndSave_OnError_m608607365 (CaptureAndSave_t700313070 * __this, String_t* ___err0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CaptureAndSave::OnComplete(System.String)
extern "C"  void CaptureAndSave_OnComplete_m3721315804 (CaptureAndSave_t700313070 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
