﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Action`2<System.UInt64,System.Single>
struct Action_2_t1184472795;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Action`2<System.UInt64,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m1866878152_gshared (Action_2_t1184472795 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_2__ctor_m1866878152(__this, ___object0, ___method1, method) ((  void (*) (Action_2_t1184472795 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m1866878152_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`2<System.UInt64,System.Single>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m35350435_gshared (Action_2_t1184472795 * __this, uint64_t ___arg10, float ___arg21, const MethodInfo* method);
#define Action_2_Invoke_m35350435(__this, ___arg10, ___arg21, method) ((  void (*) (Action_2_t1184472795 *, uint64_t, float, const MethodInfo*))Action_2_Invoke_m35350435_gshared)(__this, ___arg10, ___arg21, method)
// System.IAsyncResult System.Action`2<System.UInt64,System.Single>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m297676658_gshared (Action_2_t1184472795 * __this, uint64_t ___arg10, float ___arg21, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Action_2_BeginInvoke_m297676658(__this, ___arg10, ___arg21, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Action_2_t1184472795 *, uint64_t, float, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m297676658_gshared)(__this, ___arg10, ___arg21, ___callback2, ___object3, method)
// System.Void System.Action`2<System.UInt64,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m2779305960_gshared (Action_2_t1184472795 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_2_EndInvoke_m2779305960(__this, ___result0, method) ((  void (*) (Action_2_t1184472795 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m2779305960_gshared)(__this, ___result0, method)
