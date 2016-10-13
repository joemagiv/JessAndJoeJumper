#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeVersionInfo
struct  NativeVersionInfo_t2688369697 
{
public:
	// System.UInt32 InControl.NativeVersionInfo::major
	uint32_t ___major_0;
	// System.UInt32 InControl.NativeVersionInfo::minor
	uint32_t ___minor_1;
	// System.UInt32 InControl.NativeVersionInfo::patch
	uint32_t ___patch_2;
	// System.UInt32 InControl.NativeVersionInfo::build
	uint32_t ___build_3;

public:
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(NativeVersionInfo_t2688369697, ___major_0)); }
	inline uint32_t get_major_0() const { return ___major_0; }
	inline uint32_t* get_address_of_major_0() { return &___major_0; }
	inline void set_major_0(uint32_t value)
	{
		___major_0 = value;
	}

	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(NativeVersionInfo_t2688369697, ___minor_1)); }
	inline uint32_t get_minor_1() const { return ___minor_1; }
	inline uint32_t* get_address_of_minor_1() { return &___minor_1; }
	inline void set_minor_1(uint32_t value)
	{
		___minor_1 = value;
	}

	inline static int32_t get_offset_of_patch_2() { return static_cast<int32_t>(offsetof(NativeVersionInfo_t2688369697, ___patch_2)); }
	inline uint32_t get_patch_2() const { return ___patch_2; }
	inline uint32_t* get_address_of_patch_2() { return &___patch_2; }
	inline void set_patch_2(uint32_t value)
	{
		___patch_2 = value;
	}

	inline static int32_t get_offset_of_build_3() { return static_cast<int32_t>(offsetof(NativeVersionInfo_t2688369697, ___build_3)); }
	inline uint32_t get_build_3() const { return ___build_3; }
	inline uint32_t* get_address_of_build_3() { return &___build_3; }
	inline void set_build_3(uint32_t value)
	{
		___build_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: InControl.NativeVersionInfo
struct NativeVersionInfo_t2688369697_marshaled_pinvoke
{
	uint32_t ___major_0;
	uint32_t ___minor_1;
	uint32_t ___patch_2;
	uint32_t ___build_3;
};
// Native definition for marshalling of: InControl.NativeVersionInfo
struct NativeVersionInfo_t2688369697_marshaled_com
{
	uint32_t ___major_0;
	uint32_t ___minor_1;
	uint32_t ___patch_2;
	uint32_t ___build_3;
};
