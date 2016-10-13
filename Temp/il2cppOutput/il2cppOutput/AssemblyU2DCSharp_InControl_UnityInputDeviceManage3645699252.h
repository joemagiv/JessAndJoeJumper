#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<InControl.UnityInputDeviceProfileBase>
struct List_1_t3315126385;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "AssemblyU2DCSharp_InControl_InputDeviceManager3034357131.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityInputDeviceManager
struct  UnityInputDeviceManager_t3645699252  : public InputDeviceManager_t3034357131
{
public:
	// System.Single InControl.UnityInputDeviceManager::deviceRefreshTimer
	float ___deviceRefreshTimer_2;
	// System.Collections.Generic.List`1<InControl.UnityInputDeviceProfileBase> InControl.UnityInputDeviceManager::systemDeviceProfiles
	List_1_t3315126385 * ___systemDeviceProfiles_3;
	// System.Collections.Generic.List`1<InControl.UnityInputDeviceProfileBase> InControl.UnityInputDeviceManager::customDeviceProfiles
	List_1_t3315126385 * ___customDeviceProfiles_4;
	// System.String[] InControl.UnityInputDeviceManager::joystickNames
	StringU5BU5D_t4054002952* ___joystickNames_5;
	// System.Int32 InControl.UnityInputDeviceManager::lastJoystickCount
	int32_t ___lastJoystickCount_6;
	// System.Int32 InControl.UnityInputDeviceManager::lastJoystickHash
	int32_t ___lastJoystickHash_7;
	// System.Int32 InControl.UnityInputDeviceManager::joystickCount
	int32_t ___joystickCount_8;
	// System.Int32 InControl.UnityInputDeviceManager::joystickHash
	int32_t ___joystickHash_9;

public:
	inline static int32_t get_offset_of_deviceRefreshTimer_2() { return static_cast<int32_t>(offsetof(UnityInputDeviceManager_t3645699252, ___deviceRefreshTimer_2)); }
	inline float get_deviceRefreshTimer_2() const { return ___deviceRefreshTimer_2; }
	inline float* get_address_of_deviceRefreshTimer_2() { return &___deviceRefreshTimer_2; }
	inline void set_deviceRefreshTimer_2(float value)
	{
		___deviceRefreshTimer_2 = value;
	}

	inline static int32_t get_offset_of_systemDeviceProfiles_3() { return static_cast<int32_t>(offsetof(UnityInputDeviceManager_t3645699252, ___systemDeviceProfiles_3)); }
	inline List_1_t3315126385 * get_systemDeviceProfiles_3() const { return ___systemDeviceProfiles_3; }
	inline List_1_t3315126385 ** get_address_of_systemDeviceProfiles_3() { return &___systemDeviceProfiles_3; }
	inline void set_systemDeviceProfiles_3(List_1_t3315126385 * value)
	{
		___systemDeviceProfiles_3 = value;
		Il2CppCodeGenWriteBarrier(&___systemDeviceProfiles_3, value);
	}

	inline static int32_t get_offset_of_customDeviceProfiles_4() { return static_cast<int32_t>(offsetof(UnityInputDeviceManager_t3645699252, ___customDeviceProfiles_4)); }
	inline List_1_t3315126385 * get_customDeviceProfiles_4() const { return ___customDeviceProfiles_4; }
	inline List_1_t3315126385 ** get_address_of_customDeviceProfiles_4() { return &___customDeviceProfiles_4; }
	inline void set_customDeviceProfiles_4(List_1_t3315126385 * value)
	{
		___customDeviceProfiles_4 = value;
		Il2CppCodeGenWriteBarrier(&___customDeviceProfiles_4, value);
	}

	inline static int32_t get_offset_of_joystickNames_5() { return static_cast<int32_t>(offsetof(UnityInputDeviceManager_t3645699252, ___joystickNames_5)); }
	inline StringU5BU5D_t4054002952* get_joystickNames_5() const { return ___joystickNames_5; }
	inline StringU5BU5D_t4054002952** get_address_of_joystickNames_5() { return &___joystickNames_5; }
	inline void set_joystickNames_5(StringU5BU5D_t4054002952* value)
	{
		___joystickNames_5 = value;
		Il2CppCodeGenWriteBarrier(&___joystickNames_5, value);
	}

	inline static int32_t get_offset_of_lastJoystickCount_6() { return static_cast<int32_t>(offsetof(UnityInputDeviceManager_t3645699252, ___lastJoystickCount_6)); }
	inline int32_t get_lastJoystickCount_6() const { return ___lastJoystickCount_6; }
	inline int32_t* get_address_of_lastJoystickCount_6() { return &___lastJoystickCount_6; }
	inline void set_lastJoystickCount_6(int32_t value)
	{
		___lastJoystickCount_6 = value;
	}

	inline static int32_t get_offset_of_lastJoystickHash_7() { return static_cast<int32_t>(offsetof(UnityInputDeviceManager_t3645699252, ___lastJoystickHash_7)); }
	inline int32_t get_lastJoystickHash_7() const { return ___lastJoystickHash_7; }
	inline int32_t* get_address_of_lastJoystickHash_7() { return &___lastJoystickHash_7; }
	inline void set_lastJoystickHash_7(int32_t value)
	{
		___lastJoystickHash_7 = value;
	}

	inline static int32_t get_offset_of_joystickCount_8() { return static_cast<int32_t>(offsetof(UnityInputDeviceManager_t3645699252, ___joystickCount_8)); }
	inline int32_t get_joystickCount_8() const { return ___joystickCount_8; }
	inline int32_t* get_address_of_joystickCount_8() { return &___joystickCount_8; }
	inline void set_joystickCount_8(int32_t value)
	{
		___joystickCount_8 = value;
	}

	inline static int32_t get_offset_of_joystickHash_9() { return static_cast<int32_t>(offsetof(UnityInputDeviceManager_t3645699252, ___joystickHash_9)); }
	inline int32_t get_joystickHash_9() const { return ___joystickHash_9; }
	inline int32_t* get_address_of_joystickHash_9() { return &___joystickHash_9; }
	inline void set_joystickHash_9(int32_t value)
	{
		___joystickHash_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
