#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// InControl.CustomInputDeviceProfile
struct CustomInputDeviceProfile_t1056134232;
// System.String
struct String_t;
// InControl.InputControlSource
struct InputControlSource_t4197400812;
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_t808904983;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void InControl.CustomInputDeviceProfile::.ctor()
extern "C"  void CustomInputDeviceProfile__ctor_m3856665995 (CustomInputDeviceProfile_t1056134232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.CustomInputDeviceProfile::.cctor()
extern "C"  void CustomInputDeviceProfile__cctor_m3110432642 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.CustomInputDeviceProfile::get_IsJoystick()
extern "C"  bool CustomInputDeviceProfile_get_IsJoystick_m2427412060 (CustomInputDeviceProfile_t1056134232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.CustomInputDeviceProfile::HasJoystickName(System.String)
extern "C"  bool CustomInputDeviceProfile_HasJoystickName_m1471335148 (CustomInputDeviceProfile_t1056134232 * __this, String_t* ___joystickName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.CustomInputDeviceProfile::HasLastResortRegex(System.String)
extern "C"  bool CustomInputDeviceProfile_HasLastResortRegex_m789131855 (CustomInputDeviceProfile_t1056134232 * __this, String_t* ___joystickName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.CustomInputDeviceProfile::HasJoystickOrRegexName(System.String)
extern "C"  bool CustomInputDeviceProfile_HasJoystickOrRegexName_m3098465532 (CustomInputDeviceProfile_t1056134232 * __this, String_t* ___joystickName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlSource InControl.CustomInputDeviceProfile::KeyCodeButton(UnityEngine.KeyCode[])
extern "C"  Il2CppObject * CustomInputDeviceProfile_KeyCodeButton_m3298938797 (Il2CppObject * __this /* static, unused */, KeyCodeU5BU5D_t808904983* ___keyCodeList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlSource InControl.CustomInputDeviceProfile::KeyCodeComboButton(UnityEngine.KeyCode[])
extern "C"  Il2CppObject * CustomInputDeviceProfile_KeyCodeComboButton_m217731093 (Il2CppObject * __this /* static, unused */, KeyCodeU5BU5D_t808904983* ___keyCodeList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
