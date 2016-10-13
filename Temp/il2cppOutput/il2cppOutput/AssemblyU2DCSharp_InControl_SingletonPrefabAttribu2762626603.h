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

#include "mscorlib_System_Attribute2523058482.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.SingletonPrefabAttribute
struct  SingletonPrefabAttribute_t2762626603  : public Attribute_t2523058482
{
public:
	// System.String InControl.SingletonPrefabAttribute::Name
	String_t* ___Name_0;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(SingletonPrefabAttribute_t2762626603, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
