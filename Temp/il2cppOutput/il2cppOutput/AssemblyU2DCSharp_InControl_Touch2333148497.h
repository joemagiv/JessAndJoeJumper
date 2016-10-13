#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_TouchPhase1567063616.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_InControl_TouchType2243222571.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.Touch
struct  Touch_t2333148497  : public Il2CppObject
{
public:
	// System.Int32 InControl.Touch::fingerId
	int32_t ___fingerId_2;
	// UnityEngine.TouchPhase InControl.Touch::phase
	int32_t ___phase_3;
	// System.Int32 InControl.Touch::tapCount
	int32_t ___tapCount_4;
	// UnityEngine.Vector2 InControl.Touch::position
	Vector2_t4282066565  ___position_5;
	// UnityEngine.Vector2 InControl.Touch::deltaPosition
	Vector2_t4282066565  ___deltaPosition_6;
	// UnityEngine.Vector2 InControl.Touch::lastPosition
	Vector2_t4282066565  ___lastPosition_7;
	// System.Single InControl.Touch::deltaTime
	float ___deltaTime_8;
	// System.UInt64 InControl.Touch::updateTick
	uint64_t ___updateTick_9;
	// InControl.TouchType InControl.Touch::type
	int32_t ___type_10;
	// System.Single InControl.Touch::altitudeAngle
	float ___altitudeAngle_11;
	// System.Single InControl.Touch::azimuthAngle
	float ___azimuthAngle_12;
	// System.Single InControl.Touch::maximumPossiblePressure
	float ___maximumPossiblePressure_13;
	// System.Single InControl.Touch::pressure
	float ___pressure_14;
	// System.Single InControl.Touch::radius
	float ___radius_15;
	// System.Single InControl.Touch::radiusVariance
	float ___radiusVariance_16;

public:
	inline static int32_t get_offset_of_fingerId_2() { return static_cast<int32_t>(offsetof(Touch_t2333148497, ___fingerId_2)); }
	inline int32_t get_fingerId_2() const { return ___fingerId_2; }
	inline int32_t* get_address_of_fingerId_2() { return &___fingerId_2; }
	inline void set_fingerId_2(int32_t value)
	{
		___fingerId_2 = value;
	}

	inline static int32_t get_offset_of_phase_3() { return static_cast<int32_t>(offsetof(Touch_t2333148497, ___phase_3)); }
	inline int32_t get_phase_3() const { return ___phase_3; }
	inline int32_t* get_address_of_phase_3() { return &___phase_3; }
	inline void set_phase_3(int32_t value)
	{
		___phase_3 = value;
	}

	inline static int32_t get_offset_of_tapCount_4() { return static_cast<int32_t>(offsetof(Touch_t2333148497, ___tapCount_4)); }
	inline int32_t get_tapCount_4() const { return ___tapCount_4; }
	inline int32_t* get_address_of_tapCount_4() { return &___tapCount_4; }
	inline void set_tapCount_4(int32_t value)
	{
		___tapCount_4 = value;
	}

	inline static int32_t get_offset_of_position_5() { return static_cast<int32_t>(offsetof(Touch_t2333148497, ___position_5)); }
	inline Vector2_t4282066565  get_position_5() const { return ___position_5; }
	inline Vector2_t4282066565 * get_address_of_position_5() { return &___position_5; }
	inline void set_position_5(Vector2_t4282066565  value)
	{
		___position_5 = value;
	}

	inline static int32_t get_offset_of_deltaPosition_6() { return static_cast<int32_t>(offsetof(Touch_t2333148497, ___deltaPosition_6)); }
	inline Vector2_t4282066565  get_deltaPosition_6() const { return ___deltaPosition_6; }
	inline Vector2_t4282066565 * get_address_of_deltaPosition_6() { return &___deltaPosition_6; }
	inline void set_deltaPosition_6(Vector2_t4282066565  value)
	{
		___deltaPosition_6 = value;
	}

	inline static int32_t get_offset_of_lastPosition_7() { return static_cast<int32_t>(offsetof(Touch_t2333148497, ___lastPosition_7)); }
	inline Vector2_t4282066565  get_lastPosition_7() const { return ___lastPosition_7; }
	inline Vector2_t4282066565 * get_address_of_lastPosition_7() { return &___lastPosition_7; }
	inline void set_lastPosition_7(Vector2_t4282066565  value)
	{
		___lastPosition_7 = value;
	}

	inline static int32_t get_offset_of_deltaTime_8() { return static_cast<int32_t>(offsetof(Touch_t2333148497, ___deltaTime_8)); }
	inline float get_deltaTime_8() const { return ___deltaTime_8; }
	inline float* get_address_of_deltaTime_8() { return &___deltaTime_8; }
	inline void set_deltaTime_8(float value)
	{
		___deltaTime_8 = value;
	}

