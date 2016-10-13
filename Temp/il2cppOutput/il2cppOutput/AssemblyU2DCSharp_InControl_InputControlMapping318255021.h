#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InControl.InputControlSource
struct InputControlSource_t4197400812;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_InControl_InputControlType2879927883.h"
#include "AssemblyU2DCSharp_InControl_InputRange4284974673.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputControlMapping
struct  InputControlMapping_t318255021  : public Il2CppObject
{
public:
	// InControl.InputControlSource InControl.InputControlMapping::Source
	Il2CppObject * ___Source_0;
	// InControl.InputControlType InControl.InputControlMapping::Target
	int32_t ___Target_1;
	// System.Boolean InControl.InputControlMapping::Invert
	bool ___Invert_2;
	// System.Single InControl.InputControlMapping::Scale
	float ___Scale_3;
	// System.Boolean InControl.InputControlMapping::Raw
	bool ___Raw_4;
	// System.Boolean InControl.InputControlMapping::Passive
	bool ___Passive_5;
	// System.Boolean InControl.InputControlMapping::IgnoreInitialZeroValue
	bool ___IgnoreInitialZeroValue_6;
	// System.Single InControl.InputControlMapping::Sensitivity
	float ___Sensitivity_7;
	// System.Single InControl.InputControlMapping::LowerDeadZone
	float ___LowerDeadZone_8;
	// System.Single InControl.InputControlMapping::UpperDeadZone
	float ___UpperDeadZone_9;
	// InControl.InputRange InControl.InputControlMapping::SourceRange
	InputRange_t4284974673  ___SourceRange_10;
	// InControl.InputRange InControl.InputControlMapping::TargetRange
	InputRange_t4284974673  ___TargetRange_11;
	// System.String InControl.InputControlMapping::handle
	String_t* ___handle_12;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(InputControlMapping_t318255021, ___Source_0)); }
	inline Il2CppObject * get_Source_0() const { return ___Source_0; }
	inline Il2CppObject ** get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(Il2CppObject * value)
	{
		___Source_0 = value;
		Il2CppCodeGenWriteBarrier(&___Source_0, value);
	}

	inline static int32_t get_offset_of_Target_1() { return static_cast<int32_t>(offsetof(InputControlMapping_t318255021, ___Target_1)); }
	inline int32_t get_Target_1() const { return ___Target_1; }
	inline int32_t* get_address_of_Target_1() { return &___Target_1; }
	inline void set_Target_1(int32_t value)
	{
		___Target_1 = value;
	}

	inline static int32_t get_offset_of_Invert_2() { return static_cast<int32_t>(offsetof(InputControlMapping_t318255021, ___Invert_2)); }
	inline bool get_Invert_2() const { return ___Invert_2; }
	inline bool* get_address_of_Invert_2() { return &___Invert_2; }
	inline void set_Invert_2(bool value)
	{
		___Invert_2 = value;
	}

	inline static int32_t get_offset_of_Scale_3() { return static_cast<int32_t>(offsetof(InputControlMapping_t318255021, ___Scale_3)); }
	inline float get_Scale_3() const { return ___Scale_3; }
	inline float* get_address_of_Scale_3() { return &___Scale_3; }
	inline void set_Scale_3(float value)
	{
		___Scale_3 = value;
	}

	inline static int32_t get_offset_of_Raw_4() { return static_cast<int32_t>(offsetof(InputControlMapping_t318255021, ___Raw_4)); }
	inline bool get_Raw_4() const { return ___Raw_4; }
	inline bool* get_address_of_Raw_4() { return &___Raw_4; }
	inline void set_Raw_4(bool value)
	{
		___Raw_4 = value;
	}

	inline static int32_t get_offset_of_Passive_5() { return static_cast<int32_t>(offsetof(InputControlMapping_t318255021, ___Passive_5)); }
	inline bool get_Passive_5() const { return ___Passive_5; }
	inline bool* get_address_of_Passive_5() { return &___Passive_5; }
	inline void set_Passive_5(bool value)
	{
		___Passive_5 = value;
	}

	inline static int32_t get_offset_of_IgnoreInitialZeroValue_6() { return static_cast<int32_t>(offsetof(InputControlMapping_t318255021, ___IgnoreInitialZeroValue_6)); }
	inline bool get_IgnoreInitialZeroValue_6() const { return ___IgnoreInitialZeroValue_6; }
	inline bool* get_address_of_IgnoreInitialZeroValue_6() { return &___IgnoreInitialZeroValue_6; }
	inline void set_IgnoreInitialZeroValue_6(bool value)
	{
		___IgnoreInitialZeroValue_6 = value;
	}

	inline static int32_t get_offset_of_Sensitivity_7() { return static_cast<int32_t>(offsetof(InputControlMapping_t318255021, ___Sensitivity_7)); }
	inline float get_Sensitivity_7() const { return ___Sensitivity_7; }
	inline float* get_address_of_Sensitivity_7() { return &___Sensitivity_7; }
	inline void set_Sensitivity_7(float value)
	{
		___Sensitivity_7 = value;
	}

	inline static int32_t get_offset_of_LowerDeadZone_8() { return static_cast<int32_t>(offsetof(InputControlMapping_t318255021, ___LowerDeadZone_8)); }
	inline float get_LowerDeadZone_8() const { return ___LowerDeadZone_8; }
	inline float* get_address_of_LowerDeadZone_8() { return &___LowerDeadZone_8; }
	inline void set_LowerDeadZone_8(float value)
	{
		___LowerDeadZone_8 = value;
	}

	inline static int32_t get_offset_of_UpperDeadZone_9() { return static_cast<int32_t>(offsetof(InputControlMapping_t318255021, ___UpperDeadZone_9)); }
	inline float get_UpperDeadZone_9() const { return ___UpperDeadZone_9; }
	inline float* get_address_of_UpperDeadZone_9() { return &___UpperDeadZone_9; }
	inline void set_UpperDeadZone_9(float value)
	{
		___UpperDeadZone_9 = value;
	}

	inline static int32_t get_offset_of_SourceRange_10() { return static_cast<int32_t>(offsetof(InputControlMapping_t318255021, ___SourceRange_10)); }
	inline InputRange_t4284974673  get_SourceRange_10() const { return ___SourceRange_10; }
	inline InputRange_t4284974673 * get_address_of_SourceRange_10() { return &___SourceRange_10; }
	inline void set_SourceRange_10(InputRange_t4284974673  value)
	{
		___SourceRange_10 = value;
	}

	inline static int32_t get_offset_of_TargetRange_11() { return static_cast<int32_t>(offsetof(InputControlMapping_t318255021, ___TargetRange_11)); }
	inline InputRange_t4284974673  get_TargetRange_11() const { return ___TargetRange_11; }
	inline InputRange_t4284974673 * get_address_of_TargetRange_11() { return &___TargetRange_11; }
	inline void set_TargetRange_11(InputRange_t4284974673  value)
	{
		___TargetRange_11 = value;
	}

	inline static int32_t get_offset_of_handle_12() { return static_cast<int32_t>(offsetof(InputControlMapping_t318255021, ___handle_12)); }
	inline String_t* get_handle_12() const { return ___handle_12; }
	inline String_t** get_address_of_handle_12() { return &___handle_12; }
	inline void set_handle_12(String_t* value)
	{
		___handle_12 = value;
		Il2CppCodeGenWriteBarrier(&___handle_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
