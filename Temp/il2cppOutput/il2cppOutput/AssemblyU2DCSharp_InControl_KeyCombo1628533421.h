#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.UInt64,System.String>
struct Dictionary_2_t3242543780;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.KeyCombo
struct  KeyCombo_t1628533421 
{
public:
	// System.Int32 InControl.KeyCombo::size
	int32_t ___size_0;
	// System.UInt64 InControl.KeyCombo::data
	uint64_t ___data_1;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(KeyCombo_t1628533421, ___size_0)); }
	inline int32_t get_size_0() const { return ___size_0; }
	inline int32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(int32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(KeyCombo_t1628533421, ___data_1)); }
	inline uint64_t get_data_1() const { return ___data_1; }
	inline uint64_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint64_t value)
	{
		___data_1 = value;
	}
};

struct KeyCombo_t1628533421_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.String> InControl.KeyCombo::cachedStrings
	Dictionary_2_t3242543780 * ___cachedStrings_2;

public:
	inline static int32_t get_offset_of_cachedStrings_2() { return static_cast<int32_t>(offsetof(KeyCombo_t1628533421_StaticFields, ___cachedStrings_2)); }
	inline Dictionary_2_t3242543780 * get_cachedStrings_2() const { return ___cachedStrings_2; }
	inline Dictionary_2_t3242543780 ** get_address_of_cachedStrings_2() { return &___cachedStrings_2; }
	inline void set_cachedStrings_2(Dictionary_2_t3242543780 * value)
	{
		___cachedStrings_2 = value;
		Il2CppCodeGenWriteBarrier(&___cachedStrings_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: InControl.KeyCombo
struct KeyCombo_t1628533421_marshaled_pinvoke
{
	int32_t ___size_0;
	uint64_t ___data_1;
};
// Native definition for marshalling of: InControl.KeyCombo
struct KeyCombo_t1628533421_marshaled_com
{
	int32_t ___size_0;
	uint64_t ___data_1;
};
