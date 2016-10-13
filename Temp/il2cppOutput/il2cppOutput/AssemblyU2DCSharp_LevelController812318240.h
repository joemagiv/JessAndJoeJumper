#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MusicManager
struct MusicManager_t2870594024;
// GameController
struct GameController_t2782302542;
// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelController
struct  LevelController_t812318240  : public MonoBehaviour_t667441552
{
public:
	// MusicManager LevelController::musicManager
	MusicManager_t2870594024 * ___musicManager_2;
	// GameController LevelController::gameController
	GameController_t2782302542 * ___gameController_3;
	// UnityEngine.AudioClip LevelController::gameOverSound
	AudioClip_t794140988 * ___gameOverSound_4;

public:
	inline static int32_t get_offset_of_musicManager_2() { return static_cast<int32_t>(offsetof(LevelController_t812318240, ___musicManager_2)); }
	inline MusicManager_t2870594024 * get_musicManager_2() const { return ___musicManager_2; }
	inline MusicManager_t2870594024 ** get_address_of_musicManager_2() { return &___musicManager_2; }
	inline void set_musicManager_2(MusicManager_t2870594024 * value)
	{
		___musicManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___musicManager_2, value);
	}

	inline static int32_t get_offset_of_gameController_3() { return static_cast<int32_t>(offsetof(LevelController_t812318240, ___gameController_3)); }
	inline GameController_t2782302542 * get_gameController_3() const { return ___gameController_3; }
	inline GameController_t2782302542 ** get_address_of_gameController_3() { return &___gameController_3; }
	inline void set_gameController_3(GameController_t2782302542 * value)
	{
		___gameController_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_3, value);
	}

	inline static int32_t get_offset_of_gameOverSound_4() { return static_cast<int32_t>(offsetof(LevelController_t812318240, ___gameOverSound_4)); }
	inline AudioClip_t794140988 * get_gameOverSound_4() const { return ___gameOverSound_4; }
	inline AudioClip_t794140988 ** get_address_of_gameOverSound_4() { return &___gameOverSound_4; }
	inline void set_gameOverSound_4(AudioClip_t794140988 * value)
	{
		___gameOverSound_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverSound_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
