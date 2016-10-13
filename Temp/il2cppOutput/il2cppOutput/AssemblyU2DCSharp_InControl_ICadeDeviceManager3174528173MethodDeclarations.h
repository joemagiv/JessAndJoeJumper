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

// InControl.ICadeDeviceManager
struct ICadeDeviceManager_t3174528173;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t901821544;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_ICadeState1693133511.h"

// System.Void InControl.ICadeDeviceManager::.ctor()
extern "C"  void ICadeDeviceManager__ctor_m1612738262 (ICadeDeviceManager_t3174528173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.ICadeDeviceManager::SetActive(System.Boolean)
extern "C"  void ICadeDeviceManager_SetActive_m650855155 (ICadeDeviceManager_t3174528173 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.ICadeDeviceManager::get_Active()
extern "C"  bool ICadeDeviceManager_get_Active_m2894875633 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.ICadeDeviceManager::set_Active(System.Boolean)
extern "C"  void ICadeDeviceManager_set_Active_m4004276840 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.ICadeDeviceManager::StartWorker()
extern "C"  void ICadeDeviceManager_StartWorker_m874161204 (ICadeDeviceManager_t3174528173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.ICadeDeviceManager::StopWorker()
extern "C"  void ICadeDeviceManager_StopWorker_m3734195214 (ICadeDeviceManager_t3174528173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.ICadeDeviceManager::Worker()
extern "C"  void ICadeDeviceManager_Worker_m3189866604 (ICadeDeviceManager_t3174528173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.ICadeState InControl.ICadeDeviceManager::GetState()
extern "C"  int32_t ICadeDeviceManager_GetState_m2088323303 (ICadeDeviceManager_t3174528173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.ICadeDeviceManager::Update(System.UInt64,System.Single)
extern "C"  void ICadeDeviceManager_Update_m1710437065 (ICadeDeviceManager_t3174528173 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.ICadeDeviceManager::Destroy()
extern "C"  void ICadeDeviceManager_Destroy_m992439470 (ICadeDeviceManager_t3174528173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.ICadeDeviceManager::CheckPlatformSupport(System.Collections.Generic.ICollection`1<System.String>)
extern "C"  bool ICadeDeviceManager_CheckPlatformSupport_m1603901275 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___errors0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.ICadeDeviceManager::Enable()
extern "C"  void ICadeDeviceManager_Enable_m501736753 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
