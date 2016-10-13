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
#include "AssemblyU2DCSharp_InControl_TouchControl_SnapAngle2095647845.h"
#include "AssemblyU2DCSharp_InControl_TouchControl_ButtonTar1917211294.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.TouchSwipeControl
struct  TouchSwipeControl_t2766249140  : public TouchControl_t3214838364
{
public:
	// InControl.TouchUnitType InControl.TouchSwipeControl::areaUnitType
	int32_t ___areaUnitType_2;
	// UnityEngine.Rect InControl.TouchSwipeControl::activeArea
	Rect_t4241904616  ___activeArea_3;
	// System.Single InControl.TouchSwipeControl::sensitivity
	float ___sensitivity_4;
	// InControl.TouchControl/AnalogTarget InControl.TouchSwipeControl::target
	int32_t ___target_5;
	// InControl.TouchControl/SnapAngles InControl.TouchSwipeControl::snapAngles
	int32_t ___snapAngles_6;
	// InControl.TouchControl/ButtonTarget InControl.TouchSwipeControl::upTarget
	int32_t ___upTarget_7;
	// InControl.TouchControl/ButtonTarget InControl.TouchSwipeControl::downTarget
	int32_t ___downTarget_8;
	// InControl.TouchControl/ButtonTarget InControl.TouchSwipeControl::leftTarget
	int32_t ___leftTarget_9;
	// InControl.TouchControl/ButtonTarget InControl.TouchSwipeControl::rightTarget
	int32_t ___rightTarget_10;
	// InControl.TouchControl/ButtonTarget InControl.TouchSwipeControl::tapTarget
	int32_t ___tapTarget_11;
	// System.Boolean InControl.TouchSwipeControl::oneSwipePerTouch
	bool ___oneSwipePerTouch_12;
	// UnityEngine.Rect InControl.TouchSwipeControl::worldActiveArea
	Rect_t4241904616  ___worldActiveArea_13;
	// UnityEngine.Vector3 InControl.TouchSwipeControl::currentVector
	Vector3_t4282066566  ___currentVector_14;
	// UnityEngine.Vector3 InControl.TouchSwipeControl::beganPosition
	Vector3_t4282066566  ___beganPosition_15;
	// UnityEngine.Vector3 InControl.TouchSwipeControl::lastPosition
	Vector3_t4282066566  ___lastPosition_16;
	// InControl.Touch InControl.TouchSwipeControl::currentTouch
	Touch_t2333148497 * ___currentTouch_17;
	// System.Boolean InControl.TouchSwipeControl::fireButtonTarget
	bool ___fireButtonTarget_18;
	// InControl.TouchControl/ButtonTarget InControl.TouchSwipeControl::nextButtonTarget
	int32_t ___nextButtonTarget_19;
	// InControl.TouchControl/ButtonTarget InControl.TouchSwipeControl::lastButtonTarget
	int32_t ___lastButtonTarget_20;
	// System.Boolean InControl.TouchSwipeControl::dirty
	bool ___dirty_21;

public:
	inline static int32_t get_offset_of_areaUnitType_2() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___areaUnitType_2)); }
	inline int32_t get_areaUnitType_2() const { return ___areaUnitType_2; }
	inline int32_t* get_address_of_areaUnitType_2() { return &___areaUnitType_2; }
	inline void set_areaUnitType_2(int32_t value)
	{
		___areaUnitType_2 = value;
	}

	inline static int32_t get_offset_of_activeArea_3() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___activeArea_3)); }
	inline Rect_t4241904616  get_activeArea_3() const { return ___activeArea_3; }
	inline Rect_t4241904616 * get_address_of_activeArea_3() { return &___activeArea_3; }
	inline void set_activeArea_3(Rect_t4241904616  value)
	{
		___activeArea_3 = value;
	}

	inline static int32_t get_offset_of_sensitivity_4() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___sensitivity_4)); }
	inline float get_sensitivity_4() const { return ___sensitivity_4; }
	inline float* get_address_of_sensitivity_4() { return &___sensitivity_4; }
	inline void set_sensitivity_4(float value)
	{
		___sensitivity_4 = value;
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___target_5)); }
	inline int32_t get_target_5() const { return ___target_5; }
	inline int32_t* get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(int32_t value)
	{
		___target_5 = value;
	}

	inline static int32_t get_offset_of_snapAngles_6() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___snapAngles_6)); }
	inline int32_t get_snapAngles_6() const { return ___snapAngles_6; }
	inline int32_t* get_address_of_snapAngles_6() { return &___snapAngles_6; }
	inline void set_snapAngles_6(int32_t value)
	{
		___snapAngles_6 = value;
	}

	inline static int32_t get_offset_of_upTarget_7() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___upTarget_7)); }
	inline int32_t get_upTarget_7() const { return ___upTarget_7; }
	inline int32_t* get_address_of_upTarget_7() { return &___upTarget_7; }
	inline void set_upTarget_7(int32_t value)
	{
		___upTarget_7 = value;
	}

	inline static int32_t get_offset_of_downTarget_8() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___downTarget_8)); }
	inline int32_t get_downTarget_8() const { return ___downTarget_8; }
	inline int32_t* get_address_of_downTarget_8() { return &___downTarget_8; }
	inline void set_downTarget_8(int32_t value)
	{
		___downTarget_8 = value;
	}

	inline static int32_t get_offset_of_leftTarget_9() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___leftTarget_9)); }
	inline int32_t get_leftTarget_9() const { return ___leftTarget_9; }
	inline int32_t* get_address_of_leftTarget_9() { return &___leftTarget_9; }
	inline void set_leftTarget_9(int32_t value)
	{
		___leftTarget_9 = value;
	}

	inline static int32_t get_offset_of_rightTarget_10() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___rightTarget_10)); }
	inline int32_t get_rightTarget_10() const { return ___rightTarget_10; }
	inline int32_t* get_address_of_rightTarget_10() { return &___rightTarget_10; }
	inline void set_rightTarget_10(int32_t value)
	{
		___rightTarget_10 = value;
	}

	inline static int32_t get_offset_of_tapTarget_11() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___tapTarget_11)); }
	inline int32_t get_tapTarget_11() const { return ___tapTarget_11; }
	inline int32_t* get_address_of_tapTarget_11() { return &___tapTarget_11; }
	inline void set_tapTarget_11(int32_t value)
	{
		___tapTarget_11 = value;
	}

	inline static int32_t get_offset_of_oneSwipePerTouch_12() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___oneSwipePerTouch_12)); }
	inline bool get_oneSwipePerTouch_12() const { return ___oneSwipePerTouch_12; }
	inline bool* get_address_of_oneSwipePerTouch_12() { return &___oneSwipePerTouch_12; }
	inline void set_oneSwipePerTouch_12(bool value)
	{
		___oneSwipePerTouch_12 = value;
	}

	inline static int32_t get_offset_of_worldActiveArea_13() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___worldActiveArea_13)); }
	inline Rect_t4241904616  get_worldActiveArea_13() const { return ___worldActiveArea_13; }
	inline Rect_t4241904616 * get_address_of_worldActiveArea_13() { return &___worldActiveArea_13; }
	inline void set_worldActiveArea_13(Rect_t4241904616  value)
	{
		___worldActiveArea_13 = value;
	}

	inline static int32_t get_offset_of_currentVector_14() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___currentVector_14)); }
	inline Vector3_t4282066566  get_currentVector_14() const { return ___currentVector_14; }
	inline Vector3_t4282066566 * get_address_of_currentVector_14() { return &___currentVector_14; }
	inline void set_currentVector_14(Vector3_t4282066566  value)
	{
		___currentVector_14 = value;
	}

	inline static int32_t get_offset_of_beganPosition_15() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___beganPosition_15)); }
	inline Vector3_t4282066566  get_beganPosition_15() const { return ___beganPosition_15; }
	inline Vector3_t4282066566 * get_address_of_beganPosition_15() { return &___beganPosition_15; }
	inline void set_beganPosition_15(Vector3_t4282066566  value)
	{
		___beganPosition_15 = value;
	}

	inline static int32_t get_offset_of_lastPosition_16() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___lastPosition_16)); }
	inline Vector3_t4282066566  get_lastPosition_16() const { return ___lastPosition_16; }
	inline Vector3_t4282066566 * get_address_of_lastPosition_16() { return &___lastPosition_16; }
	inline void set_lastPosition_16(Vector3_t4282066566  value)
	{
		___lastPosition_16 = value;
	}

	inline static int32_t get_offset_of_currentTouch_17() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___currentTouch_17)); }
	inline Touch_t2333148497 * get_currentTouch_17() const { return ___currentTouch_17; }
	inline Touch_t2333148497 ** get_address_of_currentTouch_17() { return &___currentTouch_17; }
	inline void set_currentTouch_17(Touch_t2333148497 * value)
	{
		___currentTouch_17 = value;
		Il2CppCodeGenWriteBarrier(&___currentTouch_17, value);
	}

	inline static int32_t get_offset_of_fireButtonTarget_18() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___fireButtonTarget_18)); }
	inline bool get_fireButtonTarget_18() const { return ___fireButtonTarget_18; }
	inline bool* get_address_of_fireButtonTarget_18() { return &___fireButtonTarget_18; }
	inline void set_fireButtonTarget_18(bool value)
	{
		___fireButtonTarget_18 = value;
	}

	inline static int32_t get_offset_of_nextButtonTarget_19() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___nextButtonTarget_19)); }
	inline int32_t get_nextButtonTarget_19() const { return ___nextButtonTarget_19; }
	inline int32_t* get_address_of_nextButtonTarget_19() { return &___nextButtonTarget_19; }
	inline void set_nextButtonTarget_19(int32_t value)
	{
		___nextButtonTarget_19 = value;
	}

	inline static int32_t get_offset_of_lastButtonTarget_20() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___lastButtonTarget_20)); }
	inline int32_t get_lastButtonTarget_20() const { return ___lastButtonTarget_20; }
	inline int32_t* get_address_of_lastButtonTarget_20() { return &___lastButtonTarget_20; }
	inline void set_lastButtonTarget_20(int32_t value)
	{
		___lastButtonTarget_20 = value;
	}

	inline static int32_t get_offset_of_dirty_21() { return static_cast<int32_t>(offsetof(TouchSwipeControl_t2766249140, ___dirty_21)); }
	inline bool get_dirty_21() const { return ___dirty_21; }
	inline bool* get_address_of_dirty_21() { return &___dirty_21; }
	inline void set_dirty_21(bool value)
	{
		___dirty_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
