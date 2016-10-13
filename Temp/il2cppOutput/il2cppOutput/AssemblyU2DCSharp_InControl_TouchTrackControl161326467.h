#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InControl.Touch
struct Touch_t2333148497;

#include "AssemblyU2DCSharp_InControl_TouchControl3214838364.h"
#include "AssemblyU2DCSharp_InControl_TouchUnitType1633405775.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "AssemblyU2DCSharp_InControl_TouchControl_AnalogTarg577850844.h"
#include "AssemblyU2DCSharp_InControl_TouchControl_ButtonTar1917211294.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.TouchTrackControl
struct  TouchTrackControl_t161326467  : public TouchControl_t3214838364
{
public:
	// InControl.TouchUnitType InControl.TouchTrackControl::areaUnitType
	int32_t ___areaUnitType_2;
	// UnityEngine.Rect InControl.TouchTrackControl::activeArea
	Rect_t4241904616  ___activeArea_3;
	// InControl.TouchControl/AnalogTarget InControl.TouchTrackControl::target
	int32_t ___target_4;
	// System.Single InControl.TouchTrackControl::scale
	float ___scale_5;
	// InControl.TouchControl/ButtonTarget InControl.TouchTrackControl::tapTarget
	int32_t ___tapTarget_6;
	// System.Single InControl.TouchTrackControl::maxTapDuration
	float ___maxTapDuration_7;
	// System.Single InControl.TouchTrackControl::maxTapMovement
	float ___maxTapMovement_8;
	// UnityEngine.Rect InControl.TouchTrackControl::worldActiveArea
	Rect_t4241904616  ___worldActiveArea_9;
	// UnityEngine.Vector3 InControl.TouchTrackControl::lastPosition
	Vector3_t4282066566  ___lastPosition_10;
	// UnityEngine.Vector3 InControl.TouchTrackControl::thisPosition
	Vector3_t4282066566  ___thisPosition_11;
	// InControl.Touch InControl.TouchTrackControl::currentTouch
	Touch_t2333148497 * ___currentTouch_12;
	// System.Boolean InControl.TouchTrackControl::dirty
	bool ___dirty_13;
	// System.Boolean InControl.TouchTrackControl::fireButtonTarget
	bool ___fireButtonTarget_14;
	// System.Single InControl.TouchTrackControl::beganTime
	float ___beganTime_15;
	// UnityEngine.Vector3 InControl.TouchTrackControl::beganPosition
	Vector3_t4282066566  ___beganPosition_16;

public:
	inline static int32_t get_offset_of_areaUnitType_2() { return static_cast<int32_t>(offsetof(TouchTrackControl_t161326467, ___areaUnitType_2)); }
	inline int32_t get_areaUnitType_2() const { return ___areaUnitType_2; }
	inline int32_t* get_address_of_areaUnitType_2() { return &___areaUnitType_2; }
	inline void set_areaUnitType_2(int32_t value)
	{
		___areaUnitType_2 = value;
	}

