#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InControl.ICadeState[]
struct ICadeStateU5BU5D_t2962589246;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.RingBuffer`1<InControl.ICadeState>
struct  RingBuffer_1_t3013946003  : public Il2CppObject
{
public:
	// System.Int32 InControl.RingBuffer`1::size
	int32_t ___size_0;
	// T[] InControl.RingBuffer`1::data
	ICadeStateU5BU5D_t2962589246* ___data_1;
	// System.Int32 InControl.RingBuffer`1::head
	int32_t ___head_2;
	// System.Int32 InControl.RingBuffer`1::tail
	int32_t ___tail_3;
	// System.Object InControl.RingBuffer`1::sync
	Il2CppObject * ___sync_4;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(RingBuffer_1_t3013946003, ___size_0)); }
	inline int32_t get_size_0() const { return ___size_0; }
	inline int32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(int32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(RingBuffer_1_t3013946003, ___data_1)); }
	inline ICadeStateU5BU5D_t2962589246* get_data_1() const { return ___data_1; }
	inline ICadeStateU5BU5D_t2962589246** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ICadeStateU5BU5D_t2962589246* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}

	inline static int32_t get_offset_of_head_2() { return static_cast<int32_t>(offsetof(RingBuffer_1_t3013946003, ___head_2)); }
	inline int32_t get_head_2() const { return ___head_2; }
	inline int32_t* get_address_of_head_2() { return &___head_2; }
	inline void set_head_2(int32_t value)
	{
		___head_2 = value;
	}

	inline static int32_t get_offset_of_tail_3() { return static_cast<int32_t>(offsetof(RingBuffer_1_t3013946003, ___tail_3)); }
	inline int32_t get_tail_3() const { return ___tail_3; }
	inline int32_t* get_address_of_tail_3() { return &___tail_3; }
	inline void set_tail_3(int32_t value)
	{
		___tail_3 = value;
	}

	inline static int32_t get_offset_of_sync_4() { return static_cast<int32_t>(offsetof(RingBuffer_1_t3013946003, ___sync_4)); }
	inline Il2CppObject * get_sync_4() const { return ___sync_4; }
	inline Il2CppObject ** get_address_of_sync_4() { return &___sync_4; }
	inline void set_sync_4(Il2CppObject * value)
	{
		___sync_4 = value;
		Il2CppCodeGenWriteBarrier(&___sync_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
