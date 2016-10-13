#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InControl.InputDevice
struct InputDevice_t4071704914;
// InControl.TwoAxisInputControl
struct TwoAxisInputControl_t2505665394;
// InControl.PlayerAction
struct PlayerAction_t3117799861;
// InControl.PlayerTwoAxisAction
struct PlayerTwoAxisAction_t1043663828;

#include "UnityEngine_UI_UnityEngine_EventSystems_Standalone1096194655.h"
#include "AssemblyU2DCSharp_InControl_InControlInputModule_Bu512416397.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InControlInputModule
struct  InControlInputModule_t2818848380  : public StandaloneInputModule_t1096194655
{
public:
	// InControl.InControlInputModule/Button InControl.InControlInputModule::submitButton
	int32_t ___submitButton_24;
	// InControl.InControlInputModule/Button InControl.InControlInputModule::cancelButton
	int32_t ___cancelButton_25;
	// System.Single InControl.InControlInputModule::analogMoveThreshold
	float ___analogMoveThreshold_26;
	// System.Single InControl.InControlInputModule::moveRepeatFirstDuration
	float ___moveRepeatFirstDuration_27;
	// System.Single InControl.InControlInputModule::moveRepeatDelayDuration
	float ___moveRepeatDelayDuration_28;
	// System.Boolean InControl.InControlInputModule::allowMobileDevice
	bool ___allowMobileDevice_29;
	// System.Boolean InControl.InControlInputModule::allowMouseInput
	bool ___allowMouseInput_30;
	// System.Boolean InControl.InControlInputModule::focusOnMouseHover
	bool ___focusOnMouseHover_31;
	// InControl.InputDevice InControl.InControlInputModule::inputDevice
	InputDevice_t4071704914 * ___inputDevice_32;
	// UnityEngine.Vector3 InControl.InControlInputModule::thisMousePosition
	Vector3_t4282066566  ___thisMousePosition_33;
	// UnityEngine.Vector3 InControl.InControlInputModule::lastMousePosition
	Vector3_t4282066566  ___lastMousePosition_34;
	// UnityEngine.Vector2 InControl.InControlInputModule::thisVectorState
	Vector2_t4282066565  ___thisVectorState_35;
	// UnityEngine.Vector2 InControl.InControlInputModule::lastVectorState
	Vector2_t4282066565  ___lastVectorState_36;
	// System.Boolean InControl.InControlInputModule::thisSubmitState
	bool ___thisSubmitState_37;
	// System.Boolean InControl.InControlInputModule::lastSubmitState
	bool ___lastSubmitState_38;
	// System.Boolean InControl.InControlInputModule::thisCancelState
	bool ___thisCancelState_39;
	// System.Boolean InControl.InControlInputModule::lastCancelState
	bool ___lastCancelState_40;
	// System.Single InControl.InControlInputModule::nextMoveRepeatTime
	float ___nextMoveRepeatTime_41;
	// System.Single InControl.InControlInputModule::lastVectorPressedTime
	float ___lastVectorPressedTime_42;
	// InControl.TwoAxisInputControl InControl.InControlInputModule::direction
	TwoAxisInputControl_t2505665394 * ___direction_43;
	// InControl.PlayerAction InControl.InControlInputModule::<SubmitAction>k__BackingField
	PlayerAction_t3117799861 * ___U3CSubmitActionU3Ek__BackingField_44;
	// InControl.PlayerAction InControl.InControlInputModule::<CancelAction>k__BackingField
	PlayerAction_t3117799861 * ___U3CCancelActionU3Ek__BackingField_45;
	// InControl.PlayerTwoAxisAction InControl.InControlInputModule::<MoveAction>k__BackingField
	PlayerTwoAxisAction_t1043663828 * ___U3CMoveActionU3Ek__BackingField_46;

public:
	inline static int32_t get_offset_of_submitButton_24() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___submitButton_24)); }
	inline int32_t get_submitButton_24() const { return ___submitButton_24; }
	inline int32_t* get_address_of_submitButton_24() { return &___submitButton_24; }
	inline void set_submitButton_24(int32_t value)
	{
		___submitButton_24 = value;
	}

	inline static int32_t get_offset_of_cancelButton_25() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___cancelButton_25)); }
	inline int32_t get_cancelButton_25() const { return ___cancelButton_25; }
	inline int32_t* get_address_of_cancelButton_25() { return &___cancelButton_25; }
	inline void set_cancelButton_25(int32_t value)
	{
		___cancelButton_25 = value;
	}

	inline static int32_t get_offset_of_analogMoveThreshold_26() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___analogMoveThreshold_26)); }
	inline float get_analogMoveThreshold_26() const { return ___analogMoveThreshold_26; }
	inline float* get_address_of_analogMoveThreshold_26() { return &___analogMoveThreshold_26; }
	inline void set_analogMoveThreshold_26(float value)
	{
		___analogMoveThreshold_26 = value;
	}

	inline static int32_t get_offset_of_moveRepeatFirstDuration_27() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___moveRepeatFirstDuration_27)); }
	inline float get_moveRepeatFirstDuration_27() const { return ___moveRepeatFirstDuration_27; }
	inline float* get_address_of_moveRepeatFirstDuration_27() { return &___moveRepeatFirstDuration_27; }
	inline void set_moveRepeatFirstDuration_27(float value)
	{
		___moveRepeatFirstDuration_27 = value;
	}

	inline static int32_t get_offset_of_moveRepeatDelayDuration_28() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___moveRepeatDelayDuration_28)); }
	inline float get_moveRepeatDelayDuration_28() const { return ___moveRepeatDelayDuration_28; }
	inline float* get_address_of_moveRepeatDelayDuration_28() { return &___moveRepeatDelayDuration_28; }
	inline void set_moveRepeatDelayDuration_28(float value)
	{
		___moveRepeatDelayDuration_28 = value;
	}

	inline static int32_t get_offset_of_allowMobileDevice_29() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___allowMobileDevice_29)); }
	inline bool get_allowMobileDevice_29() const { return ___allowMobileDevice_29; }
	inline bool* get_address_of_allowMobileDevice_29() { return &___allowMobileDevice_29; }
	inline void set_allowMobileDevice_29(bool value)
	{
		___allowMobileDevice_29 = value;
	}

	inline static int32_t get_offset_of_allowMouseInput_30() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___allowMouseInput_30)); }
	inline bool get_allowMouseInput_30() const { return ___allowMouseInput_30; }
	inline bool* get_address_of_allowMouseInput_30() { return &___allowMouseInput_30; }
	inline void set_allowMouseInput_30(bool value)
	{
		___allowMouseInput_30 = value;
	}

	inline static int32_t get_offset_of_focusOnMouseHover_31() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___focusOnMouseHover_31)); }
	inline bool get_focusOnMouseHover_31() const { return ___focusOnMouseHover_31; }
	inline bool* get_address_of_focusOnMouseHover_31() { return &___focusOnMouseHover_31; }
	inline void set_focusOnMouseHover_31(bool value)
	{
		___focusOnMouseHover_31 = value;
	}

	inline static int32_t get_offset_of_inputDevice_32() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___inputDevice_32)); }
	inline InputDevice_t4071704914 * get_inputDevice_32() const { return ___inputDevice_32; }
	inline InputDevice_t4071704914 ** get_address_of_inputDevice_32() { return &___inputDevice_32; }
	inline void set_inputDevice_32(InputDevice_t4071704914 * value)
	{
		___inputDevice_32 = value;
		Il2CppCodeGenWriteBarrier(&___inputDevice_32, value);
	}

	inline static int32_t get_offset_of_thisMousePosition_33() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___thisMousePosition_33)); }
	inline Vector3_t4282066566  get_thisMousePosition_33() const { return ___thisMousePosition_33; }
	inline Vector3_t4282066566 * get_address_of_thisMousePosition_33() { return &___thisMousePosition_33; }
	inline void set_thisMousePosition_33(Vector3_t4282066566  value)
	{
		___thisMousePosition_33 = value;
	}

	inline static int32_t get_offset_of_lastMousePosition_34() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___lastMousePosition_34)); }
	inline Vector3_t4282066566  get_lastMousePosition_34() const { return ___lastMousePosition_34; }
	inline Vector3_t4282066566 * get_address_of_lastMousePosition_34() { return &___lastMousePosition_34; }
	inline void set_lastMousePosition_34(Vector3_t4282066566  value)
	{
		___lastMousePosition_34 = value;
	}

	inline static int32_t get_offset_of_thisVectorState_35() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___thisVectorState_35)); }
	inline Vector2_t4282066565  get_thisVectorState_35() const { return ___thisVectorState_35; }
	inline Vector2_t4282066565 * get_address_of_thisVectorState_35() { return &___thisVectorState_35; }
	inline void set_thisVectorState_35(Vector2_t4282066565  value)
	{
		___thisVectorState_35 = value;
	}

	inline static int32_t get_offset_of_lastVectorState_36() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___lastVectorState_36)); }
	inline Vector2_t4282066565  get_lastVectorState_36() const { return ___lastVectorState_36; }
	inline Vector2_t4282066565 * get_address_of_lastVectorState_36() { return &___lastVectorState_36; }
	inline void set_lastVectorState_36(Vector2_t4282066565  value)
	{
		___lastVectorState_36 = value;
	}

	inline static int32_t get_offset_of_thisSubmitState_37() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___thisSubmitState_37)); }
	inline bool get_thisSubmitState_37() const { return ___thisSubmitState_37; }
	inline bool* get_address_of_thisSubmitState_37() { return &___thisSubmitState_37; }
	inline void set_thisSubmitState_37(bool value)
	{
		___thisSubmitState_37 = value;
	}

	inline static int32_t get_offset_of_lastSubmitState_38() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___lastSubmitState_38)); }
	inline bool get_lastSubmitState_38() const { return ___lastSubmitState_38; }
	inline bool* get_address_of_lastSubmitState_38() { return &___lastSubmitState_38; }
	inline void set_lastSubmitState_38(bool value)
	{
		___lastSubmitState_38 = value;
	}

	inline static int32_t get_offset_of_thisCancelState_39() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___thisCancelState_39)); }
	inline bool get_thisCancelState_39() const { return ___thisCancelState_39; }
	inline bool* get_address_of_thisCancelState_39() { return &___thisCancelState_39; }
	inline void set_thisCancelState_39(bool value)
	{
		___thisCancelState_39 = value;
	}

	inline static int32_t get_offset_of_lastCancelState_40() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___lastCancelState_40)); }
	inline bool get_lastCancelState_40() const { return ___lastCancelState_40; }
	inline bool* get_address_of_lastCancelState_40() { return &___lastCancelState_40; }
	inline void set_lastCancelState_40(bool value)
	{
		___lastCancelState_40 = value;
	}

	inline static int32_t get_offset_of_nextMoveRepeatTime_41() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___nextMoveRepeatTime_41)); }
	inline float get_nextMoveRepeatTime_41() const { return ___nextMoveRepeatTime_41; }
	inline float* get_address_of_nextMoveRepeatTime_41() { return &___nextMoveRepeatTime_41; }
	inline void set_nextMoveRepeatTime_41(float value)
	{
		___nextMoveRepeatTime_41 = value;
	}

	inline static int32_t get_offset_of_lastVectorPressedTime_42() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___lastVectorPressedTime_42)); }
	inline float get_lastVectorPressedTime_42() const { return ___lastVectorPressedTime_42; }
	inline float* get_address_of_lastVectorPressedTime_42() { return &___lastVectorPressedTime_42; }
	inline void set_lastVectorPressedTime_42(float value)
	{
		___lastVectorPressedTime_42 = value;
	}

	inline static int32_t get_offset_of_direction_43() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___direction_43)); }
	inline TwoAxisInputControl_t2505665394 * get_direction_43() const { return ___direction_43; }
	inline TwoAxisInputControl_t2505665394 ** get_address_of_direction_43() { return &___direction_43; }
	inline void set_direction_43(TwoAxisInputControl_t2505665394 * value)
	{
		___direction_43 = value;
		Il2CppCodeGenWriteBarrier(&___direction_43, value);
	}

	inline static int32_t get_offset_of_U3CSubmitActionU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___U3CSubmitActionU3Ek__BackingField_44)); }
	inline PlayerAction_t3117799861 * get_U3CSubmitActionU3Ek__BackingField_44() const { return ___U3CSubmitActionU3Ek__BackingField_44; }
	inline PlayerAction_t3117799861 ** get_address_of_U3CSubmitActionU3Ek__BackingField_44() { return &___U3CSubmitActionU3Ek__BackingField_44; }
	inline void set_U3CSubmitActionU3Ek__BackingField_44(PlayerAction_t3117799861 * value)
	{
		___U3CSubmitActionU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSubmitActionU3Ek__BackingField_44, value);
	}

	inline static int32_t get_offset_of_U3CCancelActionU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___U3CCancelActionU3Ek__BackingField_45)); }
	inline PlayerAction_t3117799861 * get_U3CCancelActionU3Ek__BackingField_45() const { return ___U3CCancelActionU3Ek__BackingField_45; }
	inline PlayerAction_t3117799861 ** get_address_of_U3CCancelActionU3Ek__BackingField_45() { return &___U3CCancelActionU3Ek__BackingField_45; }
	inline void set_U3CCancelActionU3Ek__BackingField_45(PlayerAction_t3117799861 * value)
	{
		___U3CCancelActionU3Ek__BackingField_45 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCancelActionU3Ek__BackingField_45, value);
	}

	inline static int32_t get_offset_of_U3CMoveActionU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(InControlInputModule_t2818848380, ___U3CMoveActionU3Ek__BackingField_46)); }
	inline PlayerTwoAxisAction_t1043663828 * get_U3CMoveActionU3Ek__BackingField_46() const { return ___U3CMoveActionU3Ek__BackingField_46; }
	inline PlayerTwoAxisAction_t1043663828 ** get_address_of_U3CMoveActionU3Ek__BackingField_46() { return &___U3CMoveActionU3Ek__BackingField_46; }
	inline void set_U3CMoveActionU3Ek__BackingField_46(PlayerTwoAxisAction_t1043663828 * value)
	{
		___U3CMoveActionU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMoveActionU3Ek__BackingField_46, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
