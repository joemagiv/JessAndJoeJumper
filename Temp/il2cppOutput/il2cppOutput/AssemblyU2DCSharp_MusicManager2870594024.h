#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicManager
struct  MusicManager_t2870594024  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioSource MusicManager::audioSource
	AudioSource_t1740077639 * ___audioSource_2;

public:
	inline static int32_t get_offset_of_audioSource_2() { return static_cast<int32_t>(offsetof(MusicManager_t2870594024, ___audioSource_2)); }
	inline AudioSource_t1740077639 * get_audioSource_2() const { return ___audioSource_2; }
	inline AudioSource_t1740077639 ** get_address_of_audioSource_2() { return &___audioSource_2; }
	inline void set_audioSource_2(AudioSource_t1740077639 * value)
	{
		___audioSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
