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

// InControl.InputDevice
struct InputDevice_t4071704914;
// System.String
struct String_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.InputControl>
struct ReadOnlyCollection_1_t3101003153;
// InControl.InputControl[]
struct InputControlU5BU5D_t4234205100;
// InControl.TwoAxisInputControl
struct TwoAxisInputControl_t2505665394;
// InControl.InputDevice/AnalogSnapshotEntry[]
struct AnalogSnapshotEntryU5BU5D_t2631825444;
// InControl.InputControl
struct InputControl_t1543925617;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Guid2862754429.h"
#include "AssemblyU2DCSharp_InControl_TwoAxisInputControl2505665394.h"
#include "AssemblyU2DCSharp_InControl_InputControlType2879927883.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_InControl_UnknownDeviceControl2259642683.h"

// System.Void InControl.InputDevice::.ctor()
extern "C"  void InputDevice__ctor_m3079748257 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::.ctor(System.String)
extern "C"  void InputDevice__ctor_m4271534593 (InputDevice_t4071704914 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::.ctor(System.String,System.Boolean)
extern "C"  void InputDevice__ctor_m2613411676 (InputDevice_t4071704914 * __this, String_t* ___name0, bool ___rawSticks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::.cctor()
extern "C"  void InputDevice__cctor_m500819244 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.InputDevice::get_Name()
extern "C"  String_t* InputDevice_get_Name_m2120979604 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::set_Name(System.String)
extern "C"  void InputDevice_set_Name_m2422134039 (InputDevice_t4071704914 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.InputDevice::get_Meta()
extern "C"  String_t* InputDevice_get_Meta_m2096249230 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::set_Meta(System.String)
extern "C"  void InputDevice_set_Meta_m2203686493 (InputDevice_t4071704914 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.InputDevice::get_SortOrder()
extern "C"  int32_t InputDevice_get_SortOrder_m862082612 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::set_SortOrder(System.Int32)
extern "C"  void InputDevice_set_SortOrder_m2293687299 (InputDevice_t4071704914 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid InControl.InputDevice::get_GUID()
extern "C"  Guid_t2862754429  InputDevice_get_GUID_m2805343850 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::set_GUID(System.Guid)
extern "C"  void InputDevice_set_GUID_m39465537 (InputDevice_t4071704914 * __this, Guid_t2862754429  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 InControl.InputDevice::get_LastChangeTick()
extern "C"  uint64_t InputDevice_get_LastChangeTick_m923785107 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::set_LastChangeTick(System.UInt64)
extern "C"  void InputDevice_set_LastChangeTick_m3458500664 (InputDevice_t4071704914 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::get_IsAttached()
extern "C"  bool InputDevice_get_IsAttached_m2182870662 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::set_IsAttached(System.Boolean)
extern "C"  void InputDevice_set_IsAttached_m1448213285 (InputDevice_t4071704914 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::get_RawSticks()
extern "C"  bool InputDevice_get_RawSticks_m1853788021 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::set_RawSticks(System.Boolean)
extern "C"  void InputDevice_set_RawSticks_m709463428 (InputDevice_t4071704914 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.InputControl> InControl.InputDevice::get_Controls()
extern "C"  ReadOnlyCollection_1_t3101003153 * InputDevice_get_Controls_m3651719701 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::set_Controls(System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.InputControl>)
extern "C"  void InputDevice_set_Controls_m1531023670 (InputDevice_t4071704914 * __this, ReadOnlyCollection_1_t3101003153 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl[] InControl.InputDevice::get_ControlsByTarget()
extern "C"  InputControlU5BU5D_t4234205100* InputDevice_get_ControlsByTarget_m281340568 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::set_ControlsByTarget(InControl.InputControl[])
extern "C"  void InputDevice_set_ControlsByTarget_m3115833523 (InputDevice_t4071704914 * __this, InputControlU5BU5D_t4234205100* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.TwoAxisInputControl InControl.InputDevice::get_LeftStick()
extern "C"  TwoAxisInputControl_t2505665394 * InputDevice_get_LeftStick_m2567551496 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::set_LeftStick(InControl.TwoAxisInputControl)
extern "C"  void InputDevice_set_LeftStick_m2496639165 (InputDevice_t4071704914 * __this, TwoAxisInputControl_t2505665394 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.TwoAxisInputControl InControl.InputDevice::get_RightStick()
extern "C"  TwoAxisInputControl_t2505665394 * InputDevice_get_RightStick_m2960050455 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::set_RightStick(InControl.TwoAxisInputControl)
extern "C"  void InputDevice_set_RightStick_m994741684 (InputDevice_t4071704914 * __this, TwoAxisInputControl_t2505665394 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.TwoAxisInputControl InControl.InputDevice::get_DPad()
extern "C"  TwoAxisInputControl_t2505665394 * InputDevice_get_DPad_m847801746 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::set_DPad(InControl.TwoAxisInputControl)
extern "C"  void InputDevice_set_DPad_m1830180185 (InputDevice_t4071704914 * __this, TwoAxisInputControl_t2505665394 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputDevice/AnalogSnapshotEntry[] InControl.InputDevice::get_AnalogSnapshot()
extern "C"  AnalogSnapshotEntryU5BU5D_t2631825444* InputDevice_get_AnalogSnapshot_m3731465256 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::set_AnalogSnapshot(InControl.InputDevice/AnalogSnapshotEntry[])
extern "C"  void InputDevice_set_AnalogSnapshot_m1444347971 (InputDevice_t4071704914 * __this, AnalogSnapshotEntryU5BU5D_t2631825444* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::OnAttached()
extern "C"  void InputDevice_OnAttached_m87389414 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::OnDetached()
extern "C"  void InputDevice_OnDetached_m839862068 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::AddAliasControls()
extern "C"  void InputDevice_AddAliasControls_m3312250952 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::RemoveAliasControls()
extern "C"  void InputDevice_RemoveAliasControls_m3391447489 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::ClearControls()
extern "C"  void InputDevice_ClearControls_m4085860642 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::HasControl(InControl.InputControlType)
extern "C"  bool InputDevice_HasControl_m4200436367 (InputDevice_t4071704914 * __this, int32_t ___controlType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::GetControl(InControl.InputControlType)
extern "C"  InputControl_t1543925617 * InputDevice_GetControl_m3911319059 (InputDevice_t4071704914 * __this, int32_t ___controlType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_Item(InControl.InputControlType)
extern "C"  InputControl_t1543925617 * InputDevice_get_Item_m823914824 (InputDevice_t4071704914 * __this, int32_t ___controlType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControlType InControl.InputDevice::GetInputControlTypeByName(System.String)
extern "C"  int32_t InputDevice_GetInputControlTypeByName_m867222276 (Il2CppObject * __this /* static, unused */, String_t* ___inputControlName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::GetControlByName(System.String)
extern "C"  InputControl_t1543925617 * InputDevice_GetControlByName_m2743610282 (InputDevice_t4071704914 * __this, String_t* ___controlName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::AddControl(InControl.InputControlType,System.String)
extern "C"  InputControl_t1543925617 * InputDevice_AddControl_m3646319396 (InputDevice_t4071704914 * __this, int32_t ___controlType0, String_t* ___handle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::AddControl(InControl.InputControlType,System.String,System.Single,System.Single)
extern "C"  InputControl_t1543925617 * InputDevice_AddControl_m3591745070 (InputDevice_t4071704914 * __this, int32_t ___controlType0, String_t* ___handle1, float ___lowerDeadZone2, float ___upperDeadZone3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::RemoveControl(InControl.InputControlType)
extern "C"  void InputDevice_RemoveControl_m3827639381 (InputDevice_t4071704914 * __this, int32_t ___controlType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::ClearInputState()
extern "C"  void InputDevice_ClearInputState_m1608021587 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::UpdateWithState(InControl.InputControlType,System.Boolean,System.UInt64,System.Single)
extern "C"  void InputDevice_UpdateWithState_m3996853593 (InputDevice_t4071704914 * __this, int32_t ___controlType0, bool ___state1, uint64_t ___updateTick2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::UpdateWithValue(InControl.InputControlType,System.Single,System.UInt64,System.Single)
extern "C"  void InputDevice_UpdateWithValue_m614121053 (InputDevice_t4071704914 * __this, int32_t ___controlType0, float ___value1, uint64_t ___updateTick2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::UpdateLeftStickWithValue(UnityEngine.Vector2,System.UInt64,System.Single)
extern "C"  void InputDevice_UpdateLeftStickWithValue_m3362444774 (InputDevice_t4071704914 * __this, Vector2_t4282066565  ___value0, uint64_t ___updateTick1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::UpdateLeftStickWithRawValue(UnityEngine.Vector2,System.UInt64,System.Single)
extern "C"  void InputDevice_UpdateLeftStickWithRawValue_m1406722598 (InputDevice_t4071704914 * __this, Vector2_t4282066565  ___value0, uint64_t ___updateTick1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::CommitLeftStick()
extern "C"  void InputDevice_CommitLeftStick_m1558798097 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::UpdateRightStickWithValue(UnityEngine.Vector2,System.UInt64,System.Single)
extern "C"  void InputDevice_UpdateRightStickWithValue_m594225255 (InputDevice_t4071704914 * __this, Vector2_t4282066565  ___value0, uint64_t ___updateTick1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::UpdateRightStickWithRawValue(UnityEngine.Vector2,System.UInt64,System.Single)
extern "C"  void InputDevice_UpdateRightStickWithRawValue_m1046082565 (InputDevice_t4071704914 * __this, Vector2_t4282066565  ___value0, uint64_t ___updateTick1, float ___deltaTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::CommitRightStick()
extern "C"  void InputDevice_CommitRightStick_m1753466158 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::Update(System.UInt64,System.Single)
extern "C"  void InputDevice_Update_m1374662676 (InputDevice_t4071704914 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::AnyCommandControlIsPressed()
extern "C"  bool InputDevice_AnyCommandControlIsPressed_m62313449 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::ProcessLeftStick(System.UInt64,System.Single)
extern "C"  void InputDevice_ProcessLeftStick_m3538212323 (InputDevice_t4071704914 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::ProcessRightStick(System.UInt64,System.Single)
extern "C"  void InputDevice_ProcessRightStick_m395767102 (InputDevice_t4071704914 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::ProcessDPad(System.UInt64,System.Single)
extern "C"  void InputDevice_ProcessDPad_m3895764899 (InputDevice_t4071704914 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::Commit(System.UInt64,System.Single)
extern "C"  void InputDevice_Commit_m3431497318 (InputDevice_t4071704914 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::LastChangedAfter(InControl.InputDevice)
extern "C"  bool InputDevice_LastChangedAfter_m1906039035 (InputDevice_t4071704914 * __this, InputDevice_t4071704914 * ___device0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::RequestActivation()
extern "C"  void InputDevice_RequestActivation_m2710236804 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::Vibrate(System.Single,System.Single)
extern "C"  void InputDevice_Vibrate_m4206281378 (InputDevice_t4071704914 * __this, float ___leftMotor0, float ___rightMotor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::Vibrate(System.Single)
extern "C"  void InputDevice_Vibrate_m713545341 (InputDevice_t4071704914 * __this, float ___intensity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::StopVibration()
extern "C"  void InputDevice_StopVibration_m2359525999 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::SetLightColor(System.Single,System.Single,System.Single)
extern "C"  void InputDevice_SetLightColor_m1511520263 (InputDevice_t4071704914 * __this, float ___red0, float ___green1, float ___blue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::SetLightColor(UnityEngine.Color)
extern "C"  void InputDevice_SetLightColor_m3167458296 (InputDevice_t4071704914 * __this, Color_t4194546905  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::SetLightFlash(System.Single,System.Single)
extern "C"  void InputDevice_SetLightFlash_m646051637 (InputDevice_t4071704914 * __this, float ___flashOnDuration0, float ___flashOffDuration1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::StopLightFlash()
extern "C"  void InputDevice_StopLightFlash_m3998440223 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::get_IsSupportedOnThisPlatform()
extern "C"  bool InputDevice_get_IsSupportedOnThisPlatform_m1355084670 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::get_IsKnown()
extern "C"  bool InputDevice_get_IsKnown_m4084501059 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::get_IsUnknown()
extern "C"  bool InputDevice_get_IsUnknown_m3496335818 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::get_MenuIsPressed()
extern "C"  bool InputDevice_get_MenuIsPressed_m1281976387 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::get_MenuWasPressed()
extern "C"  bool InputDevice_get_MenuWasPressed_m1274575696 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::get_MenuWasReleased()
extern "C"  bool InputDevice_get_MenuWasReleased_m1758498289 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::get_CommandIsPressed()
extern "C"  bool InputDevice_get_CommandIsPressed_m4177064229 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::get_CommandWasPressed()
extern "C"  bool InputDevice_get_CommandWasPressed_m827985582 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::get_CommandWasReleased()
extern "C"  bool InputDevice_get_CommandWasReleased_m799106643 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_AnyButton()
extern "C"  InputControl_t1543925617 * InputDevice_get_AnyButton_m981573896 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::get_AnyButtonIsPressed()
extern "C"  bool InputDevice_get_AnyButtonIsPressed_m1242137746 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::get_AnyButtonWasPressed()
extern "C"  bool InputDevice_get_AnyButtonWasPressed_m39577825 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::get_AnyButtonWasReleased()
extern "C"  bool InputDevice_get_AnyButtonWasReleased_m2128269952 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.TwoAxisInputControl InControl.InputDevice::get_Direction()
extern "C"  TwoAxisInputControl_t2505665394 * InputDevice_get_Direction_m4000755518 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_LeftStickUp()
extern "C"  InputControl_t1543925617 * InputDevice_get_LeftStickUp_m953456206 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_LeftStickDown()
extern "C"  InputControl_t1543925617 * InputDevice_get_LeftStickDown_m958181909 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_LeftStickLeft()
extern "C"  InputControl_t1543925617 * InputDevice_get_LeftStickLeft_m1177479226 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_LeftStickRight()
extern "C"  InputControl_t1543925617 * InputDevice_get_LeftStickRight_m3287328107 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_RightStickUp()
extern "C"  InputControl_t1543925617 * InputDevice_get_RightStickUp_m4231129831 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_RightStickDown()
extern "C"  InputControl_t1543925617 * InputDevice_get_RightStickDown_m2591507566 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_RightStickLeft()
extern "C"  InputControl_t1543925617 * InputDevice_get_RightStickLeft_m2810804883 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_RightStickRight()
extern "C"  InputControl_t1543925617 * InputDevice_get_RightStickRight_m2380815922 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_DPadUp()
extern "C"  InputControl_t1543925617 * InputDevice_get_DPadUp_m1982709858 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_DPadDown()
extern "C"  InputControl_t1543925617 * InputDevice_get_DPadDown_m2228463401 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_DPadLeft()
extern "C"  InputControl_t1543925617 * InputDevice_get_DPadLeft_m2447760718 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_DPadRight()
extern "C"  InputControl_t1543925617 * InputDevice_get_DPadRight_m4011348695 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_Action1()
extern "C"  InputControl_t1543925617 * InputDevice_get_Action1_m1065324677 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_Action2()
extern "C"  InputControl_t1543925617 * InputDevice_get_Action2_m1065325638 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_Action3()
extern "C"  InputControl_t1543925617 * InputDevice_get_Action3_m1065326599 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_Action4()
extern "C"  InputControl_t1543925617 * InputDevice_get_Action4_m1065327560 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_LeftTrigger()
extern "C"  InputControl_t1543925617 * InputDevice_get_LeftTrigger_m66649467 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_RightTrigger()
extern "C"  InputControl_t1543925617 * InputDevice_get_RightTrigger_m3344323092 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_LeftBumper()
extern "C"  InputControl_t1543925617 * InputDevice_get_LeftBumper_m2035814306 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_RightBumper()
extern "C"  InputControl_t1543925617 * InputDevice_get_RightBumper_m1864451049 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_LeftStickButton()
extern "C"  InputControl_t1543925617 * InputDevice_get_LeftStickButton_m3451051045 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_RightStickButton()
extern "C"  InputControl_t1543925617 * InputDevice_get_RightStickButton_m1118977086 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_LeftStickX()
extern "C"  InputControl_t1543925617 * InputDevice_get_LeftStickX_m584946631 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_LeftStickY()
extern "C"  InputControl_t1543925617 * InputDevice_get_LeftStickY_m584947592 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_RightStickX()
extern "C"  InputControl_t1543925617 * InputDevice_get_RightStickX_m413583374 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_RightStickY()
extern "C"  InputControl_t1543925617 * InputDevice_get_RightStickY_m413584335 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_DPadX()
extern "C"  InputControl_t1543925617 * InputDevice_get_DPadX_m2003621683 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_DPadY()
extern "C"  InputControl_t1543925617 * InputDevice_get_DPadY_m2003622644 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputControl InControl.InputDevice::get_Command()
extern "C"  InputControl_t1543925617 * InputDevice_get_Command_m3663315733 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::ExpireControlCache()
extern "C"  void InputDevice_ExpireControlCache_m3554274535 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.InputDevice::get_NumUnknownAnalogs()
extern "C"  int32_t InputDevice_get_NumUnknownAnalogs_m3654012451 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.InputDevice::get_NumUnknownButtons()
extern "C"  int32_t InputDevice_get_NumUnknownButtons_m1073270945 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputDevice::ReadRawButtonState(System.Int32)
extern "C"  bool InputDevice_ReadRawButtonState_m2007283277 (InputDevice_t4071704914 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.InputDevice::ReadRawAnalogValue(System.Int32)
extern "C"  float InputDevice_ReadRawAnalogValue_m375458711 (InputDevice_t4071704914 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputDevice::TakeSnapshot()
extern "C"  void InputDevice_TakeSnapshot_m1573339438 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.UnknownDeviceControl InControl.InputDevice::GetFirstPressedAnalog()
extern "C"  UnknownDeviceControl_t2259642683  InputDevice_GetFirstPressedAnalog_m3466846337 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.UnknownDeviceControl InControl.InputDevice::GetFirstPressedButton()
extern "C"  UnknownDeviceControl_t2259642683  InputDevice_GetFirstPressedButton_m3383596611 (InputDevice_t4071704914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
