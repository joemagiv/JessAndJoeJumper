#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharp_InControl_UnknownDeviceControl2259642683.h"
#include "AssemblyU2DCSharp_InControl_InputControlType2879927883.h"
#include "AssemblyU2DCSharp_InControl_InputRangeType4175617323.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnknownDeviceControl
struct  UnknownDeviceControl_t2259642683 
{
public:
	// InControl.InputControlType InControl.UnknownDeviceControl::Control
	int32_t ___Control_1;
	// InControl.InputRangeType InControl.UnknownDeviceControl::SourceRange
	int32_t ___SourceRange_2;
	// System.Boolean InControl.UnknownDeviceControl::IsButton
	bool ___IsButton_3;
	// System.Boolean InControl.UnknownDeviceControl::IsAnalog
	bool ___IsAnalog_4;

public:
	inline static int32_t get_offset_of_Control_1() { return static_cast<int32_t>(offsetof(UnknownDeviceControl_t2259642683, ___Control_1)); }
	inline int32_t get_Control_1() const { return ___Control_1; }
	inline int32_t* get_address_of_Control_1() { return &___Control_1; }
	inline void set_Control_1(int32_t value)
	{
		___Control_1 = value;
	}

	inline static int32_t get_offset_of_SourceRange_2() { return static_cast<int32_t>(offsetof(UnknownDeviceControl_t2259642683, ___SourceRange_2)); }
	inline int32_t get_SourceRange_2() const { return ___SourceRange_2; }
	inline int32_t* get_address_of_SourceRange_2() { return &___SourceRange_2; }
	inline void set_SourceRange_2(int32_t value)
	{
		___SourceRange_2 = value;
	}

	inline static int32_t get_offset_of_IsButton_3() { return static_cast<int32_t>(offsetof(UnknownDeviceControl_t2259642683, ___IsButton_3)); }
	inline bool get_IsButton_3() const { return ___IsButton_3; }
	inline bool* get_address_of_IsButton_3() { return &___IsButton_3; }
	inline void set_IsButton_3(bool value)
	{
		___IsButton_3 = value;
	}

	inline static int32_t get_offset_of_IsAnalog_4() { return static_cast<int32_t>(offsetof(UnknownDeviceControl_t2259642683, ___IsAnalog_4)); }
	inline bool get_IsAnalog_4() const { return ___IsAnalog_4; }
	inline bool* get_address_of_IsAnalog_4() { return &___IsAnalog_4; }
	inline void set_IsAnalog_4(bool value)
	{
		___IsAnalog_4 = value;
	}
};

struct UnknownDeviceControl_t2259642683_StaticFields
{
public:
	// InControl.UnknownDeviceControl InControl.UnknownDeviceControl::None
	UnknownDeviceControl_t2259642683  ___None_0;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(UnknownDeviceControl_t2259642683_StaticFields, ___None_0)); }
	inline UnknownDeviceControl_t2259642683  get_None_0() const { return ___None_0; }
	inline UnknownDeviceControl_t2259642683 * get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(UnknownDeviceControl_t2259642683  value)
	{
		___None_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: InControl.UnknownDeviceControl
struct UnknownDeviceControl_t2259642683_marshaled_pinvoke
{
	int32_t ___Control_1;
	int32_t ___SourceRange_2;
	int32_t ___IsButton_3;
	int32_t ___IsAnalog_4;
};
// Native definition for marshalling of: InControl.UnknownDeviceControl
struct UnknownDeviceControl_t2259642683_marshaled_com
{
	int32_t ___Control_1;
	int32_t ___SourceRange_2;
	int32_t ___IsButton_3;
	int32_t ___IsAnalog_4;
};
