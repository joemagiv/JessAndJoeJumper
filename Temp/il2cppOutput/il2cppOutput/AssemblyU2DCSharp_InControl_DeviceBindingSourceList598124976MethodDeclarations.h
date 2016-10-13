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

// InControl.DeviceBindingSourceListener
struct DeviceBindingSourceListener_t598124976;
// InControl.BindingSource
struct BindingSource_t1899497234;
// InControl.BindingListenOptions
struct BindingListenOptions_t2027175824;
// InControl.InputDevice
struct InputDevice_t4071704914;
// InControl.InputControl
struct InputControl_t1543925617;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_BindingListenOptions2027175824.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"
#include "AssemblyU2DCSharp_InControl_InputControl1543925617.h"
#include "AssemblyU2DCSharp_InControl_InputControlType2879927883.h"

// System.Void InControl.DeviceBindingSourceListener::.ctor()
extern "C"  void DeviceBindingSourceListener__ctor_m4205876227 (DeviceBindingSourceListener_t598124976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.DeviceBindingSourceListener::Reset()
extern "C"  void DeviceBindingSourceListener_Reset_m1852309168 (DeviceBindingSourceListener_t598124976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.BindingSource InControl.DeviceBindingSourceListener::Listen(InControl.BindingListenOptions,InControl.InputDevice)
extern "C"  BindingSource_t1899497234 * DeviceBindingSourceListener_Listen_m3160543065 (DeviceBindingSourceListener_t598124976 * __this, BindingListenOptions_t2027175824 * ___listenOptions0, InputDevice_t4071704914 * ___device1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.DeviceBindingSourceListener::IsPressed(InControl.InputControl)
extern "C"  bool DeviceBindingSourceListener_IsPressed_m4101823076 (DeviceBindingSourceListener_t598124976 * __this, InputControl_t1543925617 * ___control0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.DeviceBindingSourceListener::IsPressed(InControl.InputControlType,InControl.InputDevice)
extern "C"  bool DeviceBindingSourceListener_IsPressed_m3314039916 (DeviceBindingSourceListener_t598124976 * __this, int32_t ___control0, InputDevice_t4071704914 * ___device1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlType InControl.DeviceBindingSourceListener::ListenForControl(InControl.BindingListenOptions,InControl.InputDevice)
extern "C"  int32_t DeviceBindingSourceListener_ListenForControl_m3908614300 (DeviceBindingSourceListener_t598124976 * __this, BindingListenOptions_t2027175824 * ___listenOptions0, InputDevice_t4071704914 * ___device1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
