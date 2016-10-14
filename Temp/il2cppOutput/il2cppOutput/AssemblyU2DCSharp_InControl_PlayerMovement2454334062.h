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
// UnityEngine.Animator
struct Animator_t2776330603;
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
	// UnityEngine.Animator InControl.PlayerMovement::anim
	Animator_t2776330603 * ___anim_8;
	// UnityEngine.Vector2 InControl.PlayerMovement::jumpingForce
	Vector2_t4282066565  ___jumpingForce_9;
	// System.Boolean InControl.PlayerMovement::isJumping
	bool ___isJumping_10;
	// GameController InControl.PlayerMovement::gameController
	GameController_t2782302542 * ___gameController_11;
	// System.Boolean InControl.PlayerMovement::movingLeft
	bool ___movingLeft_12;
	// System.Boolean InControl.PlayerMovement::movingRight
	bool ___movingRight_13;

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

	inline static int32_t get_offset_of_anim_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t2454334062, ___anim_8)); }
	inline Animator_t2776330603 * get_anim_8() const { return ___anim_8; }
	inline Animator_t2776330603 ** get_address_of_anim_8() { return &___anim_8; }
	inline void set_anim_8(Animator_t2776330603 * value)
	{
		___anim_8 = value;
		Il2CppCodeGenWriteBarrier(&___anim_8, value);
	}

	inline static int32_t get_offset_of_jumpingForce_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t2454334062, ___jumpingForce_9)); }
	inline Vector2_t4282066565  get_jumpingForce_9() const { return ___jumpingForce_9; }
	inline Vector2_t4282066565 * get_address_of_jumpingForce_9() { return &___jumpingForce_9; }
	inline void set_jumpingForce_9(Vector2_t4282066565  value)
	{
		___jumpingForce_9 = value;
	}

	inline static int32_t get_offset_of_isJumping_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t2454334062, ___isJumping_10)); }
	inline bool get_isJumping_10() const { return ___isJumping_10; }
	inline bool* get_address_of_isJumping_10() { return &___isJumping_10; }
	inline void set_isJumping_10(bool value)
	{
		___isJumping_10 = value;
	}

	inline static int32_t get_offset_of_gameController_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t2454334062, ___gameController_11)); }
	inline GameController_t2782302542 * get_gameController_11() const { return ___gameController_11; }
	inline GameController_t2782302542 ** get_address_of_gameController_11() { return &___gameController_11; }
	inline void set_gameController_11(GameController_t2782302542 * value)
	{
		___gameController_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_11, value);
	}

	inline static int32_t get_offset_of_movingLeft_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t2454334062, ___movingLeft_12)); }
	inline bool get_movingLeft_12() const { return ___movingLeft_12; }
	inline bool* get_address_of_movingLeft_12() { return &___movingLeft_12; }
	inline void set_movingLeft_12(bool value)
	{
		___movingLeft_12 = value;
	}

	inline static int32_t get_offset_of_movingRight_13() { return static_cast<int32_t>(offsetof(PlayerMovement_t2454334062, ___movingRight_13)); }
	inline bool get_movingRight_13() const { return ___movingRight_13; }
	inline bool* get_address_of_movingRight_13() { return &___movingRight_13; }
	inline void set_movingRight_13(bool value)
	{
		___movingRight_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
