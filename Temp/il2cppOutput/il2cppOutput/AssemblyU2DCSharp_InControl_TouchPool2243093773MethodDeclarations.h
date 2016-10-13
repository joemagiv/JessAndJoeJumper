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

// InControl.TouchPool
struct TouchPool_t2243093773;
// InControl.Touch
struct Touch_t2333148497;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_Touch2333148497.h"

// System.Void InControl.TouchPool::.ctor(System.Int32)
extern "C"  void TouchPool__ctor_m1118549911 (TouchPool_t2243093773 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchPool::.ctor()
extern "C"  void TouchPool__ctor_m1032502086 (TouchPool_t2243093773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.Touch InControl.TouchPool::FindOrCreateTouch(System.Int32)
extern "C"  Touch_t2333148497 * TouchPool_FindOrCreateTouch_m1679258534 (TouchPool_t2243093773 * __this, int32_t ___fingerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.Touch InControl.TouchPool::FindTouch(System.Int32)
extern "C"  Touch_t2333148497 * TouchPool_FindTouch_m765391589 (TouchPool_t2243093773 * __this, int32_t ___fingerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.Touch InControl.TouchPool::NewTouch()
extern "C"  Touch_t2333148497 * TouchPool_NewTouch_m3122354707 (TouchPool_t2243093773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchPool::FreeTouch(InControl.Touch)
extern "C"  void TouchPool_FreeTouch_m3084044114 (TouchPool_t2243093773 * __this, Touch_t2333148497 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchPool::FreeEndedTouches()
extern "C"  void TouchPool_FreeEndedTouches_m368360093 (TouchPool_t2243093773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
