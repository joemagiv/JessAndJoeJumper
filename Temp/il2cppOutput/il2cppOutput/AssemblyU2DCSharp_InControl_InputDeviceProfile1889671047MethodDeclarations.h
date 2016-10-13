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

// InControl.InputDeviceProfile
struct InputDeviceProfile_t1889671047;
// System.String
struct String_t;
// InControl.InputControlMapping[]
struct InputControlMappingU5BU5D_t3278783232;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void InControl.InputDeviceProfile::.ctor()
extern "C"  void InputDeviceProfile__ctor_m1679188284 (InputDeviceProfile_t1889671047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDeviceProfile::.cctor()
extern "C"  void InputDeviceProfile__cctor_m33133041 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.InputDeviceProfile::get_Name()
extern "C"  String_t* InputDeviceProfile_get_Name_m3735775487 (InputDeviceProfile_t1889671047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDeviceProfile::set_Name(System.String)
extern "C"  void InputDeviceProfile_set_Name_m2695980466 (InputDeviceProfile_t1889671047 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.InputDeviceProfile::get_Meta()
extern "C"  String_t* InputDeviceProfile_get_Meta_m3711045113 (InputDeviceProfile_t1889671047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDeviceProfile::set_Meta(System.String)
extern "C"  void InputDeviceProfile_set_Meta_m2477532920 (InputDeviceProfile_t1889671047 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping[] InControl.InputDeviceProfile::get_AnalogMappings()
extern "C"  InputControlMappingU5BU5D_t3278783232* InputDeviceProfile_get_AnalogMappings_m358519474 (InputDeviceProfile_t1889671047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDeviceProfile::set_AnalogMappings(InControl.InputControlMapping[])
extern "C"  void InputDeviceProfile_set_AnalogMappings_m1162670289 (InputDeviceProfile_t1889671047 * __this, InputControlMappingU5BU5D_t3278783232* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlMapping[] InControl.InputDeviceProfile::get_ButtonMappings()
extern "C"  InputControlMappingU5BU5D_t3278783232* InputDeviceProfile_get_ButtonMappings_m3049219700 (InputDeviceProfile_t1889671047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDeviceProfile::set_ButtonMappings(InControl.InputControlMapping[])
extern "C"  void InputDeviceProfile_set_ButtonMappings_m2451711183 (InputDeviceProfile_t1889671047 * __this, InputControlMappingU5BU5D_t3278783232* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] InControl.InputDeviceProfile::get_IncludePlatforms()
extern "C"  StringU5BU5D_t4054002952* InputDeviceProfile_get_IncludePlatforms_m3672324202 (InputDeviceProfile_t1889671047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDeviceProfile::set_IncludePlatforms(System.String[])
extern "C"  void InputDeviceProfile_set_IncludePlatforms_m3382523363 (InputDeviceProfile_t1889671047 * __this, StringU5BU5D_t4054002952* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] InControl.InputDeviceProfile::get_ExcludePlatforms()
extern "C"  StringU5BU5D_t4054002952* InputDeviceProfile_get_ExcludePlatforms_m4013841400 (InputDeviceProfile_t1889671047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDeviceProfile::set_ExcludePlatforms(System.String[])
extern "C"  void InputDeviceProfile_set_ExcludePlatforms_m606127253 (InputDeviceProfile_t1889671047 * __this, StringU5BU5D_t4054002952* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.InputDeviceProfile::get_MaxSystemBuildNumber()
extern "C"  int32_t InputDeviceProfile_get_MaxSystemBuildNumber_m1182078403 (InputDeviceProfile_t1889671047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDeviceProfile::set_MaxSystemBuildNumber(System.Int32)
extern "C"  void InputDeviceProfile_set_MaxSystemBuildNumber_m1018206970 (InputDeviceProfile_t1889671047 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.InputDeviceProfile::get_MinSystemBuildNumber()
extern "C"  int32_t InputDeviceProfile_get_MinSystemBuildNumber_m2666160661 (InputDeviceProfile_t1889671047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDeviceProfile::set_MinSystemBuildNumber(System.Int32)
extern "C"  void InputDeviceProfile_set_MinSystemBuildNumber_m3649829964 (InputDeviceProfile_t1889671047 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.InputDeviceProfile::get_Sensitivity()
extern "C"  float InputDeviceProfile_get_Sensitivity_m1786102404 (InputDeviceProfile_t1889671047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDeviceProfile::set_Sensitivity(System.Single)
extern "C"  void InputDeviceProfile_set_Sensitivity_m4071325263 (InputDeviceProfile_t1889671047 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.InputDeviceProfile::get_LowerDeadZone()
extern "C"  float InputDeviceProfile_get_LowerDeadZone_m1527686838 (InputDeviceProfile_t1889671047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDeviceProfile::set_LowerDeadZone(System.Single)
extern "C"  void InputDeviceProfile_set_LowerDeadZone_m2622943581 (InputDeviceProfile_t1889671047 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.InputDeviceProfile::get_UpperDeadZone()
extern "C"  float InputDeviceProfile_get_UpperDeadZone_m3759013655 (InputDeviceProfile_t1889671047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDeviceProfile::set_UpperDeadZone(System.Single)
extern "C"  void InputDeviceProfile_set_UpperDeadZone_m1074790044 (InputDeviceProfile_t1889671047 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] InControl.InputDeviceProfile::get_SupportedPlatforms()
extern "C"  StringU5BU5D_t4054002952* InputDeviceProfile_get_SupportedPlatforms_m3993839716 (InputDeviceProfile_t1889671047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDeviceProfile::set_SupportedPlatforms(System.String[])
extern "C"  void InputDeviceProfile_set_SupportedPlatforms_m1656310633 (InputDeviceProfile_t1889671047 * __this, StringU5BU5D_t4054002952* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDeviceProfile::get_IsSupportedOnThisPlatform()
extern "C"  bool InputDeviceProfile_get_IsSupportedOnThisPlatform_m1225959217 (InputDeviceProfile_t1889671047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDeviceProfile::Hide(System.Type)
extern "C"  void InputDeviceProfile_Hide_m4191839215 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDeviceProfile::get_IsHidden()
extern "C"  bool InputDeviceProfile_get_IsHidden_m1986852153 (InputDeviceProfile_t1889671047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.InputDeviceProfile::get_AnalogCount()
extern "C"  int32_t InputDeviceProfile_get_AnalogCount_m1196224610 (InputDeviceProfile_t1889671047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.InputDeviceProfile::get_ButtonCount()
extern "C"  int32_t InputDeviceProfile_get_ButtonCount_m4061692896 (InputDeviceProfile_t1889671047 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
