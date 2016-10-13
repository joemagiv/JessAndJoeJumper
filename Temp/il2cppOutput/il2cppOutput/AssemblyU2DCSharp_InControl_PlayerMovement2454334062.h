#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// SFXManager
struct SFXManager_t149887880;
// GameController
struct GameController_t2782302542;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayerMovement
struct  PlayerMovement_t2454334062  : public MonoBehaviour_t667441552
{
public:
	// System.Single InControl.PlayerMovement::movementSpeed
	float ___movementSpeed_2;
	// System.Boolean InControl.PlayerMovement::canMoveToRight
	bool ___canMoveToRight_3;
	// System.Boolean InControl.PlayerMovement::canMoveToLeft
	bool ___canMoveToLeft_4;
	// UnityEngine.AudioClip InControl.PlayerMovement::jumpSound
	AudioClip_t794140988 * ___jumpSound_5;
	// UnityEngine.Rigidbody2D InControl.PlayerMovement::rigidBody
	Rigidbody2D_t1743771669 * ___rigidBody_6;
	// SFXManager InControl.PlayerMovement::sfxManager
	SFXManager_t149887880 * ___sfxManager_7;
	// UnityEngine.Vector2 InControl.PlayerMovement::jumpingForce
	Vector2_t4282066565  ___jumpingForce_8;
	// System.Boolean InControl.PlayerMovement::isJumping
	bool ___isJumping_9;
	// GameController InControl.PlayerMovement::gameController
	GameController_t2782302542 * ___gameController_10;
	// System.Boolean InControl.PlayerMovement::movingLeft
	bool ___movingLeft_11;
	// System.Boolean InControl.PlayerMovement::movingRight
	bool ___movingRight_12;

public:
	inline static int32_t get_offset_of_movementSpeed_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t2454334062, ___movementSpeed_2)); }
	inline float get_movementSpeed_2() const { return ___movementSpeed_2; }
	inline float* get_address_of_movementSpeed_2() { return &___movementSpeed_2; }
	inline void set_movementSpeed_2(float value)
	{
		___movementSpeed_2 = value;
	}

	inline static int32_t get_offset_of_canMoveToRight_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t2454334062, ___canMoveToRight_3)); }
	inline bool get_canMoveToRight_3() const { return ___canMoveToRight_3; }
	inline bool* get_address_of_canMoveToRight_3() { return &___canMoveToRight_3; }
	inline void set_canMoveToRight_3(bool value)
	{
		___canMoveToRight_3 = value;
	}

	inline static int32_t get_offset_of_canMoveToLeft_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t2454334062, ___canMoveToLeft_4)); }
	inline bool get_canMoveToLeft_4() const { return ___canMoveToLeft_4; }
	inline bool* get_address_of_canMoveToLeft_4() { return &___canMoveToLeft_4; }
	inline void set_canMoveToLeft_4(bool value)
	{
		___canMoveToLeft_4 = value;
	}

	inline static int32_t get_offset_of_jumpSound_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t2454334062, ___jumpSound_5)); }
	inline AudioClip_t794140988 * get_jumpSound_5() const { return ___jumpSound_5; }
	inline AudioClip_t794140988 ** get_address_of_jumpSound_5() { return &___jumpSound_5; }
	inline void set_jumpSound_5(AudioClip_t794140988 * value)
	{
		___jumpSound_5 = value;
		Il2CppCodeGenWriteBarrier(&___jumpSound_5, value);
	}

	inline static int32_t get_offset_of_rigidBody_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t2454334062, ___rigidBody_6)); }
	inline Rigidbody2D_t1743771669 * get_rigidBody_6() const { return ___rigidBody_6; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rigidBody_6() { return &___rigidBody_6; }
	inline void set_rigidBody_6(Rigidbody2D_t1743771669 * value)
	{
		___rigidBody_6 = value;
		Il2CppCodeGenWriteBarrier(&___rigidBody_6, value);
	}

	inline static int32_t get_offset_of_sfxManager_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t2454334062, ___sfxManager_7)); }
	inline SFXManager_t149887880 * get_sfxManager_7() const { return ___sfxManager_7; }
	inline SFXManager_t149887880 ** get_address_of_sfxManager_7() { return &___sfxManager_7; }
	inline void set_sfxManager_7(SFXManager_t149887880 * value)
	{
		___sfxManager_7 = value;
		Il2CppCodeGenWriteBarrier(&___sfxManager_7, value);
	}

	inline static int32_t get_offset_of_jumpingForce_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t2454334062, ___jumpingForce_8)); }
	inline Vector2_t4282066565  get_jumpingForce_8() const { return ___jumpingForce_8; }
	inline Vector2_t4282066565 * get_address_of_jumpingForce_8() { return &___jumpingForce_8; }
	inline void set_jumpingForce_8(Vector2_t4282066565  value)
	{
		___jumpingForce_8 = value;
	}

	inline static int32_t get_offset_of_isJumping_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t2454334062, ___isJumping_9)); }
	inline bool get_isJumping_9() const { return ___isJumping_9; }
	inline bool* get_address_of_isJumping_9() { return &___isJumping_9; }
	inline void set_isJumping_9(bool value)
	{
		___isJumping_9 = value;
	}

	inline static int32_t get_offset_of_gameController_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t2454334062, ___gameController_10)); }
	inline GameController_t2782302542 * get_gameController_10() const { return ___gameController_10; }
	inline GameController_t2782302542 ** get_address_of_gameController_10() { return &___gameController_10; }
	inline void set_gameController_10(GameController_t2782302542 * value)
	{
		___gameController_10 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_10, value);
	}

	inline static int32_t get_offset_of_movingLeft_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t2454334062, ___movingLeft_11)); }
	inline bool get_movingLeft_11() const { return ___movingLeft_11; }
	inline bool* get_address_of_movingLeft_11() { return &___movingLeft_11; }
	inline void set_movingLeft_11(bool value)
	{
		___movingLeft_11 = value;
	}

	inline static int32_t get_offset_of_movingRight_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t2454334062, ___movingRight_12)); }
	inline bool get_movingRight_12() const { return ___movingRight_12; }
	inline bool* get_address_of_movingRight_12() { return &___movingRight_12; }
	inline void set_movingRight_12(bool value)
	{
		___movingRight_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
