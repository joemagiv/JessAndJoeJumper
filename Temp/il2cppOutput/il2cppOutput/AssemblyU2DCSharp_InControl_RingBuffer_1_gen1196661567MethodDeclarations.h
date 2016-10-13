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

// InControl.RingBuffer`1<System.Object>
struct RingBuffer_1_t1196661567;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void InControl.RingBuffer`1<System.Object>::.ctor(System.Int32)
extern "C"  void RingBuffer_1__ctor_m2723775799_gshared (RingBuffer_1_t1196661567 * __this, int32_t ___size0, const MethodInfo* method);
#define RingBuffer_1__ctor_m2723775799(__this, ___size0, method) ((  void (*) (RingBuffer_1_t1196661567 *, int32_t, const MethodInfo*))RingBuffer_1__ctor_m2723775799_gshared)(__this, ___size0, method)
// System.Void InControl.RingBuffer`1<System.Object>::Enqueue(T)
extern "C"  void RingBuffer_1_Enqueue_m3069401490_gshared (RingBuffer_1_t1196661567 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define RingBuffer_1_Enqueue_m3069401490(__this, ___value0, method) ((  void (*) (RingBuffer_1_t1196661567 *, Il2CppObject *, const MethodInfo*))RingBuffer_1_Enqueue_m3069401490_gshared)(__this, ___value0, method)
// T InControl.RingBuffer`1<System.Object>::Dequeue()
extern "C"  Il2CppObject * RingBuffer_1_Dequeue_m2334843891_gshared (RingBuffer_1_t1196661567 * __this, const MethodInfo* method);
#define RingBuffer_1_Dequeue_m2334843891(__this, method) ((  Il2CppObject * (*) (RingBuffer_1_t1196661567 *, const MethodInfo*))RingBuffer_1_Dequeue_m2334843891_gshared)(__this, method)
