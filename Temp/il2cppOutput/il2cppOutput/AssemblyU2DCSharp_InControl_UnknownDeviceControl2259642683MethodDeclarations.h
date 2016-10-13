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

// InControl.InputDevice
struct InputDevice_t4071704914;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IO.BinaryWriter
struct BinaryWriter_t4146364100;
// System.IO.BinaryReader
struct BinaryReader_t3990958868;
// InControl.UnknownDeviceControl
struct UnknownDeviceControl_t2259642683;
struct UnknownDeviceControl_t2259642683_marshaled_pinvoke;
struct UnknownDeviceControl_t2259642683_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_UnknownDeviceControl2259642683.h"
#include "AssemblyU2DCSharp_InControl_InputControlType2879927883.h"
#include "AssemblyU2DCSharp_InControl_InputRangeType4175617323.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IO_BinaryWriter4146364100.h"
#include "mscorlib_System_IO_BinaryReader3990958868.h"

// System.Void InControl.UnknownDeviceControl::.ctor(InControl.InputControlType,InControl.InputRangeType)
extern "C"  void UnknownDeviceControl__ctor_m640014078 (UnknownDeviceControl_t2259642683 * __this, int32_t ___control0, int32_t ___sourceRange1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnknownDeviceControl::.cctor()
extern "C"  void UnknownDeviceControl__cctor_m3640965285 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.UnknownDeviceControl::GetValue(InControl.InputDevice)
extern "C"  float UnknownDeviceControl_GetValue_m381001285 (UnknownDeviceControl_t2259642683 * __this, InputDevice_t4071704914 * ___device0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.UnknownDeviceControl::get_Index()
extern "C"  int32_t UnknownDeviceControl_get_Index_m477129793 (UnknownDeviceControl_t2259642683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnknownDeviceControl::Equals(InControl.UnknownDeviceControl)
extern "C"  bool UnknownDeviceControl_Equals_m347779612 (UnknownDeviceControl_t2259642683 * __this, UnknownDeviceControl_t2259642683  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnknownDeviceControl::Equals(System.Object)
extern "C"  bool UnknownDeviceControl_Equals_m893843909 (UnknownDeviceControl_t2259642683 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.UnknownDeviceControl::GetHashCode()
extern "C"  int32_t UnknownDeviceControl_GetHashCode_m2249076585 (UnknownDeviceControl_t2259642683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.UnknownDeviceControl::ToString()
extern "C"  String_t* UnknownDeviceControl_ToString_m1635920011 (UnknownDeviceControl_t2259642683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnknownDeviceControl::Save(System.IO.BinaryWriter)
extern "C"  void UnknownDeviceControl_Save_m1372118012 (UnknownDeviceControl_t2259642683 * __this, BinaryWriter_t4146364100 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnknownDeviceControl::Load(System.IO.BinaryReader)
extern "C"  void UnknownDeviceControl_Load_m341199381 (UnknownDeviceControl_t2259642683 * __this, BinaryReader_t3990958868 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnknownDeviceControl::op_Equality(InControl.UnknownDeviceControl,InControl.UnknownDeviceControl)
extern "C"  bool UnknownDeviceControl_op_Equality_m3240480156 (Il2CppObject * __this /* static, unused */, UnknownDeviceControl_t2259642683  ___a0, UnknownDeviceControl_t2259642683  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnknownDeviceControl::op_Inequality(InControl.UnknownDeviceControl,InControl.UnknownDeviceControl)
extern "C"  bool UnknownDeviceControl_op_Inequality_m2940458135 (Il2CppObject * __this /* static, unused */, UnknownDeviceControl_t2259642683  ___a0, UnknownDeviceControl_t2259642683  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnknownDeviceControl::op_Implicit(InControl.UnknownDeviceControl)
extern "C"  bool UnknownDeviceControl_op_Implicit_m1229528226 (Il2CppObject * __this /* static, unused */, UnknownDeviceControl_t2259642683  ___control0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct UnknownDeviceControl_t2259642683;
struct UnknownDeviceControl_t2259642683_marshaled_pinvoke;

extern "C" void UnknownDeviceControl_t2259642683_marshal_pinvoke(const UnknownDeviceControl_t2259642683& unmarshaled, UnknownDeviceControl_t2259642683_marshaled_pinvoke& marshaled);
extern "C" void UnknownDeviceControl_t2259642683_marshal_pinvoke_back(const UnknownDeviceControl_t2259642683_marshaled_pinvoke& marshaled, UnknownDeviceControl_t2259642683& unmarshaled);
extern "C" void UnknownDeviceControl_t2259642683_marshal_pinvoke_cleanup(UnknownDeviceControl_t2259642683_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct UnknownDeviceControl_t2259642683;
struct UnknownDeviceControl_t2259642683_marshaled_com;

extern "C" void UnknownDeviceControl_t2259642683_marshal_com(const UnknownDeviceControl_t2259642683& unmarshaled, UnknownDeviceControl_t2259642683_marshaled_com& marshaled);
extern "C" void UnknownDeviceControl_t2259642683_marshal_com_back(const UnknownDeviceControl_t2259642683_marshaled_com& marshaled, UnknownDeviceControl_t2259642683& unmarshaled);
extern "C" void UnknownDeviceControl_t2259642683_marshal_com_cleanup(UnknownDeviceControl_t2259642683_marshaled_com& marshaled);
