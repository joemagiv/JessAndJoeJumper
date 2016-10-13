#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CaptureAndSave
struct CaptureAndSave_t700313070;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CaptureAndSaveCamera
struct  CaptureAndSaveCamera_t4072796851  : public MonoBehaviour_t667441552
{
public:
	// CaptureAndSave CaptureAndSaveCamera::snapShot
	CaptureAndSave_t700313070 * ___snapShot_2;
	// System.String CaptureAndSaveCamera::log
	String_t* ___log_3;

public:
	inline static int32_t get_offset_of_snapShot_2() { return static_cast<int32_t>(offsetof(CaptureAndSaveCamera_t4072796851, ___snapShot_2)); }
	inline CaptureAndSave_t700313070 * get_snapShot_2() const { return ___snapShot_2; }
	inline CaptureAndSave_t700313070 ** get_address_of_snapShot_2() { return &___snapShot_2; }
	inline void set_snapShot_2(CaptureAndSave_t700313070 * value)
	{
		___snapShot_2 = value;
		Il2CppCodeGenWriteBarrier(&___snapShot_2, value);
	}

	inline static int32_t get_offset_of_log_3() { return static_cast<int32_t>(offsetof(CaptureAndSaveCamera_t4072796851, ___log_3)); }
	inline String_t* get_log_3() const { return ___log_3; }
	inline String_t** get_address_of_log_3() { return &___log_3; }
	inline void set_log_3(String_t* value)
	{
		___log_3 = value;
		Il2CppCodeGenWriteBarrier(&___log_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
