#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_t808904983;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityKeyCodeSource
struct  UnityKeyCodeSource_t984169328  : public Il2CppObject
{
public:
	// UnityEngine.KeyCode[] InControl.UnityKeyCodeSource::KeyCodeList
	KeyCodeU5BU5D_t808904983* ___KeyCodeList_0;

public:
	inline static int32_t get_offset_of_KeyCodeList_0() { return static_cast<int32_t>(offsetof(UnityKeyCodeSource_t984169328, ___KeyCodeList_0)); }
	inline KeyCodeU5BU5D_t808904983* get_KeyCodeList_0() const { return ___KeyCodeList_0; }
	inline KeyCodeU5BU5D_t808904983** get_address_of_KeyCodeList_0() { return &___KeyCodeList_0; }
	inline void set_KeyCodeList_0(KeyCodeU5BU5D_t808904983* value)
	{
		___KeyCodeList_0 = value;
		Il2CppCodeGenWriteBarrier(&___KeyCodeList_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
