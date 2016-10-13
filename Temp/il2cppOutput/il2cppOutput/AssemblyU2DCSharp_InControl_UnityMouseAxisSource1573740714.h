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

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityMouseAxisSource
struct  UnityMouseAxisSource_t1573740714  : public Il2CppObject
{
public:
	// System.String InControl.UnityMouseAxisSource::MouseAxisQuery
	String_t* ___MouseAxisQuery_0;

public:
	inline static int32_t get_offset_of_MouseAxisQuery_0() { return static_cast<int32_t>(offsetof(UnityMouseAxisSource_t1573740714, ___MouseAxisQuery_0)); }
	inline String_t* get_MouseAxisQuery_0() const { return ___MouseAxisQuery_0; }
	inline String_t** get_address_of_MouseAxisQuery_0() { return &___MouseAxisQuery_0; }
	inline void set_MouseAxisQuery_0(String_t* value)
	{
		___MouseAxisQuery_0 = value;
		Il2CppCodeGenWriteBarrier(&___MouseAxisQuery_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
