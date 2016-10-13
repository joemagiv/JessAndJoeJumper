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
// System.Collections.Generic.List`1<InControl.InputControl>
struct List_1_t2912111169;
// InControl.InputControl
struct InputControl_t1543925617;
// System.String
struct String_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.InputControl>
struct ReadOnlyCollection_1_t3101003153;
// InControl.InputControl[]
struct InputControlU5BU5D_t4234205100;
// InControl.TwoAxisInputControl
struct TwoAxisInputControl_t2505665394;
// InControl.InputDevice/AnalogSnapshotEntry[]
struct AnalogSnapshotEntryU5BU5D_t2631825444;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Guid2862754429.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputDevice
struct  InputDevice_t4071704914  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<InControl.InputControl> InControl.InputDevice::controls
	List_1_t2912111169 * ___controls_1;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickUp
	InputControl_t1543925617 * ___cachedLeftStickUp_2;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickDown
	InputControl_t1543925617 * ___cachedLeftStickDown_3;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickLeft
	InputControl_t1543925617 * ___cachedLeftStickLeft_4;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickRight
	InputControl_t1543925617 * ___cachedLeftStickRight_5;
	// InControl.InputControl InControl.InputDevice::cachedRightStickUp
	InputControl_t1543925617 * ___cachedRightStickUp_6;
	// InControl.InputControl InControl.InputDevice::cachedRightStickDown
	InputControl_t1543925617 * ___cachedRightStickDown_7;
	// InControl.InputControl InControl.InputDevice::cachedRightStickLeft
	InputControl_t1543925617 * ___cachedRightStickLeft_8;
	// InControl.InputControl InControl.InputDevice::cachedRightStickRight
	InputControl_t1543925617 * ___cachedRightStickRight_9;
	// InControl.InputControl InControl.InputDevice::cachedDPadUp
	InputControl_t1543925617 * ___cachedDPadUp_10;
	// InControl.InputControl InControl.InputDevice::cachedDPadDown
	InputControl_t1543925617 * ___cachedDPadDown_11;
	// InControl.InputControl InControl.InputDevice::cachedDPadLeft
	InputControl_t1543925617 * ___cachedDPadLeft_12;
	// InControl.InputControl InControl.InputDevice::cachedDPadRight
	InputControl_t1543925617 * ___cachedDPadRight_13;
	// InControl.InputControl InControl.InputDevice::cachedAction1
	InputControl_t1543925617 * ___cachedAction1_14;
	// InControl.InputControl InControl.InputDevice::cachedAction2
	InputControl_t1543925617 * ___cachedAction2_15;
	// InControl.InputControl InControl.InputDevice::cachedAction3
	InputControl_t1543925617 * ___cachedAction3_16;
	// InControl.InputControl InControl.InputDevice::cachedAction4
	InputControl_t1543925617 * ___cachedAction4_17;
	// InControl.InputControl InControl.InputDevice::cachedLeftTrigger
	InputControl_t1543925617 * ___cachedLeftTrigger_18;
	// InControl.InputControl InControl.InputDevice::cachedRightTrigger
	InputControl_t1543925617 * ___cachedRightTrigger_19;
	// InControl.InputControl InControl.InputDevice::cachedLeftBumper
	InputControl_t1543925617 * ___cachedLeftBumper_20;
	// InControl.InputControl InControl.InputDevice::cachedRightBumper
	InputControl_t1543925617 * ___cachedRightBumper_21;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickButton
	InputControl_t1543925617 * ___cachedLeftStickButton_22;
	// InControl.InputControl InControl.InputDevice::cachedRightStickButton
	InputControl_t1543925617 * ___cachedRightStickButton_23;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickX
	InputControl_t1543925617 * ___cachedLeftStickX_24;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickY
	InputControl_t1543925617 * ___cachedLeftStickY_25;
	// InControl.InputControl InControl.InputDevice::cachedRightStickX
	InputControl_t1543925617 * ___cachedRightStickX_26;
	// InControl.InputControl InControl.InputDevice::cachedRightStickY
	InputControl_t1543925617 * ___cachedRightStickY_27;
	// InControl.InputControl InControl.InputDevice::cachedDPadX
	InputControl_t1543925617 * ___cachedDPadX_28;
	// InControl.InputControl InControl.InputDevice::cachedDPadY
	InputControl_t1543925617 * ___cachedDPadY_29;
	// InControl.InputControl InControl.InputDevice::cachedCommand
	InputControl_t1543925617 * ___cachedCommand_30;
	// System.String InControl.InputDevice::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_31;
	// System.String InControl.InputDevice::<Meta>k__BackingField
	String_t* ___U3CMetaU3Ek__BackingField_32;
	// System.Int32 InControl.InputDevice::<SortOrder>k__BackingField
	int32_t ___U3CSortOrderU3Ek__BackingField_33;
	// System.Guid InControl.InputDevice::<GUID>k__BackingField
	Guid_t2862754429  ___U3CGUIDU3Ek__BackingField_34;
	// System.UInt64 InControl.InputDevice::<LastChangeTick>k__BackingField
	uint64_t ___U3CLastChangeTickU3Ek__BackingField_35;
	// System.Boolean InControl.InputDevice::<IsAttached>k__BackingField
	bool ___U3CIsAttachedU3Ek__BackingField_36;
	// System.Boolean InControl.InputDevice::<RawSticks>k__BackingField
	bool ___U3CRawSticksU3Ek__BackingField_37;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.InputControl> InControl.InputDevice::<Controls>k__BackingField
	ReadOnlyCollection_1_t3101003153 * ___U3CControlsU3Ek__BackingField_38;
	// InControl.InputControl[] InControl.InputDevice::<ControlsByTarget>k__BackingField
	InputControlU5BU5D_t4234205100* ___U3CControlsByTargetU3Ek__BackingField_39;
	// InControl.TwoAxisInputControl InControl.InputDevice::<LeftStick>k__BackingField
	TwoAxisInputControl_t2505665394 * ___U3CLeftStickU3Ek__BackingField_40;
	// InControl.TwoAxisInputControl InControl.InputDevice::<RightStick>k__BackingField
	TwoAxisInputControl_t2505665394 * ___U3CRightStickU3Ek__BackingField_41;
	// InControl.TwoAxisInputControl InControl.InputDevice::<DPad>k__BackingField
	TwoAxisInputControl_t2505665394 * ___U3CDPadU3Ek__BackingField_42;
	// InControl.InputDevice/AnalogSnapshotEntry[] InControl.InputDevice::<AnalogSnapshot>k__BackingField
	AnalogSnapshotEntryU5BU5D_t2631825444* ___U3CAnalogSnapshotU3Ek__BackingField_43;

