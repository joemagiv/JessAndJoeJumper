#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlatformSpawner
struct  PlatformSpawner_t2783583573  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject[] PlatformSpawner::platformGroups
	GameObjectU5BU5D_t2662109048* ___platformGroups_2;

public:
	inline static int32_t get_offset_of_platformGroups_2() { return static_cast<int32_t>(offsetof(PlatformSpawner_t2783583573, ___platformGroups_2)); }
	inline GameObjectU5BU5D_t2662109048* get_platformGroups_2() const { return ___platformGroups_2; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_platformGroups_2() { return &___platformGroups_2; }
	inline void set_platformGroups_2(GameObjectU5BU5D_t2662109048* value)
	{
		___platformGroups_2 = value;
		Il2CppCodeGenWriteBarrier(&___platformGroups_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
