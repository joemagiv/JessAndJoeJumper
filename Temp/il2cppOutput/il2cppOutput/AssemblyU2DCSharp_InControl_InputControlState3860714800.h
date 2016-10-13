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

// InControl.InputControlState
struct  InputControlState_t3860714800 
{
public:
	// System.Boolean InControl.InputControlState::State
	bool ___State_0;
	// System.Single InControl.InputControlState::Value
	float ___Value_1;
	// System.Single InControl.InputControlState::RawValue
	float ___RawValue_2;

public:
	inline static int32_t get_offset_of_State_0() { return static_cast<int32_t>(offsetof(InputControlState_t3860714800, ___State_0)); }
	inline bool get_State_0() const { return ___State_0; }
	inline bool* get_address_of_State_0() { return &___State_0; }
	inline void set_State_0(bool value)
	{
		___State_0 = value;
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(InputControlState_t3860714800, ___Value_1)); }
	inline float get_Value_1() const { return ___Value_1; }
	inline float* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(float value)
	{
		___Value_1 = value;
	}

	inline static int32_t get_offset_of_RawValue_2() { return static_cast<int32_t>(offsetof(InputControlState_t3860714800, ___RawValue_2)); }
	inline float get_RawValue_2() const { return ___RawValue_2; }
	inline float* get_address_of_RawValue_2() { return &___RawValue_2; }
	inline void set_RawValue_2(float value)
	{
		___RawValue_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: InControl.InputControlState
struct InputControlState_t3860714800_marshaled_pinvoke
{
	int32_t ___State_0;
	float ___Value_1;
	float ___RawValue_2;
};
// Native definition for marshalling of: InControl.InputControlState
struct InputControlState_t3860714800_marshaled_com
{
	int32_t ___State_0;
	float ___Value_1;
	float ___RawValue_2;
};