public:
	inline static int32_t get_offset_of_controls_1() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___controls_1)); }
	inline List_1_t2912111169 * get_controls_1() const { return ___controls_1; }
	inline List_1_t2912111169 ** get_address_of_controls_1() { return &___controls_1; }
	inline void set_controls_1(List_1_t2912111169 * value)
	{
		___controls_1 = value;
		Il2CppCodeGenWriteBarrier(&___controls_1, value);
	}

	inline static int32_t get_offset_of_cachedLeftStickUp_2() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedLeftStickUp_2)); }
	inline InputControl_t1543925617 * get_cachedLeftStickUp_2() const { return ___cachedLeftStickUp_2; }
	inline InputControl_t1543925617 ** get_address_of_cachedLeftStickUp_2() { return &___cachedLeftStickUp_2; }
	inline void set_cachedLeftStickUp_2(InputControl_t1543925617 * value)
	{
		___cachedLeftStickUp_2 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftStickUp_2, value);
	}

	inline static int32_t get_offset_of_cachedLeftStickDown_3() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedLeftStickDown_3)); }
	inline InputControl_t1543925617 * get_cachedLeftStickDown_3() const { return ___cachedLeftStickDown_3; }
	inline InputControl_t1543925617 ** get_address_of_cachedLeftStickDown_3() { return &___cachedLeftStickDown_3; }
	inline void set_cachedLeftStickDown_3(InputControl_t1543925617 * value)
	{
		___cachedLeftStickDown_3 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftStickDown_3, value);
	}

	inline static int32_t get_offset_of_cachedLeftStickLeft_4() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedLeftStickLeft_4)); }
	inline InputControl_t1543925617 * get_cachedLeftStickLeft_4() const { return ___cachedLeftStickLeft_4; }
	inline InputControl_t1543925617 ** get_address_of_cachedLeftStickLeft_4() { return &___cachedLeftStickLeft_4; }
	inline void set_cachedLeftStickLeft_4(InputControl_t1543925617 * value)
	{
		___cachedLeftStickLeft_4 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftStickLeft_4, value);
	}

	inline static int32_t get_offset_of_cachedLeftStickRight_5() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedLeftStickRight_5)); }
	inline InputControl_t1543925617 * get_cachedLeftStickRight_5() const { return ___cachedLeftStickRight_5; }
	inline InputControl_t1543925617 ** get_address_of_cachedLeftStickRight_5() { return &___cachedLeftStickRight_5; }
	inline void set_cachedLeftStickRight_5(InputControl_t1543925617 * value)
	{
		___cachedLeftStickRight_5 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftStickRight_5, value);
	}

	inline static int32_t get_offset_of_cachedRightStickUp_6() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedRightStickUp_6)); }
	inline InputControl_t1543925617 * get_cachedRightStickUp_6() const { return ___cachedRightStickUp_6; }
	inline InputControl_t1543925617 ** get_address_of_cachedRightStickUp_6() { return &___cachedRightStickUp_6; }
	inline void set_cachedRightStickUp_6(InputControl_t1543925617 * value)
	{
		___cachedRightStickUp_6 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightStickUp_6, value);
	}

	inline static int32_t get_offset_of_cachedRightStickDown_7() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedRightStickDown_7)); }
	inline InputControl_t1543925617 * get_cachedRightStickDown_7() const { return ___cachedRightStickDown_7; }
	inline InputControl_t1543925617 ** get_address_of_cachedRightStickDown_7() { return &___cachedRightStickDown_7; }
	inline void set_cachedRightStickDown_7(InputControl_t1543925617 * value)
	{
		___cachedRightStickDown_7 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightStickDown_7, value);
	}

	inline static int32_t get_offset_of_cachedRightStickLeft_8() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedRightStickLeft_8)); }
	inline InputControl_t1543925617 * get_cachedRightStickLeft_8() const { return ___cachedRightStickLeft_8; }
	inline InputControl_t1543925617 ** get_address_of_cachedRightStickLeft_8() { return &___cachedRightStickLeft_8; }
	inline void set_cachedRightStickLeft_8(InputControl_t1543925617 * value)
	{
		___cachedRightStickLeft_8 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightStickLeft_8, value);
	}

	inline static int32_t get_offset_of_cachedRightStickRight_9() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedRightStickRight_9)); }
	inline InputControl_t1543925617 * get_cachedRightStickRight_9() const { return ___cachedRightStickRight_9; }
	inline InputControl_t1543925617 ** get_address_of_cachedRightStickRight_9() { return &___cachedRightStickRight_9; }
	inline void set_cachedRightStickRight_9(InputControl_t1543925617 * value)
	{
		___cachedRightStickRight_9 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightStickRight_9, value);
	}

	inline static int32_t get_offset_of_cachedDPadUp_10() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedDPadUp_10)); }
	inline InputControl_t1543925617 * get_cachedDPadUp_10() const { return ___cachedDPadUp_10; }
	inline InputControl_t1543925617 ** get_address_of_cachedDPadUp_10() { return &___cachedDPadUp_10; }
	inline void set_cachedDPadUp_10(InputControl_t1543925617 * value)
	{
		___cachedDPadUp_10 = value;
		Il2CppCodeGenWriteBarrier(&___cachedDPadUp_10, value);
	}

	inline static int32_t get_offset_of_cachedDPadDown_11() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedDPadDown_11)); }
	inline InputControl_t1543925617 * get_cachedDPadDown_11() const { return ___cachedDPadDown_11; }
	inline InputControl_t1543925617 ** get_address_of_cachedDPadDown_11() { return &___cachedDPadDown_11; }
	inline void set_cachedDPadDown_11(InputControl_t1543925617 * value)
	{
		___cachedDPadDown_11 = value;
		Il2CppCodeGenWriteBarrier(&___cachedDPadDown_11, value);
	}

	inline static int32_t get_offset_of_cachedDPadLeft_12() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedDPadLeft_12)); }
	inline InputControl_t1543925617 * get_cachedDPadLeft_12() const { return ___cachedDPadLeft_12; }
	inline InputControl_t1543925617 ** get_address_of_cachedDPadLeft_12() { return &___cachedDPadLeft_12; }
	inline void set_cachedDPadLeft_12(InputControl_t1543925617 * value)
	{
		___cachedDPadLeft_12 = value;
		Il2CppCodeGenWriteBarrier(&___cachedDPadLeft_12, value);
	}

	inline static int32_t get_offset_of_cachedDPadRight_13() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedDPadRight_13)); }
	inline InputControl_t1543925617 * get_cachedDPadRight_13() const { return ___cachedDPadRight_13; }
	inline InputControl_t1543925617 ** get_address_of_cachedDPadRight_13() { return &___cachedDPadRight_13; }
	inline void set_cachedDPadRight_13(InputControl_t1543925617 * value)
	{
		___cachedDPadRight_13 = value;
		Il2CppCodeGenWriteBarrier(&___cachedDPadRight_13, value);
	}

	inline static int32_t get_offset_of_cachedAction1_14() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedAction1_14)); }
	inline InputControl_t1543925617 * get_cachedAction1_14() const { return ___cachedAction1_14; }
	inline InputControl_t1543925617 ** get_address_of_cachedAction1_14() { return &___cachedAction1_14; }
	inline void set_cachedAction1_14(InputControl_t1543925617 * value)
	{
		___cachedAction1_14 = value;
		Il2CppCodeGenWriteBarrier(&___cachedAction1_14, value);
	}

	inline static int32_t get_offset_of_cachedAction2_15() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedAction2_15)); }
	inline InputControl_t1543925617 * get_cachedAction2_15() const { return ___cachedAction2_15; }
	inline InputControl_t1543925617 ** get_address_of_cachedAction2_15() { return &___cachedAction2_15; }
	inline void set_cachedAction2_15(InputControl_t1543925617 * value)
	{
		___cachedAction2_15 = value;
		Il2CppCodeGenWriteBarrier(&___cachedAction2_15, value);
	}

	inline static int32_t get_offset_of_cachedAction3_16() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedAction3_16)); }
	inline InputControl_t1543925617 * get_cachedAction3_16() const { return ___cachedAction3_16; }
	inline InputControl_t1543925617 ** get_address_of_cachedAction3_16() { return &___cachedAction3_16; }
	inline void set_cachedAction3_16(InputControl_t1543925617 * value)
	{
		___cachedAction3_16 = value;
		Il2CppCodeGenWriteBarrier(&___cachedAction3_16, value);
	}

	inline static int32_t get_offset_of_cachedAction4_17() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedAction4_17)); }
	inline InputControl_t1543925617 * get_cachedAction4_17() const { return ___cachedAction4_17; }
	inline InputControl_t1543925617 ** get_address_of_cachedAction4_17() { return &___cachedAction4_17; }
	inline void set_cachedAction4_17(InputControl_t1543925617 * value)
	{
		___cachedAction4_17 = value;
		Il2CppCodeGenWriteBarrier(&___cachedAction4_17, value);
	}

	inline static int32_t get_offset_of_cachedLeftTrigger_18() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedLeftTrigger_18)); }
	inline InputControl_t1543925617 * get_cachedLeftTrigger_18() const { return ___cachedLeftTrigger_18; }
	inline InputControl_t1543925617 ** get_address_of_cachedLeftTrigger_18() { return &___cachedLeftTrigger_18; }
	inline void set_cachedLeftTrigger_18(InputControl_t1543925617 * value)
	{
		___cachedLeftTrigger_18 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftTrigger_18, value);
	}

	inline static int32_t get_offset_of_cachedRightTrigger_19() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedRightTrigger_19)); }
	inline InputControl_t1543925617 * get_cachedRightTrigger_19() const { return ___cachedRightTrigger_19; }
	inline InputControl_t1543925617 ** get_address_of_cachedRightTrigger_19() { return &___cachedRightTrigger_19; }
	inline void set_cachedRightTrigger_19(InputControl_t1543925617 * value)
	{
		___cachedRightTrigger_19 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightTrigger_19, value);
	}

	inline static int32_t get_offset_of_cachedLeftBumper_20() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedLeftBumper_20)); }
	inline InputControl_t1543925617 * get_cachedLeftBumper_20() const { return ___cachedLeftBumper_20; }
	inline InputControl_t1543925617 ** get_address_of_cachedLeftBumper_20() { return &___cachedLeftBumper_20; }
	inline void set_cachedLeftBumper_20(InputControl_t1543925617 * value)
	{
		___cachedLeftBumper_20 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftBumper_20, value);
	}

	inline static int32_t get_offset_of_cachedRightBumper_21() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedRightBumper_21)); }
	inline InputControl_t1543925617 * get_cachedRightBumper_21() const { return ___cachedRightBumper_21; }
	inline InputControl_t1543925617 ** get_address_of_cachedRightBumper_21() { return &___cachedRightBumper_21; }
	inline void set_cachedRightBumper_21(InputControl_t1543925617 * value)
	{
		___cachedRightBumper_21 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightBumper_21, value);
	}

	inline static int32_t get_offset_of_cachedLeftStickButton_22() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedLeftStickButton_22)); }
	inline InputControl_t1543925617 * get_cachedLeftStickButton_22() const { return ___cachedLeftStickButton_22; }
	inline InputControl_t1543925617 ** get_address_of_cachedLeftStickButton_22() { return &___cachedLeftStickButton_22; }
	inline void set_cachedLeftStickButton_22(InputControl_t1543925617 * value)
	{
		___cachedLeftStickButton_22 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftStickButton_22, value);
	}

	inline static int32_t get_offset_of_cachedRightStickButton_23() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedRightStickButton_23)); }
	inline InputControl_t1543925617 * get_cachedRightStickButton_23() const { return ___cachedRightStickButton_23; }
	inline InputControl_t1543925617 ** get_address_of_cachedRightStickButton_23() { return &___cachedRightStickButton_23; }
	inline void set_cachedRightStickButton_23(InputControl_t1543925617 * value)
	{
		___cachedRightStickButton_23 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightStickButton_23, value);
	}

	inline static int32_t get_offset_of_cachedLeftStickX_24() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedLeftStickX_24)); }
	inline InputControl_t1543925617 * get_cachedLeftStickX_24() const { return ___cachedLeftStickX_24; }
	inline InputControl_t1543925617 ** get_address_of_cachedLeftStickX_24() { return &___cachedLeftStickX_24; }
	inline void set_cachedLeftStickX_24(InputControl_t1543925617 * value)
	{
		___cachedLeftStickX_24 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftStickX_24, value);
	}

	inline static int32_t get_offset_of_cachedLeftStickY_25() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedLeftStickY_25)); }
	inline InputControl_t1543925617 * get_cachedLeftStickY_25() const { return ___cachedLeftStickY_25; }
	inline InputControl_t1543925617 ** get_address_of_cachedLeftStickY_25() { return &___cachedLeftStickY_25; }
	inline void set_cachedLeftStickY_25(InputControl_t1543925617 * value)
	{
		___cachedLeftStickY_25 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftStickY_25, value);
	}

	inline static int32_t get_offset_of_cachedRightStickX_26() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedRightStickX_26)); }
	inline InputControl_t1543925617 * get_cachedRightStickX_26() const { return ___cachedRightStickX_26; }
	inline InputControl_t1543925617 ** get_address_of_cachedRightStickX_26() { return &___cachedRightStickX_26; }
	inline void set_cachedRightStickX_26(InputControl_t1543925617 * value)
	{
		___cachedRightStickX_26 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightStickX_26, value);
	}

	inline static int32_t get_offset_of_cachedRightStickY_27() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedRightStickY_27)); }
	inline InputControl_t1543925617 * get_cachedRightStickY_27() const { return ___cachedRightStickY_27; }
	inline InputControl_t1543925617 ** get_address_of_cachedRightStickY_27() { return &___cachedRightStickY_27; }
	inline void set_cachedRightStickY_27(InputControl_t1543925617 * value)
	{
		___cachedRightStickY_27 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightStickY_27, value);
	}

	inline static int32_t get_offset_of_cachedDPadX_28() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedDPadX_28)); }
	inline InputControl_t1543925617 * get_cachedDPadX_28() const { return ___cachedDPadX_28; }
	inline InputControl_t1543925617 ** get_address_of_cachedDPadX_28() { return &___cachedDPadX_28; }
	inline void set_cachedDPadX_28(InputControl_t1543925617 * value)
	{
		___cachedDPadX_28 = value;
		Il2CppCodeGenWriteBarrier(&___cachedDPadX_28, value);
	}

	inline static int32_t get_offset_of_cachedDPadY_29() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedDPadY_29)); }
	inline InputControl_t1543925617 * get_cachedDPadY_29() const { return ___cachedDPadY_29; }
	inline InputControl_t1543925617 ** get_address_of_cachedDPadY_29() { return &___cachedDPadY_29; }
	inline void set_cachedDPadY_29(InputControl_t1543925617 * value)
	{
		___cachedDPadY_29 = value;
		Il2CppCodeGenWriteBarrier(&___cachedDPadY_29, value);
	}

	inline static int32_t get_offset_of_cachedCommand_30() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___cachedCommand_30)); }
	inline InputControl_t1543925617 * get_cachedCommand_30() const { return ___cachedCommand_30; }
	inline InputControl_t1543925617 ** get_address_of_cachedCommand_30() { return &___cachedCommand_30; }
	inline void set_cachedCommand_30(InputControl_t1543925617 * value)
	{
		___cachedCommand_30 = value;
		Il2CppCodeGenWriteBarrier(&___cachedCommand_30, value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___U3CNameU3Ek__BackingField_31)); }
	inline String_t* get_U3CNameU3Ek__BackingField_31() const { return ___U3CNameU3Ek__BackingField_31; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_31() { return &___U3CNameU3Ek__BackingField_31; }
	inline void set_U3CNameU3Ek__BackingField_31(String_t* value)
	{
		___U3CNameU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_31, value);
	}

	inline static int32_t get_offset_of_U3CMetaU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___U3CMetaU3Ek__BackingField_32)); }
	inline String_t* get_U3CMetaU3Ek__BackingField_32() const { return ___U3CMetaU3Ek__BackingField_32; }
	inline String_t** get_address_of_U3CMetaU3Ek__BackingField_32() { return &___U3CMetaU3Ek__BackingField_32; }
	inline void set_U3CMetaU3Ek__BackingField_32(String_t* value)
	{
		___U3CMetaU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMetaU3Ek__BackingField_32, value);
	}

	inline static int32_t get_offset_of_U3CSortOrderU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___U3CSortOrderU3Ek__BackingField_33)); }
	inline int32_t get_U3CSortOrderU3Ek__BackingField_33() const { return ___U3CSortOrderU3Ek__BackingField_33; }
	inline int32_t* get_address_of_U3CSortOrderU3Ek__BackingField_33() { return &___U3CSortOrderU3Ek__BackingField_33; }
	inline void set_U3CSortOrderU3Ek__BackingField_33(int32_t value)
	{
		___U3CSortOrderU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CGUIDU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___U3CGUIDU3Ek__BackingField_34)); }
	inline Guid_t2862754429  get_U3CGUIDU3Ek__BackingField_34() const { return ___U3CGUIDU3Ek__BackingField_34; }
	inline Guid_t2862754429 * get_address_of_U3CGUIDU3Ek__BackingField_34() { return &___U3CGUIDU3Ek__BackingField_34; }
	inline void set_U3CGUIDU3Ek__BackingField_34(Guid_t2862754429  value)
	{
		___U3CGUIDU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CLastChangeTickU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___U3CLastChangeTickU3Ek__BackingField_35)); }
	inline uint64_t get_U3CLastChangeTickU3Ek__BackingField_35() const { return ___U3CLastChangeTickU3Ek__BackingField_35; }
	inline uint64_t* get_address_of_U3CLastChangeTickU3Ek__BackingField_35() { return &___U3CLastChangeTickU3Ek__BackingField_35; }
	inline void set_U3CLastChangeTickU3Ek__BackingField_35(uint64_t value)
	{
		___U3CLastChangeTickU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CIsAttachedU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___U3CIsAttachedU3Ek__BackingField_36)); }
	inline bool get_U3CIsAttachedU3Ek__BackingField_36() const { return ___U3CIsAttachedU3Ek__BackingField_36; }
	inline bool* get_address_of_U3CIsAttachedU3Ek__BackingField_36() { return &___U3CIsAttachedU3Ek__BackingField_36; }
	inline void set_U3CIsAttachedU3Ek__BackingField_36(bool value)
	{
		___U3CIsAttachedU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CRawSticksU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___U3CRawSticksU3Ek__BackingField_37)); }
	inline bool get_U3CRawSticksU3Ek__BackingField_37() const { return ___U3CRawSticksU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CRawSticksU3Ek__BackingField_37() { return &___U3CRawSticksU3Ek__BackingField_37; }
	inline void set_U3CRawSticksU3Ek__BackingField_37(bool value)
	{
		___U3CRawSticksU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CControlsU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___U3CControlsU3Ek__BackingField_38)); }
	inline ReadOnlyCollection_1_t3101003153 * get_U3CControlsU3Ek__BackingField_38() const { return ___U3CControlsU3Ek__BackingField_38; }
	inline ReadOnlyCollection_1_t3101003153 ** get_address_of_U3CControlsU3Ek__BackingField_38() { return &___U3CControlsU3Ek__BackingField_38; }
	inline void set_U3CControlsU3Ek__BackingField_38(ReadOnlyCollection_1_t3101003153 * value)
	{
		___U3CControlsU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier(&___U3CControlsU3Ek__BackingField_38, value);
	}

	inline static int32_t get_offset_of_U3CControlsByTargetU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___U3CControlsByTargetU3Ek__BackingField_39)); }
	inline InputControlU5BU5D_t4234205100* get_U3CControlsByTargetU3Ek__BackingField_39() const { return ___U3CControlsByTargetU3Ek__BackingField_39; }
	inline InputControlU5BU5D_t4234205100** get_address_of_U3CControlsByTargetU3Ek__BackingField_39() { return &___U3CControlsByTargetU3Ek__BackingField_39; }
	inline void set_U3CControlsByTargetU3Ek__BackingField_39(InputControlU5BU5D_t4234205100* value)
	{
		___U3CControlsByTargetU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier(&___U3CControlsByTargetU3Ek__BackingField_39, value);
	}

	inline static int32_t get_offset_of_U3CLeftStickU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___U3CLeftStickU3Ek__BackingField_40)); }
	inline TwoAxisInputControl_t2505665394 * get_U3CLeftStickU3Ek__BackingField_40() const { return ___U3CLeftStickU3Ek__BackingField_40; }
	inline TwoAxisInputControl_t2505665394 ** get_address_of_U3CLeftStickU3Ek__BackingField_40() { return &___U3CLeftStickU3Ek__BackingField_40; }
	inline void set_U3CLeftStickU3Ek__BackingField_40(TwoAxisInputControl_t2505665394 * value)
	{
		___U3CLeftStickU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLeftStickU3Ek__BackingField_40, value);
	}

	inline static int32_t get_offset_of_U3CRightStickU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___U3CRightStickU3Ek__BackingField_41)); }
	inline TwoAxisInputControl_t2505665394 * get_U3CRightStickU3Ek__BackingField_41() const { return ___U3CRightStickU3Ek__BackingField_41; }
	inline TwoAxisInputControl_t2505665394 ** get_address_of_U3CRightStickU3Ek__BackingField_41() { return &___U3CRightStickU3Ek__BackingField_41; }
	inline void set_U3CRightStickU3Ek__BackingField_41(TwoAxisInputControl_t2505665394 * value)
	{
		___U3CRightStickU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRightStickU3Ek__BackingField_41, value);
	}

	inline static int32_t get_offset_of_U3CDPadU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___U3CDPadU3Ek__BackingField_42)); }
	inline TwoAxisInputControl_t2505665394 * get_U3CDPadU3Ek__BackingField_42() const { return ___U3CDPadU3Ek__BackingField_42; }
	inline TwoAxisInputControl_t2505665394 ** get_address_of_U3CDPadU3Ek__BackingField_42() { return &___U3CDPadU3Ek__BackingField_42; }
	inline void set_U3CDPadU3Ek__BackingField_42(TwoAxisInputControl_t2505665394 * value)
	{
		___U3CDPadU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDPadU3Ek__BackingField_42, value);
	}

	inline static int32_t get_offset_of_U3CAnalogSnapshotU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914, ___U3CAnalogSnapshotU3Ek__BackingField_43)); }
	inline AnalogSnapshotEntryU5BU5D_t2631825444* get_U3CAnalogSnapshotU3Ek__BackingField_43() const { return ___U3CAnalogSnapshotU3Ek__BackingField_43; }
	inline AnalogSnapshotEntryU5BU5D_t2631825444** get_address_of_U3CAnalogSnapshotU3Ek__BackingField_43() { return &___U3CAnalogSnapshotU3Ek__BackingField_43; }
	inline void set_U3CAnalogSnapshotU3Ek__BackingField_43(AnalogSnapshotEntryU5BU5D_t2631825444* value)
	{
		___U3CAnalogSnapshotU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAnalogSnapshotU3Ek__BackingField_43, value);
	}
};

struct InputDevice_t4071704914_StaticFields
{
public:
	// InControl.InputDevice InControl.InputDevice::Null
	InputDevice_t4071704914 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(InputDevice_t4071704914_StaticFields, ___Null_0)); }
	inline InputDevice_t4071704914 * get_Null_0() const { return ___Null_0; }
	inline InputDevice_t4071704914 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(InputDevice_t4071704914 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier(&___Null_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
