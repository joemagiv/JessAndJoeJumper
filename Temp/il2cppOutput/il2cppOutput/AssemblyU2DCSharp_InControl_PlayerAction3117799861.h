#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InControl.BindingListenOptions
struct BindingListenOptions_t2027175824;
// System.Collections.Generic.List`1<InControl.BindingSource>
struct List_1_t3267682786;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.BindingSource>
struct ReadOnlyCollection_1_t3456574770;
// InControl.BindingSourceListener[]
struct BindingSourceListenerU5BU5D_t260954051;
// InControl.InputDevice
struct InputDevice_t4071704914;
// System.Action`1<InControl.BindingSourceType>
struct Action_1_t816497204;
// System.String
struct String_t;
// InControl.PlayerActionSet
struct PlayerActionSet_t2670622205;
// System.Object
struct Il2CppObject;

#include "AssemblyU2DCSharp_InControl_OneAxisInputControl2168578956.h"
#include "AssemblyU2DCSharp_InControl_BindingSourceType420681068.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayerAction
struct  PlayerAction_t3117799861  : public OneAxisInputControl_t2168578956
{
public:
	// InControl.BindingListenOptions InControl.PlayerAction::ListenOptions
	BindingListenOptions_t2027175824 * ___ListenOptions_18;
	// InControl.BindingSourceType InControl.PlayerAction::LastInputType
	int32_t ___LastInputType_19;
	// System.UInt64 InControl.PlayerAction::LastInputTypeChangedTick
	uint64_t ___LastInputTypeChangedTick_20;
	// System.Collections.Generic.List`1<InControl.BindingSource> InControl.PlayerAction::defaultBindings
	List_1_t3267682786 * ___defaultBindings_21;
	// System.Collections.Generic.List`1<InControl.BindingSource> InControl.PlayerAction::regularBindings
	List_1_t3267682786 * ___regularBindings_22;
	// System.Collections.Generic.List`1<InControl.BindingSource> InControl.PlayerAction::visibleBindings
	List_1_t3267682786 * ___visibleBindings_23;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.BindingSource> InControl.PlayerAction::bindings
	ReadOnlyCollection_1_t3456574770 * ___bindings_24;
	// InControl.InputDevice InControl.PlayerAction::device
	InputDevice_t4071704914 * ___device_26;
	// System.Action`1<InControl.BindingSourceType> InControl.PlayerAction::OnLastInputTypeChanged
	Action_1_t816497204 * ___OnLastInputTypeChanged_27;
	// System.String InControl.PlayerAction::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_28;
	// InControl.PlayerActionSet InControl.PlayerAction::<Owner>k__BackingField
	PlayerActionSet_t2670622205 * ___U3COwnerU3Ek__BackingField_29;
	// System.Object InControl.PlayerAction::<UserData>k__BackingField
	Il2CppObject * ___U3CUserDataU3Ek__BackingField_30;

public:
	inline static int32_t get_offset_of_ListenOptions_18() { return static_cast<int32_t>(offsetof(PlayerAction_t3117799861, ___ListenOptions_18)); }
	inline BindingListenOptions_t2027175824 * get_ListenOptions_18() const { return ___ListenOptions_18; }
	inline BindingListenOptions_t2027175824 ** get_address_of_ListenOptions_18() { return &___ListenOptions_18; }
	inline void set_ListenOptions_18(BindingListenOptions_t2027175824 * value)
	{
		___ListenOptions_18 = value;
		Il2CppCodeGenWriteBarrier(&___ListenOptions_18, value);
	}

	inline static int32_t get_offset_of_LastInputType_19() { return static_cast<int32_t>(offsetof(PlayerAction_t3117799861, ___LastInputType_19)); }
	inline int32_t get_LastInputType_19() const { return ___LastInputType_19; }
	inline int32_t* get_address_of_LastInputType_19() { return &___LastInputType_19; }
	inline void set_LastInputType_19(int32_t value)
	{
		___LastInputType_19 = value;
	}

	inline static int32_t get_offset_of_LastInputTypeChangedTick_20() { return static_cast<int32_t>(offsetof(PlayerAction_t3117799861, ___LastInputTypeChangedTick_20)); }
	inline uint64_t get_LastInputTypeChangedTick_20() const { return ___LastInputTypeChangedTick_20; }
	inline uint64_t* get_address_of_LastInputTypeChangedTick_20() { return &___LastInputTypeChangedTick_20; }
	inline void set_LastInputTypeChangedTick_20(uint64_t value)
	{
		___LastInputTypeChangedTick_20 = value;
	}

	inline static int32_t get_offset_of_defaultBindings_21() { return static_cast<int32_t>(offsetof(PlayerAction_t3117799861, ___defaultBindings_21)); }
	inline List_1_t3267682786 * get_defaultBindings_21() const { return ___defaultBindings_21; }
	inline List_1_t3267682786 ** get_address_of_defaultBindings_21() { return &___defaultBindings_21; }
	inline void set_defaultBindings_21(List_1_t3267682786 * value)
	{
		___defaultBindings_21 = value;
		Il2CppCodeGenWriteBarrier(&___defaultBindings_21, value);
	}

	inline static int32_t get_offset_of_regularBindings_22() { return static_cast<int32_t>(offsetof(PlayerAction_t3117799861, ___regularBindings_22)); }
	inline List_1_t3267682786 * get_regularBindings_22() const { return ___regularBindings_22; }
	inline List_1_t3267682786 ** get_address_of_regularBindings_22() { return &___regularBindings_22; }
	inline void set_regularBindings_22(List_1_t3267682786 * value)
	{
		___regularBindings_22 = value;
		Il2CppCodeGenWriteBarrier(&___regularBindings_22, value);
	}

