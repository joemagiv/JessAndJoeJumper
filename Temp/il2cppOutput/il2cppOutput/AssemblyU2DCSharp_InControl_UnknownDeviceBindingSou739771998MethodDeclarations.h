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

// InControl.UnknownDeviceBindingSource
struct UnknownDeviceBindingSource_t739771998;
// InControl.InputDevice
struct InputDevice_t4071704914;
// System.String
struct String_t;
// InControl.BindingSource
struct BindingSource_t1899497234;
// System.Object
struct Il2CppObject;
// System.IO.BinaryReader
struct BinaryReader_t3990958868;
// System.IO.BinaryWriter
struct BinaryWriter_t4146364100;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_UnknownDeviceControl2259642683.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"
#include "AssemblyU2DCSharp_InControl_BindingSource1899497234.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_InControl_BindingSourceType420681068.h"
#include "mscorlib_System_IO_BinaryReader3990958868.h"
#include "mscorlib_System_IO_BinaryWriter4146364100.h"

// System.Void InControl.UnknownDeviceBindingSource::.ctor()
extern "C"  void UnknownDeviceBindingSource__ctor_m4272593989 (UnknownDeviceBindingSource_t739771998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnknownDeviceBindingSource::.ctor(InControl.UnknownDeviceControl)
extern "C"  void UnknownDeviceBindingSource__ctor_m1307522994 (UnknownDeviceBindingSource_t739771998 * __this, UnknownDeviceControl_t2259642683  ___control0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.UnknownDeviceControl InControl.UnknownDeviceBindingSource::get_Control()
extern "C"  UnknownDeviceControl_t2259642683  UnknownDeviceBindingSource_get_Control_m4044801197 (UnknownDeviceBindingSource_t739771998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnknownDeviceBindingSource::set_Control(InControl.UnknownDeviceControl)
extern "C"  void UnknownDeviceBindingSource_set_Control_m3608467792 (UnknownDeviceBindingSource_t739771998 * __this, UnknownDeviceControl_t2259642683  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.UnknownDeviceBindingSource::GetValue(InControl.InputDevice)
extern "C"  float UnknownDeviceBindingSource_GetValue_m347859074 (UnknownDeviceBindingSource_t739771998 * __this, InputDevice_t4071704914 * ___device0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnknownDeviceBindingSource::GetState(InControl.InputDevice)
extern "C"  bool UnknownDeviceBindingSource_GetState_m6656122 (UnknownDeviceBindingSource_t739771998 * __this, InputDevice_t4071704914 * ___device0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.UnknownDeviceBindingSource::get_Name()
extern "C"  String_t* UnknownDeviceBindingSource_get_Name_m301830742 (UnknownDeviceBindingSource_t739771998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.UnknownDeviceBindingSource::get_DeviceName()
extern "C"  String_t* UnknownDeviceBindingSource_get_DeviceName_m3274192076 (UnknownDeviceBindingSource_t739771998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnknownDeviceBindingSource::Equals(InControl.BindingSource)
extern "C"  bool UnknownDeviceBindingSource_Equals_m2579920662 (UnknownDeviceBindingSource_t739771998 * __this, BindingSource_t1899497234 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnknownDeviceBindingSource::Equals(System.Object)
extern "C"  bool UnknownDeviceBindingSource_Equals_m2949302850 (UnknownDeviceBindingSource_t739771998 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.UnknownDeviceBindingSource::GetHashCode()
extern "C"  int32_t UnknownDeviceBindingSource_GetHashCode_m1367181414 (UnknownDeviceBindingSource_t739771998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.BindingSourceType InControl.UnknownDeviceBindingSource::get_BindingSourceType()
extern "C"  int32_t UnknownDeviceBindingSource_get_BindingSourceType_m1408451909 (UnknownDeviceBindingSource_t739771998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnknownDeviceBindingSource::get_IsValid()
extern "C"  bool UnknownDeviceBindingSource_get_IsValid_m3757054840 (UnknownDeviceBindingSource_t739771998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnknownDeviceBindingSource::Load(System.IO.BinaryReader)
extern "C"  void UnknownDeviceBindingSource_Load_m3077552632 (UnknownDeviceBindingSource_t739771998 * __this, BinaryReader_t3990958868 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnknownDeviceBindingSource::Save(System.IO.BinaryWriter)
extern "C"  void UnknownDeviceBindingSource_Save_m4108471263 (UnknownDeviceBindingSource_t739771998 * __this, BinaryWriter_t4146364100 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
