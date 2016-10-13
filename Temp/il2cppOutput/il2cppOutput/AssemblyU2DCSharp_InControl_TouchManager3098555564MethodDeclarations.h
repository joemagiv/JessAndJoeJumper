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

// InControl.TouchManager
struct TouchManager_t3098555564;
// System.Action
struct Action_t3771233898;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// InControl.Touch
struct Touch_t2333148497;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.Touch>
struct ReadOnlyCollection_1_t3890226033;
// UnityEngine.Camera
struct Camera_t2727095145;
// InControl.InputDevice
struct InputDevice_t4071704914;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3771233898.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_InControl_Touch2333148497.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_InControl_TouchUnitType1633405775.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "AssemblyU2DCSharp_InControl_TouchManager_GizmoShow3947311649.h"
#include "AssemblyU2DCSharp_InControl_TouchManager3098555564.h"

// System.Void InControl.TouchManager::.ctor()
extern "C"  void TouchManager__ctor_m2006036407 (TouchManager_t3098555564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::add_OnSetup(System.Action)
extern "C"  void TouchManager_add_OnSetup_m1414204296 (Il2CppObject * __this /* static, unused */, Action_t3771233898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::remove_OnSetup(System.Action)
extern "C"  void TouchManager_remove_OnSetup_m93923757 (Il2CppObject * __this /* static, unused */, Action_t3771233898 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::OnEnable()
extern "C"  void TouchManager_OnEnable_m3727222895 (TouchManager_t3098555564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::OnDisable()
extern "C"  void TouchManager_OnDisable_m20730014 (TouchManager_t3098555564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::Setup()
extern "C"  void TouchManager_Setup_m541369362 (TouchManager_t3098555564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::Reset()
extern "C"  void TouchManager_Reset_m3947436644 (TouchManager_t3098555564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator InControl.TouchManager::UpdateScreenSizeAtEndOfFrame()
extern "C"  Il2CppObject * TouchManager_UpdateScreenSizeAtEndOfFrame_m4206339673 (TouchManager_t3098555564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::Update()
extern "C"  void TouchManager_Update_m3784448566 (TouchManager_t3098555564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::CreateDevice()
extern "C"  void TouchManager_CreateDevice_m196044959 (TouchManager_t3098555564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::UpdateDevice(System.UInt64,System.Single)
extern "C"  void TouchManager_UpdateDevice_m1879076148 (TouchManager_t3098555564 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::CommitDevice(System.UInt64,System.Single)
extern "C"  void TouchManager_CommitDevice_m3456480774 (TouchManager_t3098555564 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::SubmitControlStates(System.UInt64,System.Single)
extern "C"  void TouchManager_SubmitControlStates_m430508548 (TouchManager_t3098555564 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::CommitControlStates(System.UInt64,System.Single)
extern "C"  void TouchManager_CommitControlStates_m3024428131 (TouchManager_t3098555564 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::UpdateScreenSize(UnityEngine.Vector2)
extern "C"  void TouchManager_UpdateScreenSize_m1359279991 (TouchManager_t3098555564 * __this, Vector2_t4282066565  ___currentScreenSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::CreateTouches()
extern "C"  void TouchManager_CreateTouches_m2121571366 (TouchManager_t3098555564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::UpdateTouches(System.UInt64,System.Single)
extern "C"  void TouchManager_UpdateTouches_m3045557639 (TouchManager_t3098555564 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::SendTouchBegan(InControl.Touch)
extern "C"  void TouchManager_SendTouchBegan_m26182946 (TouchManager_t3098555564 * __this, Touch_t2333148497 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::SendTouchMoved(InControl.Touch)
extern "C"  void TouchManager_SendTouchMoved_m1656382048 (TouchManager_t3098555564 * __this, Touch_t2333148497 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::SendTouchEnded(InControl.Touch)
extern "C"  void TouchManager_SendTouchEnded_m3633481017 (TouchManager_t3098555564 * __this, Touch_t2333148497 * ___touch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::InvokeTouchEvents()
extern "C"  void TouchManager_InvokeTouchEvents_m331839605 (TouchManager_t3098555564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TouchManager::TouchCameraIsValid()
extern "C"  bool TouchManager_TouchCameraIsValid_m3477499887 (TouchManager_t3098555564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 InControl.TouchManager::ConvertScreenToWorldPoint(UnityEngine.Vector2)
extern "C"  Vector3_t4282066566  TouchManager_ConvertScreenToWorldPoint_m3377558567 (TouchManager_t3098555564 * __this, Vector2_t4282066565  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 InControl.TouchManager::ConvertViewToWorldPoint(UnityEngine.Vector2)
extern "C"  Vector3_t4282066566  TouchManager_ConvertViewToWorldPoint_m3415860686 (TouchManager_t3098555564 * __this, Vector2_t4282066565  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 InControl.TouchManager::ConvertScreenToViewPoint(UnityEngine.Vector2)
extern "C"  Vector3_t4282066566  TouchManager_ConvertScreenToViewPoint_m2049810722 (TouchManager_t3098555564 * __this, Vector2_t4282066565  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TouchManager::get_controlsEnabled()
extern "C"  bool TouchManager_get_controlsEnabled_m2465283075 (TouchManager_t3098555564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::set_controlsEnabled(System.Boolean)
extern "C"  void TouchManager_set_controlsEnabled_m1959648378 (TouchManager_t3098555564 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.Touch> InControl.TouchManager::get_Touches()
extern "C"  ReadOnlyCollection_1_t3890226033 * TouchManager_get_Touches_m861336224 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.TouchManager::get_TouchCount()
extern "C"  int32_t TouchManager_get_TouchCount_m1032467220 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.Touch InControl.TouchManager::GetTouch(System.Int32)
extern "C"  Touch_t2333148497 * TouchManager_GetTouch_m728573937 (Il2CppObject * __this /* static, unused */, int32_t ___touchIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.Touch InControl.TouchManager::GetTouchByFingerId(System.Int32)
extern "C"  Touch_t2333148497 * TouchManager_GetTouchByFingerId_m745035244 (Il2CppObject * __this /* static, unused */, int32_t ___fingerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 InControl.TouchManager::ScreenToWorldPoint(UnityEngine.Vector2)
extern "C"  Vector3_t4282066566  TouchManager_ScreenToWorldPoint_m3854730446 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 InControl.TouchManager::ViewToWorldPoint(UnityEngine.Vector2)
extern "C"  Vector3_t4282066566  TouchManager_ViewToWorldPoint_m3130324021 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 InControl.TouchManager::ScreenToViewPoint(UnityEngine.Vector2)
extern "C"  Vector3_t4282066566  TouchManager_ScreenToViewPoint_m1788108699 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.TouchManager::ConvertToWorld(System.Single,InControl.TouchUnitType)
extern "C"  float TouchManager_ConvertToWorld_m1972187827 (Il2CppObject * __this /* static, unused */, float ___value0, int32_t ___unitType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect InControl.TouchManager::PercentToWorldRect(UnityEngine.Rect)
extern "C"  Rect_t4241904616  TouchManager_PercentToWorldRect_m1355919178 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect InControl.TouchManager::PixelToWorldRect(UnityEngine.Rect)
extern "C"  Rect_t4241904616  TouchManager_PixelToWorldRect_m2969700393 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect InControl.TouchManager::ConvertToWorld(UnityEngine.Rect,InControl.TouchUnitType)
extern "C"  Rect_t4241904616  TouchManager_ConvertToWorld_m339209373 (Il2CppObject * __this /* static, unused */, Rect_t4241904616  ___rect0, int32_t ___unitType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera InControl.TouchManager::get_Camera()
extern "C"  Camera_t2727095145 * TouchManager_get_Camera_m3791561916 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputDevice InControl.TouchManager::get_Device()
extern "C"  InputDevice_t4071704914 * TouchManager_get_Device_m3026254293 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 InControl.TouchManager::get_ViewSize()
extern "C"  Vector3_t4282066566  TouchManager_get_ViewSize_m624035830 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.TouchManager::get_PercentToWorld()
extern "C"  float TouchManager_get_PercentToWorld_m3566384020 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.TouchManager::get_HalfPercentToWorld()
extern "C"  float TouchManager_get_HalfPercentToWorld_m194799975 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.TouchManager::get_PixelToWorld()
extern "C"  float TouchManager_get_PixelToWorld_m844700339 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.TouchManager::get_HalfPixelToWorld()
extern "C"  float TouchManager_get_HalfPixelToWorld_m32254278 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InControl.TouchManager::get_ScreenSize()
extern "C"  Vector2_t4282066565  TouchManager_get_ScreenSize_m336222110 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InControl.TouchManager::get_HalfScreenSize()
extern "C"  Vector2_t4282066565  TouchManager_get_HalfScreenSize_m122589041 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.TouchManager/GizmoShowOption InControl.TouchManager::get_ControlsShowGizmos()
extern "C"  int32_t TouchManager_get_ControlsShowGizmos_m1265225438 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TouchManager::get_ControlsEnabled()
extern "C"  bool TouchManager_get_ControlsEnabled_m2109045731 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.TouchManager::set_ControlsEnabled(System.Boolean)
extern "C"  void TouchManager_set_ControlsEnabled_m3618952282 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.TouchManager::op_Implicit(InControl.TouchManager)
extern "C"  bool TouchManager_op_Implicit_m2050942592 (Il2CppObject * __this /* static, unused */, TouchManager_t3098555564 * ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
