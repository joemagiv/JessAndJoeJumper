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

// InControl.XboxOneInputDevice
struct XboxOneInputDevice_t2513255019;

#include "codegen/il2cpp-codegen.h"

// System.Void InControl.XboxOneInputDevice::.ctor(System.UInt32)
extern "C"  void XboxOneInputDevice__ctor_m756420898 (XboxOneInputDevice_t2513255019 * __this, uint32_t ___joystickId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 InControl.XboxOneInputDevice::get_JoystickId()
extern "C"  uint32_t XboxOneInputDevice_get_JoystickId_m2093495943 (XboxOneInputDevice_t2513255019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.XboxOneInputDevice::set_JoystickId(System.UInt32)
extern "C"  void XboxOneInputDevice_set_JoystickId_m3684408538 (XboxOneInputDevice_t2513255019 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 InControl.XboxOneInputDevice::get_ControllerId()
extern "C"  uint64_t XboxOneInputDevice_get_ControllerId_m3392196264 (XboxOneInputDevice_t2513255019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.XboxOneInputDevice::set_ControllerId(System.UInt64)
extern "C"  void XboxOneInputDevice_set_ControllerId_m606557179 (XboxOneInputDevice_t2513255019 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.XboxOneInputDevice::Update(System.UInt64,System.Single)
extern "C"  void XboxOneInputDevice_Update_m2220149707 (XboxOneInputDevice_t2513255019 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.XboxOneInputDevice::get_IsConnected()
extern "C"  bool XboxOneInputDevice_get_IsConnected_m1969032344 (XboxOneInputDevice_t2513255019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.XboxOneInputDevice::Vibrate(System.Single,System.Single)
extern "C"  void XboxOneInputDevice_Vibrate_m351608267 (XboxOneInputDevice_t2513255019 * __this, float ___leftMotor0, float ___rightMotor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.XboxOneInputDevice::Vibrate(System.Single,System.Single,System.Single,System.Single)
extern "C"  void XboxOneInputDevice_Vibrate_m414412885 (XboxOneInputDevice_t2513255019 * __this, float ___leftMotor0, float ___rightMotor1, float ___leftTrigger2, float ___rightTrigger3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
