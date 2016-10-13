#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InControl.InputControl
struct InputControl_t1543925617;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_InControl_OneAxisInputControl2168578956.h"
#include "AssemblyU2DCSharp_InControl_InputControlType2879927883.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputControl
struct  InputControl_t1543925617  : public OneAxisInputControl_t2168578956
{
public:
	// System.Boolean InControl.InputControl::Passive
	bool ___Passive_19;
	// System.UInt64 InControl.InputControl::zeroTick
	uint64_t ___zeroTick_20;
	// System.String InControl.InputControl::<Handle>k__BackingField
	String_t* ___U3CHandleU3Ek__BackingField_21;
	// InControl.InputControlType InControl.InputControl::<Target>k__BackingField
	int32_t ___U3CTargetU3Ek__BackingField_22;
	// System.Boolean InControl.InputControl::<IsButton>k__BackingField
	bool ___U3CIsButtonU3Ek__BackingField_23;
	// System.Boolean InControl.InputControl::<IsAnalog>k__BackingField
	bool ___U3CIsAnalogU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_Passive_19() { return static_cast<int32_t>(offsetof(InputControl_t1543925617, ___Passive_19)); }
	inline bool get_Passive_19() const { return ___Passive_19; }
	inline bool* get_address_of_Passive_19() { return &___Passive_19; }
	inline void set_Passive_19(bool value)
	{
		___Passive_19 = value;
	}

	inline static int32_t get_offset_of_zeroTick_20() { return static_cast<int32_t>(offsetof(InputControl_t1543925617, ___zeroTick_20)); }
	inline uint64_t get_zeroTick_20() const { return ___zeroTick_20; }
	inline uint64_t* get_address_of_zeroTick_20() { return &___zeroTick_20; }
	inline void set_zeroTick_20(uint64_t value)
	{
		___zeroTick_20 = value;
	}

	inline static int32_t get_offset_of_U3CHandleU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(InputControl_t1543925617, ___U3CHandleU3Ek__BackingField_21)); }
	inline String_t* get_U3CHandleU3Ek__BackingField_21() const { return ___U3CHandleU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3CHandleU3Ek__BackingField_21() { return &___U3CHandleU3Ek__BackingField_21; }
	inline void set_U3CHandleU3Ek__BackingField_21(String_t* value)
	{
		___U3CHandleU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CHandleU3Ek__BackingField_21, value);
	}

	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(InputControl_t1543925617, ___U3CTargetU3Ek__BackingField_22)); }
	inline int32_t get_U3CTargetU3Ek__BackingField_22() const { return ___U3CTargetU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CTargetU3Ek__BackingField_22() { return &___U3CTargetU3Ek__BackingField_22; }
	inline void set_U3CTargetU3Ek__BackingField_22(int32_t value)
	{
		___U3CTargetU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CIsButtonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(InputControl_t1543925617, ___U3CIsButtonU3Ek__BackingField_23)); }
	inline bool get_U3CIsButtonU3Ek__BackingField_23() const { return ___U3CIsButtonU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CIsButtonU3Ek__BackingField_23() { return &___U3CIsButtonU3Ek__BackingField_23; }
	inline void set_U3CIsButtonU3Ek__BackingField_23(bool value)
	{
		___U3CIsButtonU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CIsAnalogU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(InputControl_t1543925617, ___U3CIsAnalogU3Ek__BackingField_24)); }
	inline bool get_U3CIsAnalogU3Ek__BackingField_24() const { return ___U3CIsAnalogU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CIsAnalogU3Ek__BackingField_24() { return &___U3CIsAnalogU3Ek__BackingField_24; }
	inline void set_U3CIsAnalogU3Ek__BackingField_24(bool value)
	{
		___U3CIsAnalogU3Ek__BackingField_24 = value;
	}
};

struct InputControl_t1543925617_StaticFields
{
public:
	// InControl.InputControl InControl.InputControl::Null
	InputControl_t1543925617 * ___Null_18;

public:
	inline static int32_t get_offset_of_Null_18() { return static_cast<int32_t>(offsetof(InputControl_t1543925617_StaticFields, ___Null_18)); }
	inline InputControl_t1543925617 * get_Null_18() const { return ___Null_18; }
	inline InputControl_t1543925617 ** get_address_of_Null_18() { return &___Null_18; }
	inline void set_Null_18(InputControl_t1543925617 * value)
	{
		___Null_18 = value;
		Il2CppCodeGenWriteBarrier(&___Null_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
