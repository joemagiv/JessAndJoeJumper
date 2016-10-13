#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2112091504;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.ThreadSafeQueue`1<System.Object>
struct  ThreadSafeQueue_1_t2679427309  : public Il2CppObject
{
public:
	// System.Object InControl.ThreadSafeQueue`1::sync
	Il2CppObject * ___sync_0;
	// System.Collections.Generic.Queue`1<T> InControl.ThreadSafeQueue`1::data
	Queue_1_t2112091504 * ___data_1;

public:
	inline static int32_t get_offset_of_sync_0() { return static_cast<int32_t>(offsetof(ThreadSafeQueue_1_t2679427309, ___sync_0)); }
	inline Il2CppObject * get_sync_0() const { return ___sync_0; }
	inline Il2CppObject ** get_address_of_sync_0() { return &___sync_0; }
	inline void set_sync_0(Il2CppObject * value)
	{
		___sync_0 = value;
		Il2CppCodeGenWriteBarrier(&___sync_0, value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(ThreadSafeQueue_1_t2679427309, ___data_1)); }
	inline Queue_1_t2112091504 * get_data_1() const { return ___data_1; }
	inline Queue_1_t2112091504 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Queue_1_t2112091504 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
