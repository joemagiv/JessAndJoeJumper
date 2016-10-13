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

// InControl.Touch
struct Touch_t2333148497;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Touch4210255029.h"

// System.Void InControl.Touch::.ctor()
extern "C"  void Touch__ctor_m2744933250 (Touch_t2333148497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Touch::.cctor()
extern "C"  void Touch__cctor_m3006455915 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Touch::Reset()
extern "C"  void Touch_Reset_m391366191 (Touch_t2333148497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Touch::SetWithTouchData(UnityEngine.Touch,System.UInt64,System.Single)
extern "C"  void Touch_SetWithTouchData_m3129364385 (Touch_t2333148497 * __this, Touch_t4210255029  ___touch0, uint64_t ___updateTick1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.Touch::SetWithMouseData(System.UInt64,System.Single)
extern "C"  bool Touch_SetWithMouseData_m3774273899 (Touch_t2333148497 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
