#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InControl.NativeInputDeviceMatcher[]
struct NativeInputDeviceMatcherU5BU5D_t4080315646;

#include "AssemblyU2DCSharp_InControl_InputDeviceProfile1889671047.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeInputDeviceProfile
struct  NativeInputDeviceProfile_t724663166  : public InputDeviceProfile_t1889671047
{
public:
	// InControl.NativeInputDeviceMatcher[] InControl.NativeInputDeviceProfile::Matchers
	NativeInputDeviceMatcherU5BU5D_t4080315646* ___Matchers_12;
	// InControl.NativeInputDeviceMatcher[] InControl.NativeInputDeviceProfile::LastResortMatchers
	NativeInputDeviceMatcherU5BU5D_t4080315646* ___LastResortMatchers_13;

public:
	inline static int32_t get_offset_of_Matchers_12() { return static_cast<int32_t>(offsetof(NativeInputDeviceProfile_t724663166, ___Matchers_12)); }
	inline NativeInputDeviceMatcherU5BU5D_t4080315646* get_Matchers_12() const { return ___Matchers_12; }
	inline NativeInputDeviceMatcherU5BU5D_t4080315646** get_address_of_Matchers_12() { return &___Matchers_12; }
	inline void set_Matchers_12(NativeInputDeviceMatcherU5BU5D_t4080315646* value)
	{
		___Matchers_12 = value;
		Il2CppCodeGenWriteBarrier(&___Matchers_12, value);
	}

	inline static int32_t get_offset_of_LastResortMatchers_13() { return static_cast<int32_t>(offsetof(NativeInputDeviceProfile_t724663166, ___LastResortMatchers_13)); }
	inline NativeInputDeviceMatcherU5BU5D_t4080315646* get_LastResortMatchers_13() const { return ___LastResortMatchers_13; }
	inline NativeInputDeviceMatcherU5BU5D_t4080315646** get_address_of_LastResortMatchers_13() { return &___LastResortMatchers_13; }
	inline void set_LastResortMatchers_13(NativeInputDeviceMatcherU5BU5D_t4080315646* value)
	{
		___LastResortMatchers_13 = value;
		Il2CppCodeGenWriteBarrier(&___LastResortMatchers_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
