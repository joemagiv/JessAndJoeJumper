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

// InControl.UnknownDeviceBindingSourceListener
struct UnknownDeviceBindingSourceListener_t955889970;
// InControl.BindingSource
struct BindingSource_t1899497234;
// InControl.BindingListenOptions
struct BindingListenOptions_t2027175824;
// InControl.InputDevice
struct InputDevice_t4071704914;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_BindingListenOptions2027175824.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"
#include "AssemblyU2DCSharp_InControl_UnknownDeviceControl2259642683.h"

// System.Void InControl.UnknownDeviceBindingSourceListener::.ctor()
extern "C"  void UnknownDeviceBindingSourceListener__ctor_m1259028465 (UnknownDeviceBindingSourceListener_t955889970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnknownDeviceBindingSourceListener::Reset()
extern "C"  void UnknownDeviceBindingSourceListener_Reset_m3200428702 (UnknownDeviceBindingSourceListener_t955889970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnknownDeviceBindingSourceListener::TakeSnapshotOnUnknownDevices()
extern "C"  void UnknownDeviceBindingSourceListener_TakeSnapshotOnUnknownDevices_m2378713200 (UnknownDeviceBindingSourceListener_t955889970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.BindingSource InControl.UnknownDeviceBindingSourceListener::Listen(InControl.BindingListenOptions,InControl.InputDevice)
extern "C"  BindingSource_t1899497234 * UnknownDeviceBindingSourceListener_Listen_m2679848605 (UnknownDeviceBindingSourceListener_t955889970 * __this, BindingListenOptions_t2027175824 * ___listenOptions0, InputDevice_t4071704914 * ___device1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnknownDeviceBindingSourceListener::IsPressed(InControl.UnknownDeviceControl,InControl.InputDevice)
extern "C"  bool UnknownDeviceBindingSourceListener_IsPressed_m3328008578 (UnknownDeviceBindingSourceListener_t955889970 * __this, UnknownDeviceControl_t2259642683  ___control0, InputDevice_t4071704914 * ___device1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.UnknownDeviceControl InControl.UnknownDeviceBindingSourceListener::ListenForControl(InControl.BindingListenOptions,InControl.InputDevice)
extern "C"  UnknownDeviceControl_t2259642683  UnknownDeviceBindingSourceListener_ListenForControl_m2809711090 (UnknownDeviceBindingSourceListener_t955889970 * __this, BindingListenOptions_t2027175824 * ___listenOptions0, InputDevice_t4071704914 * ___device1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
