#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_t808904983;
// InControl.KeyInfo[]
struct KeyInfoU5BU5D_t3590503654;

#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharp_InControl_Key160624369.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.KeyInfo
struct  KeyInfo_t3085159231 
{
public:
	// InControl.Key InControl.KeyInfo::key
	int32_t ___key_0;
	// System.String InControl.KeyInfo::name
	String_t* ___name_1;
	// System.String InControl.KeyInfo::macName
	String_t* ___macName_2;
	// UnityEngine.KeyCode[] InControl.KeyInfo::keyCodes
	KeyCodeU5BU5D_t808904983* ___keyCodes_3;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyInfo_t3085159231, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(KeyInfo_t3085159231, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_macName_2() { return static_cast<int32_t>(offsetof(KeyInfo_t3085159231, ___macName_2)); }
	inline String_t* get_macName_2() const { return ___macName_2; }
	inline String_t** get_address_of_macName_2() { return &___macName_2; }
	inline void set_macName_2(String_t* value)
	{
		___macName_2 = value;
		Il2CppCodeGenWriteBarrier(&___macName_2, value);
	}

	inline static int32_t get_offset_of_keyCodes_3() { return static_cast<int32_t>(offsetof(KeyInfo_t3085159231, ___keyCodes_3)); }
	inline KeyCodeU5BU5D_t808904983* get_keyCodes_3() const { return ___keyCodes_3; }
	inline KeyCodeU5BU5D_t808904983** get_address_of_keyCodes_3() { return &___keyCodes_3; }
	inline void set_keyCodes_3(KeyCodeU5BU5D_t808904983* value)
	{
		___keyCodes_3 = value;
		Il2CppCodeGenWriteBarrier(&___keyCodes_3, value);
	}
};

struct KeyInfo_t3085159231_StaticFields
{
public:
	// InControl.KeyInfo[] InControl.KeyInfo::KeyList
	KeyInfoU5BU5D_t3590503654* ___KeyList_4;

public:
	inline static int32_t get_offset_of_KeyList_4() { return static_cast<int32_t>(offsetof(KeyInfo_t3085159231_StaticFields, ___KeyList_4)); }
	inline KeyInfoU5BU5D_t3590503654* get_KeyList_4() const { return ___KeyList_4; }
	inline KeyInfoU5BU5D_t3590503654** get_address_of_KeyList_4() { return &___KeyList_4; }
	inline void set_KeyList_4(KeyInfoU5BU5D_t3590503654* value)
	{
		___KeyList_4 = value;
		Il2CppCodeGenWriteBarrier(&___KeyList_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: InControl.KeyInfo
struct KeyInfo_t3085159231_marshaled_pinvoke
{
	int32_t ___key_0;
	char* ___name_1;
	char* ___macName_2;
	int32_t* ___keyCodes_3;
};
// Native definition for marshalling of: InControl.KeyInfo
struct KeyInfo_t3085159231_marshaled_com
{
	int32_t ___key_0;
	Il2CppChar* ___name_1;
	Il2CppChar* ___macName_2;
	int32_t* ___keyCodes_3;
};
