#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<InControl.InputDeviceManager>
struct List_1_t107575387;
// System.Collections.Generic.Dictionary`2<System.Type,InControl.InputDeviceManager>
struct Dictionary_2_t3139779616;
// InControl.InputDevice
struct InputDevice_t4071704914;
// System.Collections.Generic.List`1<InControl.InputDevice>
struct List_1_t1144923170;
// System.Collections.Generic.List`1<InControl.PlayerActionSet>
struct List_1_t4038807757;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.InputDevice>
struct ReadOnlyCollection_1_t1333815154;
// System.Action
struct Action_t3771233898;
// System.Action`2<System.UInt64,System.Single>
struct Action_2_t1184472795;
// System.Action`1<InControl.InputDevice>
struct Action_1_t172553754;
// System.String
struct String_t;
// System.Comparison`1<InControl.InputDevice>
struct Comparison_1_t2788066101;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_InControl_VersionInfo1214656568.h"
#include "mscorlib_System_Nullable_1_gen1298783091.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputManager
struct  InputManager_t1427642817  : public Il2CppObject
{
public:

public:
};

struct InputManager_t1427642817_StaticFields
{
public:
	// InControl.VersionInfo InControl.InputManager::Version
	VersionInfo_t1214656568  ___Version_0;
	// System.Collections.Generic.List`1<InControl.InputDeviceManager> InControl.InputManager::deviceManagers
	List_1_t107575387 * ___deviceManagers_1;
	// System.Collections.Generic.Dictionary`2<System.Type,InControl.InputDeviceManager> InControl.InputManager::deviceManagerTable
	Dictionary_2_t3139779616 * ___deviceManagerTable_2;
	// InControl.InputDevice InControl.InputManager::activeDevice
	InputDevice_t4071704914 * ___activeDevice_3;
	// System.Collections.Generic.List`1<InControl.InputDevice> InControl.InputManager::devices
	List_1_t1144923170 * ___devices_4;
	// System.Collections.Generic.List`1<InControl.PlayerActionSet> InControl.InputManager::playerActionSets
	List_1_t4038807757 * ___playerActionSets_5;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.InputDevice> InControl.InputManager::Devices
	ReadOnlyCollection_1_t1333815154 * ___Devices_6;
	// System.Boolean InControl.InputManager::applicationIsFocused
	bool ___applicationIsFocused_7;
	// System.Single InControl.InputManager::initialTime
	float ___initialTime_8;
	// System.Single InControl.InputManager::currentTime
	float ___currentTime_9;
	// System.Single InControl.InputManager::lastUpdateTime
	float ___lastUpdateTime_10;
	// System.UInt64 InControl.InputManager::currentTick
	uint64_t ___currentTick_11;
	// System.Nullable`1<InControl.VersionInfo> InControl.InputManager::unityVersion
	Nullable_1_t1298783091  ___unityVersion_12;
	// System.Boolean InControl.InputManager::enabled
	bool ___enabled_13;
	// System.Action InControl.InputManager::OnSetup
	Action_t3771233898 * ___OnSetup_14;
	// System.Action`2<System.UInt64,System.Single> InControl.InputManager::OnUpdate
	Action_2_t1184472795 * ___OnUpdate_15;
	// System.Action InControl.InputManager::OnReset
	Action_t3771233898 * ___OnReset_16;
	// System.Action`1<InControl.InputDevice> InControl.InputManager::OnDeviceAttached
	Action_1_t172553754 * ___OnDeviceAttached_17;
	// System.Action`1<InControl.InputDevice> InControl.InputManager::OnDeviceDetached
	Action_1_t172553754 * ___OnDeviceDetached_18;
	// System.Action`1<InControl.InputDevice> InControl.InputManager::OnActiveDeviceChanged
	Action_1_t172553754 * ___OnActiveDeviceChanged_19;
	// System.Action`2<System.UInt64,System.Single> InControl.InputManager::OnUpdateDevices
	Action_2_t1184472795 * ___OnUpdateDevices_20;
	// System.Action`2<System.UInt64,System.Single> InControl.InputManager::OnCommitDevices
	Action_2_t1184472795 * ___OnCommitDevices_21;
	// System.Boolean InControl.InputManager::<CommandWasPressed>k__BackingField
	bool ___U3CCommandWasPressedU3Ek__BackingField_22;
	// System.Boolean InControl.InputManager::<InvertYAxis>k__BackingField
	bool ___U3CInvertYAxisU3Ek__BackingField_23;
	// System.Boolean InControl.InputManager::<IsSetup>k__BackingField
	bool ___U3CIsSetupU3Ek__BackingField_24;
	// System.String InControl.InputManager::<Platform>k__BackingField
	String_t* ___U3CPlatformU3Ek__BackingField_25;
	// System.Boolean InControl.InputManager::<SuspendInBackground>k__BackingField
	bool ___U3CSuspendInBackgroundU3Ek__BackingField_26;
	// System.Boolean InControl.InputManager::<EnableNativeInput>k__BackingField
	bool ___U3CEnableNativeInputU3Ek__BackingField_27;
	// System.Boolean InControl.InputManager::<EnableXInput>k__BackingField
	bool ___U3CEnableXInputU3Ek__BackingField_28;
	// System.UInt32 InControl.InputManager::<XInputUpdateRate>k__BackingField
	uint32_t ___U3CXInputUpdateRateU3Ek__BackingField_29;
	// System.UInt32 InControl.InputManager::<XInputBufferSize>k__BackingField
	uint32_t ___U3CXInputBufferSizeU3Ek__BackingField_30;
	// System.Boolean InControl.InputManager::<NativeInputEnableXInput>k__BackingField
	bool ___U3CNativeInputEnableXInputU3Ek__BackingField_31;
	// System.Boolean InControl.InputManager::<NativeInputPreventSleep>k__BackingField
	bool ___U3CNativeInputPreventSleepU3Ek__BackingField_32;
	// System.UInt32 InControl.InputManager::<NativeInputUpdateRate>k__BackingField
	uint32_t ___U3CNativeInputUpdateRateU3Ek__BackingField_33;
	// System.Boolean InControl.InputManager::<EnableICade>k__BackingField
	bool ___U3CEnableICadeU3Ek__BackingField_34;
	// System.Comparison`1<InControl.InputDevice> InControl.InputManager::<>f__am$cache23
	Comparison_1_t2788066101 * ___U3CU3Ef__amU24cache23_35;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___Version_0)); }
	inline VersionInfo_t1214656568  get_Version_0() const { return ___Version_0; }
	inline VersionInfo_t1214656568 * get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(VersionInfo_t1214656568  value)
	{
		___Version_0 = value;
	}

	inline static int32_t get_offset_of_deviceManagers_1() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___deviceManagers_1)); }
	inline List_1_t107575387 * get_deviceManagers_1() const { return ___deviceManagers_1; }
	inline List_1_t107575387 ** get_address_of_deviceManagers_1() { return &___deviceManagers_1; }
	inline void set_deviceManagers_1(List_1_t107575387 * value)
	{
		___deviceManagers_1 = value;
		Il2CppCodeGenWriteBarrier(&___deviceManagers_1, value);
	}

	inline static int32_t get_offset_of_deviceManagerTable_2() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___deviceManagerTable_2)); }
	inline Dictionary_2_t3139779616 * get_deviceManagerTable_2() const { return ___deviceManagerTable_2; }
	inline Dictionary_2_t3139779616 ** get_address_of_deviceManagerTable_2() { return &___deviceManagerTable_2; }
	inline void set_deviceManagerTable_2(Dictionary_2_t3139779616 * value)
	{
		___deviceManagerTable_2 = value;
		Il2CppCodeGenWriteBarrier(&___deviceManagerTable_2, value);
	}

	inline static int32_t get_offset_of_activeDevice_3() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___activeDevice_3)); }
	inline InputDevice_t4071704914 * get_activeDevice_3() const { return ___activeDevice_3; }
	inline InputDevice_t4071704914 ** get_address_of_activeDevice_3() { return &___activeDevice_3; }
	inline void set_activeDevice_3(InputDevice_t4071704914 * value)
	{
		___activeDevice_3 = value;
		Il2CppCodeGenWriteBarrier(&___activeDevice_3, value);
	}

	inline static int32_t get_offset_of_devices_4() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___devices_4)); }
	inline List_1_t1144923170 * get_devices_4() const { return ___devices_4; }
	inline List_1_t1144923170 ** get_address_of_devices_4() { return &___devices_4; }
	inline void set_devices_4(List_1_t1144923170 * value)
	{
		___devices_4 = value;
		Il2CppCodeGenWriteBarrier(&___devices_4, value);
	}

	inline static int32_t get_offset_of_playerActionSets_5() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___playerActionSets_5)); }
	inline List_1_t4038807757 * get_playerActionSets_5() const { return ___playerActionSets_5; }
	inline List_1_t4038807757 ** get_address_of_playerActionSets_5() { return &___playerActionSets_5; }
	inline void set_playerActionSets_5(List_1_t4038807757 * value)
	{
		___playerActionSets_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerActionSets_5, value);
	}

	inline static int32_t get_offset_of_Devices_6() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___Devices_6)); }
	inline ReadOnlyCollection_1_t1333815154 * get_Devices_6() const { return ___Devices_6; }
	inline ReadOnlyCollection_1_t1333815154 ** get_address_of_Devices_6() { return &___Devices_6; }
	inline void set_Devices_6(ReadOnlyCollection_1_t1333815154 * value)
	{
		___Devices_6 = value;
		Il2CppCodeGenWriteBarrier(&___Devices_6, value);
	}

	inline static int32_t get_offset_of_applicationIsFocused_7() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___applicationIsFocused_7)); }
	inline bool get_applicationIsFocused_7() const { return ___applicationIsFocused_7; }
	inline bool* get_address_of_applicationIsFocused_7() { return &___applicationIsFocused_7; }
	inline void set_applicationIsFocused_7(bool value)
	{
		___applicationIsFocused_7 = value;
	}

	inline static int32_t get_offset_of_initialTime_8() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___initialTime_8)); }
	inline float get_initialTime_8() const { return ___initialTime_8; }
	inline float* get_address_of_initialTime_8() { return &___initialTime_8; }
	inline void set_initialTime_8(float value)
	{
		___initialTime_8 = value;
	}

	inline static int32_t get_offset_of_currentTime_9() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___currentTime_9)); }
	inline float get_currentTime_9() const { return ___currentTime_9; }
	inline float* get_address_of_currentTime_9() { return &___currentTime_9; }
	inline void set_currentTime_9(float value)
	{
		___currentTime_9 = value;
	}

	inline static int32_t get_offset_of_lastUpdateTime_10() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___lastUpdateTime_10)); }
	inline float get_lastUpdateTime_10() const { return ___lastUpdateTime_10; }
	inline float* get_address_of_lastUpdateTime_10() { return &___lastUpdateTime_10; }
	inline void set_lastUpdateTime_10(float value)
	{
		___lastUpdateTime_10 = value;
	}

	inline static int32_t get_offset_of_currentTick_11() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___currentTick_11)); }
	inline uint64_t get_currentTick_11() const { return ___currentTick_11; }
	inline uint64_t* get_address_of_currentTick_11() { return &___currentTick_11; }
	inline void set_currentTick_11(uint64_t value)
	{
		___currentTick_11 = value;
	}

	inline static int32_t get_offset_of_unityVersion_12() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___unityVersion_12)); }
	inline Nullable_1_t1298783091  get_unityVersion_12() const { return ___unityVersion_12; }
	inline Nullable_1_t1298783091 * get_address_of_unityVersion_12() { return &___unityVersion_12; }
	inline void set_unityVersion_12(Nullable_1_t1298783091  value)
	{
		___unityVersion_12 = value;
	}

	inline static int32_t get_offset_of_enabled_13() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___enabled_13)); }
	inline bool get_enabled_13() const { return ___enabled_13; }
	inline bool* get_address_of_enabled_13() { return &___enabled_13; }
	inline void set_enabled_13(bool value)
	{
		___enabled_13 = value;
	}

	inline static int32_t get_offset_of_OnSetup_14() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___OnSetup_14)); }
	inline Action_t3771233898 * get_OnSetup_14() const { return ___OnSetup_14; }
	inline Action_t3771233898 ** get_address_of_OnSetup_14() { return &___OnSetup_14; }
	inline void set_OnSetup_14(Action_t3771233898 * value)
	{
		___OnSetup_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnSetup_14, value);
	}

	inline static int32_t get_offset_of_OnUpdate_15() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___OnUpdate_15)); }
	inline Action_2_t1184472795 * get_OnUpdate_15() const { return ___OnUpdate_15; }
	inline Action_2_t1184472795 ** get_address_of_OnUpdate_15() { return &___OnUpdate_15; }
	inline void set_OnUpdate_15(Action_2_t1184472795 * value)
	{
		___OnUpdate_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnUpdate_15, value);
	}

	inline static int32_t get_offset_of_OnReset_16() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___OnReset_16)); }
	inline Action_t3771233898 * get_OnReset_16() const { return ___OnReset_16; }
	inline Action_t3771233898 ** get_address_of_OnReset_16() { return &___OnReset_16; }
	inline void set_OnReset_16(Action_t3771233898 * value)
	{
		___OnReset_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnReset_16, value);
	}

	inline static int32_t get_offset_of_OnDeviceAttached_17() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___OnDeviceAttached_17)); }
	inline Action_1_t172553754 * get_OnDeviceAttached_17() const { return ___OnDeviceAttached_17; }
	inline Action_1_t172553754 ** get_address_of_OnDeviceAttached_17() { return &___OnDeviceAttached_17; }
	inline void set_OnDeviceAttached_17(Action_1_t172553754 * value)
	{
		___OnDeviceAttached_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnDeviceAttached_17, value);
	}

	inline static int32_t get_offset_of_OnDeviceDetached_18() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___OnDeviceDetached_18)); }
	inline Action_1_t172553754 * get_OnDeviceDetached_18() const { return ___OnDeviceDetached_18; }
	inline Action_1_t172553754 ** get_address_of_OnDeviceDetached_18() { return &___OnDeviceDetached_18; }
	inline void set_OnDeviceDetached_18(Action_1_t172553754 * value)
	{
		___OnDeviceDetached_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnDeviceDetached_18, value);
	}

	inline static int32_t get_offset_of_OnActiveDeviceChanged_19() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___OnActiveDeviceChanged_19)); }
	inline Action_1_t172553754 * get_OnActiveDeviceChanged_19() const { return ___OnActiveDeviceChanged_19; }
	inline Action_1_t172553754 ** get_address_of_OnActiveDeviceChanged_19() { return &___OnActiveDeviceChanged_19; }
	inline void set_OnActiveDeviceChanged_19(Action_1_t172553754 * value)
	{
		___OnActiveDeviceChanged_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnActiveDeviceChanged_19, value);
	}

	inline static int32_t get_offset_of_OnUpdateDevices_20() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___OnUpdateDevices_20)); }
	inline Action_2_t1184472795 * get_OnUpdateDevices_20() const { return ___OnUpdateDevices_20; }
	inline Action_2_t1184472795 ** get_address_of_OnUpdateDevices_20() { return &___OnUpdateDevices_20; }
	inline void set_OnUpdateDevices_20(Action_2_t1184472795 * value)
	{
		___OnUpdateDevices_20 = value;
		Il2CppCodeGenWriteBarrier(&___OnUpdateDevices_20, value);
	}

	inline static int32_t get_offset_of_OnCommitDevices_21() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___OnCommitDevices_21)); }
	inline Action_2_t1184472795 * get_OnCommitDevices_21() const { return ___OnCommitDevices_21; }
	inline Action_2_t1184472795 ** get_address_of_OnCommitDevices_21() { return &___OnCommitDevices_21; }
	inline void set_OnCommitDevices_21(Action_2_t1184472795 * value)
	{
		___OnCommitDevices_21 = value;
		Il2CppCodeGenWriteBarrier(&___OnCommitDevices_21, value);
	}

	inline static int32_t get_offset_of_U3CCommandWasPressedU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___U3CCommandWasPressedU3Ek__BackingField_22)); }
	inline bool get_U3CCommandWasPressedU3Ek__BackingField_22() const { return ___U3CCommandWasPressedU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CCommandWasPressedU3Ek__BackingField_22() { return &___U3CCommandWasPressedU3Ek__BackingField_22; }
	inline void set_U3CCommandWasPressedU3Ek__BackingField_22(bool value)
	{
		___U3CCommandWasPressedU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CInvertYAxisU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___U3CInvertYAxisU3Ek__BackingField_23)); }
	inline bool get_U3CInvertYAxisU3Ek__BackingField_23() const { return ___U3CInvertYAxisU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CInvertYAxisU3Ek__BackingField_23() { return &___U3CInvertYAxisU3Ek__BackingField_23; }
	inline void set_U3CInvertYAxisU3Ek__BackingField_23(bool value)
	{
		___U3CInvertYAxisU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CIsSetupU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___U3CIsSetupU3Ek__BackingField_24)); }
	inline bool get_U3CIsSetupU3Ek__BackingField_24() const { return ___U3CIsSetupU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CIsSetupU3Ek__BackingField_24() { return &___U3CIsSetupU3Ek__BackingField_24; }
	inline void set_U3CIsSetupU3Ek__BackingField_24(bool value)
	{
		___U3CIsSetupU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CPlatformU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___U3CPlatformU3Ek__BackingField_25)); }
	inline String_t* get_U3CPlatformU3Ek__BackingField_25() const { return ___U3CPlatformU3Ek__BackingField_25; }
	inline String_t** get_address_of_U3CPlatformU3Ek__BackingField_25() { return &___U3CPlatformU3Ek__BackingField_25; }
	inline void set_U3CPlatformU3Ek__BackingField_25(String_t* value)
	{
		___U3CPlatformU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPlatformU3Ek__BackingField_25, value);
	}

	inline static int32_t get_offset_of_U3CSuspendInBackgroundU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___U3CSuspendInBackgroundU3Ek__BackingField_26)); }
	inline bool get_U3CSuspendInBackgroundU3Ek__BackingField_26() const { return ___U3CSuspendInBackgroundU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CSuspendInBackgroundU3Ek__BackingField_26() { return &___U3CSuspendInBackgroundU3Ek__BackingField_26; }
	inline void set_U3CSuspendInBackgroundU3Ek__BackingField_26(bool value)
	{
		___U3CSuspendInBackgroundU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CEnableNativeInputU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___U3CEnableNativeInputU3Ek__BackingField_27)); }
	inline bool get_U3CEnableNativeInputU3Ek__BackingField_27() const { return ___U3CEnableNativeInputU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CEnableNativeInputU3Ek__BackingField_27() { return &___U3CEnableNativeInputU3Ek__BackingField_27; }
	inline void set_U3CEnableNativeInputU3Ek__BackingField_27(bool value)
	{
		___U3CEnableNativeInputU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CEnableXInputU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___U3CEnableXInputU3Ek__BackingField_28)); }
	inline bool get_U3CEnableXInputU3Ek__BackingField_28() const { return ___U3CEnableXInputU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CEnableXInputU3Ek__BackingField_28() { return &___U3CEnableXInputU3Ek__BackingField_28; }
	inline void set_U3CEnableXInputU3Ek__BackingField_28(bool value)
	{
		___U3CEnableXInputU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CXInputUpdateRateU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___U3CXInputUpdateRateU3Ek__BackingField_29)); }
	inline uint32_t get_U3CXInputUpdateRateU3Ek__BackingField_29() const { return ___U3CXInputUpdateRateU3Ek__BackingField_29; }
	inline uint32_t* get_address_of_U3CXInputUpdateRateU3Ek__BackingField_29() { return &___U3CXInputUpdateRateU3Ek__BackingField_29; }
	inline void set_U3CXInputUpdateRateU3Ek__BackingField_29(uint32_t value)
	{
		___U3CXInputUpdateRateU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CXInputBufferSizeU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___U3CXInputBufferSizeU3Ek__BackingField_30)); }
	inline uint32_t get_U3CXInputBufferSizeU3Ek__BackingField_30() const { return ___U3CXInputBufferSizeU3Ek__BackingField_30; }
	inline uint32_t* get_address_of_U3CXInputBufferSizeU3Ek__BackingField_30() { return &___U3CXInputBufferSizeU3Ek__BackingField_30; }
	inline void set_U3CXInputBufferSizeU3Ek__BackingField_30(uint32_t value)
	{
		___U3CXInputBufferSizeU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CNativeInputEnableXInputU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___U3CNativeInputEnableXInputU3Ek__BackingField_31)); }
	inline bool get_U3CNativeInputEnableXInputU3Ek__BackingField_31() const { return ___U3CNativeInputEnableXInputU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CNativeInputEnableXInputU3Ek__BackingField_31() { return &___U3CNativeInputEnableXInputU3Ek__BackingField_31; }
	inline void set_U3CNativeInputEnableXInputU3Ek__BackingField_31(bool value)
	{
		___U3CNativeInputEnableXInputU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CNativeInputPreventSleepU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___U3CNativeInputPreventSleepU3Ek__BackingField_32)); }
	inline bool get_U3CNativeInputPreventSleepU3Ek__BackingField_32() const { return ___U3CNativeInputPreventSleepU3Ek__BackingField_32; }
	inline bool* get_address_of_U3CNativeInputPreventSleepU3Ek__BackingField_32() { return &___U3CNativeInputPreventSleepU3Ek__BackingField_32; }
	inline void set_U3CNativeInputPreventSleepU3Ek__BackingField_32(bool value)
	{
		___U3CNativeInputPreventSleepU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CNativeInputUpdateRateU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___U3CNativeInputUpdateRateU3Ek__BackingField_33)); }
	inline uint32_t get_U3CNativeInputUpdateRateU3Ek__BackingField_33() const { return ___U3CNativeInputUpdateRateU3Ek__BackingField_33; }
	inline uint32_t* get_address_of_U3CNativeInputUpdateRateU3Ek__BackingField_33() { return &___U3CNativeInputUpdateRateU3Ek__BackingField_33; }
	inline void set_U3CNativeInputUpdateRateU3Ek__BackingField_33(uint32_t value)
	{
		___U3CNativeInputUpdateRateU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CEnableICadeU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___U3CEnableICadeU3Ek__BackingField_34)); }
	inline bool get_U3CEnableICadeU3Ek__BackingField_34() const { return ___U3CEnableICadeU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CEnableICadeU3Ek__BackingField_34() { return &___U3CEnableICadeU3Ek__BackingField_34; }
	inline void set_U3CEnableICadeU3Ek__BackingField_34(bool value)
	{
		___U3CEnableICadeU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache23_35() { return static_cast<int32_t>(offsetof(InputManager_t1427642817_StaticFields, ___U3CU3Ef__amU24cache23_35)); }
	inline Comparison_1_t2788066101 * get_U3CU3Ef__amU24cache23_35() const { return ___U3CU3Ef__amU24cache23_35; }
	inline Comparison_1_t2788066101 ** get_address_of_U3CU3Ef__amU24cache23_35() { return &___U3CU3Ef__amU24cache23_35; }
	inline void set_U3CU3Ef__amU24cache23_35(Comparison_1_t2788066101 * value)
	{
		___U3CU3Ef__amU24cache23_35 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache23_35, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
