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

// InControl.TouchSprite
struct TouchSprite_t2209778038;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2548470764;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// InControl.Touch
struct Touch_t2333148497;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Sprite3199167241.h"
#include "UnityEngine_UnityEngine_SpriteRenderer2548470764.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_InControl_Touch2333148497.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_InControl_TouchSpriteShape1928380763.h"
#include "AssemblyU2DCSharp_InControl_TouchUnitType1633405775.h"

// System.Void InControl.TouchSprite::.ctor()
extern "C"  void TouchSprite__ctor_m851960573 (TouchSprite_t2209778038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::.ctor(System.Single)
extern "C"  void TouchSprite__ctor_m2418713038 (TouchSprite_t2209778038 * __this, float ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TouchSprite::get_Dirty()
extern "C"  bool TouchSprite_get_Dirty_m2873414712 (TouchSprite_t2209778038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::set_Dirty(System.Boolean)
extern "C"  void TouchSprite_set_Dirty_m2504862983 (TouchSprite_t2209778038 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TouchSprite::get_Ready()
extern "C"  bool TouchSprite_get_Ready_m2282871241 (TouchSprite_t2209778038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::set_Ready(System.Boolean)
extern "C"  void TouchSprite_set_Ready_m3048513752 (TouchSprite_t2209778038 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::Create(System.String,UnityEngine.Transform,System.Int32)
extern "C"  void TouchSprite_Create_m151883425 (TouchSprite_t2209778038 * __this, String_t* ___gameObjectName0, Transform_t1659122786 * ___parentTransform1, int32_t ___sortingOrder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::Delete()
extern "C"  void TouchSprite_Delete_m1864952850 (TouchSprite_t2209778038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::Update()
extern "C"  void TouchSprite_Update_m2367836080 (TouchSprite_t2209778038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::Update(System.Boolean)
extern "C"  void TouchSprite_Update_m1756090663 (TouchSprite_t2209778038 * __this, bool ___forceUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject InControl.TouchSprite::CreateSpriteGameObject(System.String,UnityEngine.Transform)
extern "C"  GameObject_t3674682005 * TouchSprite_CreateSpriteGameObject_m175257749 (TouchSprite_t2209778038 * __this, String_t* ___name0, Transform_t1659122786 * ___parentTransform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SpriteRenderer InControl.TouchSprite::CreateSpriteRenderer(UnityEngine.GameObject,UnityEngine.Sprite,System.Int32)
extern "C"  SpriteRenderer_t2548470764 * TouchSprite_CreateSpriteRenderer_m4015351858 (TouchSprite_t2209778038 * __this, GameObject_t3674682005 * ___spriteGameObject0, Sprite_t3199167241 * ___sprite1, int32_t ___sortingOrder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::ScaleSpriteInPixels(UnityEngine.GameObject,UnityEngine.SpriteRenderer,UnityEngine.Vector2)
extern "C"  void TouchSprite_ScaleSpriteInPixels_m1715225895 (TouchSprite_t2209778038 * __this, GameObject_t3674682005 * ___spriteGameObject0, SpriteRenderer_t2548470764 * ___spriteRenderer1, Vector2_t4282066565  ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::ScaleSpriteInPercent(UnityEngine.GameObject,UnityEngine.SpriteRenderer,UnityEngine.Vector2)
extern "C"  void TouchSprite_ScaleSpriteInPercent_m1017623851 (TouchSprite_t2209778038 * __this, GameObject_t3674682005 * ___spriteGameObject0, SpriteRenderer_t2548470764 * ___spriteRenderer1, Vector2_t4282066565  ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TouchSprite::Contains(UnityEngine.Vector2)
extern "C"  bool TouchSprite_Contains_m1993282728 (TouchSprite_t2209778038 * __this, Vector2_t4282066565  ___testWorldPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TouchSprite::Contains(InControl.Touch)
extern "C"  bool TouchSprite_Contains_m265854583 (TouchSprite_t2209778038 * __this, Touch_t2333148497 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::DrawGizmos(UnityEngine.Vector3,UnityEngine.Color)
extern "C"  void TouchSprite_DrawGizmos_m4084246261 (TouchSprite_t2209778038 * __this, Vector3_t4282066566  ___position0, Color_t4194546905  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TouchSprite::get_State()
extern "C"  bool TouchSprite_get_State_m3600269623 (TouchSprite_t2209778038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::set_State(System.Boolean)
extern "C"  void TouchSprite_set_State_m1352789958 (TouchSprite_t2209778038 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite InControl.TouchSprite::get_BusySprite()
extern "C"  Sprite_t3199167241 * TouchSprite_get_BusySprite_m1816454573 (TouchSprite_t2209778038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::set_BusySprite(UnityEngine.Sprite)
extern "C"  void TouchSprite_set_BusySprite_m1144613638 (TouchSprite_t2209778038 * __this, Sprite_t3199167241 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite InControl.TouchSprite::get_IdleSprite()
extern "C"  Sprite_t3199167241 * TouchSprite_get_IdleSprite_m2073413768 (TouchSprite_t2209778038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::set_IdleSprite(UnityEngine.Sprite)
extern "C"  void TouchSprite_set_IdleSprite_m2056744225 (TouchSprite_t2209778038 * __this, Sprite_t3199167241 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::set_Sprite(UnityEngine.Sprite)
extern "C"  void TouchSprite_set_Sprite_m1841101741 (TouchSprite_t2209778038 * __this, Sprite_t3199167241 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color InControl.TouchSprite::get_BusyColor()
extern "C"  Color_t4194546905  TouchSprite_get_BusyColor_m3088295971 (TouchSprite_t2209778038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::set_BusyColor(UnityEngine.Color)
extern "C"  void TouchSprite_set_BusyColor_m2781911806 (TouchSprite_t2209778038 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color InControl.TouchSprite::get_IdleColor()
extern "C"  Color_t4194546905  TouchSprite_get_IdleColor_m1711111656 (TouchSprite_t2209778038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::set_IdleColor(UnityEngine.Color)
extern "C"  void TouchSprite_set_IdleColor_m208562137 (TouchSprite_t2209778038 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.TouchSpriteShape InControl.TouchSprite::get_Shape()
extern "C"  int32_t TouchSprite_get_Shape_m4031031773 (TouchSprite_t2209778038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::set_Shape(InControl.TouchSpriteShape)
extern "C"  void TouchSprite_set_Shape_m3521331308 (TouchSprite_t2209778038 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.TouchUnitType InControl.TouchSprite::get_SizeUnitType()
extern "C"  int32_t TouchSprite_get_SizeUnitType_m1452796291 (TouchSprite_t2209778038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::set_SizeUnitType(InControl.TouchUnitType)
extern "C"  void TouchSprite_set_SizeUnitType_m1000032904 (TouchSprite_t2209778038 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InControl.TouchSprite::get_Size()
extern "C"  Vector2_t4282066565  TouchSprite_get_Size_m1089645174 (TouchSprite_t2209778038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::set_Size(UnityEngine.Vector2)
extern "C"  void TouchSprite_set_Size_m1066745269 (TouchSprite_t2209778038 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InControl.TouchSprite::get_WorldSize()
extern "C"  Vector2_t4282066565  TouchSprite_get_WorldSize_m1567992256 (TouchSprite_t2209778038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 InControl.TouchSprite::get_Position()
extern "C"  Vector3_t4282066566  TouchSprite_get_Position_m3248928479 (TouchSprite_t2209778038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchSprite::set_Position(UnityEngine.Vector3)
extern "C"  void TouchSprite_set_Position_m2638219052 (TouchSprite_t2209778038 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
