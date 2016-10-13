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

// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "AssemblyU2DCSharp_InControl_InputControlType2879927883.h"
#include "mscorlib_System_String7231557.h"

// System.Void InControl.Utility::.cctor()
extern "C"  void Utility__cctor_m291761624 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Utility::DrawCircleGizmo(UnityEngine.Vector2,System.Single)
extern "C"  void Utility_DrawCircleGizmo_m1075560966 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___center0, float ___radius1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Utility::DrawCircleGizmo(UnityEngine.Vector2,System.Single,UnityEngine.Color)
extern "C"  void Utility_DrawCircleGizmo_m821588710 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___center0, float ___radius1, Color_t4194546905  ___color2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Utility::DrawOvalGizmo(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void Utility_DrawOvalGizmo_m902744151 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___center0, Vector2_t4282066565  ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Utility::DrawOvalGizmo(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color)
extern "C"  void Utility_DrawOvalGizmo_m1360979703 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___center0, Vector2_t4282066565  ___size1, Color_t4194546905  ___color2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Utility::DrawRectGizmo(UnityEngine.Rect)
extern "C"  void Utility_DrawRectGizmo_m306452970 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Utility::DrawRectGizmo(UnityEngine.Rect,UnityEngine.Color)
extern "C"  void Utility_DrawRectGizmo_m3692566986 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___rect0, Color_t4194546905  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Utility::DrawRectGizmo(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void Utility_DrawRectGizmo_m839841385 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___center0, Vector2_t4282066565  ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Utility::DrawRectGizmo(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color)
extern "C"  void Utility_DrawRectGizmo_m3505026185 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___center0, Vector2_t4282066565  ___size1, Color_t4194546905  ___color2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.Utility::GameObjectIsCulledOnCurrentCamera(UnityEngine.GameObject)
extern "C"  bool Utility_GameObjectIsCulledOnCurrentCamera_m3835290098 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color InControl.Utility::MoveColorTowards(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  Color_t4194546905  Utility_MoveColorTowards_m3497717113 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___color00, Color_t4194546905  ___color11, float ___maxDelta2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.Utility::ApplyDeadZone(System.Single,System.Single,System.Single)
extern "C"  float Utility_ApplyDeadZone_m166712 (Il2CppObject * __this /* static, unused */, float ___value0, float ___lowerDeadZone1, float ___upperDeadZone2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InControl.Utility::ApplySeparateDeadZone(System.Single,System.Single,System.Single,System.Single)
extern "C"  Vector2_t4282066565  Utility_ApplySeparateDeadZone_m1714087563 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___lowerDeadZone2, float ___upperDeadZone3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InControl.Utility::ApplyCircularDeadZone(UnityEngine.Vector2,System.Single,System.Single)
extern "C"  Vector2_t4282066565  Utility_ApplyCircularDeadZone_m178962169 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___v0, float ___lowerDeadZone1, float ___upperDeadZone2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InControl.Utility::ApplyCircularDeadZone(System.Single,System.Single,System.Single,System.Single)
extern "C"  Vector2_t4282066565  Utility_ApplyCircularDeadZone_m3630936719 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___lowerDeadZone2, float ___upperDeadZone3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.Utility::ApplySmoothing(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Utility_ApplySmoothing_m1057028529 (Il2CppObject * __this /* static, unused */, float ___thisValue0, float ___lastValue1, float ___deltaTime2, float ___sensitivity3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.Utility::ApplySnapping(System.Single,System.Single)
extern "C"  float Utility_ApplySnapping_m2976272135 (Il2CppObject * __this /* static, unused */, float ___value0, float ___threshold1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.Utility::TargetIsButton(InControl.InputControlType)
extern "C"  bool Utility_TargetIsButton_m1969787013 (Il2CppObject * __this /* static, unused */, int32_t ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.Utility::TargetIsStandard(InControl.InputControlType)
extern "C"  bool Utility_TargetIsStandard_m3595956304 (Il2CppObject * __this /* static, unused */, int32_t ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.Utility::TargetIsAlias(InControl.InputControlType)
extern "C"  bool Utility_TargetIsAlias_m216908825 (Il2CppObject * __this /* static, unused */, int32_t ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.Utility::ReadFromFile(System.String)
extern "C"  String_t* Utility_ReadFromFile_m3963382938 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Utility::WriteToFile(System.String,System.String)
extern "C"  void Utility_WriteToFile_m3901026357 (Il2CppObject * __this /* static, unused */, String_t* ___path0, String_t* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.Utility::Abs(System.Single)
extern "C"  float Utility_Abs_m2126279290 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.Utility::Approximately(System.Single,System.Single)
extern "C"  bool Utility_Approximately_m2509265832 (Il2CppObject * __this /* static, unused */, float ___v10, float ___v21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.Utility::Approximately(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool Utility_Approximately_m938165894 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___v10, Vector2_t4282066565  ___v21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.Utility::IsNotZero(System.Single)
extern "C"  bool Utility_IsNotZero_m1379827987 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.Utility::IsZero(System.Single)
extern "C"  bool Utility_IsZero_m2633111774 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.Utility::AbsoluteIsOverThreshold(System.Single,System.Single)
extern "C"  bool Utility_AbsoluteIsOverThreshold_m2403172467 (Il2CppObject * __this /* static, unused */, float ___value0, float ___threshold1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.Utility::NormalizeAngle(System.Single)
extern "C"  float Utility_NormalizeAngle_m1912528802 (Il2CppObject * __this /* static, unused */, float ___angle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.Utility::VectorToAngle(UnityEngine.Vector2)
extern "C"  float Utility_VectorToAngle_m33351366 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___vector0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.Utility::Min(System.Single,System.Single)
extern "C"  float Utility_Min_m2086223359 (Il2CppObject * __this /* static, unused */, float ___v00, float ___v11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.Utility::Max(System.Single,System.Single)
extern "C"  float Utility_Max_m3687952429 (Il2CppObject * __this /* static, unused */, float ___v00, float ___v11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.Utility::Min(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Utility_Min_m2732718729 (Il2CppObject * __this /* static, unused */, float ___v00, float ___v11, float ___v22, float ___v33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.Utility::Max(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Utility_Max_m2658565047 (Il2CppObject * __this /* static, unused */, float ___v00, float ___v11, float ___v22, float ___v33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.Utility::ValueFromSides(System.Single,System.Single)
extern "C"  float Utility_ValueFromSides_m2572116140 (Il2CppObject * __this /* static, unused */, float ___negativeSide0, float ___positiveSide1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.Utility::ValueFromSides(System.Single,System.Single,System.Boolean)
extern "C"  float Utility_ValueFromSides_m189138257 (Il2CppObject * __this /* static, unused */, float ___negativeSide0, float ___positiveSide1, bool ___invertSides2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.Utility::NextPowerOfTwo(System.Int32)
extern "C"  int32_t Utility_NextPowerOfTwo_m3942709429 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.Utility::get_Is32Bit()
extern "C"  bool Utility_get_Is32Bit_m2286865250 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.Utility::get_Is64Bit()
extern "C"  bool Utility_get_Is64Bit_m711667299 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.Utility::GetSystemBuildNumber()
extern "C"  int32_t Utility_GetSystemBuildNumber_m1594699859 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Utility::LoadScene(System.String)
extern "C"  void Utility_LoadScene_m2797401417 (Il2CppObject * __this /* static, unused */, String_t* ___sceneName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.Utility::PluginFileExtension()
extern "C"  String_t* Utility_PluginFileExtension_m3710408422 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
