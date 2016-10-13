#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.Internal.CodeWriter
struct  CodeWriter_t2551128604  : public Il2CppObject
{
public:
	// System.Int32 InControl.Internal.CodeWriter::indent
	int32_t ___indent_1;
	// System.Text.StringBuilder InControl.Internal.CodeWriter::stringBuilder
	StringBuilder_t243639308 * ___stringBuilder_2;

public:
	inline static int32_t get_offset_of_indent_1() { return static_cast<int32_t>(offsetof(CodeWriter_t2551128604, ___indent_1)); }
	inline int32_t get_indent_1() const { return ___indent_1; }
	inline int32_t* get_address_of_indent_1() { return &___indent_1; }
	inline void set_indent_1(int32_t value)
	{
		___indent_1 = value;
	}

	inline static int32_t get_offset_of_stringBuilder_2() { return static_cast<int32_t>(offsetof(CodeWriter_t2551128604, ___stringBuilder_2)); }
	inline StringBuilder_t243639308 * get_stringBuilder_2() const { return ___stringBuilder_2; }
	inline StringBuilder_t243639308 ** get_address_of_stringBuilder_2() { return &___stringBuilder_2; }
	inline void set_stringBuilder_2(StringBuilder_t243639308 * value)
	{
		___stringBuilder_2 = value;
		Il2CppCodeGenWriteBarrier(&___stringBuilder_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
