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

// InControl.NativeInputOptions
struct  NativeInputOptions_t2078341609 
{
public:
	// System.UInt16 InControl.NativeInputOptions::updateRate
	uint16_t ___updateRate_0;
	// System.Boolean InControl.NativeInputOptions::enableXInput
	bool ___enableXInput_1;
	// System.Boolean InControl.NativeInputOptions::preventSleep
	bool ___preventSleep_2;

public:
	inline static int32_t get_offset_of_updateRate_0() { return static_cast<int32_t>(offsetof(NativeInputOptions_t2078341609, ___updateRate_0)); }
	inline uint16_t get_updateRate_0() const { return ___updateRate_0; }
	inline uint16_t* get_address_of_updateRate_0() { return &___updateRate_0; }
	inline void set_updateRate_0(uint16_t value)
	{
		___updateRate_0 = value;
	}

	inline static int32_t get_offset_of_enableXInput_1() { return static_cast<int32_t>(offsetof(NativeInputOptions_t2078341609, ___enableXInput_1)); }
	inline bool get_enableXInput_1() const { return ___enableXInput_1; }
	inline bool* get_address_of_enableXInput_1() { return &___enableXInput_1; }
	inline void set_enableXInput_1(bool value)
	{
		___enableXInput_1 = value;
	}

	inline static int32_t get_offset_of_preventSleep_2() { return static_cast<int32_t>(offsetof(NativeInputOptions_t2078341609, ___preventSleep_2)); }
	inline bool get_preventSleep_2() const { return ___preventSleep_2; }
	inline bool* get_address_of_preventSleep_2() { return &___preventSleep_2; }
	inline void set_preventSleep_2(bool value)
	{
		___preventSleep_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: InControl.NativeInputOptions
struct NativeInputOptions_t2078341609_marshaled_pinvoke
{
	uint16_t ___updateRate_0;
	int32_t ___enableXInput_1;
	int32_t ___preventSleep_2;
};
// Native definition for marshalling of: InControl.NativeInputOptions
struct NativeInputOptions_t2078341609_marshaled_com
{
	uint16_t ___updateRate_0;
	int32_t ___enableXInput_1;
	int32_t ___preventSleep_2;
};
