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

// CallNative
struct CallNative_t3421361205;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void CallNative::.ctor()
extern "C"  void CallNative__ctor_m2901997103 (CallNative_t3421361205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CallNative::_SaveImage(System.String,System.Boolean)
extern "C"  int32_t CallNative__SaveImage_m1778313423 (Il2CppObject * __this /* static, unused */, String_t* ___str0, bool ___move1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CallNative::_SaveVideo(System.String,System.Boolean)
extern "C"  int32_t CallNative__SaveVideo_m3904904175 (Il2CppObject * __this /* static, unused */, String_t* ___str0, bool ___move1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CallNative::CopyImageToCameraRoll(System.String)
extern "C"  void CallNative_CopyImageToCameraRoll_m602584658 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CallNative::MoveImageToCameraRoll(System.String)
extern "C"  void CallNative_MoveImageToCameraRoll_m1212601006 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CallNative::CopyVideoToCameraRoll(System.String)
extern "C"  void CallNative_CopyVideoToCameraRoll_m3528152882 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CallNative::MoveVideoToCameraRoll(System.String)
extern "C"  void CallNative_MoveVideoToCameraRoll_m4138169230 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
