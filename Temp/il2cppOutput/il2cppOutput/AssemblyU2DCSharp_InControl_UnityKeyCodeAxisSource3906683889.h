#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityKeyCodeAxisSource
struct  UnityKeyCodeAxisSource_t3906683889  : public Il2CppObject
{
public:
	// UnityEngine.KeyCode InControl.UnityKeyCodeAxisSource::NegativeKeyCode
	int32_t ___NegativeKeyCode_0;
	// UnityEngine.KeyCode InControl.UnityKeyCodeAxisSource::PositiveKeyCode
	int32_t ___PositiveKeyCode_1;

public:
	inline static int32_t get_offset_of_NegativeKeyCode_0() { return static_cast<int32_t>(offsetof(UnityKeyCodeAxisSource_t3906683889, ___NegativeKeyCode_0)); }
	inline int32_t get_NegativeKeyCode_0() const { return ___NegativeKeyCode_0; }
	inline int32_t* get_address_of_NegativeKeyCode_0() { return &___NegativeKeyCode_0; }
	inline void set_NegativeKeyCode_0(int32_t value)
	{
		___NegativeKeyCode_0 = value;
	}

	inline static int32_t get_offset_of_PositiveKeyCode_1() { return static_cast<int32_t>(offsetof(UnityKeyCodeAxisSource_t3906683889, ___PositiveKeyCode_1)); }
	inline int32_t get_PositiveKeyCode_1() const { return ___PositiveKeyCode_1; }
	inline int32_t* get_address_of_PositiveKeyCode_1() { return &___PositiveKeyCode_1; }
	inline void set_PositiveKeyCode_1(int32_t value)
	{
		___PositiveKeyCode_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
