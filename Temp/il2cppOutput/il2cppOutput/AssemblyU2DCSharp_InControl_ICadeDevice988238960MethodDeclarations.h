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

// InControl.ICadeDevice
struct ICadeDevice_t988238960;
// InControl.ICadeDeviceManager
struct ICadeDeviceManager_t3174528173;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_ICadeDeviceManager3174528173.h"
#include "AssemblyU2DCSharp_InControl_ICadeState1693133511.h"

// System.Void InControl.ICadeDevice::.ctor(InControl.ICadeDeviceManager)
extern "C"  void ICadeDevice__ctor_m486382974 (ICadeDevice_t988238960 * __this, ICadeDeviceManager_t3174528173 * ___owner0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.ICadeDevice::Update(System.UInt64,System.Single)
extern "C"  void ICadeDevice_Update_m132308918 (ICadeDevice_t988238960 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.ICadeDevice::IsPressed(InControl.ICadeState)
extern "C"  bool ICadeDevice_IsPressed_m3675025422 (ICadeDevice_t988238960 * __this, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.ICadeDevice::GetState()
extern "C"  void ICadeDevice_GetState_m1787099068 (ICadeDevice_t988238960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
