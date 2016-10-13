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

// System.String
struct String_t;
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_t808904983;
// InControl.KeyInfo
struct KeyInfo_t3085159231;
struct KeyInfo_t3085159231_marshaled_pinvoke;
struct KeyInfo_t3085159231_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_KeyInfo3085159231.h"
#include "AssemblyU2DCSharp_InControl_Key160624369.h"
#include "mscorlib_System_String7231557.h"

// System.Void InControl.KeyInfo::.ctor(InControl.Key,System.String,UnityEngine.KeyCode[])
extern "C"  void KeyInfo__ctor_m1706710502 (KeyInfo_t3085159231 * __this, int32_t ___key0, String_t* ___name1, KeyCodeU5BU5D_t808904983* ___keyCodes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.KeyInfo::.ctor(InControl.Key,System.String,System.String,UnityEngine.KeyCode[])
extern "C"  void KeyInfo__ctor_m1708898146 (KeyInfo_t3085159231 * __this, int32_t ___key0, String_t* ___name1, String_t* ___macName2, KeyCodeU5BU5D_t808904983* ___keyCodes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.KeyInfo::.cctor()
extern "C"  void KeyInfo__cctor_m3682758361 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.KeyInfo::get_IsPressed()
extern "C"  bool KeyInfo_get_IsPressed_m3624789845 (KeyInfo_t3085159231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.KeyInfo::get_Name()
extern "C"  String_t* KeyInfo_get_Name_m2920222081 (KeyInfo_t3085159231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.Key InControl.KeyInfo::get_Key()
extern "C"  int32_t KeyInfo_get_Key_m3389875186 (KeyInfo_t3085159231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct KeyInfo_t3085159231;
struct KeyInfo_t3085159231_marshaled_pinvoke;

extern "C" void KeyInfo_t3085159231_marshal_pinvoke(const KeyInfo_t3085159231& unmarshaled, KeyInfo_t3085159231_marshaled_pinvoke& marshaled);
extern "C" void KeyInfo_t3085159231_marshal_pinvoke_back(const KeyInfo_t3085159231_marshaled_pinvoke& marshaled, KeyInfo_t3085159231& unmarshaled);
extern "C" void KeyInfo_t3085159231_marshal_pinvoke_cleanup(KeyInfo_t3085159231_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct KeyInfo_t3085159231;
struct KeyInfo_t3085159231_marshaled_com;

extern "C" void KeyInfo_t3085159231_marshal_com(const KeyInfo_t3085159231& unmarshaled, KeyInfo_t3085159231_marshaled_com& marshaled);
extern "C" void KeyInfo_t3085159231_marshal_com_back(const KeyInfo_t3085159231_marshaled_com& marshaled, KeyInfo_t3085159231& unmarshaled);
extern "C" void KeyInfo_t3085159231_marshal_com_cleanup(KeyInfo_t3085159231_marshaled_com& marshaled);