	inline static int32_t get_offset_of_visibleBindings_23() { return static_cast<int32_t>(offsetof(PlayerAction_t3117799861, ___visibleBindings_23)); }
	inline List_1_t3267682786 * get_visibleBindings_23() const { return ___visibleBindings_23; }
	inline List_1_t3267682786 ** get_address_of_visibleBindings_23() { return &___visibleBindings_23; }
	inline void set_visibleBindings_23(List_1_t3267682786 * value)
	{
		___visibleBindings_23 = value;
		Il2CppCodeGenWriteBarrier(&___visibleBindings_23, value);
	}

	inline static int32_t get_offset_of_bindings_24() { return static_cast<int32_t>(offsetof(PlayerAction_t3117799861, ___bindings_24)); }
	inline ReadOnlyCollection_1_t3456574770 * get_bindings_24() const { return ___bindings_24; }
	inline ReadOnlyCollection_1_t3456574770 ** get_address_of_bindings_24() { return &___bindings_24; }
	inline void set_bindings_24(ReadOnlyCollection_1_t3456574770 * value)
	{
		___bindings_24 = value;
		Il2CppCodeGenWriteBarrier(&___bindings_24, value);
	}

	inline static int32_t get_offset_of_device_26() { return static_cast<int32_t>(offsetof(PlayerAction_t3117799861, ___device_26)); }
	inline InputDevice_t4071704914 * get_device_26() const { return ___device_26; }
	inline InputDevice_t4071704914 ** get_address_of_device_26() { return &___device_26; }
	inline void set_device_26(InputDevice_t4071704914 * value)
	{
		___device_26 = value;
		Il2CppCodeGenWriteBarrier(&___device_26, value);
	}

	inline static int32_t get_offset_of_OnLastInputTypeChanged_27() { return static_cast<int32_t>(offsetof(PlayerAction_t3117799861, ___OnLastInputTypeChanged_27)); }
	inline Action_1_t816497204 * get_OnLastInputTypeChanged_27() const { return ___OnLastInputTypeChanged_27; }
	inline Action_1_t816497204 ** get_address_of_OnLastInputTypeChanged_27() { return &___OnLastInputTypeChanged_27; }
	inline void set_OnLastInputTypeChanged_27(Action_1_t816497204 * value)
	{
		___OnLastInputTypeChanged_27 = value;
		Il2CppCodeGenWriteBarrier(&___OnLastInputTypeChanged_27, value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(PlayerAction_t3117799861, ___U3CNameU3Ek__BackingField_28)); }
	inline String_t* get_U3CNameU3Ek__BackingField_28() const { return ___U3CNameU3Ek__BackingField_28; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_28() { return &___U3CNameU3Ek__BackingField_28; }
	inline void set_U3CNameU3Ek__BackingField_28(String_t* value)
	{
		___U3CNameU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_28, value);
	}

	inline static int32_t get_offset_of_U3COwnerU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(PlayerAction_t3117799861, ___U3COwnerU3Ek__BackingField_29)); }
	inline PlayerActionSet_t2670622205 * get_U3COwnerU3Ek__BackingField_29() const { return ___U3COwnerU3Ek__BackingField_29; }
	inline PlayerActionSet_t2670622205 ** get_address_of_U3COwnerU3Ek__BackingField_29() { return &___U3COwnerU3Ek__BackingField_29; }
	inline void set_U3COwnerU3Ek__BackingField_29(PlayerActionSet_t2670622205 * value)
	{
		___U3COwnerU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3COwnerU3Ek__BackingField_29, value);
	}

	inline static int32_t get_offset_of_U3CUserDataU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PlayerAction_t3117799861, ___U3CUserDataU3Ek__BackingField_30)); }
	inline Il2CppObject * get_U3CUserDataU3Ek__BackingField_30() const { return ___U3CUserDataU3Ek__BackingField_30; }
	inline Il2CppObject ** get_address_of_U3CUserDataU3Ek__BackingField_30() { return &___U3CUserDataU3Ek__BackingField_30; }
	inline void set_U3CUserDataU3Ek__BackingField_30(Il2CppObject * value)
	{
		___U3CUserDataU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserDataU3Ek__BackingField_30, value);
	}
};

struct PlayerAction_t3117799861_StaticFields
{
public:
	// InControl.BindingSourceListener[] InControl.PlayerAction::bindingSourceListeners
	BindingSourceListenerU5BU5D_t260954051* ___bindingSourceListeners_25;

public:
	inline static int32_t get_offset_of_bindingSourceListeners_25() { return static_cast<int32_t>(offsetof(PlayerAction_t3117799861_StaticFields, ___bindingSourceListeners_25)); }
	inline BindingSourceListenerU5BU5D_t260954051* get_bindingSourceListeners_25() const { return ___bindingSourceListeners_25; }
	inline BindingSourceListenerU5BU5D_t260954051** get_address_of_bindingSourceListeners_25() { return &___bindingSourceListeners_25; }
	inline void set_bindingSourceListeners_25(BindingSourceListenerU5BU5D_t260954051* value)
	{
		___bindingSourceListeners_25 = value;
		Il2CppCodeGenWriteBarrier(&___bindingSourceListeners_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
