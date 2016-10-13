#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// DeviceCamera
struct DeviceCamera_t3055454523;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameOverController
struct  GameOverController_t722700354  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text GameOverController::text
	Text_t9039225 * ___text_2;
	// UnityEngine.UI.Text GameOverController::scoreText
	Text_t9039225 * ___scoreText_3;
	// UnityEngine.GameObject GameOverController::playAgainButton
	GameObject_t3674682005 * ___playAgainButton_4;
	// DeviceCamera GameOverController::deviceCamera
	DeviceCamera_t3055454523 * ___deviceCamera_5;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(GameOverController_t722700354, ___text_2)); }
	inline Text_t9039225 * get_text_2() const { return ___text_2; }
	inline Text_t9039225 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(Text_t9039225 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}

	inline static int32_t get_offset_of_scoreText_3() { return static_cast<int32_t>(offsetof(GameOverController_t722700354, ___scoreText_3)); }
	inline Text_t9039225 * get_scoreText_3() const { return ___scoreText_3; }
	inline Text_t9039225 ** get_address_of_scoreText_3() { return &___scoreText_3; }
	inline void set_scoreText_3(Text_t9039225 * value)
	{
		___scoreText_3 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_3, value);
	}

	inline static int32_t get_offset_of_playAgainButton_4() { return static_cast<int32_t>(offsetof(GameOverController_t722700354, ___playAgainButton_4)); }
	inline GameObject_t3674682005 * get_playAgainButton_4() const { return ___playAgainButton_4; }
	inline GameObject_t3674682005 ** get_address_of_playAgainButton_4() { return &___playAgainButton_4; }
	inline void set_playAgainButton_4(GameObject_t3674682005 * value)
	{
		___playAgainButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___playAgainButton_4, value);
	}

	inline static int32_t get_offset_of_deviceCamera_5() { return static_cast<int32_t>(offsetof(GameOverController_t722700354, ___deviceCamera_5)); }
	inline DeviceCamera_t3055454523 * get_deviceCamera_5() const { return ___deviceCamera_5; }
	inline DeviceCamera_t3055454523 ** get_address_of_deviceCamera_5() { return &___deviceCamera_5; }
	inline void set_deviceCamera_5(DeviceCamera_t3055454523 * value)
	{
		___deviceCamera_5 = value;
		Il2CppCodeGenWriteBarrier(&___deviceCamera_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
