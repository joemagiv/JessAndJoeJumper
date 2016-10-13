#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// InControl.TouchSprite
struct TouchSprite_t2209778038;
// InControl.Touch
struct Touch_t2333148497;

#include "AssemblyU2DCSharp_InControl_TouchControl3214838364.h"
#include "AssemblyU2DCSharp_InControl_TouchControlAnchor508992049.h"
#include "AssemblyU2DCSharp_InControl_TouchUnitType1633405775.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "AssemblyU2DCSharp_InControl_TouchControl_AnalogTarg577850844.h"
#include "AssemblyU2DCSharp_InControl_TouchControl_SnapAngle2095647845.h"
#include "AssemblyU2DCSharp_InControl_LockAxis3062185898.h"
#include "AssemblyU2DCSharp_InControl_DragAxis311196467.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.TouchStickControl
struct  TouchStickControl_t3456167582  : public TouchControl_t3214838364
{
public:
	// InControl.TouchControlAnchor InControl.TouchStickControl::anchor
	int32_t ___anchor_2;
	// InControl.TouchUnitType InControl.TouchStickControl::offsetUnitType
	int32_t ___offsetUnitType_3;
	// UnityEngine.Vector2 InControl.TouchStickControl::offset
	Vector2_t4282066565  ___offset_4;
	// InControl.TouchUnitType InControl.TouchStickControl::areaUnitType
	int32_t ___areaUnitType_5;
	// UnityEngine.Rect InControl.TouchStickControl::activeArea
	Rect_t4241904616  ___activeArea_6;
	// InControl.TouchControl/AnalogTarget InControl.TouchStickControl::target
	int32_t ___target_7;
	// InControl.TouchControl/SnapAngles InControl.TouchStickControl::snapAngles
	int32_t ___snapAngles_8;
	// InControl.LockAxis InControl.TouchStickControl::lockToAxis
	int32_t ___lockToAxis_9;
	// System.Single InControl.TouchStickControl::lowerDeadZone
	float ___lowerDeadZone_10;
	// System.Single InControl.TouchStickControl::upperDeadZone
	float ___upperDeadZone_11;
	// UnityEngine.AnimationCurve InControl.TouchStickControl::inputCurve
	AnimationCurve_t3667593487 * ___inputCurve_12;
	// System.Boolean InControl.TouchStickControl::allowDragging
	bool ___allowDragging_13;
	// InControl.DragAxis InControl.TouchStickControl::allowDraggingAxis
	int32_t ___allowDraggingAxis_14;
	// System.Boolean InControl.TouchStickControl::snapToInitialTouch
	bool ___snapToInitialTouch_15;
	// System.Boolean InControl.TouchStickControl::resetWhenDone
	bool ___resetWhenDone_16;
	// System.Single InControl.TouchStickControl::resetDuration
	float ___resetDuration_17;
	// InControl.TouchSprite InControl.TouchStickControl::ring
	TouchSprite_t2209778038 * ___ring_18;
	// InControl.TouchSprite InControl.TouchStickControl::knob
	TouchSprite_t2209778038 * ___knob_19;
	// System.Single InControl.TouchStickControl::knobRange
	float ___knobRange_20;
	// UnityEngine.Vector3 InControl.TouchStickControl::resetPosition
	Vector3_t4282066566  ___resetPosition_21;
	// UnityEngine.Vector3 InControl.TouchStickControl::beganPosition
	Vector3_t4282066566  ___beganPosition_22;
	// UnityEngine.Vector3 InControl.TouchStickControl::movedPosition
	Vector3_t4282066566  ___movedPosition_23;
	// System.Single InControl.TouchStickControl::ringResetSpeed
	float ___ringResetSpeed_24;
	// System.Single InControl.TouchStickControl::knobResetSpeed
	float ___knobResetSpeed_25;
	// UnityEngine.Rect InControl.TouchStickControl::worldActiveArea
	Rect_t4241904616  ___worldActiveArea_26;
	// System.Single InControl.TouchStickControl::worldKnobRange
	float ___worldKnobRange_27;
	// UnityEngine.Vector3 InControl.TouchStickControl::value
	Vector3_t4282066566  ___value_28;
	// InControl.Touch InControl.TouchStickControl::currentTouch
	Touch_t2333148497 * ___currentTouch_29;
	// System.Boolean InControl.TouchStickControl::dirty
	bool ___dirty_30;

public:
	inline static int32_t get_offset_of_anchor_2() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___anchor_2)); }
	inline int32_t get_anchor_2() const { return ___anchor_2; }
	inline int32_t* get_address_of_anchor_2() { return &___anchor_2; }
	inline void set_anchor_2(int32_t value)
	{
		___anchor_2 = value;
	}

	inline static int32_t get_offset_of_offsetUnitType_3() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___offsetUnitType_3)); }
	inline int32_t get_offsetUnitType_3() const { return ___offsetUnitType_3; }
	inline int32_t* get_address_of_offsetUnitType_3() { return &___offsetUnitType_3; }
	inline void set_offsetUnitType_3(int32_t value)
	{
		___offsetUnitType_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___offset_4)); }
	inline Vector2_t4282066565  get_offset_4() const { return ___offset_4; }
	inline Vector2_t4282066565 * get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(Vector2_t4282066565  value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_areaUnitType_5() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___areaUnitType_5)); }
	inline int32_t get_areaUnitType_5() const { return ___areaUnitType_5; }
	inline int32_t* get_address_of_areaUnitType_5() { return &___areaUnitType_5; }
	inline void set_areaUnitType_5(int32_t value)
	{
		___areaUnitType_5 = value;
	}

	inline static int32_t get_offset_of_activeArea_6() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___activeArea_6)); }
	inline Rect_t4241904616  get_activeArea_6() const { return ___activeArea_6; }
	inline Rect_t4241904616 * get_address_of_activeArea_6() { return &___activeArea_6; }
	inline void set_activeArea_6(Rect_t4241904616  value)
	{
		___activeArea_6 = value;
	}

	inline static int32_t get_offset_of_target_7() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___target_7)); }
	inline int32_t get_target_7() const { return ___target_7; }
	inline int32_t* get_address_of_target_7() { return &___target_7; }
	inline void set_target_7(int32_t value)
	{
		___target_7 = value;
	}

	inline static int32_t get_offset_of_snapAngles_8() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___snapAngles_8)); }
	inline int32_t get_snapAngles_8() const { return ___snapAngles_8; }
	inline int32_t* get_address_of_snapAngles_8() { return &___snapAngles_8; }
	inline void set_snapAngles_8(int32_t value)
	{
		___snapAngles_8 = value;
	}

	inline static int32_t get_offset_of_lockToAxis_9() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___lockToAxis_9)); }
	inline int32_t get_lockToAxis_9() const { return ___lockToAxis_9; }
	inline int32_t* get_address_of_lockToAxis_9() { return &___lockToAxis_9; }
	inline void set_lockToAxis_9(int32_t value)
	{
		___lockToAxis_9 = value;
	}

	inline static int32_t get_offset_of_lowerDeadZone_10() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___lowerDeadZone_10)); }
	inline float get_lowerDeadZone_10() const { return ___lowerDeadZone_10; }
	inline float* get_address_of_lowerDeadZone_10() { return &___lowerDeadZone_10; }
	inline void set_lowerDeadZone_10(float value)
	{
		___lowerDeadZone_10 = value;
	}

	inline static int32_t get_offset_of_upperDeadZone_11() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___upperDeadZone_11)); }
	inline float get_upperDeadZone_11() const { return ___upperDeadZone_11; }
	inline float* get_address_of_upperDeadZone_11() { return &___upperDeadZone_11; }
	inline void set_upperDeadZone_11(float value)
	{
		___upperDeadZone_11 = value;
	}

	inline static int32_t get_offset_of_inputCurve_12() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___inputCurve_12)); }
	inline AnimationCurve_t3667593487 * get_inputCurve_12() const { return ___inputCurve_12; }
	inline AnimationCurve_t3667593487 ** get_address_of_inputCurve_12() { return &___inputCurve_12; }
	inline void set_inputCurve_12(AnimationCurve_t3667593487 * value)
	{
		___inputCurve_12 = value;
		Il2CppCodeGenWriteBarrier(&___inputCurve_12, value);
	}

	inline static int32_t get_offset_of_allowDragging_13() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___allowDragging_13)); }
	inline bool get_allowDragging_13() const { return ___allowDragging_13; }
	inline bool* get_address_of_allowDragging_13() { return &___allowDragging_13; }
	inline void set_allowDragging_13(bool value)
	{
		___allowDragging_13 = value;
	}

	inline static int32_t get_offset_of_allowDraggingAxis_14() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___allowDraggingAxis_14)); }
	inline int32_t get_allowDraggingAxis_14() const { return ___allowDraggingAxis_14; }
	inline int32_t* get_address_of_allowDraggingAxis_14() { return &___allowDraggingAxis_14; }
	inline void set_allowDraggingAxis_14(int32_t value)
	{
		___allowDraggingAxis_14 = value;
	}

	inline static int32_t get_offset_of_snapToInitialTouch_15() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___snapToInitialTouch_15)); }
	inline bool get_snapToInitialTouch_15() const { return ___snapToInitialTouch_15; }
	inline bool* get_address_of_snapToInitialTouch_15() { return &___snapToInitialTouch_15; }
	inline void set_snapToInitialTouch_15(bool value)
	{
		___snapToInitialTouch_15 = value;
	}

	inline static int32_t get_offset_of_resetWhenDone_16() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___resetWhenDone_16)); }
	inline bool get_resetWhenDone_16() const { return ___resetWhenDone_16; }
	inline bool* get_address_of_resetWhenDone_16() { return &___resetWhenDone_16; }
	inline void set_resetWhenDone_16(bool value)
	{
		___resetWhenDone_16 = value;
	}

	inline static int32_t get_offset_of_resetDuration_17() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___resetDuration_17)); }
	inline float get_resetDuration_17() const { return ___resetDuration_17; }
	inline float* get_address_of_resetDuration_17() { return &___resetDuration_17; }
	inline void set_resetDuration_17(float value)
	{
		___resetDuration_17 = value;
	}

	inline static int32_t get_offset_of_ring_18() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___ring_18)); }
	inline TouchSprite_t2209778038 * get_ring_18() const { return ___ring_18; }
	inline TouchSprite_t2209778038 ** get_address_of_ring_18() { return &___ring_18; }
	inline void set_ring_18(TouchSprite_t2209778038 * value)
	{
		___ring_18 = value;
		Il2CppCodeGenWriteBarrier(&___ring_18, value);
	}

	inline static int32_t get_offset_of_knob_19() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___knob_19)); }
	inline TouchSprite_t2209778038 * get_knob_19() const { return ___knob_19; }
	inline TouchSprite_t2209778038 ** get_address_of_knob_19() { return &___knob_19; }
	inline void set_knob_19(TouchSprite_t2209778038 * value)
	{
		___knob_19 = value;
		Il2CppCodeGenWriteBarrier(&___knob_19, value);
	}

	inline static int32_t get_offset_of_knobRange_20() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___knobRange_20)); }
	inline float get_knobRange_20() const { return ___knobRange_20; }
	inline float* get_address_of_knobRange_20() { return &___knobRange_20; }
	inline void set_knobRange_20(float value)
	{
		___knobRange_20 = value;
	}

	inline static int32_t get_offset_of_resetPosition_21() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___resetPosition_21)); }
	inline Vector3_t4282066566  get_resetPosition_21() const { return ___resetPosition_21; }
	inline Vector3_t4282066566 * get_address_of_resetPosition_21() { return &___resetPosition_21; }
	inline void set_resetPosition_21(Vector3_t4282066566  value)
	{
		___resetPosition_21 = value;
	}

	inline static int32_t get_offset_of_beganPosition_22() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___beganPosition_22)); }
	inline Vector3_t4282066566  get_beganPosition_22() const { return ___beganPosition_22; }
	inline Vector3_t4282066566 * get_address_of_beganPosition_22() { return &___beganPosition_22; }
	inline void set_beganPosition_22(Vector3_t4282066566  value)
	{
		___beganPosition_22 = value;
	}

	inline static int32_t get_offset_of_movedPosition_23() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___movedPosition_23)); }
	inline Vector3_t4282066566  get_movedPosition_23() const { return ___movedPosition_23; }
	inline Vector3_t4282066566 * get_address_of_movedPosition_23() { return &___movedPosition_23; }
	inline void set_movedPosition_23(Vector3_t4282066566  value)
	{
		___movedPosition_23 = value;
	}

	inline static int32_t get_offset_of_ringResetSpeed_24() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___ringResetSpeed_24)); }
	inline float get_ringResetSpeed_24() const { return ___ringResetSpeed_24; }
	inline float* get_address_of_ringResetSpeed_24() { return &___ringResetSpeed_24; }
	inline void set_ringResetSpeed_24(float value)
	{
		___ringResetSpeed_24 = value;
	}

	inline static int32_t get_offset_of_knobResetSpeed_25() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___knobResetSpeed_25)); }
	inline float get_knobResetSpeed_25() const { return ___knobResetSpeed_25; }
	inline float* get_address_of_knobResetSpeed_25() { return &___knobResetSpeed_25; }
	inline void set_knobResetSpeed_25(float value)
	{
		___knobResetSpeed_25 = value;
	}

	inline static int32_t get_offset_of_worldActiveArea_26() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___worldActiveArea_26)); }
	inline Rect_t4241904616  get_worldActiveArea_26() const { return ___worldActiveArea_26; }
	inline Rect_t4241904616 * get_address_of_worldActiveArea_26() { return &___worldActiveArea_26; }
	inline void set_worldActiveArea_26(Rect_t4241904616  value)
	{
		___worldActiveArea_26 = value;
	}

	inline static int32_t get_offset_of_worldKnobRange_27() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___worldKnobRange_27)); }
	inline float get_worldKnobRange_27() const { return ___worldKnobRange_27; }
	inline float* get_address_of_worldKnobRange_27() { return &___worldKnobRange_27; }
	inline void set_worldKnobRange_27(float value)
	{
		___worldKnobRange_27 = value;
	}

	inline static int32_t get_offset_of_value_28() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___value_28)); }
	inline Vector3_t4282066566  get_value_28() const { return ___value_28; }
	inline Vector3_t4282066566 * get_address_of_value_28() { return &___value_28; }
	inline void set_value_28(Vector3_t4282066566  value)
	{
		___value_28 = value;
	}

	inline static int32_t get_offset_of_currentTouch_29() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___currentTouch_29)); }
	inline Touch_t2333148497 * get_currentTouch_29() const { return ___currentTouch_29; }
	inline Touch_t2333148497 ** get_address_of_currentTouch_29() { return &___currentTouch_29; }
	inline void set_currentTouch_29(Touch_t2333148497 * value)
	{
		___currentTouch_29 = value;
		Il2CppCodeGenWriteBarrier(&___currentTouch_29, value);
	}

	inline static int32_t get_offset_of_dirty_30() { return static_cast<int32_t>(offsetof(TouchStickControl_t3456167582, ___dirty_30)); }
	inline bool get_dirty_30() const { return ___dirty_30; }
	inline bool* get_address_of_dirty_30() { return &___dirty_30; }
	inline void set_dirty_30(bool value)
	{
		___dirty_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
