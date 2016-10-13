#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SmoothCamera2D
struct  SmoothCamera2D_t2514922533  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject SmoothCamera2D::player
	GameObject_t3674682005 * ___player_2;
	// UnityEngine.Vector3 SmoothCamera2D::offset
	Vector3_t4282066566  ___offset_3;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(SmoothCamera2D_t2514922533, ___player_2)); }
	inline GameObject_t3674682005 * get_player_2() const { return ___player_2; }
	inline GameObject_t3674682005 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t3674682005 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(SmoothCamera2D_t2514922533, ___offset_3)); }
	inline Vector3_t4282066566  get_offset_3() const { return ___offset_3; }
	inline Vector3_t4282066566 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t4282066566  value)
	{
		___offset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
