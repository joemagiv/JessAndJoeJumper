#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlatformSpawner
struct PlatformSpawner_t2783583573;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shredder
struct  Shredder_t4090516629  : public MonoBehaviour_t667441552
{
public:
	// PlatformSpawner Shredder::platformSpawner
	PlatformSpawner_t2783583573 * ___platformSpawner_2;

public:
	inline static int32_t get_offset_of_platformSpawner_2() { return static_cast<int32_t>(offsetof(Shredder_t4090516629, ___platformSpawner_2)); }
	inline PlatformSpawner_t2783583573 * get_platformSpawner_2() const { return ___platformSpawner_2; }
	inline PlatformSpawner_t2783583573 ** get_address_of_platformSpawner_2() { return &___platformSpawner_2; }
	inline void set_platformSpawner_2(PlatformSpawner_t2783583573 * value)
	{
		___platformSpawner_2 = value;
		Il2CppCodeGenWriteBarrier(&___platformSpawner_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
