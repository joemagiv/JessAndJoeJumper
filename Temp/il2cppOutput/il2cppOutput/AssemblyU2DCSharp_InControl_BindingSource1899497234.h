#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InControl.PlayerAction
struct PlayerAction_t3117799861;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.BindingSource
struct  BindingSource_t1899497234  : public Il2CppObject
{
public:
	// InControl.PlayerAction InControl.BindingSource::<BoundTo>k__BackingField
	PlayerAction_t3117799861 * ___U3CBoundToU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CBoundToU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BindingSource_t1899497234, ___U3CBoundToU3Ek__BackingField_0)); }
	inline PlayerAction_t3117799861 * get_U3CBoundToU3Ek__BackingField_0() const { return ___U3CBoundToU3Ek__BackingField_0; }
	inline PlayerAction_t3117799861 ** get_address_of_U3CBoundToU3Ek__BackingField_0() { return &___U3CBoundToU3Ek__BackingField_0; }
	inline void set_U3CBoundToU3Ek__BackingField_0(PlayerAction_t3117799861 * value)
	{
		___U3CBoundToU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBoundToU3Ek__BackingField_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
