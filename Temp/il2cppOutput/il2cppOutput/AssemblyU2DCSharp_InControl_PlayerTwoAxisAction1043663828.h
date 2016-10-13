#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InControl.PlayerAction
struct PlayerAction_t3117799861;
// System.Action`1<InControl.BindingSourceType>
struct Action_1_t816497204;
// System.Object
struct Il2CppObject;

#include "AssemblyU2DCSharp_InControl_TwoAxisInputControl2505665394.h"
#include "AssemblyU2DCSharp_InControl_BindingSourceType420681068.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayerTwoAxisAction
struct  PlayerTwoAxisAction_t1043663828  : public TwoAxisInputControl_t2505665394
{
public:
	// InControl.PlayerAction InControl.PlayerTwoAxisAction::negativeXAction
	PlayerAction_t3117799861 * ___negativeXAction_19;
	// InControl.PlayerAction InControl.PlayerTwoAxisAction::positiveXAction
	PlayerAction_t3117799861 * ___positiveXAction_20;
	// InControl.PlayerAction InControl.PlayerTwoAxisAction::negativeYAction
	PlayerAction_t3117799861 * ___negativeYAction_21;
	// InControl.PlayerAction InControl.PlayerTwoAxisAction::positiveYAction
	PlayerAction_t3117799861 * ___positiveYAction_22;
	// InControl.BindingSourceType InControl.PlayerTwoAxisAction::LastInputType
	int32_t ___LastInputType_23;
	// System.Action`1<InControl.BindingSourceType> InControl.PlayerTwoAxisAction::OnLastInputTypeChanged
	Action_1_t816497204 * ___OnLastInputTypeChanged_24;
	// System.Boolean InControl.PlayerTwoAxisAction::<InvertXAxis>k__BackingField
	bool ___U3CInvertXAxisU3Ek__BackingField_25;
	// System.Boolean InControl.PlayerTwoAxisAction::<InvertYAxis>k__BackingField
	bool ___U3CInvertYAxisU3Ek__BackingField_26;
	// System.Object InControl.PlayerTwoAxisAction::<UserData>k__BackingField
	Il2CppObject * ___U3CUserDataU3Ek__BackingField_27;

public:
	inline static int32_t get_offset_of_negativeXAction_19() { return static_cast<int32_t>(offsetof(PlayerTwoAxisAction_t1043663828, ___negativeXAction_19)); }
	inline PlayerAction_t3117799861 * get_negativeXAction_19() const { return ___negativeXAction_19; }
	inline PlayerAction_t3117799861 ** get_address_of_negativeXAction_19() { return &___negativeXAction_19; }
	inline void set_negativeXAction_19(PlayerAction_t3117799861 * value)
	{
		___negativeXAction_19 = value;
		Il2CppCodeGenWriteBarrier(&___negativeXAction_19, value);
	}

	inline static int32_t get_offset_of_positiveXAction_20() { return static_cast<int32_t>(offsetof(PlayerTwoAxisAction_t1043663828, ___positiveXAction_20)); }
	inline PlayerAction_t3117799861 * get_positiveXAction_20() const { return ___positiveXAction_20; }
	inline PlayerAction_t3117799861 ** get_address_of_positiveXAction_20() { return &___positiveXAction_20; }
	inline void set_positiveXAction_20(PlayerAction_t3117799861 * value)
	{
		___positiveXAction_20 = value;
		Il2CppCodeGenWriteBarrier(&___positiveXAction_20, value);
	}

	inline static int32_t get_offset_of_negativeYAction_21() { return static_cast<int32_t>(offsetof(PlayerTwoAxisAction_t1043663828, ___negativeYAction_21)); }
	inline PlayerAction_t3117799861 * get_negativeYAction_21() const { return ___negativeYAction_21; }
	inline PlayerAction_t3117799861 ** get_address_of_negativeYAction_21() { return &___negativeYAction_21; }
	inline void set_negativeYAction_21(PlayerAction_t3117799861 * value)
	{
		___negativeYAction_21 = value;
		Il2CppCodeGenWriteBarrier(&___negativeYAction_21, value);
	}

	inline static int32_t get_offset_of_positiveYAction_22() { return static_cast<int32_t>(offsetof(PlayerTwoAxisAction_t1043663828, ___positiveYAction_22)); }
	inline PlayerAction_t3117799861 * get_positiveYAction_22() const { return ___positiveYAction_22; }
	inline PlayerAction_t3117799861 ** get_address_of_positiveYAction_22() { return &___positiveYAction_22; }
	inline void set_positiveYAction_22(PlayerAction_t3117799861 * value)
	{
		___positiveYAction_22 = value;
		Il2CppCodeGenWriteBarrier(&___positiveYAction_22, value);
	}

	inline static int32_t get_offset_of_LastInputType_23() { return static_cast<int32_t>(offsetof(PlayerTwoAxisAction_t1043663828, ___LastInputType_23)); }
	inline int32_t get_LastInputType_23() const { return ___LastInputType_23; }
	inline int32_t* get_address_of_LastInputType_23() { return &___LastInputType_23; }
	inline void set_LastInputType_23(int32_t value)
	{
		___LastInputType_23 = value;
	}

	inline static int32_t get_offset_of_OnLastInputTypeChanged_24() { return static_cast<int32_t>(offsetof(PlayerTwoAxisAction_t1043663828, ___OnLastInputTypeChanged_24)); }
	inline Action_1_t816497204 * get_OnLastInputTypeChanged_24() const { return ___OnLastInputTypeChanged_24; }
	inline Action_1_t816497204 ** get_address_of_OnLastInputTypeChanged_24() { return &___OnLastInputTypeChanged_24; }
	inline void set_OnLastInputTypeChanged_24(Action_1_t816497204 * value)
	{
		___OnLastInputTypeChanged_24 = value;
		Il2CppCodeGenWriteBarrier(&___OnLastInputTypeChanged_24, value);
	}

	inline static int32_t get_offset_of_U3CInvertXAxisU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PlayerTwoAxisAction_t1043663828, ___U3CInvertXAxisU3Ek__BackingField_25)); }
	inline bool get_U3CInvertXAxisU3Ek__BackingField_25() const { return ___U3CInvertXAxisU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CInvertXAxisU3Ek__BackingField_25() { return &___U3CInvertXAxisU3Ek__BackingField_25; }
	inline void set_U3CInvertXAxisU3Ek__BackingField_25(bool value)
	{
		___U3CInvertXAxisU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CInvertYAxisU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(PlayerTwoAxisAction_t1043663828, ___U3CInvertYAxisU3Ek__BackingField_26)); }
	inline bool get_U3CInvertYAxisU3Ek__BackingField_26() const { return ___U3CInvertYAxisU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CInvertYAxisU3Ek__BackingField_26() { return &___U3CInvertYAxisU3Ek__BackingField_26; }
	inline void set_U3CInvertYAxisU3Ek__BackingField_26(bool value)
	{
		___U3CInvertYAxisU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CUserDataU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PlayerTwoAxisAction_t1043663828, ___U3CUserDataU3Ek__BackingField_27)); }
	inline Il2CppObject * get_U3CUserDataU3Ek__BackingField_27() const { return ___U3CUserDataU3Ek__BackingField_27; }
	inline Il2CppObject ** get_address_of_U3CUserDataU3Ek__BackingField_27() { return &___U3CUserDataU3Ek__BackingField_27; }
	inline void set_U3CUserDataU3Ek__BackingField_27(Il2CppObject * value)
	{
		___U3CUserDataU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserDataU3Ek__BackingField_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
