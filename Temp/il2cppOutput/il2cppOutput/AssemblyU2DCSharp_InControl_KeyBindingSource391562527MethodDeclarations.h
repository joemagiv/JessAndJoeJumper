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

// InControl.KeyBindingSource
struct KeyBindingSource_t391562527;
// InControl.Key[]
struct KeyU5BU5D_t3745573420;
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
#include "AssemblyU2DCSharp_InControl_KeyCombo1628533421.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"
#include "AssemblyU2DCSharp_InControl_BindingSource1899497234.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_InControl_BindingSourceType420681068.h"
#include "mscorlib_System_IO_BinaryReader3990958868.h"
#include "mscorlib_System_IO_BinaryWriter4146364100.h"

// System.Void InControl.KeyBindingSource::.ctor()
extern "C"  void KeyBindingSource__ctor_m2296849572 (KeyBindingSource_t391562527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.KeyBindingSource::.ctor(InControl.KeyCombo)
extern "C"  void KeyBindingSource__ctor_m2800350495 (KeyBindingSource_t391562527 * __this, KeyCombo_t1628533421  ___keyCombo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.KeyBindingSource::.ctor(InControl.Key[])
extern "C"  void KeyBindingSource__ctor_m3115629283 (KeyBindingSource_t391562527 * __this, KeyU5BU5D_t3745573420* ___keys0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.KeyCombo InControl.KeyBindingSource::get_Control()
extern "C"  KeyCombo_t1628533421  KeyBindingSource_get_Control_m4136200382 (KeyBindingSource_t391562527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.KeyBindingSource::set_Control(InControl.KeyCombo)
extern "C"  void KeyBindingSource_set_Control_m3873103997 (KeyBindingSource_t391562527 * __this, KeyCombo_t1628533421  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.KeyBindingSource::GetValue(InControl.InputDevice)
extern "C"  float KeyBindingSource_GetValue_m3774026977 (KeyBindingSource_t391562527 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.KeyBindingSource::GetState(InControl.InputDevice)
extern "C"  bool KeyBindingSource_GetState_m2254191321 (KeyBindingSource_t391562527 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.KeyBindingSource::get_Name()
extern "C"  String_t* KeyBindingSource_get_Name_m3885070679 (KeyBindingSource_t391562527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.KeyBindingSource::get_DeviceName()
extern "C"  String_t* KeyBindingSource_get_DeviceName_m3537442573 (KeyBindingSource_t391562527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.KeyBindingSource::Equals(InControl.BindingSource)
extern "C"  bool KeyBindingSource_Equals_m532488565 (KeyBindingSource_t391562527 * __this, BindingSource_t1899497234 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.KeyBindingSource::Equals(System.Object)
extern "C"  bool KeyBindingSource_Equals_m3936489313 (KeyBindingSource_t391562527 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.KeyBindingSource::GetHashCode()
extern "C"  int32_t KeyBindingSource_GetHashCode_m2451702789 (KeyBindingSource_t391562527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.BindingSourceType InControl.KeyBindingSource::get_BindingSourceType()
extern "C"  int32_t KeyBindingSource_get_BindingSourceType_m3356186852 (KeyBindingSource_t391562527 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.KeyBindingSource::Load(System.IO.BinaryReader)
extern "C"  void KeyBindingSource_Load_m561541881 (KeyBindingSource_t391562527 * __this, BinaryReader_t3990958868 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.KeyBindingSource::Save(System.IO.BinaryWriter)
extern "C"  void KeyBindingSource_Save_m1592460512 (KeyBindingSource_t391562527 * __this, BinaryWriter_t4146364100 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
