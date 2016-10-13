#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// CaptureAndSave
struct CaptureAndSave_t700313070;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PreviewAndSave
struct  PreviewAndSave_t2697337644  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Texture2D PreviewAndSave::tex
	Texture2D_t3884108195 * ___tex_2;
	// CaptureAndSave PreviewAndSave::snapShot
	CaptureAndSave_t700313070 * ___snapShot_3;

public:
	inline static int32_t get_offset_of_tex_2() { return static_cast<int32_t>(offsetof(PreviewAndSave_t2697337644, ___tex_2)); }
	inline Texture2D_t3884108195 * get_tex_2() const { return ___tex_2; }
	inline Texture2D_t3884108195 ** get_address_of_tex_2() { return &___tex_2; }
	inline void set_tex_2(Texture2D_t3884108195 * value)
	{
		___tex_2 = value;
		Il2CppCodeGenWriteBarrier(&___tex_2, value);
	}

	inline static int32_t get_offset_of_snapShot_3() { return static_cast<int32_t>(offsetof(PreviewAndSave_t2697337644, ___snapShot_3)); }
	inline CaptureAndSave_t700313070 * get_snapShot_3() const { return ___snapShot_3; }
	inline CaptureAndSave_t700313070 ** get_address_of_snapShot_3() { return &___snapShot_3; }
	inline void set_snapShot_3(CaptureAndSave_t700313070 * value)
	{
		___snapShot_3 = value;
		Il2CppCodeGenWriteBarrier(&___snapShot_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
