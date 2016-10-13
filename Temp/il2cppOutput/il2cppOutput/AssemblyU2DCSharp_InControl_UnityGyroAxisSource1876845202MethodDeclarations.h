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

// InControl.UnityGyroAxisSource
struct UnityGyroAxisSource_t1876845202;
// InControl.InputDevice
struct InputDevice_t4071704914;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_UnityGyroAxisSource_Gy2308925493.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void InControl.UnityGyroAxisSource::.ctor()
extern "C"  void UnityGyroAxisSource__ctor_m2382438753 (UnityGyroAxisSource_t1876845202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityGyroAxisSource::.ctor(InControl.UnityGyroAxisSource/GyroAxis)
extern "C"  void UnityGyroAxisSource__ctor_m3349419468 (UnityGyroAxisSource_t1876845202 * __this, int32_t ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.UnityGyroAxisSource::GetValue(InControl.InputDevice)
extern "C"  float UnityGyroAxisSource_GetValue_m3823105718 (UnityGyroAxisSource_t1876845202 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.UnityGyroAxisSource::GetState(InControl.InputDevice)
extern "C"  bool UnityGyroAxisSource_GetState_m2857184126 (UnityGyroAxisSource_t1876845202 * __this, InputDevice_t4071704914 * ___inputDevice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion InControl.UnityGyroAxisSource::GetAttitude()
extern "C"  Quaternion_t1553702882  UnityGyroAxisSource_GetAttitude_m2699474215 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 InControl.UnityGyroAxisSource::GetAxis()
extern "C"  Vector3_t4282066566  UnityGyroAxisSource_GetAxis_m2439376 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.UnityGyroAxisSource::ApplyDeadZone(System.Single)
extern "C"  float UnityGyroAxisSource_ApplyDeadZone_m1878016962 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.UnityGyroAxisSource::Calibrate()
extern "C"  void UnityGyroAxisSource_Calibrate_m3956479110 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
