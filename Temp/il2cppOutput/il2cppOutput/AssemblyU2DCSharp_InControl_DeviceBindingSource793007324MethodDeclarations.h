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

// InControl.DeviceBindingSource
struct DeviceBindingSource_t793007324;
// InControl.InputDevice
struct InputDevice_t4071704914;
// System.String
struct String_t;
// InControl.BindingSource
struct BindingSource_t1899497234;
// System.Object
struct Il2CppObject;
// System.IO.BinaryWriter
struct BinaryWriter_t4146364100;
// System.IO.BinaryReader
struct BinaryReader_t3990958868;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_InputControlType2879927883.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"
#include "AssemblyU2DCSharp_InControl_BindingSource1899497234.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_InControl_BindingSourceType420681068.h"
#include "mscorlib_System_IO_BinaryWriter4146364100.h"
#include "mscorlib_System_IO_BinaryReader3990958868.h"

// System.Void InControl.DeviceBindingSource::.ctor()
extern "C"  void DeviceBindingSource__ctor_m1516642903 (DeviceBindingSource_t793007324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.DeviceBindingSource::.ctor(InControl.InputControlType)
extern "C"  void DeviceBindingSource__ctor_m3273207348 (DeviceBindingSource_t793007324 * __this, int32_t ___control0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlType InControl.DeviceBindingSource::get_Control()
extern "C"  int32_t DeviceBindingSource_get_Control_m798296259 (DeviceBindingSource_t793007324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.DeviceBindingSource::set_Control(InControl.InputControlType)
extern "C"  void DeviceBindingSource_set_Control_m3774339410 (DeviceBindingSource_t793007324 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.DeviceBindingSource::GetValue(InControl.InputDevice)
extern "C"  float DeviceBindingSource_GetValue_m397342124 (DeviceBindingSource_t793007324 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.DeviceBindingSource::GetState(InControl.InputDevice)
extern "C"  bool DeviceBindingSource_GetState_m3726387828 (DeviceBindingSource_t793007324 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.DeviceBindingSource::get_Name()
extern "C"  String_t* DeviceBindingSource_get_Name_m2231663646 (DeviceBindingSource_t793007324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.DeviceBindingSource::get_DeviceName()
extern "C"  String_t* DeviceBindingSource_get_DeviceName_m964339860 (DeviceBindingSource_t793007324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.DeviceBindingSource::Equals(InControl.BindingSource)
extern "C"  bool DeviceBindingSource_Equals_m2004685072 (DeviceBindingSource_t793007324 * __this, BindingSource_t1899497234 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.DeviceBindingSource::Equals(System.Object)
extern "C"  bool DeviceBindingSource_Equals_m1130411196 (DeviceBindingSource_t793007324 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.DeviceBindingSource::GetHashCode()
extern "C"  int32_t DeviceBindingSource_GetHashCode_m2967039700 (DeviceBindingSource_t793007324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.BindingSourceType InControl.DeviceBindingSource::get_BindingSourceType()
extern "C"  int32_t DeviceBindingSource_get_BindingSourceType_m4282355605 (DeviceBindingSource_t793007324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.DeviceBindingSource::Save(System.IO.BinaryWriter)
extern "C"  void DeviceBindingSource_Save_m1092461837 (DeviceBindingSource_t793007324 * __this, BinaryWriter_t4146364100 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.DeviceBindingSource::Load(System.IO.BinaryReader)
extern "C"  void DeviceBindingSource_Load_m61543206 (DeviceBindingSource_t793007324 * __this, BinaryReader_t3990958868 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.DeviceBindingSource::get_IsValid()
extern "C"  bool DeviceBindingSource_get_IsValid_m1177362418 (DeviceBindingSource_t793007324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
