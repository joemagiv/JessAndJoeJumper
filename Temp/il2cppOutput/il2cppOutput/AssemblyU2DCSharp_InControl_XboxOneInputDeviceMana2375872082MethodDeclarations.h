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

// InControl.XboxOneInputDeviceManager
struct XboxOneInputDeviceManager_t2375872082;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t901821544;

#include "codegen/il2cpp-codegen.h"

// System.Void InControl.XboxOneInputDeviceManager::.ctor()
extern "C"  void XboxOneInputDeviceManager__ctor_m3477307297 (XboxOneInputDeviceManager_t2375872082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.XboxOneInputDeviceManager::Update(System.UInt64,System.Single)
extern "C"  void XboxOneInputDeviceManager_Update_m1396208916 (XboxOneInputDeviceManager_t2375872082 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.XboxOneInputDeviceManager::Destroy()
extern "C"  void XboxOneInputDeviceManager_Destroy_m1841919673 (XboxOneInputDeviceManager_t2375872082 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.XboxOneInputDeviceManager::CheckPlatformSupport(System.Collections.Generic.ICollection`1<System.String>)
extern "C"  bool XboxOneInputDeviceManager_CheckPlatformSupport_m4134042830 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___errors0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.XboxOneInputDeviceManager::Enable()
extern "C"  bool XboxOneInputDeviceManager_Enable_m1624200082 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
