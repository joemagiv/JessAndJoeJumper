#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Font
struct Font_t4241557075;
// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;
// System.Collections.Generic.List`1<InControl.LogMessage>
struct List_1_t3211895217;
// System.Action`1<InControl.InputDevice>
struct Action_1_t172553754;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.TestInputManager
struct  TestInputManager_t3892280435  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Font InControl.TestInputManager::font
	Font_t4241557075 * ___font_2;
	// UnityEngine.GUIStyle InControl.TestInputManager::style
	GUIStyle_t2990928826 * ___style_3;
	// System.Collections.Generic.List`1<InControl.LogMessage> InControl.TestInputManager::logMessages
	List_1_t3211895217 * ___logMessages_4;
	// System.Boolean InControl.TestInputManager::isPaused
	bool ___isPaused_5;

public:
	inline static int32_t get_offset_of_font_2() { return static_cast<int32_t>(offsetof(TestInputManager_t3892280435, ___font_2)); }
	inline Font_t4241557075 * get_font_2() const { return ___font_2; }
	inline Font_t4241557075 ** get_address_of_font_2() { return &___font_2; }
	inline void set_font_2(Font_t4241557075 * value)
	{
		___font_2 = value;
		Il2CppCodeGenWriteBarrier(&___font_2, value);
	}

	inline static int32_t get_offset_of_style_3() { return static_cast<int32_t>(offsetof(TestInputManager_t3892280435, ___style_3)); }
	inline GUIStyle_t2990928826 * get_style_3() const { return ___style_3; }
	inline GUIStyle_t2990928826 ** get_address_of_style_3() { return &___style_3; }
	inline void set_style_3(GUIStyle_t2990928826 * value)
	{
		___style_3 = value;
		Il2CppCodeGenWriteBarrier(&___style_3, value);
	}

	inline static int32_t get_offset_of_logMessages_4() { return static_cast<int32_t>(offsetof(TestInputManager_t3892280435, ___logMessages_4)); }
	inline List_1_t3211895217 * get_logMessages_4() const { return ___logMessages_4; }
	inline List_1_t3211895217 ** get_address_of_logMessages_4() { return &___logMessages_4; }
	inline void set_logMessages_4(List_1_t3211895217 * value)
	{
		___logMessages_4 = value;
		Il2CppCodeGenWriteBarrier(&___logMessages_4, value);
	}

	inline static int32_t get_offset_of_isPaused_5() { return static_cast<int32_t>(offsetof(TestInputManager_t3892280435, ___isPaused_5)); }
	inline bool get_isPaused_5() const { return ___isPaused_5; }
	inline bool* get_address_of_isPaused_5() { return &___isPaused_5; }
	inline void set_isPaused_5(bool value)
	{
		___isPaused_5 = value;
	}
};

struct TestInputManager_t3892280435_StaticFields
{
public:
	// System.Action`1<InControl.InputDevice> InControl.TestInputManager::<>f__am$cache4
	Action_1_t172553754 * ___U3CU3Ef__amU24cache4_6;
	// System.Action`1<InControl.InputDevice> InControl.TestInputManager::<>f__am$cache5
	Action_1_t172553754 * ___U3CU3Ef__amU24cache5_7;
	// System.Action`1<InControl.InputDevice> InControl.TestInputManager::<>f__am$cache6
	Action_1_t172553754 * ___U3CU3Ef__amU24cache6_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_6() { return static_cast<int32_t>(offsetof(TestInputManager_t3892280435_StaticFields, ___U3CU3Ef__amU24cache4_6)); }
	inline Action_1_t172553754 * get_U3CU3Ef__amU24cache4_6() const { return ___U3CU3Ef__amU24cache4_6; }
	inline Action_1_t172553754 ** get_address_of_U3CU3Ef__amU24cache4_6() { return &___U3CU3Ef__amU24cache4_6; }
	inline void set_U3CU3Ef__amU24cache4_6(Action_1_t172553754 * value)
	{
		___U3CU3Ef__amU24cache4_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_7() { return static_cast<int32_t>(offsetof(TestInputManager_t3892280435_StaticFields, ___U3CU3Ef__amU24cache5_7)); }
	inline Action_1_t172553754 * get_U3CU3Ef__amU24cache5_7() const { return ___U3CU3Ef__amU24cache5_7; }
	inline Action_1_t172553754 ** get_address_of_U3CU3Ef__amU24cache5_7() { return &___U3CU3Ef__amU24cache5_7; }
	inline void set_U3CU3Ef__amU24cache5_7(Action_1_t172553754 * value)
	{
		___U3CU3Ef__amU24cache5_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_8() { return static_cast<int32_t>(offsetof(TestInputManager_t3892280435_StaticFields, ___U3CU3Ef__amU24cache6_8)); }
	inline Action_1_t172553754 * get_U3CU3Ef__amU24cache6_8() const { return ___U3CU3Ef__amU24cache6_8; }
	inline Action_1_t172553754 ** get_address_of_U3CU3Ef__amU24cache6_8() { return &___U3CU3Ef__amU24cache6_8; }
	inline void set_U3CU3Ef__amU24cache6_8(Action_1_t172553754 * value)
	{
		___U3CU3Ef__amU24cache6_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