	inline static int32_t get_offset_of_activeArea_3() { return static_cast<int32_t>(offsetof(TouchTrackControl_t161326467, ___activeArea_3)); }
	inline Rect_t4241904616  get_activeArea_3() const { return ___activeArea_3; }
	inline Rect_t4241904616 * get_address_of_activeArea_3() { return &___activeArea_3; }
	inline void set_activeArea_3(Rect_t4241904616  value)
	{
		___activeArea_3 = value;
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(TouchTrackControl_t161326467, ___target_4)); }
	inline int32_t get_target_4() const { return ___target_4; }
	inline int32_t* get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(int32_t value)
	{
		___target_4 = value;
	}

	inline static int32_t get_offset_of_scale_5() { return static_cast<int32_t>(offsetof(TouchTrackControl_t161326467, ___scale_5)); }
	inline float get_scale_5() const { return ___scale_5; }
	inline float* get_address_of_scale_5() { return &___scale_5; }
	inline void set_scale_5(float value)
	{
		___scale_5 = value;
	}

	inline static int32_t get_offset_of_tapTarget_6() { return static_cast<int32_t>(offsetof(TouchTrackControl_t161326467, ___tapTarget_6)); }
	inline int32_t get_tapTarget_6() const { return ___tapTarget_6; }
	inline int32_t* get_address_of_tapTarget_6() { return &___tapTarget_6; }
	inline void set_tapTarget_6(int32_t value)
	{
		___tapTarget_6 = value;
	}

	inline static int32_t get_offset_of_maxTapDuration_7() { return static_cast<int32_t>(offsetof(TouchTrackControl_t161326467, ___maxTapDuration_7)); }
	inline float get_maxTapDuration_7() const { return ___maxTapDuration_7; }
	inline float* get_address_of_maxTapDuration_7() { return &___maxTapDuration_7; }
	inline void set_maxTapDuration_7(float value)
	{
		___maxTapDuration_7 = value;
	}

	inline static int32_t get_offset_of_maxTapMovement_8() { return static_cast<int32_t>(offsetof(TouchTrackControl_t161326467, ___maxTapMovement_8)); }
	inline float get_maxTapMovement_8() const { return ___maxTapMovement_8; }
	inline float* get_address_of_maxTapMovement_8() { return &___maxTapMovement_8; }
	inline void set_maxTapMovement_8(float value)
	{
		___maxTapMovement_8 = value;
	}

	inline static int32_t get_offset_of_worldActiveArea_9() { return static_cast<int32_t>(offsetof(TouchTrackControl_t161326467, ___worldActiveArea_9)); }
	inline Rect_t4241904616  get_worldActiveArea_9() const { return ___worldActiveArea_9; }
	inline Rect_t4241904616 * get_address_of_worldActiveArea_9() { return &___worldActiveArea_9; }
	inline void set_worldActiveArea_9(Rect_t4241904616  value)
	{
		___worldActiveArea_9 = value;
	}

	inline static int32_t get_offset_of_lastPosition_10() { return static_cast<int32_t>(offsetof(TouchTrackControl_t161326467, ___lastPosition_10)); }
	inline Vector3_t4282066566  get_lastPosition_10() const { return ___lastPosition_10; }
	inline Vector3_t4282066566 * get_address_of_lastPosition_10() { return &___lastPosition_10; }
	inline void set_lastPosition_10(Vector3_t4282066566  value)
	{
		___lastPosition_10 = value;
	}

	inline static int32_t get_offset_of_thisPosition_11() { return static_cast<int32_t>(offsetof(TouchTrackControl_t161326467, ___thisPosition_11)); }
	inline Vector3_t4282066566  get_thisPosition_11() const { return ___thisPosition_11; }
	inline Vector3_t4282066566 * get_address_of_thisPosition_11() { return &___thisPosition_11; }
	inline void set_thisPosition_11(Vector3_t4282066566  value)
	{
		___thisPosition_11 = value;
	}

	inline static int32_t get_offset_of_currentTouch_12() { return static_cast<int32_t>(offsetof(TouchTrackControl_t161326467, ___currentTouch_12)); }
	inline Touch_t2333148497 * get_currentTouch_12() const { return ___currentTouch_12; }
	inline Touch_t2333148497 ** get_address_of_currentTouch_12() { return &___currentTouch_12; }
	inline void set_currentTouch_12(Touch_t2333148497 * value)
	{
		___currentTouch_12 = value;
		Il2CppCodeGenWriteBarrier(&___currentTouch_12, value);
	}

	inline static int32_t get_offset_of_dirty_13() { return static_cast<int32_t>(offsetof(TouchTrackControl_t161326467, ___dirty_13)); }
	inline bool get_dirty_13() const { return ___dirty_13; }
	inline bool* get_address_of_dirty_13() { return &___dirty_13; }
	inline void set_dirty_13(bool value)
	{
		___dirty_13 = value;
	}

	inline static int32_t get_offset_of_fireButtonTarget_14() { return static_cast<int32_t>(offsetof(TouchTrackControl_t161326467, ___fireButtonTarget_14)); }
	inline bool get_fireButtonTarget_14() const { return ___fireButtonTarget_14; }
	inline bool* get_address_of_fireButtonTarget_14() { return &___fireButtonTarget_14; }
	inline void set_fireButtonTarget_14(bool value)
	{
		___fireButtonTarget_14 = value;
	}

	inline static int32_t get_offset_of_beganTime_15() { return static_cast<int32_t>(offsetof(TouchTrackControl_t161326467, ___beganTime_15)); }
	inline float get_beganTime_15() const { return ___beganTime_15; }
	inline float* get_address_of_beganTime_15() { return &___beganTime_15; }
	inline void set_beganTime_15(float value)
	{
		___beganTime_15 = value;
	}

	inline static int32_t get_offset_of_beganPosition_16() { return static_cast<int32_t>(offsetof(TouchTrackControl_t161326467, ___beganPosition_16)); }
	inline Vector3_t4282066566  get_beganPosition_16() const { return ___beganPosition_16; }
	inline Vector3_t4282066566 * get_address_of_beganPosition_16() { return &___beganPosition_16; }
	inline void set_beganPosition_16(Vector3_t4282066566  value)
	{
		___beganPosition_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
