#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<InControl.PlayerAction>
struct List_1_t191018117;
// System.Collections.Generic.List`1<InControl.PlayerOneAxisAction>
struct List_1_t3506764350;
// System.Collections.Generic.List`1<InControl.PlayerTwoAxisAction>
struct List_1_t2411849380;
// System.Collections.Generic.Dictionary`2<System.String,InControl.PlayerAction>
struct Dictionary_2_t3938218231;
// InControl.BindingListenOptions
struct BindingListenOptions_t2027175824;
// InControl.PlayerAction
struct PlayerAction_t3117799861;
// System.Action`1<InControl.BindingSourceType>
struct Action_1_t816497204;
// InControl.InputDevice
struct InputDevice_t4071704914;
// System.Collections.Generic.List`1<InControl.InputDevice>
struct List_1_t1144923170;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.PlayerAction>
struct ReadOnlyCollection_1_t379910101;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_InControl_BindingSourceType420681068.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayerActionSet
struct  PlayerActionSet_t2670622205  : public Il2CppObject
{
public:
	// InControl.BindingSourceType InControl.PlayerActionSet::LastInputType
	int32_t ___LastInputType_0;
	// System.UInt64 InControl.PlayerActionSet::LastInputTypeChangedTick
	uint64_t ___LastInputTypeChangedTick_1;
	// System.Collections.Generic.List`1<InControl.PlayerAction> InControl.PlayerActionSet::actions
	List_1_t191018117 * ___actions_2;
	// System.Collections.Generic.List`1<InControl.PlayerOneAxisAction> InControl.PlayerActionSet::oneAxisActions
	List_1_t3506764350 * ___oneAxisActions_3;
	// System.Collections.Generic.List`1<InControl.PlayerTwoAxisAction> InControl.PlayerActionSet::twoAxisActions
	List_1_t2411849380 * ___twoAxisActions_4;
	// System.Collections.Generic.Dictionary`2<System.String,InControl.PlayerAction> InControl.PlayerActionSet::actionsByName
	Dictionary_2_t3938218231 * ___actionsByName_5;
	// InControl.BindingListenOptions InControl.PlayerActionSet::listenOptions
	BindingListenOptions_t2027175824 * ___listenOptions_6;
	// InControl.PlayerAction InControl.PlayerActionSet::listenWithAction
	PlayerAction_t3117799861 * ___listenWithAction_7;
	// System.Action`1<InControl.BindingSourceType> InControl.PlayerActionSet::OnLastInputTypeChanged
	Action_1_t816497204 * ___OnLastInputTypeChanged_8;
	// InControl.InputDevice InControl.PlayerActionSet::<Device>k__BackingField
	InputDevice_t4071704914 * ___U3CDeviceU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<InControl.InputDevice> InControl.PlayerActionSet::<IncludeDevices>k__BackingField
	List_1_t1144923170 * ___U3CIncludeDevicesU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<InControl.InputDevice> InControl.PlayerActionSet::<ExcludeDevices>k__BackingField
	List_1_t1144923170 * ___U3CExcludeDevicesU3Ek__BackingField_11;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.PlayerAction> InControl.PlayerActionSet::<Actions>k__BackingField
	ReadOnlyCollection_1_t379910101 * ___U3CActionsU3Ek__BackingField_12;
	// System.UInt64 InControl.PlayerActionSet::<UpdateTick>k__BackingField
	uint64_t ___U3CUpdateTickU3Ek__BackingField_13;
	// System.Boolean InControl.PlayerActionSet::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_14;
	// System.Object InControl.PlayerActionSet::<UserData>k__BackingField
	Il2CppObject * ___U3CUserDataU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_LastInputType_0() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2670622205, ___LastInputType_0)); }
	inline int32_t get_LastInputType_0() const { return ___LastInputType_0; }
	inline int32_t* get_address_of_LastInputType_0() { return &___LastInputType_0; }
	inline void set_LastInputType_0(int32_t value)
	{
		___LastInputType_0 = value;
	}

	inline static int32_t get_offset_of_LastInputTypeChangedTick_1() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2670622205, ___LastInputTypeChangedTick_1)); }
	inline uint64_t get_LastInputTypeChangedTick_1() const { return ___LastInputTypeChangedTick_1; }
	inline uint64_t* get_address_of_LastInputTypeChangedTick_1() { return &___LastInputTypeChangedTick_1; }
	inline void set_LastInputTypeChangedTick_1(uint64_t value)
	{
		___LastInputTypeChangedTick_1 = value;
	}

	inline static int32_t get_offset_of_actions_2() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2670622205, ___actions_2)); }
	inline List_1_t191018117 * get_actions_2() const { return ___actions_2; }
	inline List_1_t191018117 ** get_address_of_actions_2() { return &___actions_2; }
	inline void set_actions_2(List_1_t191018117 * value)
	{
		___actions_2 = value;
		Il2CppCodeGenWriteBarrier(&___actions_2, value);
	}

	inline static int32_t get_offset_of_oneAxisActions_3() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2670622205, ___oneAxisActions_3)); }
	inline List_1_t3506764350 * get_oneAxisActions_3() const { return ___oneAxisActions_3; }
	inline List_1_t3506764350 ** get_address_of_oneAxisActions_3() { return &___oneAxisActions_3; }
	inline void set_oneAxisActions_3(List_1_t3506764350 * value)
	{
		___oneAxisActions_3 = value;
		Il2CppCodeGenWriteBarrier(&___oneAxisActions_3, value);
	}

	inline static int32_t get_offset_of_twoAxisActions_4() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2670622205, ___twoAxisActions_4)); }
	inline List_1_t2411849380 * get_twoAxisActions_4() const { return ___twoAxisActions_4; }
	inline List_1_t2411849380 ** get_address_of_twoAxisActions_4() { return &___twoAxisActions_4; }
	inline void set_twoAxisActions_4(List_1_t2411849380 * value)
	{
		___twoAxisActions_4 = value;
		Il2CppCodeGenWriteBarrier(&___twoAxisActions_4, value);
	}

	inline static int32_t get_offset_of_actionsByName_5() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2670622205, ___actionsByName_5)); }
	inline Dictionary_2_t3938218231 * get_actionsByName_5() const { return ___actionsByName_5; }
	inline Dictionary_2_t3938218231 ** get_address_of_actionsByName_5() { return &___actionsByName_5; }
	inline void set_actionsByName_5(Dictionary_2_t3938218231 * value)
	{
		___actionsByName_5 = value;
		Il2CppCodeGenWriteBarrier(&___actionsByName_5, value);
	}

	inline static int32_t get_offset_of_listenOptions_6() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2670622205, ___listenOptions_6)); }
	inline BindingListenOptions_t2027175824 * get_listenOptions_6() const { return ___listenOptions_6; }
	inline BindingListenOptions_t2027175824 ** get_address_of_listenOptions_6() { return &___listenOptions_6; }
	inline void set_listenOptions_6(BindingListenOptions_t2027175824 * value)
	{
		___listenOptions_6 = value;
		Il2CppCodeGenWriteBarrier(&___listenOptions_6, value);
	}

	inline static int32_t get_offset_of_listenWithAction_7() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2670622205, ___listenWithAction_7)); }
	inline PlayerAction_t3117799861 * get_listenWithAction_7() const { return ___listenWithAction_7; }
	inline PlayerAction_t3117799861 ** get_address_of_listenWithAction_7() { return &___listenWithAction_7; }
	inline void set_listenWithAction_7(PlayerAction_t3117799861 * value)
	{
		___listenWithAction_7 = value;
		Il2CppCodeGenWriteBarrier(&___listenWithAction_7, value);
	}

	inline static int32_t get_offset_of_OnLastInputTypeChanged_8() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2670622205, ___OnLastInputTypeChanged_8)); }
	inline Action_1_t816497204 * get_OnLastInputTypeChanged_8() const { return ___OnLastInputTypeChanged_8; }
	inline Action_1_t816497204 ** get_address_of_OnLastInputTypeChanged_8() { return &___OnLastInputTypeChanged_8; }
	inline void set_OnLastInputTypeChanged_8(Action_1_t816497204 * value)
	{
		___OnLastInputTypeChanged_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnLastInputTypeChanged_8, value);
	}

	inline static int32_t get_offset_of_U3CDeviceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2670622205, ___U3CDeviceU3Ek__BackingField_9)); }
	inline InputDevice_t4071704914 * get_U3CDeviceU3Ek__BackingField_9() const { return ___U3CDeviceU3Ek__BackingField_9; }
	inline InputDevice_t4071704914 ** get_address_of_U3CDeviceU3Ek__BackingField_9() { return &___U3CDeviceU3Ek__BackingField_9; }
	inline void set_U3CDeviceU3Ek__BackingField_9(InputDevice_t4071704914 * value)
	{
		___U3CDeviceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDeviceU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CIncludeDevicesU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2670622205, ___U3CIncludeDevicesU3Ek__BackingField_10)); }
	inline List_1_t1144923170 * get_U3CIncludeDevicesU3Ek__BackingField_10() const { return ___U3CIncludeDevicesU3Ek__BackingField_10; }
	inline List_1_t1144923170 ** get_address_of_U3CIncludeDevicesU3Ek__BackingField_10() { return &___U3CIncludeDevicesU3Ek__BackingField_10; }
	inline void set_U3CIncludeDevicesU3Ek__BackingField_10(List_1_t1144923170 * value)
	{
		___U3CIncludeDevicesU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CIncludeDevicesU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CExcludeDevicesU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2670622205, ___U3CExcludeDevicesU3Ek__BackingField_11)); }
	inline List_1_t1144923170 * get_U3CExcludeDevicesU3Ek__BackingField_11() const { return ___U3CExcludeDevicesU3Ek__BackingField_11; }
	inline List_1_t1144923170 ** get_address_of_U3CExcludeDevicesU3Ek__BackingField_11() { return &___U3CExcludeDevicesU3Ek__BackingField_11; }
	inline void set_U3CExcludeDevicesU3Ek__BackingField_11(List_1_t1144923170 * value)
	{
		___U3CExcludeDevicesU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CExcludeDevicesU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CActionsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2670622205, ___U3CActionsU3Ek__BackingField_12)); }
	inline ReadOnlyCollection_1_t379910101 * get_U3CActionsU3Ek__BackingField_12() const { return ___U3CActionsU3Ek__BackingField_12; }
	inline ReadOnlyCollection_1_t379910101 ** get_address_of_U3CActionsU3Ek__BackingField_12() { return &___U3CActionsU3Ek__BackingField_12; }
	inline void set_U3CActionsU3Ek__BackingField_12(ReadOnlyCollection_1_t379910101 * value)
	{
		___U3CActionsU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CActionsU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_U3CUpdateTickU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2670622205, ___U3CUpdateTickU3Ek__BackingField_13)); }
	inline uint64_t get_U3CUpdateTickU3Ek__BackingField_13() const { return ___U3CUpdateTickU3Ek__BackingField_13; }
	inline uint64_t* get_address_of_U3CUpdateTickU3Ek__BackingField_13() { return &___U3CUpdateTickU3Ek__BackingField_13; }
	inline void set_U3CUpdateTickU3Ek__BackingField_13(uint64_t value)
	{
		___U3CUpdateTickU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2670622205, ___U3CEnabledU3Ek__BackingField_14)); }
	inline bool get_U3CEnabledU3Ek__BackingField_14() const { return ___U3CEnabledU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_14() { return &___U3CEnabledU3Ek__BackingField_14; }
	inline void set_U3CEnabledU3Ek__BackingField_14(bool value)
	{
		___U3CEnabledU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CUserDataU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2670622205, ___U3CUserDataU3Ek__BackingField_15)); }
	inline Il2CppObject * get_U3CUserDataU3Ek__BackingField_15() const { return ___U3CUserDataU3Ek__BackingField_15; }
	inline Il2CppObject ** get_address_of_U3CUserDataU3Ek__BackingField_15() { return &___U3CUserDataU3Ek__BackingField_15; }
	inline void set_U3CUserDataU3Ek__BackingField_15(Il2CppObject * value)
	{
		___U3CUserDataU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserDataU3Ek__BackingField_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
