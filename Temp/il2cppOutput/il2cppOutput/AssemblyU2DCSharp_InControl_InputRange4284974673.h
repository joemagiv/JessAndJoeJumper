#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InControl.InputRange[]
struct InputRangeU5BU5D_t128526668;

#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharp_InControl_InputRange4284974673.h"
#include "AssemblyU2DCSharp_InControl_InputRangeType4175617323.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputRange
struct  InputRange_t4284974673 
{
public:
	// System.Single InControl.InputRange::Value0
	float ___Value0_11;
	// System.Single InControl.InputRange::Value1
	float ___Value1_12;
	// InControl.InputRangeType InControl.InputRange::Type
	int32_t ___Type_13;

public:
	inline static int32_t get_offset_of_Value0_11() { return static_cast<int32_t>(offsetof(InputRange_t4284974673, ___Value0_11)); }
	inline float get_Value0_11() const { return ___Value0_11; }
	inline float* get_address_of_Value0_11() { return &___Value0_11; }
	inline void set_Value0_11(float value)
	{
		___Value0_11 = value;
	}

	inline static int32_t get_offset_of_Value1_12() { return static_cast<int32_t>(offsetof(InputRange_t4284974673, ___Value1_12)); }
	inline float get_Value1_12() const { return ___Value1_12; }
	inline float* get_address_of_Value1_12() { return &___Value1_12; }
	inline void set_Value1_12(float value)
	{
		___Value1_12 = value;
	}

	inline static int32_t get_offset_of_Type_13() { return static_cast<int32_t>(offsetof(InputRange_t4284974673, ___Type_13)); }
	inline int32_t get_Type_13() const { return ___Type_13; }
	inline int32_t* get_address_of_Type_13() { return &___Type_13; }
	inline void set_Type_13(int32_t value)
	{
		___Type_13 = value;
	}
};

