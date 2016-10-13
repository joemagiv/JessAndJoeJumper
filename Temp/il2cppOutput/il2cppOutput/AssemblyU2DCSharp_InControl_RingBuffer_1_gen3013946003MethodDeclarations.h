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

// InControl.RingBuffer`1<InControl.ICadeState>
struct RingBuffer_1_t3013946003;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_ICadeState1693133511.h"

// System.Void InControl.RingBuffer`1<InControl.ICadeState>::.ctor(System.Int32)
extern "C"  void RingBuffer_1__ctor_m525185202_gshared (RingBuffer_1_t3013946003 * __this, int32_t ___size0, const MethodInfo* method);
#define RingBuffer_1__ctor_m525185202(__this, ___size0, method) ((  void (*) (RingBuffer_1_t3013946003 *, int32_t, const MethodInfo*))RingBuffer_1__ctor_m525185202_gshared)(__this, ___size0, method)
// System.Void InControl.RingBuffer`1<InControl.ICadeState>::Enqueue(T)
extern "C"  void RingBuffer_1_Enqueue_m3460843447_gshared (RingBuffer_1_t3013946003 * __this, int32_t ___value0, const MethodInfo* method);
#define RingBuffer_1_Enqueue_m3460843447(__this, ___value0, method) ((  void (*) (RingBuffer_1_t3013946003 *, int32_t, const MethodInfo*))RingBuffer_1_Enqueue_m3460843447_gshared)(__this, ___value0, method)
// T InControl.RingBuffer`1<InControl.ICadeState>::Dequeue()
extern "C"  int32_t RingBuffer_1_Dequeue_m3594001744_gshared (RingBuffer_1_t3013946003 * __this, const MethodInfo* method);
#define RingBuffer_1_Dequeue_m3594001744(__this, method) ((  int32_t (*) (RingBuffer_1_t3013946003 *, const MethodInfo*))RingBuffer_1_Dequeue_m3594001744_gshared)(__this, method)
