#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<InControl.InputDevice>
struct List_1_t1144923170;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputDeviceManager
struct  InputDeviceManager_t3034357131  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<InControl.InputDevice> InControl.InputDeviceManager::devices
	List_1_t1144923170 * ___devices_0;

public:
	inline static int32_t get_offset_of_devices_0() { return static_cast<int32_t>(offsetof(InputDeviceManager_t3034357131, ___devices_0)); }
	inline List_1_t1144923170 * get_devices_0() const { return ___devices_0; }
	inline List_1_t1144923170 ** get_address_of_devices_0() { return &___devices_0; }
	inline void set_devices_0(List_1_t1144923170 * value)
	{
		___devices_0 = value;
		Il2CppCodeGenWriteBarrier(&___devices_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
