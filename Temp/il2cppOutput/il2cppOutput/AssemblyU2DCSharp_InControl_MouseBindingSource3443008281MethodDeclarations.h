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

// InControl.MouseBindingSource
struct MouseBindingSource_t3443008281;
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
#include "AssemblyU2DCSharp_InControl_Mouse2326684343.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"
#include "AssemblyU2DCSharp_InControl_BindingSource1899497234.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_InControl_BindingSourceType420681068.h"
#include "mscorlib_System_IO_BinaryWriter4146364100.h"
#include "mscorlib_System_IO_BinaryReader3990958868.h"

// System.Void InControl.MouseBindingSource::.ctor()
extern "C"  void MouseBindingSource__ctor_m1241463274 (MouseBindingSource_t3443008281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.MouseBindingSource::.ctor(InControl.Mouse)
extern "C"  void MouseBindingSource__ctor_m1319622329 (MouseBindingSource_t3443008281 * __this, int32_t ___mouseControl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.MouseBindingSource::.cctor()
extern "C"  void MouseBindingSource__cctor_m3643526915 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.Mouse InControl.MouseBindingSource::get_Control()
extern "C"  int32_t MouseBindingSource_get_Control_m3103005496 (MouseBindingSource_t3443008281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.MouseBindingSource::set_Control(InControl.Mouse)
extern "C"  void MouseBindingSource_set_Control_m1596060827 (MouseBindingSource_t3443008281 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.MouseBindingSource::SafeGetMouseButton(System.Int32)
extern "C"  bool MouseBindingSource_SafeGetMouseButton_m1778169805 (Il2CppObject * __this /* static, unused */, int32_t ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.MouseBindingSource::ButtonIsPressed(InControl.Mouse)
extern "C"  bool MouseBindingSource_ButtonIsPressed_m3401902729 (Il2CppObject * __this /* static, unused */, int32_t ___control0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.MouseBindingSource::GetValue(InControl.InputDevice)
extern "C"  float MouseBindingSource_GetValue_m671292199 (MouseBindingSource_t3443008281 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.MouseBindingSource::GetState(InControl.InputDevice)
extern "C"  bool MouseBindingSource_GetState_m1898535711 (MouseBindingSource_t3443008281 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.MouseBindingSource::get_Name()
extern "C"  String_t* MouseBindingSource_get_Name_m2990713233 (MouseBindingSource_t3443008281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.MouseBindingSource::get_DeviceName()
extern "C"  String_t* MouseBindingSource_get_DeviceName_m1007662023 (MouseBindingSource_t3443008281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.MouseBindingSource::Equals(InControl.BindingSource)
extern "C"  bool MouseBindingSource_Equals_m176832955 (MouseBindingSource_t3443008281 * __this, BindingSource_t1899497234 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.MouseBindingSource::Equals(System.Object)
extern "C"  bool MouseBindingSource_Equals_m197635879 (MouseBindingSource_t3443008281 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.MouseBindingSource::GetHashCode()
extern "C"  int32_t MouseBindingSource_GetHashCode_m1310713931 (MouseBindingSource_t3443008281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.BindingSourceType InControl.MouseBindingSource::get_BindingSourceType()
extern "C"  int32_t MouseBindingSource_get_BindingSourceType_m3758619114 (MouseBindingSource_t3443008281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.MouseBindingSource::Save(System.IO.BinaryWriter)
extern "C"  void MouseBindingSource_Save_m2108888922 (MouseBindingSource_t3443008281 * __this, BinaryWriter_t4146364100 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.MouseBindingSource::Load(System.IO.BinaryReader)
extern "C"  void MouseBindingSource_Load_m1077970291 (MouseBindingSource_t3443008281 * __this, BinaryReader_t3990958868 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
