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

// InControl.Key[]
struct KeyU5BU5D_t3745573420;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.IO.BinaryReader
struct BinaryReader_t3990958868;
// System.IO.BinaryWriter
struct BinaryWriter_t4146364100;
// InControl.KeyCombo
struct KeyCombo_t1628533421;
struct KeyCombo_t1628533421_marshaled_pinvoke;
struct KeyCombo_t1628533421_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_KeyCombo1628533421.h"
#include "AssemblyU2DCSharp_InControl_Key160624369.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IO_BinaryReader3990958868.h"
#include "mscorlib_System_IO_BinaryWriter4146364100.h"

// System.Void InControl.KeyCombo::.ctor(InControl.Key[])
extern "C"  void KeyCombo__ctor_m3419571825 (KeyCombo_t1628533421 * __this, KeyU5BU5D_t3745573420* ___keys0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.KeyCombo::.cctor()
extern "C"  void KeyCombo__cctor_m2772973463 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.KeyCombo::AddInt(System.Int32)
extern "C"  void KeyCombo_AddInt_m3999275981 (KeyCombo_t1628533421 * __this, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.KeyCombo::GetInt(System.Int32)
extern "C"  int32_t KeyCombo_GetInt_m1248797126 (KeyCombo_t1628533421 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.KeyCombo::Add(InControl.Key)
extern "C"  void KeyCombo_Add_m359660596 (KeyCombo_t1628533421 * __this, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.Key InControl.KeyCombo::Get(System.Int32)
extern "C"  int32_t KeyCombo_Get_m1463979217 (KeyCombo_t1628533421 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.KeyCombo::Clear()
extern "C"  void KeyCombo_Clear_m143534849 (KeyCombo_t1628533421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.KeyCombo::get_Count()
extern "C"  int32_t KeyCombo_get_Count_m2482501644 (KeyCombo_t1628533421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.KeyCombo::get_IsPressed()
extern "C"  bool KeyCombo_get_IsPressed_m1514414063 (KeyCombo_t1628533421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.KeyCombo InControl.KeyCombo::Detect(System.Boolean)
extern "C"  KeyCombo_t1628533421  KeyCombo_Detect_m625176512 (Il2CppObject * __this /* static, unused */, bool ___modifiersAsKeys0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.KeyCombo::ToString()
extern "C"  String_t* KeyCombo_ToString_m1028255613 (KeyCombo_t1628533421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.KeyCombo::Equals(System.Object)
extern "C"  bool KeyCombo_Equals_m1757947411 (KeyCombo_t1628533421 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.KeyCombo::GetHashCode()
extern "C"  int32_t KeyCombo_GetHashCode_m3106812599 (KeyCombo_t1628533421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.KeyCombo::Load(System.IO.BinaryReader)
extern "C"  void KeyCombo_Load_m1384569863 (KeyCombo_t1628533421 * __this, BinaryReader_t3990958868 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.KeyCombo::Save(System.IO.BinaryWriter)
extern "C"  void KeyCombo_Save_m2415488494 (KeyCombo_t1628533421 * __this, BinaryWriter_t4146364100 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.KeyCombo::op_Equality(InControl.KeyCombo,InControl.KeyCombo)
extern "C"  bool KeyCombo_op_Equality_m2592271566 (Il2CppObject * __this /* static, unused */, KeyCombo_t1628533421  ___a0, KeyCombo_t1628533421  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.KeyCombo::op_Inequality(InControl.KeyCombo,InControl.KeyCombo)
extern "C"  bool KeyCombo_op_Inequality_m360489033 (Il2CppObject * __this /* static, unused */, KeyCombo_t1628533421  ___a0, KeyCombo_t1628533421  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct KeyCombo_t1628533421;
struct KeyCombo_t1628533421_marshaled_pinvoke;

extern "C" void KeyCombo_t1628533421_marshal_pinvoke(const KeyCombo_t1628533421& unmarshaled, KeyCombo_t1628533421_marshaled_pinvoke& marshaled);
extern "C" void KeyCombo_t1628533421_marshal_pinvoke_back(const KeyCombo_t1628533421_marshaled_pinvoke& marshaled, KeyCombo_t1628533421& unmarshaled);
extern "C" void KeyCombo_t1628533421_marshal_pinvoke_cleanup(KeyCombo_t1628533421_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct KeyCombo_t1628533421;
struct KeyCombo_t1628533421_marshaled_com;

extern "C" void KeyCombo_t1628533421_marshal_com(const KeyCombo_t1628533421& unmarshaled, KeyCombo_t1628533421_marshaled_com& marshaled);
extern "C" void KeyCombo_t1628533421_marshal_com_back(const KeyCombo_t1628533421_marshaled_com& marshaled, KeyCombo_t1628533421& unmarshaled);
extern "C" void KeyCombo_t1628533421_marshal_com_cleanup(KeyCombo_t1628533421_marshaled_com& marshaled);
