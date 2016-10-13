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

// InControl.MouseBindingSourceListener
struct MouseBindingSourceListener_t2218453741;
// InControl.BindingSource
struct BindingSource_t1899497234;
// InControl.BindingListenOptions
struct BindingListenOptions_t2027175824;
// InControl.InputDevice
struct InputDevice_t4071704914;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_BindingListenOptions2027175824.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"
#include "AssemblyU2DCSharp_InControl_Mouse2326684343.h"

// System.Void InControl.MouseBindingSourceListener::.ctor()
extern "C"  void MouseBindingSourceListener__ctor_m2324588694 (MouseBindingSourceListener_t2218453741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.MouseBindingSourceListener::Reset()
extern "C"  void MouseBindingSourceListener_Reset_m4265988931 (MouseBindingSourceListener_t2218453741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.BindingSource InControl.MouseBindingSourceListener::Listen(InControl.BindingListenOptions,InControl.InputDevice)
extern "C"  BindingSource_t1899497234 * MouseBindingSourceListener_Listen_m1344801816 (MouseBindingSourceListener_t2218453741 * __this, BindingListenOptions_t2027175824 * ___listenOptions0, InputDevice_t4071704914 * ___device1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.Mouse InControl.MouseBindingSourceListener::ListenForControl()
extern "C"  int32_t MouseBindingSourceListener_ListenForControl_m2179865005 (MouseBindingSourceListener_t2218453741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
