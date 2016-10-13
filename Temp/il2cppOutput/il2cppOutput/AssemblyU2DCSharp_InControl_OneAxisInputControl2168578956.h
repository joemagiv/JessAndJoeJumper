#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_InControl_InputControlState3860714800.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.OneAxisInputControl
struct  OneAxisInputControl_t2168578956  : public Il2CppObject
{
public:
	// System.Single InControl.OneAxisInputControl::sensitivity
	float ___sensitivity_0;
	// System.Single InControl.OneAxisInputControl::lowerDeadZone
	float ___lowerDeadZone_1;
	// System.Single InControl.OneAxisInputControl::upperDeadZone
	float ___upperDeadZone_2;
	// System.Single InControl.OneAxisInputControl::stateThreshold
	float ___stateThreshold_3;
	// System.Single InControl.OneAxisInputControl::FirstRepeatDelay
	float ___FirstRepeatDelay_4;
	// System.Single InControl.OneAxisInputControl::RepeatDelay
	float ___RepeatDelay_5;
	// System.Boolean InControl.OneAxisInputControl::Raw
	bool ___Raw_6;
	// System.Boolean InControl.OneAxisInputControl::Enabled
	bool ___Enabled_7;
	// System.UInt64 InControl.OneAxisInputControl::pendingTick
	uint64_t ___pendingTick_8;
	// System.Boolean InControl.OneAxisInputControl::pendingCommit
	bool ___pendingCommit_9;
	// System.Single InControl.OneAxisInputControl::nextRepeatTime
	float ___nextRepeatTime_10;
	// System.Single InControl.OneAxisInputControl::lastPressedTime
	float ___lastPressedTime_11;
	// System.Boolean InControl.OneAxisInputControl::wasRepeated
	bool ___wasRepeated_12;
	// System.Boolean InControl.OneAxisInputControl::clearInputState
	bool ___clearInputState_13;
	// InControl.InputControlState InControl.OneAxisInputControl::lastState
	InputControlState_t3860714800  ___lastState_14;
	// InControl.InputControlState InControl.OneAxisInputControl::nextState
	InputControlState_t3860714800  ___nextState_15;
	// InControl.InputControlState InControl.OneAxisInputControl::thisState
	InputControlState_t3860714800  ___thisState_16;
	// System.UInt64 InControl.OneAxisInputControl::<UpdateTick>k__BackingField
	uint64_t ___U3CUpdateTickU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_sensitivity_0() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___sensitivity_0)); }
	inline float get_sensitivity_0() const { return ___sensitivity_0; }
	inline float* get_address_of_sensitivity_0() { return &___sensitivity_0; }
	inline void set_sensitivity_0(float value)
	{
		___sensitivity_0 = value;
	}

	inline static int32_t get_offset_of_lowerDeadZone_1() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___lowerDeadZone_1)); }
	inline float get_lowerDeadZone_1() const { return ___lowerDeadZone_1; }
	inline float* get_address_of_lowerDeadZone_1() { return &___lowerDeadZone_1; }
	inline void set_lowerDeadZone_1(float value)
	{
		___lowerDeadZone_1 = value;
	}

	inline static int32_t get_offset_of_upperDeadZone_2() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___upperDeadZone_2)); }
	inline float get_upperDeadZone_2() const { return ___upperDeadZone_2; }
	inline float* get_address_of_upperDeadZone_2() { return &___upperDeadZone_2; }
	inline void set_upperDeadZone_2(float value)
	{
		___upperDeadZone_2 = value;
	}

	inline static int32_t get_offset_of_stateThreshold_3() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___stateThreshold_3)); }
	inline float get_stateThreshold_3() const { return ___stateThreshold_3; }
	inline float* get_address_of_stateThreshold_3() { return &___stateThreshold_3; }
	inline void set_stateThreshold_3(float value)
	{
		___stateThreshold_3 = value;
	}

	inline static int32_t get_offset_of_FirstRepeatDelay_4() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___FirstRepeatDelay_4)); }
	inline float get_FirstRepeatDelay_4() const { return ___FirstRepeatDelay_4; }
	inline float* get_address_of_FirstRepeatDelay_4() { return &___FirstRepeatDelay_4; }
	inline void set_FirstRepeatDelay_4(float value)
	{
		___FirstRepeatDelay_4 = value;
	}

	inline static int32_t get_offset_of_RepeatDelay_5() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___RepeatDelay_5)); }
	inline float get_RepeatDelay_5() const { return ___RepeatDelay_5; }
	inline float* get_address_of_RepeatDelay_5() { return &___RepeatDelay_5; }
	inline void set_RepeatDelay_5(float value)
	{
		___RepeatDelay_5 = value;
	}

	inline static int32_t get_offset_of_Raw_6() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___Raw_6)); }
	inline bool get_Raw_6() const { return ___Raw_6; }
	inline bool* get_address_of_Raw_6() { return &___Raw_6; }
	inline void set_Raw_6(bool value)
	{
		___Raw_6 = value;
	}

	inline static int32_t get_offset_of_Enabled_7() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___Enabled_7)); }
	inline bool get_Enabled_7() const { return ___Enabled_7; }
	inline bool* get_address_of_Enabled_7() { return &___Enabled_7; }
	inline void set_Enabled_7(bool value)
	{
		___Enabled_7 = value;
	}

	inline static int32_t get_offset_of_pendingTick_8() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___pendingTick_8)); }
	inline uint64_t get_pendingTick_8() const { return ___pendingTick_8; }
	inline uint64_t* get_address_of_pendingTick_8() { return &___pendingTick_8; }
	inline void set_pendingTick_8(uint64_t value)
	{
		___pendingTick_8 = value;
	}

	inline static int32_t get_offset_of_pendingCommit_9() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___pendingCommit_9)); }
	inline bool get_pendingCommit_9() const { return ___pendingCommit_9; }
	inline bool* get_address_of_pendingCommit_9() { return &___pendingCommit_9; }
	inline void set_pendingCommit_9(bool value)
	{
		___pendingCommit_9 = value;
	}

	inline static int32_t get_offset_of_nextRepeatTime_10() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___nextRepeatTime_10)); }
	inline float get_nextRepeatTime_10() const { return ___nextRepeatTime_10; }
	inline float* get_address_of_nextRepeatTime_10() { return &___nextRepeatTime_10; }
	inline void set_nextRepeatTime_10(float value)
	{
		___nextRepeatTime_10 = value;
	}

	inline static int32_t get_offset_of_lastPressedTime_11() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___lastPressedTime_11)); }
	inline float get_lastPressedTime_11() const { return ___lastPressedTime_11; }
	inline float* get_address_of_lastPressedTime_11() { return &___lastPressedTime_11; }
	inline void set_lastPressedTime_11(float value)
	{
		___lastPressedTime_11 = value;
	}

	inline static int32_t get_offset_of_wasRepeated_12() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___wasRepeated_12)); }
	inline bool get_wasRepeated_12() const { return ___wasRepeated_12; }
	inline bool* get_address_of_wasRepeated_12() { return &___wasRepeated_12; }
	inline void set_wasRepeated_12(bool value)
	{
		___wasRepeated_12 = value;
	}

	inline static int32_t get_offset_of_clearInputState_13() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___clearInputState_13)); }
	inline bool get_clearInputState_13() const { return ___clearInputState_13; }
	inline bool* get_address_of_clearInputState_13() { return &___clearInputState_13; }
	inline void set_clearInputState_13(bool value)
	{
		___clearInputState_13 = value;
	}

	inline static int32_t get_offset_of_lastState_14() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___lastState_14)); }
	inline InputControlState_t3860714800  get_lastState_14() const { return ___lastState_14; }
	inline InputControlState_t3860714800 * get_address_of_lastState_14() { return &___lastState_14; }
	inline void set_lastState_14(InputControlState_t3860714800  value)
	{
		___lastState_14 = value;
	}

	inline static int32_t get_offset_of_nextState_15() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___nextState_15)); }
	inline InputControlState_t3860714800  get_nextState_15() const { return ___nextState_15; }
	inline InputControlState_t3860714800 * get_address_of_nextState_15() { return &___nextState_15; }
	inline void set_nextState_15(InputControlState_t3860714800  value)
	{
		___nextState_15 = value;
	}

	inline static int32_t get_offset_of_thisState_16() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___thisState_16)); }
	inline InputControlState_t3860714800  get_thisState_16() const { return ___thisState_16; }
	inline InputControlState_t3860714800 * get_address_of_thisState_16() { return &___thisState_16; }
	inline void set_thisState_16(InputControlState_t3860714800  value)
	{
		___thisState_16 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateTickU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(OneAxisInputControl_t2168578956, ___U3CUpdateTickU3Ek__BackingField_17)); }
	inline uint64_t get_U3CUpdateTickU3Ek__BackingField_17() const { return ___U3CUpdateTickU3Ek__BackingField_17; }
	inline uint64_t* get_address_of_U3CUpdateTickU3Ek__BackingField_17() { return &___U3CUpdateTickU3Ek__BackingField_17; }
	inline void set_U3CUpdateTickU3Ek__BackingField_17(uint64_t value)
	{
		___U3CUpdateTickU3Ek__BackingField_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
