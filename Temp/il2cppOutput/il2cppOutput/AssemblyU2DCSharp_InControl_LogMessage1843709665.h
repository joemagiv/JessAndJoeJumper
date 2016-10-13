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

#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharp_InControl_LogMessageType1856853435.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogMessage
struct  LogMessage_t1843709665 
{
public:
	// System.String InControl.LogMessage::text
	String_t* ___text_0;
	// InControl.LogMessageType InControl.LogMessage::type
	int32_t ___type_1;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(LogMessage_t1843709665, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier(&___text_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(LogMessage_t1843709665, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: InControl.LogMessage
struct LogMessage_t1843709665_marshaled_pinvoke
{
	char* ___text_0;
	int32_t ___type_1;
};
// Native definition for marshalling of: InControl.LogMessage
struct LogMessage_t1843709665_marshaled_com
{
	Il2CppChar* ___text_0;
	int32_t ___type_1;
};