struct InputRange_t4284974673_StaticFields
{
public:
	// InControl.InputRange InControl.InputRange::None
	InputRange_t4284974673  ___None_0;
	// InControl.InputRange InControl.InputRange::MinusOneToOne
	InputRange_t4284974673  ___MinusOneToOne_1;
	// InControl.InputRange InControl.InputRange::OneToMinusOne
	InputRange_t4284974673  ___OneToMinusOne_2;
	// InControl.InputRange InControl.InputRange::ZeroToOne
	InputRange_t4284974673  ___ZeroToOne_3;
	// InControl.InputRange InControl.InputRange::ZeroToMinusOne
	InputRange_t4284974673  ___ZeroToMinusOne_4;
	// InControl.InputRange InControl.InputRange::OneToZero
	InputRange_t4284974673  ___OneToZero_5;
	// InControl.InputRange InControl.InputRange::MinusOneToZero
	InputRange_t4284974673  ___MinusOneToZero_6;
	// InControl.InputRange InControl.InputRange::ZeroToNegativeInfinity
	InputRange_t4284974673  ___ZeroToNegativeInfinity_7;
	// InControl.InputRange InControl.InputRange::ZeroToPositiveInfinity
	InputRange_t4284974673  ___ZeroToPositiveInfinity_8;
	// InControl.InputRange InControl.InputRange::Everything
	InputRange_t4284974673  ___Everything_9;
	// InControl.InputRange[] InControl.InputRange::TypeToRange
	InputRangeU5BU5D_t128526668* ___TypeToRange_10;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(InputRange_t4284974673_StaticFields, ___None_0)); }
	inline InputRange_t4284974673  get_None_0() const { return ___None_0; }
	inline InputRange_t4284974673 * get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(InputRange_t4284974673  value)
	{
		___None_0 = value;
	}

	inline static int32_t get_offset_of_MinusOneToOne_1() { return static_cast<int32_t>(offsetof(InputRange_t4284974673_StaticFields, ___MinusOneToOne_1)); }
	inline InputRange_t4284974673  get_MinusOneToOne_1() const { return ___MinusOneToOne_1; }
	inline InputRange_t4284974673 * get_address_of_MinusOneToOne_1() { return &___MinusOneToOne_1; }
	inline void set_MinusOneToOne_1(InputRange_t4284974673  value)
	{
		___MinusOneToOne_1 = value;
	}

	inline static int32_t get_offset_of_OneToMinusOne_2() { return static_cast<int32_t>(offsetof(InputRange_t4284974673_StaticFields, ___OneToMinusOne_2)); }
	inline InputRange_t4284974673  get_OneToMinusOne_2() const { return ___OneToMinusOne_2; }
	inline InputRange_t4284974673 * get_address_of_OneToMinusOne_2() { return &___OneToMinusOne_2; }
	inline void set_OneToMinusOne_2(InputRange_t4284974673  value)
	{
		___OneToMinusOne_2 = value;
	}

	inline static int32_t get_offset_of_ZeroToOne_3() { return static_cast<int32_t>(offsetof(InputRange_t4284974673_StaticFields, ___ZeroToOne_3)); }
	inline InputRange_t4284974673  get_ZeroToOne_3() const { return ___ZeroToOne_3; }
	inline InputRange_t4284974673 * get_address_of_ZeroToOne_3() { return &___ZeroToOne_3; }
	inline void set_ZeroToOne_3(InputRange_t4284974673  value)
	{
		___ZeroToOne_3 = value;
	}

	inline static int32_t get_offset_of_ZeroToMinusOne_4() { return static_cast<int32_t>(offsetof(InputRange_t4284974673_StaticFields, ___ZeroToMinusOne_4)); }
	inline InputRange_t4284974673  get_ZeroToMinusOne_4() const { return ___ZeroToMinusOne_4; }
	inline InputRange_t4284974673 * get_address_of_ZeroToMinusOne_4() { return &___ZeroToMinusOne_4; }
	inline void set_ZeroToMinusOne_4(InputRange_t4284974673  value)
	{
		___ZeroToMinusOne_4 = value;
	}

	inline static int32_t get_offset_of_OneToZero_5() { return static_cast<int32_t>(offsetof(InputRange_t4284974673_StaticFields, ___OneToZero_5)); }
	inline InputRange_t4284974673  get_OneToZero_5() const { return ___OneToZero_5; }
	inline InputRange_t4284974673 * get_address_of_OneToZero_5() { return &___OneToZero_5; }
	inline void set_OneToZero_5(InputRange_t4284974673  value)
	{
		___OneToZero_5 = value;
	}

	inline static int32_t get_offset_of_MinusOneToZero_6() { return static_cast<int32_t>(offsetof(InputRange_t4284974673_StaticFields, ___MinusOneToZero_6)); }
	inline InputRange_t4284974673  get_MinusOneToZero_6() const { return ___MinusOneToZero_6; }
	inline InputRange_t4284974673 * get_address_of_MinusOneToZero_6() { return &___MinusOneToZero_6; }
	inline void set_MinusOneToZero_6(InputRange_t4284974673  value)
	{
		___MinusOneToZero_6 = value;
	}

	inline static int32_t get_offset_of_ZeroToNegativeInfinity_7() { return static_cast<int32_t>(offsetof(InputRange_t4284974673_StaticFields, ___ZeroToNegativeInfinity_7)); }
	inline InputRange_t4284974673  get_ZeroToNegativeInfinity_7() const { return ___ZeroToNegativeInfinity_7; }
	inline InputRange_t4284974673 * get_address_of_ZeroToNegativeInfinity_7() { return &___ZeroToNegativeInfinity_7; }
	inline void set_ZeroToNegativeInfinity_7(InputRange_t4284974673  value)
	{
		___ZeroToNegativeInfinity_7 = value;
	}

	inline static int32_t get_offset_of_ZeroToPositiveInfinity_8() { return static_cast<int32_t>(offsetof(InputRange_t4284974673_StaticFields, ___ZeroToPositiveInfinity_8)); }
	inline InputRange_t4284974673  get_ZeroToPositiveInfinity_8() const { return ___ZeroToPositiveInfinity_8; }
	inline InputRange_t4284974673 * get_address_of_ZeroToPositiveInfinity_8() { return &___ZeroToPositiveInfinity_8; }
	inline void set_ZeroToPositiveInfinity_8(InputRange_t4284974673  value)
	{
		___ZeroToPositiveInfinity_8 = value;
	}

	inline static int32_t get_offset_of_Everything_9() { return static_cast<int32_t>(offsetof(InputRange_t4284974673_StaticFields, ___Everything_9)); }
	inline InputRange_t4284974673  get_Everything_9() const { return ___Everything_9; }
	inline InputRange_t4284974673 * get_address_of_Everything_9() { return &___Everything_9; }
	inline void set_Everything_9(InputRange_t4284974673  value)
	{
		___Everything_9 = value;
	}

	inline static int32_t get_offset_of_TypeToRange_10() { return static_cast<int32_t>(offsetof(InputRange_t4284974673_StaticFields, ___TypeToRange_10)); }
	inline InputRangeU5BU5D_t128526668* get_TypeToRange_10() const { return ___TypeToRange_10; }
	inline InputRangeU5BU5D_t128526668** get_address_of_TypeToRange_10() { return &___TypeToRange_10; }
	inline void set_TypeToRange_10(InputRangeU5BU5D_t128526668* value)
	{
		___TypeToRange_10 = value;
		Il2CppCodeGenWriteBarrier(&___TypeToRange_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: InControl.InputRange
struct InputRange_t4284974673_marshaled_pinvoke
{
	float ___Value0_11;
	float ___Value1_12;
	int32_t ___Type_13;
};
// Native definition for marshalling of: InControl.InputRange
struct InputRange_t4284974673_marshaled_com
{
	float ___Value0_11;
	float ___Value1_12;
	int32_t ___Type_13;
};
