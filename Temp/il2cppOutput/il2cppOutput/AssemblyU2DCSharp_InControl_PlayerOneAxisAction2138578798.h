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

#include "AssemblyU2DCSharp_InControl_OneAxisInputControl2168578956.h"
#include "AssemblyU2DCSharp_InControl_BindingSourceType420681068.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayerOneAxisAction
struct  PlayerOneAxisAction_t2138578798  : public OneAxisInputControl_t2168578956
{
public:
	// InControl.PlayerAction InControl.PlayerOneAxisAction::negativeAction
	PlayerAction_t3117799861 * ___negativeAction_18;
	// InControl.PlayerAction InControl.PlayerOneAxisAction::positiveAction
	PlayerAction_t3117799861 * ___positiveAction_19;
	// InControl.BindingSourceType InControl.PlayerOneAxisAction::LastInputType
	int32_t ___LastInputType_20;
	// System.Action`1<InControl.BindingSourceType> InControl.PlayerOneAxisAction::OnLastInputTypeChanged
	Action_1_t816497204 * ___OnLastInputTypeChanged_21;
	// System.Object InControl.PlayerOneAxisAction::<UserData>k__BackingField
	Il2CppObject * ___U3CUserDataU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_negativeAction_18() { return static_cast<int32_t>(offsetof(PlayerOneAxisAction_t2138578798, ___negativeAction_18)); }
	inline PlayerAction_t3117799861 * get_negativeAction_18() const { return ___negativeAction_18; }
	inline PlayerAction_t3117799861 ** get_address_of_negativeAction_18() { return &___negativeAction_18; }
	inline void set_negativeAction_18(PlayerAction_t3117799861 * value)
	{
		___negativeAction_18 = value;
		Il2CppCodeGenWriteBarrier(&___negativeAction_18, value);
	}

	inline static int32_t get_offset_of_positiveAction_19() { return static_cast<int32_t>(offsetof(PlayerOneAxisAction_t2138578798, ___positiveAction_19)); }
	inline PlayerAction_t3117799861 * get_positiveAction_19() const { return ___positiveAction_19; }
	inline PlayerAction_t3117799861 ** get_address_of_positiveAction_19() { return &___positiveAction_19; }
	inline void set_positiveAction_19(PlayerAction_t3117799861 * value)
	{
		___positiveAction_19 = value;
		Il2CppCodeGenWriteBarrier(&___positiveAction_19, value);
	}

	inline static int32_t get_offset_of_LastInputType_20() { return static_cast<int32_t>(offsetof(PlayerOneAxisAction_t2138578798, ___LastInputType_20)); }
	inline int32_t get_LastInputType_20() const { return ___LastInputType_20; }
	inline int32_t* get_address_of_LastInputType_20() { return &___LastInputType_20; }
	inline void set_LastInputType_20(int32_t value)
	{
		___LastInputType_20 = value;
	}

	inline static int32_t get_offset_of_OnLastInputTypeChanged_21() { return static_cast<int32_t>(offsetof(PlayerOneAxisAction_t2138578798, ___OnLastInputTypeChanged_21)); }
	inline Action_1_t816497204 * get_OnLastInputTypeChanged_21() const { return ___OnLastInputTypeChanged_21; }
	inline Action_1_t816497204 ** get_address_of_OnLastInputTypeChanged_21() { return &___OnLastInputTypeChanged_21; }
	inline void set_OnLastInputTypeChanged_21(Action_1_t816497204 * value)
	{
		___OnLastInputTypeChanged_21 = value;
		Il2CppCodeGenWriteBarrier(&___OnLastInputTypeChanged_21, value);
	}

	inline static int32_t get_offset_of_U3CUserDataU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PlayerOneAxisAction_t2138578798, ___U3CUserDataU3Ek__BackingField_22)); }
	inline Il2CppObject * get_U3CUserDataU3Ek__BackingField_22() const { return ___U3CUserDataU3Ek__BackingField_22; }
	inline Il2CppObject ** get_address_of_U3CUserDataU3Ek__BackingField_22() { return &___U3CUserDataU3Ek__BackingField_22; }
	inline void set_U3CUserDataU3Ek__BackingField_22(Il2CppObject * value)
	{
		___U3CUserDataU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserDataU3Ek__BackingField_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
