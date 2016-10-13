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
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject GameController::camera
	GameObject_t3674682005 * ___camera_2;
	// System.Boolean GameController::gameHasStarted
	bool ___gameHasStarted_3;
	// System.Single GameController::platformSpeed
	float ___platformSpeed_4;
	// System.Single GameController::score
	float ___score_5;
	// UnityEngine.UI.Text GameController::scoreText
	Text_t9039225 * ___scoreText_6;
	// UnityEngine.UI.Text GameController::highScoreText
	Text_t9039225 * ___highScoreText_7;
	// System.Single GameController::gameTimer
	float ___gameTimer_8;
	// System.Single GameController::timeToNextLevel
	float ___timeToNextLevel_9;

public:
	inline static int32_t get_offset_of_camera_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___camera_2)); }
	inline GameObject_t3674682005 * get_camera_2() const { return ___camera_2; }
	inline GameObject_t3674682005 ** get_address_of_camera_2() { return &___camera_2; }
	inline void set_camera_2(GameObject_t3674682005 * value)
	{
		___camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___camera_2, value);
	}

	inline static int32_t get_offset_of_gameHasStarted_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameHasStarted_3)); }
	inline bool get_gameHasStarted_3() const { return ___gameHasStarted_3; }
	inline bool* get_address_of_gameHasStarted_3() { return &___gameHasStarted_3; }
	inline void set_gameHasStarted_3(bool value)
	{
		___gameHasStarted_3 = value;
	}

	inline static int32_t get_offset_of_platformSpeed_4() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___platformSpeed_4)); }
	inline float get_platformSpeed_4() const { return ___platformSpeed_4; }
	inline float* get_address_of_platformSpeed_4() { return &___platformSpeed_4; }
	inline void set_platformSpeed_4(float value)
	{
		___platformSpeed_4 = value;
	}

	inline static int32_t get_offset_of_score_5() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___score_5)); }
	inline float get_score_5() const { return ___score_5; }
	inline float* get_address_of_score_5() { return &___score_5; }
	inline void set_score_5(float value)
	{
		___score_5 = value;
	}

	inline static int32_t get_offset_of_scoreText_6() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___scoreText_6)); }
	inline Text_t9039225 * get_scoreText_6() const { return ___scoreText_6; }
	inline Text_t9039225 ** get_address_of_scoreText_6() { return &___scoreText_6; }
	inline void set_scoreText_6(Text_t9039225 * value)
	{
		___scoreText_6 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_6, value);
	}

	inline static int32_t get_offset_of_highScoreText_7() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___highScoreText_7)); }
	inline Text_t9039225 * get_highScoreText_7() const { return ___highScoreText_7; }
	inline Text_t9039225 ** get_address_of_highScoreText_7() { return &___highScoreText_7; }
	inline void set_highScoreText_7(Text_t9039225 * value)
	{
		___highScoreText_7 = value;
		Il2CppCodeGenWriteBarrier(&___highScoreText_7, value);
	}

	inline static int32_t get_offset_of_gameTimer_8() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameTimer_8)); }
	inline float get_gameTimer_8() const { return ___gameTimer_8; }
	inline float* get_address_of_gameTimer_8() { return &___gameTimer_8; }
	inline void set_gameTimer_8(float value)
	{
		___gameTimer_8 = value;
	}

	inline static int32_t get_offset_of_timeToNextLevel_9() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___timeToNextLevel_9)); }
	inline float get_timeToNextLevel_9() const { return ___timeToNextLevel_9; }
	inline float* get_address_of_timeToNextLevel_9() { return &___timeToNextLevel_9; }
	inline void set_timeToNextLevel_9(float value)
	{
		___timeToNextLevel_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
