#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t2017574550;
// System.String
struct String_t;
// InControl.InputControlMapping[]
struct InputControlMappingU5BU5D_t3278783232;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputDeviceProfile
struct  InputDeviceProfile_t1889671047  : public Il2CppObject
{
public:
	// System.Single InControl.InputDeviceProfile::sensitivity
	float ___sensitivity_1;
	// System.Single InControl.InputDeviceProfile::lowerDeadZone
	float ___lowerDeadZone_2;
	// System.Single InControl.InputDeviceProfile::upperDeadZone
	float ___upperDeadZone_3;
	// System.String InControl.InputDeviceProfile::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_4;
	// System.String InControl.InputDeviceProfile::<Meta>k__BackingField
	String_t* ___U3CMetaU3Ek__BackingField_5;
	// InControl.InputControlMapping[] InControl.InputDeviceProfile::<AnalogMappings>k__BackingField
	InputControlMappingU5BU5D_t3278783232* ___U3CAnalogMappingsU3Ek__BackingField_6;
	// InControl.InputControlMapping[] InControl.InputDeviceProfile::<ButtonMappings>k__BackingField
	InputControlMappingU5BU5D_t3278783232* ___U3CButtonMappingsU3Ek__BackingField_7;
	// System.String[] InControl.InputDeviceProfile::<IncludePlatforms>k__BackingField
	StringU5BU5D_t4054002952* ___U3CIncludePlatformsU3Ek__BackingField_8;
	// System.String[] InControl.InputDeviceProfile::<ExcludePlatforms>k__BackingField
	StringU5BU5D_t4054002952* ___U3CExcludePlatformsU3Ek__BackingField_9;
	// System.Int32 InControl.InputDeviceProfile::<MaxSystemBuildNumber>k__BackingField
	int32_t ___U3CMaxSystemBuildNumberU3Ek__BackingField_10;
	// System.Int32 InControl.InputDeviceProfile::<MinSystemBuildNumber>k__BackingField
	int32_t ___U3CMinSystemBuildNumberU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_sensitivity_1() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1889671047, ___sensitivity_1)); }
	inline float get_sensitivity_1() const { return ___sensitivity_1; }
	inline float* get_address_of_sensitivity_1() { return &___sensitivity_1; }
	inline void set_sensitivity_1(float value)
	{
		___sensitivity_1 = value;
	}

	inline static int32_t get_offset_of_lowerDeadZone_2() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1889671047, ___lowerDeadZone_2)); }
	inline float get_lowerDeadZone_2() const { return ___lowerDeadZone_2; }
	inline float* get_address_of_lowerDeadZone_2() { return &___lowerDeadZone_2; }
	inline void set_lowerDeadZone_2(float value)
	{
		___lowerDeadZone_2 = value;
	}

	inline static int32_t get_offset_of_upperDeadZone_3() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1889671047, ___upperDeadZone_3)); }
	inline float get_upperDeadZone_3() const { return ___upperDeadZone_3; }
	inline float* get_address_of_upperDeadZone_3() { return &___upperDeadZone_3; }
	inline void set_upperDeadZone_3(float value)
	{
		___upperDeadZone_3 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1889671047, ___U3CNameU3Ek__BackingField_4)); }
	inline String_t* get_U3CNameU3Ek__BackingField_4() const { return ___U3CNameU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_4() { return &___U3CNameU3Ek__BackingField_4; }
	inline void set_U3CNameU3Ek__BackingField_4(String_t* value)
	{
		___U3CNameU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CMetaU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1889671047, ___U3CMetaU3Ek__BackingField_5)); }
	inline String_t* get_U3CMetaU3Ek__BackingField_5() const { return ___U3CMetaU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CMetaU3Ek__BackingField_5() { return &___U3CMetaU3Ek__BackingField_5; }
	inline void set_U3CMetaU3Ek__BackingField_5(String_t* value)
	{
		___U3CMetaU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMetaU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CAnalogMappingsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1889671047, ___U3CAnalogMappingsU3Ek__BackingField_6)); }
	inline InputControlMappingU5BU5D_t3278783232* get_U3CAnalogMappingsU3Ek__BackingField_6() const { return ___U3CAnalogMappingsU3Ek__BackingField_6; }
	inline InputControlMappingU5BU5D_t3278783232** get_address_of_U3CAnalogMappingsU3Ek__BackingField_6() { return &___U3CAnalogMappingsU3Ek__BackingField_6; }
	inline void set_U3CAnalogMappingsU3Ek__BackingField_6(InputControlMappingU5BU5D_t3278783232* value)
	{
		___U3CAnalogMappingsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAnalogMappingsU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CButtonMappingsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1889671047, ___U3CButtonMappingsU3Ek__BackingField_7)); }
	inline InputControlMappingU5BU5D_t3278783232* get_U3CButtonMappingsU3Ek__BackingField_7() const { return ___U3CButtonMappingsU3Ek__BackingField_7; }
	inline InputControlMappingU5BU5D_t3278783232** get_address_of_U3CButtonMappingsU3Ek__BackingField_7() { return &___U3CButtonMappingsU3Ek__BackingField_7; }
	inline void set_U3CButtonMappingsU3Ek__BackingField_7(InputControlMappingU5BU5D_t3278783232* value)
	{
		___U3CButtonMappingsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CButtonMappingsU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CIncludePlatformsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1889671047, ___U3CIncludePlatformsU3Ek__BackingField_8)); }
	inline StringU5BU5D_t4054002952* get_U3CIncludePlatformsU3Ek__BackingField_8() const { return ___U3CIncludePlatformsU3Ek__BackingField_8; }
	inline StringU5BU5D_t4054002952** get_address_of_U3CIncludePlatformsU3Ek__BackingField_8() { return &___U3CIncludePlatformsU3Ek__BackingField_8; }
	inline void set_U3CIncludePlatformsU3Ek__BackingField_8(StringU5BU5D_t4054002952* value)
	{
		___U3CIncludePlatformsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CIncludePlatformsU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3CExcludePlatformsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1889671047, ___U3CExcludePlatformsU3Ek__BackingField_9)); }
	inline StringU5BU5D_t4054002952* get_U3CExcludePlatformsU3Ek__BackingField_9() const { return ___U3CExcludePlatformsU3Ek__BackingField_9; }
	inline StringU5BU5D_t4054002952** get_address_of_U3CExcludePlatformsU3Ek__BackingField_9() { return &___U3CExcludePlatformsU3Ek__BackingField_9; }
	inline void set_U3CExcludePlatformsU3Ek__BackingField_9(StringU5BU5D_t4054002952* value)
	{
		___U3CExcludePlatformsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CExcludePlatformsU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CMaxSystemBuildNumberU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1889671047, ___U3CMaxSystemBuildNumberU3Ek__BackingField_10)); }
	inline int32_t get_U3CMaxSystemBuildNumberU3Ek__BackingField_10() const { return ___U3CMaxSystemBuildNumberU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CMaxSystemBuildNumberU3Ek__BackingField_10() { return &___U3CMaxSystemBuildNumberU3Ek__BackingField_10; }
	inline void set_U3CMaxSystemBuildNumberU3Ek__BackingField_10(int32_t value)
	{
		___U3CMaxSystemBuildNumberU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CMinSystemBuildNumberU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1889671047, ___U3CMinSystemBuildNumberU3Ek__BackingField_11)); }
	inline int32_t get_U3CMinSystemBuildNumberU3Ek__BackingField_11() const { return ___U3CMinSystemBuildNumberU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CMinSystemBuildNumberU3Ek__BackingField_11() { return &___U3CMinSystemBuildNumberU3Ek__BackingField_11; }
	inline void set_U3CMinSystemBuildNumberU3Ek__BackingField_11(int32_t value)
	{
		___U3CMinSystemBuildNumberU3Ek__BackingField_11 = value;
	}
};

struct InputDeviceProfile_t1889671047_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<System.Type> InControl.InputDeviceProfile::hideList
	HashSet_1_t2017574550 * ___hideList_0;

public:
	inline static int32_t get_offset_of_hideList_0() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1889671047_StaticFields, ___hideList_0)); }
	inline HashSet_1_t2017574550 * get_hideList_0() const { return ___hideList_0; }
	inline HashSet_1_t2017574550 ** get_address_of_hideList_0() { return &___hideList_0; }
	inline void set_hideList_0(HashSet_1_t2017574550 * value)
	{
		___hideList_0 = value;
		Il2CppCodeGenWriteBarrier(&___hideList_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
