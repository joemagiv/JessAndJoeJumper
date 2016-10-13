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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// InControl.VersionInfo
struct VersionInfo_t1214656568;
struct VersionInfo_t1214656568_marshaled_pinvoke;
struct VersionInfo_t1214656568_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_VersionInfo1214656568.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void InControl.VersionInfo::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VersionInfo__ctor_m330341035 (VersionInfo_t1214656568 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___patch2, int32_t ___build3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.VersionInfo InControl.VersionInfo::InControlVersion()
extern "C"  VersionInfo_t1214656568  VersionInfo_InControlVersion_m84347174 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.VersionInfo InControl.VersionInfo::UnityVersion()
extern "C"  VersionInfo_t1214656568  VersionInfo_UnityVersion_m219989321 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.VersionInfo::CompareTo(InControl.VersionInfo)
extern "C"  int32_t VersionInfo_CompareTo_m1090699195 (VersionInfo_t1214656568 * __this, VersionInfo_t1214656568  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.VersionInfo::Equals(System.Object)
extern "C"  bool VersionInfo_Equals_m2765041120 (VersionInfo_t1214656568 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.VersionInfo::GetHashCode()
extern "C"  int32_t VersionInfo_GetHashCode_m2780055032 (VersionInfo_t1214656568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.VersionInfo::ToString()
extern "C"  String_t* VersionInfo_ToString_m3248751890 (VersionInfo_t1214656568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.VersionInfo::ToShortString()
extern "C"  String_t* VersionInfo_ToShortString_m1514871086 (VersionInfo_t1214656568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.VersionInfo::op_Equality(InControl.VersionInfo,InControl.VersionInfo)
extern "C"  bool VersionInfo_op_Equality_m1506158073 (Il2CppObject * __this /* static, unused */, VersionInfo_t1214656568  ___a0, VersionInfo_t1214656568  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.VersionInfo::op_Inequality(InControl.VersionInfo,InControl.VersionInfo)
extern "C"  bool VersionInfo_op_Inequality_m2047940724 (Il2CppObject * __this /* static, unused */, VersionInfo_t1214656568  ___a0, VersionInfo_t1214656568  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.VersionInfo::op_LessThanOrEqual(InControl.VersionInfo,InControl.VersionInfo)
extern "C"  bool VersionInfo_op_LessThanOrEqual_m734262352 (Il2CppObject * __this /* static, unused */, VersionInfo_t1214656568  ___a0, VersionInfo_t1214656568  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.VersionInfo::op_GreaterThanOrEqual(InControl.VersionInfo,InControl.VersionInfo)
extern "C"  bool VersionInfo_op_GreaterThanOrEqual_m1302499101 (Il2CppObject * __this /* static, unused */, VersionInfo_t1214656568  ___a0, VersionInfo_t1214656568  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.VersionInfo::op_LessThan(InControl.VersionInfo,InControl.VersionInfo)
extern "C"  bool VersionInfo_op_LessThan_m2821470233 (Il2CppObject * __this /* static, unused */, VersionInfo_t1214656568  ___a0, VersionInfo_t1214656568  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.VersionInfo::op_GreaterThan(InControl.VersionInfo,InControl.VersionInfo)
extern "C"  bool VersionInfo_op_GreaterThan_m1804237292 (Il2CppObject * __this /* static, unused */, VersionInfo_t1214656568  ___a0, VersionInfo_t1214656568  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct VersionInfo_t1214656568;
struct VersionInfo_t1214656568_marshaled_pinvoke;

extern "C" void VersionInfo_t1214656568_marshal_pinvoke(const VersionInfo_t1214656568& unmarshaled, VersionInfo_t1214656568_marshaled_pinvoke& marshaled);
extern "C" void VersionInfo_t1214656568_marshal_pinvoke_back(const VersionInfo_t1214656568_marshaled_pinvoke& marshaled, VersionInfo_t1214656568& unmarshaled);
extern "C" void VersionInfo_t1214656568_marshal_pinvoke_cleanup(VersionInfo_t1214656568_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct VersionInfo_t1214656568;
struct VersionInfo_t1214656568_marshaled_com;

extern "C" void VersionInfo_t1214656568_marshal_com(const VersionInfo_t1214656568& unmarshaled, VersionInfo_t1214656568_marshaled_com& marshaled);
extern "C" void VersionInfo_t1214656568_marshal_com_back(const VersionInfo_t1214656568_marshaled_com& marshaled, VersionInfo_t1214656568& unmarshaled);
extern "C" void VersionInfo_t1214656568_marshal_com_cleanup(VersionInfo_t1214656568_marshaled_com& marshaled);
