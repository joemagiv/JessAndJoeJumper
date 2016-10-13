#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "AssemblyU2DCSharp_InControl_BindingSource1899497234.h"
#include "AssemblyU2DCSharp_InControl_Mouse2326684343.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.MouseBindingSource
struct  MouseBindingSource_t3443008281  : public BindingSource_t1899497234
{
public:
	// InControl.Mouse InControl.MouseBindingSource::<Control>k__BackingField
	int32_t ___U3CControlU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CControlU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MouseBindingSource_t3443008281, ___U3CControlU3Ek__BackingField_6)); }
	inline int32_t get_U3CControlU3Ek__BackingField_6() const { return ___U3CControlU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CControlU3Ek__BackingField_6() { return &___U3CControlU3Ek__BackingField_6; }
	inline void set_U3CControlU3Ek__BackingField_6(int32_t value)
	{
		___U3CControlU3Ek__BackingField_6 = value;
	}
};

struct MouseBindingSource_t3443008281_StaticFields
{
public:
	// System.Single InControl.MouseBindingSource::ScaleX
	float ___ScaleX_1;
	// System.Single InControl.MouseBindingSource::ScaleY
	float ___ScaleY_2;
	// System.Single InControl.MouseBindingSource::ScaleZ
	float ___ScaleZ_3;
	// System.Single InControl.MouseBindingSource::JitterThreshold
	float ___JitterThreshold_4;
	// System.Int32[] InControl.MouseBindingSource::buttonTable
	Int32U5BU5D_t3230847821* ___buttonTable_5;

public:
	inline static int32_t get_offset_of_ScaleX_1() { return static_cast<int32_t>(offsetof(MouseBindingSource_t3443008281_StaticFields, ___ScaleX_1)); }
	inline float get_ScaleX_1() const { return ___ScaleX_1; }
	inline float* get_address_of_ScaleX_1() { return &___ScaleX_1; }
	inline void set_ScaleX_1(float value)
	{
		___ScaleX_1 = value;
	}

	inline static int32_t get_offset_of_ScaleY_2() { return static_cast<int32_t>(offsetof(MouseBindingSource_t3443008281_StaticFields, ___ScaleY_2)); }
	inline float get_ScaleY_2() const { return ___ScaleY_2; }
	inline float* get_address_of_ScaleY_2() { return &___ScaleY_2; }
	inline void set_ScaleY_2(float value)
	{
		___ScaleY_2 = value;
	}

	inline static int32_t get_offset_of_ScaleZ_3() { return static_cast<int32_t>(offsetof(MouseBindingSource_t3443008281_StaticFields, ___ScaleZ_3)); }
	inline float get_ScaleZ_3() const { return ___ScaleZ_3; }
	inline float* get_address_of_ScaleZ_3() { return &___ScaleZ_3; }
	inline void set_ScaleZ_3(float value)
	{
		___ScaleZ_3 = value;
	}

	inline static int32_t get_offset_of_JitterThreshold_4() { return static_cast<int32_t>(offsetof(MouseBindingSource_t3443008281_StaticFields, ___JitterThreshold_4)); }
	inline float get_JitterThreshold_4() const { return ___JitterThreshold_4; }
	inline float* get_address_of_JitterThreshold_4() { return &___JitterThreshold_4; }
	inline void set_JitterThreshold_4(float value)
	{
		___JitterThreshold_4 = value;
	}

	inline static int32_t get_offset_of_buttonTable_5() { return static_cast<int32_t>(offsetof(MouseBindingSource_t3443008281_StaticFields, ___buttonTable_5)); }
	inline Int32U5BU5D_t3230847821* get_buttonTable_5() const { return ___buttonTable_5; }
	inline Int32U5BU5D_t3230847821** get_address_of_buttonTable_5() { return &___buttonTable_5; }
	inline void set_buttonTable_5(Int32U5BU5D_t3230847821* value)
	{
		___buttonTable_5 = value;
		Il2CppCodeGenWriteBarrier(&___buttonTable_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
