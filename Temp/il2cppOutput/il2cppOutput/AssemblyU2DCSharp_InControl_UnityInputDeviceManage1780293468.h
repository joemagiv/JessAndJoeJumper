﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityInputDeviceManager/<DetectJoystickDevice>c__AnonStorey3
struct  U3CDetectJoystickDeviceU3Ec__AnonStorey3_t1780293468  : public Il2CppObject
{
public:
	// System.String InControl.UnityInputDeviceManager/<DetectJoystickDevice>c__AnonStorey3::unityJoystickName
	String_t* ___unityJoystickName_0;

public:
	inline static int32_t get_offset_of_unityJoystickName_0() { return static_cast<int32_t>(offsetof(U3CDetectJoystickDeviceU3Ec__AnonStorey3_t1780293468, ___unityJoystickName_0)); }
	inline String_t* get_unityJoystickName_0() const { return ___unityJoystickName_0; }
	inline String_t** get_address_of_unityJoystickName_0() { return &___unityJoystickName_0; }
	inline void set_unityJoystickName_0(String_t* value)
	{
		___unityJoystickName_0 = value;
		Il2CppCodeGenWriteBarrier(&___unityJoystickName_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif