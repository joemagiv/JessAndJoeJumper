#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[,]
struct StringU5BU2CU5D_t4054002953;
// InControl.UnityInputDeviceProfileBase
struct UnityInputDeviceProfileBase_t1946940833;

#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityInputDevice
struct  UnityInputDevice_t2197339721  : public InputDevice_t4071704914
{
public:
	// InControl.UnityInputDeviceProfileBase InControl.UnityInputDevice::profile
	UnityInputDeviceProfileBase_t1946940833 * ___profile_49;
	// System.Int32 InControl.UnityInputDevice::<JoystickId>k__BackingField
	int32_t ___U3CJoystickIdU3Ek__BackingField_50;

public:
	inline static int32_t get_offset_of_profile_49() { return static_cast<int32_t>(offsetof(UnityInputDevice_t2197339721, ___profile_49)); }
	inline UnityInputDeviceProfileBase_t1946940833 * get_profile_49() const { return ___profile_49; }
	inline UnityInputDeviceProfileBase_t1946940833 ** get_address_of_profile_49() { return &___profile_49; }
	inline void set_profile_49(UnityInputDeviceProfileBase_t1946940833 * value)
	{
		___profile_49 = value;
		Il2CppCodeGenWriteBarrier(&___profile_49, value);
	}

	inline static int32_t get_offset_of_U3CJoystickIdU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(UnityInputDevice_t2197339721, ___U3CJoystickIdU3Ek__BackingField_50)); }
	inline int32_t get_U3CJoystickIdU3Ek__BackingField_50() const { return ___U3CJoystickIdU3Ek__BackingField_50; }
	inline int32_t* get_address_of_U3CJoystickIdU3Ek__BackingField_50() { return &___U3CJoystickIdU3Ek__BackingField_50; }
	inline void set_U3CJoystickIdU3Ek__BackingField_50(int32_t value)
	{
		___U3CJoystickIdU3Ek__BackingField_50 = value;
	}
};

struct UnityInputDevice_t2197339721_StaticFields
{
public:
	// System.String[,] InControl.UnityInputDevice::analogQueries
	StringU5BU2CU5D_t4054002953* ___analogQueries_47;
	// System.String[,] InControl.UnityInputDevice::buttonQueries
	StringU5BU2CU5D_t4054002953* ___buttonQueries_48;

public:
	inline static int32_t get_offset_of_analogQueries_47() { return static_cast<int32_t>(offsetof(UnityInputDevice_t2197339721_StaticFields, ___analogQueries_47)); }
	inline StringU5BU2CU5D_t4054002953* get_analogQueries_47() const { return ___analogQueries_47; }
	inline StringU5BU2CU5D_t4054002953** get_address_of_analogQueries_47() { return &___analogQueries_47; }
	inline void set_analogQueries_47(StringU5BU2CU5D_t4054002953* value)
	{
		___analogQueries_47 = value;
		Il2CppCodeGenWriteBarrier(&___analogQueries_47, value);
	}

	inline static int32_t get_offset_of_buttonQueries_48() { return static_cast<int32_t>(offsetof(UnityInputDevice_t2197339721_StaticFields, ___buttonQueries_48)); }
	inline StringU5BU2CU5D_t4054002953* get_buttonQueries_48() const { return ___buttonQueries_48; }
	inline StringU5BU2CU5D_t4054002953** get_address_of_buttonQueries_48() { return &___buttonQueries_48; }
	inline void set_buttonQueries_48(StringU5BU2CU5D_t4054002953* value)
	{
		___buttonQueries_48 = value;
		Il2CppCodeGenWriteBarrier(&___buttonQueries_48, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
