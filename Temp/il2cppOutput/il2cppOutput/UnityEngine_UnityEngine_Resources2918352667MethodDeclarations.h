﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Object
struct Object_t3071478659;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3699081103;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"

// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C"  Object_t3071478659 * Resources_Load_m3601699608 (Il2CppObject * __this /* static, unused */, String_t* ___path0, Type_t * ___systemTypeInstance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
extern "C"  Object_t3071478659 * Resources_GetBuiltinResource_m1250078467 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Resources::UnloadUnusedAssets()
extern "C"  AsyncOperation_t3699081103 * Resources_UnloadUnusedAssets_m3831138427 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;