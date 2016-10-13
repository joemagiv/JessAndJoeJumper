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

// CaptureAndSaveScreen
struct  CaptureAndSaveScreen_t237891578  : public MonoBehaviour_t667441552
{
public:
	// System.String CaptureAndSaveScreen::x
	String_t* ___x_2;
	// System.String CaptureAndSaveScreen::y
	String_t* ___y_3;
	// System.String CaptureAndSaveScreen::width
	String_t* ___width_4;
	// System.String CaptureAndSaveScreen::height
	String_t* ___height_5;
	// UnityEngine.Texture2D CaptureAndSaveScreen::tex
	Texture2D_t3884108195 * ___tex_6;
	// CaptureAndSave CaptureAndSaveScreen::snapShot
	CaptureAndSave_t700313070 * ___snapShot_7;
	// System.String CaptureAndSaveScreen::log
	String_t* ___log_8;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(CaptureAndSaveScreen_t237891578, ___x_2)); }
	inline String_t* get_x_2() const { return ___x_2; }
	inline String_t** get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(String_t* value)
	{
		___x_2 = value;
		Il2CppCodeGenWriteBarrier(&___x_2, value);
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(CaptureAndSaveScreen_t237891578, ___y_3)); }
	inline String_t* get_y_3() const { return ___y_3; }
	inline String_t** get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(String_t* value)
	{
		___y_3 = value;
		Il2CppCodeGenWriteBarrier(&___y_3, value);
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(CaptureAndSaveScreen_t237891578, ___width_4)); }
	inline String_t* get_width_4() const { return ___width_4; }
	inline String_t** get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(String_t* value)
	{
		___width_4 = value;
		Il2CppCodeGenWriteBarrier(&___width_4, value);
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(CaptureAndSaveScreen_t237891578, ___height_5)); }
	inline String_t* get_height_5() const { return ___height_5; }
	inline String_t** get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(String_t* value)
	{
		___height_5 = value;
		Il2CppCodeGenWriteBarrier(&___height_5, value);
	}

	inline static int32_t get_offset_of_tex_6() { return static_cast<int32_t>(offsetof(CaptureAndSaveScreen_t237891578, ___tex_6)); }
	inline Texture2D_t3884108195 * get_tex_6() const { return ___tex_6; }
	inline Texture2D_t3884108195 ** get_address_of_tex_6() { return &___tex_6; }
	inline void set_tex_6(Texture2D_t3884108195 * value)
	{
		___tex_6 = value;
		Il2CppCodeGenWriteBarrier(&___tex_6, value);
	}

	inline static int32_t get_offset_of_snapShot_7() { return static_cast<int32_t>(offsetof(CaptureAndSaveScreen_t237891578, ___snapShot_7)); }
	inline CaptureAndSave_t700313070 * get_snapShot_7() const { return ___snapShot_7; }
	inline CaptureAndSave_t700313070 ** get_address_of_snapShot_7() { return &___snapShot_7; }
	inline void set_snapShot_7(CaptureAndSave_t700313070 * value)
	{
		___snapShot_7 = value;
		Il2CppCodeGenWriteBarrier(&___snapShot_7, value);
	}

	inline static int32_t get_offset_of_log_8() { return static_cast<int32_t>(offsetof(CaptureAndSaveScreen_t237891578, ___log_8)); }
	inline String_t* get_log_8() const { return ___log_8; }
	inline String_t** get_address_of_log_8() { return &___log_8; }
	inline void set_log_8(String_t* value)
	{
		___log_8 = value;
		Il2CppCodeGenWriteBarrier(&___log_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
