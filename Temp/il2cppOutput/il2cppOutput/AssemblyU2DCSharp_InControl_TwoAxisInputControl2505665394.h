#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InControl.TwoAxisInputControl
struct TwoAxisInputControl_t2505665394;
// InControl.OneAxisInputControl
struct OneAxisInputControl_t2168578956;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.TwoAxisInputControl
struct  TwoAxisInputControl_t2505665394  : public Il2CppObject
{
public:
	// System.Single InControl.TwoAxisInputControl::sensitivity
	float ___sensitivity_1;
	// System.Single InControl.TwoAxisInputControl::lowerDeadZone
	float ___lowerDeadZone_2;
	// System.Single InControl.TwoAxisInputControl::upperDeadZone
	float ___upperDeadZone_3;
	// System.Single InControl.TwoAxisInputControl::stateThreshold
	float ___stateThreshold_4;
	// System.Boolean InControl.TwoAxisInputControl::Raw
	bool ___Raw_5;
	// System.Boolean InControl.TwoAxisInputControl::thisState
	bool ___thisState_6;
	// System.Boolean InControl.TwoAxisInputControl::lastState
	bool ___lastState_7;
	// UnityEngine.Vector2 InControl.TwoAxisInputControl::thisValue
	Vector2_t4282066565  ___thisValue_8;
	// UnityEngine.Vector2 InControl.TwoAxisInputControl::lastValue
	Vector2_t4282066565  ___lastValue_9;
	// System.Boolean InControl.TwoAxisInputControl::clearInputState
	bool ___clearInputState_10;
	// System.Single InControl.TwoAxisInputControl::<X>k__BackingField
	float ___U3CXU3Ek__BackingField_11;
	// System.Single InControl.TwoAxisInputControl::<Y>k__BackingField
	float ___U3CYU3Ek__BackingField_12;
	// InControl.OneAxisInputControl InControl.TwoAxisInputControl::<Left>k__BackingField
	OneAxisInputControl_t2168578956 * ___U3CLeftU3Ek__BackingField_13;
	// InControl.OneAxisInputControl InControl.TwoAxisInputControl::<Right>k__BackingField
	OneAxisInputControl_t2168578956 * ___U3CRightU3Ek__BackingField_14;
	// InControl.OneAxisInputControl InControl.TwoAxisInputControl::<Up>k__BackingField
	OneAxisInputControl_t2168578956 * ___U3CUpU3Ek__BackingField_15;
	// InControl.OneAxisInputControl InControl.TwoAxisInputControl::<Down>k__BackingField
	OneAxisInputControl_t2168578956 * ___U3CDownU3Ek__BackingField_16;
	// System.UInt64 InControl.TwoAxisInputControl::<UpdateTick>k__BackingField
	uint64_t ___U3CUpdateTickU3Ek__BackingField_17;
	// System.Boolean InControl.TwoAxisInputControl::<HasChanged>k__BackingField
	bool ___U3CHasChangedU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_sensitivity_1() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___sensitivity_1)); }
	inline float get_sensitivity_1() const { return ___sensitivity_1; }
	inline float* get_address_of_sensitivity_1() { return &___sensitivity_1; }
	inline void set_sensitivity_1(float value)
	{
		___sensitivity_1 = value;
	}

	inline static int32_t get_offset_of_lowerDeadZone_2() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___lowerDeadZone_2)); }
	inline float get_lowerDeadZone_2() const { return ___lowerDeadZone_2; }
	inline float* get_address_of_lowerDeadZone_2() { return &___lowerDeadZone_2; }
	inline void set_lowerDeadZone_2(float value)
	{
		___lowerDeadZone_2 = value;
	}

	inline static int32_t get_offset_of_upperDeadZone_3() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___upperDeadZone_3)); }
	inline float get_upperDeadZone_3() const { return ___upperDeadZone_3; }
	inline float* get_address_of_upperDeadZone_3() { return &___upperDeadZone_3; }
	inline void set_upperDeadZone_3(float value)
	{
		___upperDeadZone_3 = value;
	}

	inline static int32_t get_offset_of_stateThreshold_4() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___stateThreshold_4)); }
	inline float get_stateThreshold_4() const { return ___stateThreshold_4; }
	inline float* get_address_of_stateThreshold_4() { return &___stateThreshold_4; }
	inline void set_stateThreshold_4(float value)
	{
		___stateThreshold_4 = value;
	}

	inline static int32_t get_offset_of_Raw_5() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___Raw_5)); }
	inline bool get_Raw_5() const { return ___Raw_5; }
	inline bool* get_address_of_Raw_5() { return &___Raw_5; }
	inline void set_Raw_5(bool value)
	{
		___Raw_5 = value;
	}

	inline static int32_t get_offset_of_thisState_6() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___thisState_6)); }
	inline bool get_thisState_6() const { return ___thisState_6; }
	inline bool* get_address_of_thisState_6() { return &___thisState_6; }
	inline void set_thisState_6(bool value)
	{
		___thisState_6 = value;
	}

	inline static int32_t get_offset_of_lastState_7() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___lastState_7)); }
	inline bool get_lastState_7() const { return ___lastState_7; }
	inline bool* get_address_of_lastState_7() { return &___lastState_7; }
	inline void set_lastState_7(bool value)
	{
		___lastState_7 = value;
	}

	inline static int32_t get_offset_of_thisValue_8() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___thisValue_8)); }
	inline Vector2_t4282066565  get_thisValue_8() const { return ___thisValue_8; }
	inline Vector2_t4282066565 * get_address_of_thisValue_8() { return &___thisValue_8; }
	inline void set_thisValue_8(Vector2_t4282066565  value)
	{
		___thisValue_8 = value;
	}

	inline static int32_t get_offset_of_lastValue_9() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___lastValue_9)); }
	inline Vector2_t4282066565  get_lastValue_9() const { return ___lastValue_9; }
	inline Vector2_t4282066565 * get_address_of_lastValue_9() { return &___lastValue_9; }
	inline void set_lastValue_9(Vector2_t4282066565  value)
	{
		___lastValue_9 = value;
	}

	inline static int32_t get_offset_of_clearInputState_10() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___clearInputState_10)); }
	inline bool get_clearInputState_10() const { return ___clearInputState_10; }
	inline bool* get_address_of_clearInputState_10() { return &___clearInputState_10; }
	inline void set_clearInputState_10(bool value)
	{
		___clearInputState_10 = value;
	}

	inline static int32_t get_offset_of_U3CXU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___U3CXU3Ek__BackingField_11)); }
	inline float get_U3CXU3Ek__BackingField_11() const { return ___U3CXU3Ek__BackingField_11; }
	inline float* get_address_of_U3CXU3Ek__BackingField_11() { return &___U3CXU3Ek__BackingField_11; }
	inline void set_U3CXU3Ek__BackingField_11(float value)
	{
		___U3CXU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CYU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___U3CYU3Ek__BackingField_12)); }
	inline float get_U3CYU3Ek__BackingField_12() const { return ___U3CYU3Ek__BackingField_12; }
	inline float* get_address_of_U3CYU3Ek__BackingField_12() { return &___U3CYU3Ek__BackingField_12; }
	inline void set_U3CYU3Ek__BackingField_12(float value)
	{
		___U3CYU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CLeftU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___U3CLeftU3Ek__BackingField_13)); }
	inline OneAxisInputControl_t2168578956 * get_U3CLeftU3Ek__BackingField_13() const { return ___U3CLeftU3Ek__BackingField_13; }
	inline OneAxisInputControl_t2168578956 ** get_address_of_U3CLeftU3Ek__BackingField_13() { return &___U3CLeftU3Ek__BackingField_13; }
	inline void set_U3CLeftU3Ek__BackingField_13(OneAxisInputControl_t2168578956 * value)
	{
		___U3CLeftU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLeftU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3CRightU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___U3CRightU3Ek__BackingField_14)); }
	inline OneAxisInputControl_t2168578956 * get_U3CRightU3Ek__BackingField_14() const { return ___U3CRightU3Ek__BackingField_14; }
	inline OneAxisInputControl_t2168578956 ** get_address_of_U3CRightU3Ek__BackingField_14() { return &___U3CRightU3Ek__BackingField_14; }
	inline void set_U3CRightU3Ek__BackingField_14(OneAxisInputControl_t2168578956 * value)
	{
		___U3CRightU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRightU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3CUpU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___U3CUpU3Ek__BackingField_15)); }
	inline OneAxisInputControl_t2168578956 * get_U3CUpU3Ek__BackingField_15() const { return ___U3CUpU3Ek__BackingField_15; }
	inline OneAxisInputControl_t2168578956 ** get_address_of_U3CUpU3Ek__BackingField_15() { return &___U3CUpU3Ek__BackingField_15; }
	inline void set_U3CUpU3Ek__BackingField_15(OneAxisInputControl_t2168578956 * value)
	{
		___U3CUpU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUpU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_U3CDownU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___U3CDownU3Ek__BackingField_16)); }
	inline OneAxisInputControl_t2168578956 * get_U3CDownU3Ek__BackingField_16() const { return ___U3CDownU3Ek__BackingField_16; }
	inline OneAxisInputControl_t2168578956 ** get_address_of_U3CDownU3Ek__BackingField_16() { return &___U3CDownU3Ek__BackingField_16; }
	inline void set_U3CDownU3Ek__BackingField_16(OneAxisInputControl_t2168578956 * value)
	{
		___U3CDownU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDownU3Ek__BackingField_16, value);
	}

	inline static int32_t get_offset_of_U3CUpdateTickU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___U3CUpdateTickU3Ek__BackingField_17)); }
	inline uint64_t get_U3CUpdateTickU3Ek__BackingField_17() const { return ___U3CUpdateTickU3Ek__BackingField_17; }
	inline uint64_t* get_address_of_U3CUpdateTickU3Ek__BackingField_17() { return &___U3CUpdateTickU3Ek__BackingField_17; }
	inline void set_U3CUpdateTickU3Ek__BackingField_17(uint64_t value)
	{
		___U3CUpdateTickU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CHasChangedU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394, ___U3CHasChangedU3Ek__BackingField_18)); }
	inline bool get_U3CHasChangedU3Ek__BackingField_18() const { return ___U3CHasChangedU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CHasChangedU3Ek__BackingField_18() { return &___U3CHasChangedU3Ek__BackingField_18; }
	inline void set_U3CHasChangedU3Ek__BackingField_18(bool value)
	{
		___U3CHasChangedU3Ek__BackingField_18 = value;
	}
};

struct TwoAxisInputControl_t2505665394_StaticFields
{
public:
	// InControl.TwoAxisInputControl InControl.TwoAxisInputControl::Null
	TwoAxisInputControl_t2505665394 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(TwoAxisInputControl_t2505665394_StaticFields, ___Null_0)); }
	inline TwoAxisInputControl_t2505665394 * get_Null_0() const { return ___Null_0; }
	inline TwoAxisInputControl_t2505665394 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(TwoAxisInputControl_t2505665394 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier(&___Null_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
