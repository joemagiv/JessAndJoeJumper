#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputDevice/AnalogSnapshotEntry
struct  AnalogSnapshotEntry_t596749913 
{
public:
	// System.Single InControl.InputDevice/AnalogSnapshotEntry::value
	float ___value_0;
	// System.Single InControl.InputDevice/AnalogSnapshotEntry::maxValue
	float ___maxValue_1;
	// System.Single InControl.InputDevice/AnalogSnapshotEntry::minValue
	float ___minValue_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(AnalogSnapshotEntry_t596749913, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_maxValue_1() { return static_cast<int32_t>(offsetof(AnalogSnapshotEntry_t596749913, ___maxValue_1)); }
	inline float get_maxValue_1() const { return ___maxValue_1; }
	inline float* get_address_of_maxValue_1() { return &___maxValue_1; }
	inline void set_maxValue_1(float value)
	{
		___maxValue_1 = value;
	}

	inline static int32_t get_offset_of_minValue_2() { return static_cast<int32_t>(offsetof(AnalogSnapshotEntry_t596749913, ___minValue_2)); }
	inline float get_minValue_2() const { return ___minValue_2; }
	inline float* get_address_of_minValue_2() { return &___minValue_2; }
	inline void set_minValue_2(float value)
	{
		___minValue_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: InControl.InputDevice/AnalogSnapshotEntry
struct AnalogSnapshotEntry_t596749913_marshaled_pinvoke
{
	float ___value_0;
	float ___maxValue_1;
	float ___minValue_2;
};
// Native definition for marshalling of: InControl.InputDevice/AnalogSnapshotEntry
struct AnalogSnapshotEntry_t596749913_marshaled_com
{
	float ___value_0;
	float ___maxValue_1;
	float ___minValue_2;
};
