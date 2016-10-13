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

// InControl.KeyBindingSourceListener
struct KeyBindingSourceListener_t2553423603;
// InControl.BindingSource
struct BindingSource_t1899497234;
// InControl.BindingListenOptions
struct BindingListenOptions_t2027175824;
// InControl.InputDevice
struct InputDevice_t4071704914;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_BindingListenOptions2027175824.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"

// System.Void InControl.KeyBindingSourceListener::.ctor()
extern "C"  void KeyBindingSourceListener__ctor_m967113040 (KeyBindingSourceListener_t2553423603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.KeyBindingSourceListener::Reset()
extern "C"  void KeyBindingSourceListener_Reset_m2908513277 (KeyBindingSourceListener_t2553423603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.BindingSource InControl.KeyBindingSourceListener::Listen(InControl.BindingListenOptions,InControl.InputDevice)
extern "C"  BindingSource_t1899497234 * KeyBindingSourceListener_Listen_m339704286 (KeyBindingSourceListener_t2553423603 * __this, BindingListenOptions_t2027175824 * ___listenOptions0, InputDevice_t4071704914 * ___device1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
