#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InControl.ICadeDeviceManager
struct ICadeDeviceManager_t3174528173;

#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"
#include "AssemblyU2DCSharp_InControl_ICadeState1693133511.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.ICadeDevice
struct  ICadeDevice_t988238960  : public InputDevice_t4071704914
{
public:
	// InControl.ICadeDeviceManager InControl.ICadeDevice::owner
	ICadeDeviceManager_t3174528173 * ___owner_44;
	// InControl.ICadeState InControl.ICadeDevice::state
	int32_t ___state_45;

public:
	inline static int32_t get_offset_of_owner_44() { return static_cast<int32_t>(offsetof(ICadeDevice_t988238960, ___owner_44)); }
	inline ICadeDeviceManager_t3174528173 * get_owner_44() const { return ___owner_44; }
	inline ICadeDeviceManager_t3174528173 ** get_address_of_owner_44() { return &___owner_44; }
	inline void set_owner_44(ICadeDeviceManager_t3174528173 * value)
	{
		___owner_44 = value;
		Il2CppCodeGenWriteBarrier(&___owner_44, value);
	}

	inline static int32_t get_offset_of_state_45() { return static_cast<int32_t>(offsetof(ICadeDevice_t988238960, ___state_45)); }
	inline int32_t get_state_45() const { return ___state_45; }
	inline int32_t* get_address_of_state_45() { return &___state_45; }
	inline void set_state_45(int32_t value)
	{
		___state_45 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
