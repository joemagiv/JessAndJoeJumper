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

// InControl.ThreadSafeQueue`1<System.Object>
struct ThreadSafeQueue_1_t2679427309;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t2570496278;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void InControl.ThreadSafeQueue`1<System.Object>::.ctor()
extern "C"  void ThreadSafeQueue_1__ctor_m2376288628_gshared (ThreadSafeQueue_1_t2679427309 * __this, const MethodInfo* method);
#define ThreadSafeQueue_1__ctor_m2376288628(__this, method) ((  void (*) (ThreadSafeQueue_1_t2679427309 *, const MethodInfo*))ThreadSafeQueue_1__ctor_m2376288628_gshared)(__this, method)
// System.Void InControl.ThreadSafeQueue`1<System.Object>::.ctor(System.Int32)
extern "C"  void ThreadSafeQueue_1__ctor_m3085594821_gshared (ThreadSafeQueue_1_t2679427309 * __this, int32_t ___capacity0, const MethodInfo* method);
#define ThreadSafeQueue_1__ctor_m3085594821(__this, ___capacity0, method) ((  void (*) (ThreadSafeQueue_1_t2679427309 *, int32_t, const MethodInfo*))ThreadSafeQueue_1__ctor_m3085594821_gshared)(__this, ___capacity0, method)
// System.Void InControl.ThreadSafeQueue`1<System.Object>::Enqueue(T)
extern "C"  void ThreadSafeQueue_1_Enqueue_m3528889924_gshared (ThreadSafeQueue_1_t2679427309 * __this, Il2CppObject * ___item0, const MethodInfo* method);
#define ThreadSafeQueue_1_Enqueue_m3528889924(__this, ___item0, method) ((  void (*) (ThreadSafeQueue_1_t2679427309 *, Il2CppObject *, const MethodInfo*))ThreadSafeQueue_1_Enqueue_m3528889924_gshared)(__this, ___item0, method)
// System.Boolean InControl.ThreadSafeQueue`1<System.Object>::Dequeue(T&)
extern "C"  bool ThreadSafeQueue_1_Dequeue_m158276604_gshared (ThreadSafeQueue_1_t2679427309 * __this, Il2CppObject ** ___item0, const MethodInfo* method);
#define ThreadSafeQueue_1_Dequeue_m158276604(__this, ___item0, method) ((  bool (*) (ThreadSafeQueue_1_t2679427309 *, Il2CppObject **, const MethodInfo*))ThreadSafeQueue_1_Dequeue_m158276604_gshared)(__this, ___item0, method)
// T InControl.ThreadSafeQueue`1<System.Object>::Dequeue()
extern "C"  Il2CppObject * ThreadSafeQueue_1_Dequeue_m551107939_gshared (ThreadSafeQueue_1_t2679427309 * __this, const MethodInfo* method);
#define ThreadSafeQueue_1_Dequeue_m551107939(__this, method) ((  Il2CppObject * (*) (ThreadSafeQueue_1_t2679427309 *, const MethodInfo*))ThreadSafeQueue_1_Dequeue_m551107939_gshared)(__this, method)
// System.Int32 InControl.ThreadSafeQueue`1<System.Object>::Dequeue(System.Collections.Generic.IList`1<T>&)
extern "C"  int32_t ThreadSafeQueue_1_Dequeue_m722318987_gshared (ThreadSafeQueue_1_t2679427309 * __this, Il2CppObject** ___list0, const MethodInfo* method);
#define ThreadSafeQueue_1_Dequeue_m722318987(__this, ___list0, method) ((  int32_t (*) (ThreadSafeQueue_1_t2679427309 *, Il2CppObject**, const MethodInfo*))ThreadSafeQueue_1_Dequeue_m722318987_gshared)(__this, ___list0, method)