	inline static int32_t get_offset_of_updateTick_9() { return static_cast<int32_t>(offsetof(Touch_t2333148497, ___updateTick_9)); }
	inline uint64_t get_updateTick_9() const { return ___updateTick_9; }
	inline uint64_t* get_address_of_updateTick_9() { return &___updateTick_9; }
	inline void set_updateTick_9(uint64_t value)
	{
		___updateTick_9 = value;
	}

	inline static int32_t get_offset_of_type_10() { return static_cast<int32_t>(offsetof(Touch_t2333148497, ___type_10)); }
	inline int32_t get_type_10() const { return ___type_10; }
	inline int32_t* get_address_of_type_10() { return &___type_10; }
	inline void set_type_10(int32_t value)
	{
		___type_10 = value;
	}

	inline static int32_t get_offset_of_altitudeAngle_11() { return static_cast<int32_t>(offsetof(Touch_t2333148497, ___altitudeAngle_11)); }
	inline float get_altitudeAngle_11() const { return ___altitudeAngle_11; }
	inline float* get_address_of_altitudeAngle_11() { return &___altitudeAngle_11; }
	inline void set_altitudeAngle_11(float value)
	{
		___altitudeAngle_11 = value;
	}

	inline static int32_t get_offset_of_azimuthAngle_12() { return static_cast<int32_t>(offsetof(Touch_t2333148497, ___azimuthAngle_12)); }
	inline float get_azimuthAngle_12() const { return ___azimuthAngle_12; }
	inline float* get_address_of_azimuthAngle_12() { return &___azimuthAngle_12; }
	inline void set_azimuthAngle_12(float value)
	{
		___azimuthAngle_12 = value;
	}

	inline static int32_t get_offset_of_maximumPossiblePressure_13() { return static_cast<int32_t>(offsetof(Touch_t2333148497, ___maximumPossiblePressure_13)); }
	inline float get_maximumPossiblePressure_13() const { return ___maximumPossiblePressure_13; }
	inline float* get_address_of_maximumPossiblePressure_13() { return &___maximumPossiblePressure_13; }
	inline void set_maximumPossiblePressure_13(float value)
	{
		___maximumPossiblePressure_13 = value;
	}

	inline static int32_t get_offset_of_pressure_14() { return static_cast<int32_t>(offsetof(Touch_t2333148497, ___pressure_14)); }
	inline float get_pressure_14() const { return ___pressure_14; }
	inline float* get_address_of_pressure_14() { return &___pressure_14; }
	inline void set_pressure_14(float value)
	{
		___pressure_14 = value;
	}

	inline static int32_t get_offset_of_radius_15() { return static_cast<int32_t>(offsetof(Touch_t2333148497, ___radius_15)); }
	inline float get_radius_15() const { return ___radius_15; }
	inline float* get_address_of_radius_15() { return &___radius_15; }
	inline void set_radius_15(float value)
	{
		___radius_15 = value;
	}

	inline static int32_t get_offset_of_radiusVariance_16() { return static_cast<int32_t>(offsetof(Touch_t2333148497, ___radiusVariance_16)); }
	inline float get_radiusVariance_16() const { return ___radiusVariance_16; }
	inline float* get_address_of_radiusVariance_16() { return &___radiusVariance_16; }
	inline void set_radiusVariance_16(float value)
	{
		___radiusVariance_16 = value;
	}
};

struct Touch_t2333148497_StaticFields
{
public:
	// System.Int32 InControl.Touch::FingerID_None
	int32_t ___FingerID_None_0;
	// System.Int32 InControl.Touch::FingerID_Mouse
	int32_t ___FingerID_Mouse_1;

public:
	inline static int32_t get_offset_of_FingerID_None_0() { return static_cast<int32_t>(offsetof(Touch_t2333148497_StaticFields, ___FingerID_None_0)); }
	inline int32_t get_FingerID_None_0() const { return ___FingerID_None_0; }
	inline int32_t* get_address_of_FingerID_None_0() { return &___FingerID_None_0; }
	inline void set_FingerID_None_0(int32_t value)
	{
		___FingerID_None_0 = value;
	}

	inline static int32_t get_offset_of_FingerID_Mouse_1() { return static_cast<int32_t>(offsetof(Touch_t2333148497_StaticFields, ___FingerID_Mouse_1)); }
	inline int32_t get_FingerID_Mouse_1() const { return ___FingerID_Mouse_1; }
	inline int32_t* get_address_of_FingerID_Mouse_1() { return &___FingerID_Mouse_1; }
	inline void set_FingerID_Mouse_1(int32_t value)
	{
		___FingerID_Mouse_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
