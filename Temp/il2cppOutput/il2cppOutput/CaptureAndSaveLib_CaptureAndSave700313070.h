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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CaptureAndSave
struct  CaptureAndSave_t700313070  : public MonoBehaviour_t667441552
{
public:
	// System.String CaptureAndSave::FILENAME_PREFIX
	String_t* ___FILENAME_PREFIX_2;
	// System.String CaptureAndSave::ALBUM_NAME
	String_t* ___ALBUM_NAME_3;
	// System.String CaptureAndSave::androidImagePath
	String_t* ___androidImagePath_4;
	// System.String CaptureAndSave::absAlbumPath
	String_t* ___absAlbumPath_5;
	// UnityEngine.Texture2D CaptureAndSave::tex
	Texture2D_t3884108195 * ___tex_6;

public:
	inline static int32_t get_offset_of_FILENAME_PREFIX_2() { return static_cast<int32_t>(offsetof(CaptureAndSave_t700313070, ___FILENAME_PREFIX_2)); }
	inline String_t* get_FILENAME_PREFIX_2() const { return ___FILENAME_PREFIX_2; }
	inline String_t** get_address_of_FILENAME_PREFIX_2() { return &___FILENAME_PREFIX_2; }
	inline void set_FILENAME_PREFIX_2(String_t* value)
	{
		___FILENAME_PREFIX_2 = value;
		Il2CppCodeGenWriteBarrier(&___FILENAME_PREFIX_2, value);
	}

	inline static int32_t get_offset_of_ALBUM_NAME_3() { return static_cast<int32_t>(offsetof(CaptureAndSave_t700313070, ___ALBUM_NAME_3)); }
	inline String_t* get_ALBUM_NAME_3() const { return ___ALBUM_NAME_3; }
	inline String_t** get_address_of_ALBUM_NAME_3() { return &___ALBUM_NAME_3; }
	inline void set_ALBUM_NAME_3(String_t* value)
	{
		___ALBUM_NAME_3 = value;
		Il2CppCodeGenWriteBarrier(&___ALBUM_NAME_3, value);
	}

	inline static int32_t get_offset_of_androidImagePath_4() { return static_cast<int32_t>(offsetof(CaptureAndSave_t700313070, ___androidImagePath_4)); }
	inline String_t* get_androidImagePath_4() const { return ___androidImagePath_4; }
	inline String_t** get_address_of_androidImagePath_4() { return &___androidImagePath_4; }
	inline void set_androidImagePath_4(String_t* value)
	{
		___androidImagePath_4 = value;
		Il2CppCodeGenWriteBarrier(&___androidImagePath_4, value);
	}

	inline static int32_t get_offset_of_absAlbumPath_5() { return static_cast<int32_t>(offsetof(CaptureAndSave_t700313070, ___absAlbumPath_5)); }
	inline String_t* get_absAlbumPath_5() const { return ___absAlbumPath_5; }
	inline String_t** get_address_of_absAlbumPath_5() { return &___absAlbumPath_5; }
	inline void set_absAlbumPath_5(String_t* value)
	{
		___absAlbumPath_5 = value;
		Il2CppCodeGenWriteBarrier(&___absAlbumPath_5, value);
	}

	inline static int32_t get_offset_of_tex_6() { return static_cast<int32_t>(offsetof(CaptureAndSave_t700313070, ___tex_6)); }
	inline Texture2D_t3884108195 * get_tex_6() const { return ___tex_6; }
	inline Texture2D_t3884108195 ** get_address_of_tex_6() { return &___tex_6; }
	inline void set_tex_6(Texture2D_t3884108195 * value)
	{
		___tex_6 = value;
		Il2CppCodeGenWriteBarrier(&___tex_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
