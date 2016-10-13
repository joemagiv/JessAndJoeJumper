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

// InControl.PlayerAction
struct PlayerAction_t3117799861;
// System.String
struct String_t;
// InControl.PlayerActionSet
struct PlayerActionSet_t2670622205;
// System.Action`1<InControl.BindingSourceType>
struct Action_1_t816497204;
// System.Object
struct Il2CppObject;
// InControl.BindingSource
struct BindingSource_t1899497234;
// InControl.Key[]
struct KeyU5BU5D_t3745573420;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.BindingSource>
struct ReadOnlyCollection_1_t3456574770;
// InControl.InputDevice
struct InputDevice_t4071704914;
// System.IO.BinaryReader
struct BinaryReader_t3990958868;
// System.IO.BinaryWriter
struct BinaryWriter_t4146364100;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_InControl_PlayerActionSet2670622205.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_InControl_BindingSource1899497234.h"
#include "AssemblyU2DCSharp_InControl_Mouse2326684343.h"
#include "AssemblyU2DCSharp_InControl_InputControlType2879927883.h"
#include "AssemblyU2DCSharp_InControl_BindingSourceType420681068.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"
#include "mscorlib_System_IO_BinaryReader3990958868.h"
#include "mscorlib_System_IO_BinaryWriter4146364100.h"

// System.Void InControl.PlayerAction::.ctor(System.String,InControl.PlayerActionSet)
extern "C"  void PlayerAction__ctor_m2489655883 (PlayerAction_t3117799861 * __this, String_t* ___name0, PlayerActionSet_t2670622205 * ___owner1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::.cctor()
extern "C"  void PlayerAction__cctor_m2551038111 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::add_OnLastInputTypeChanged(System.Action`1<InControl.BindingSourceType>)
extern "C"  void PlayerAction_add_OnLastInputTypeChanged_m2196118921 (PlayerAction_t3117799861 * __this, Action_1_t816497204 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::remove_OnLastInputTypeChanged(System.Action`1<InControl.BindingSourceType>)
extern "C"  void PlayerAction_remove_OnLastInputTypeChanged_m2330375868 (PlayerAction_t3117799861 * __this, Action_1_t816497204 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.PlayerAction::get_Name()
extern "C"  String_t* PlayerAction_get_Name_m3053353581 (PlayerAction_t3117799861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::set_Name(System.String)
extern "C"  void PlayerAction_set_Name_m656426308 (PlayerAction_t3117799861 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.PlayerActionSet InControl.PlayerAction::get_Owner()
extern "C"  PlayerActionSet_t2670622205 * PlayerAction_get_Owner_m3499115896 (PlayerAction_t3117799861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::set_Owner(InControl.PlayerActionSet)
extern "C"  void PlayerAction_set_Owner_m3230697179 (PlayerAction_t3117799861 * __this, PlayerActionSet_t2670622205 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object InControl.PlayerAction::get_UserData()
extern "C"  Il2CppObject * PlayerAction_get_UserData_m4255032329 (PlayerAction_t3117799861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::set_UserData(System.Object)
extern "C"  void PlayerAction_set_UserData_m1644606476 (PlayerAction_t3117799861 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::AddDefaultBinding(InControl.BindingSource)
extern "C"  void PlayerAction_AddDefaultBinding_m125700247 (PlayerAction_t3117799861 * __this, BindingSource_t1899497234 * ___binding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::AddDefaultBinding(InControl.Key[])
extern "C"  void PlayerAction_AddDefaultBinding_m807433142 (PlayerAction_t3117799861 * __this, KeyU5BU5D_t3745573420* ___keys0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::AddDefaultBinding(InControl.Mouse)
extern "C"  void PlayerAction_AddDefaultBinding_m873830802 (PlayerAction_t3117799861 * __this, int32_t ___control0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::AddDefaultBinding(InControl.InputControlType)
extern "C"  void PlayerAction_AddDefaultBinding_m2967097230 (PlayerAction_t3117799861 * __this, int32_t ___control0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.PlayerAction::AddBinding(InControl.BindingSource)
extern "C"  bool PlayerAction_AddBinding_m1471408858 (PlayerAction_t3117799861 * __this, BindingSource_t1899497234 * ___binding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.PlayerAction::InsertBindingAt(System.Int32,InControl.BindingSource)
extern "C"  bool PlayerAction_InsertBindingAt_m3182879370 (PlayerAction_t3117799861 * __this, int32_t ___index0, BindingSource_t1899497234 * ___binding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.PlayerAction::ReplaceBinding(InControl.BindingSource,InControl.BindingSource)
extern "C"  bool PlayerAction_ReplaceBinding_m834873103 (PlayerAction_t3117799861 * __this, BindingSource_t1899497234 * ___findBinding0, BindingSource_t1899497234 * ___withBinding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.PlayerAction::HasBinding(InControl.BindingSource)
extern "C"  bool PlayerAction_HasBinding_m3487949011 (PlayerAction_t3117799861 * __this, BindingSource_t1899497234 * ___binding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.BindingSource InControl.PlayerAction::FindBinding(InControl.BindingSource)
extern "C"  BindingSource_t1899497234 * PlayerAction_FindBinding_m2861889721 (PlayerAction_t3117799861 * __this, BindingSource_t1899497234 * ___binding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::FindAndRemoveBinding(InControl.BindingSource)
extern "C"  void PlayerAction_FindAndRemoveBinding_m4122509103 (PlayerAction_t3117799861 * __this, BindingSource_t1899497234 * ___binding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.PlayerAction::CountBindingsOfType(InControl.BindingSourceType)
extern "C"  int32_t PlayerAction_CountBindingsOfType_m2244415522 (PlayerAction_t3117799861 * __this, int32_t ___bindingSourceType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::RemoveFirstBindingOfType(InControl.BindingSourceType)
extern "C"  void PlayerAction_RemoveFirstBindingOfType_m3407826222 (PlayerAction_t3117799861 * __this, int32_t ___bindingSourceType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.PlayerAction::IndexOfFirstInvalidBinding()
extern "C"  int32_t PlayerAction_IndexOfFirstInvalidBinding_m1191310617 (PlayerAction_t3117799861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::RemoveBinding(InControl.BindingSource)
extern "C"  void PlayerAction_RemoveBinding_m1577461051 (PlayerAction_t3117799861 * __this, BindingSource_t1899497234 * ___binding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::RemoveBindingAt(System.Int32)
extern "C"  void PlayerAction_RemoveBindingAt_m1478163953 (PlayerAction_t3117799861 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::ClearBindings()
extern "C"  void PlayerAction_ClearBindings_m2848750631 (PlayerAction_t3117799861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::ResetBindings()
extern "C"  void PlayerAction_ResetBindings_m340887721 (PlayerAction_t3117799861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::ListenForBinding()
extern "C"  void PlayerAction_ListenForBinding_m3422569753 (PlayerAction_t3117799861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::ListenForBindingReplacing(InControl.BindingSource)
extern "C"  void PlayerAction_ListenForBindingReplacing_m1216820398 (PlayerAction_t3117799861 * __this, BindingSource_t1899497234 * ___binding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::StopListeningForBinding()
extern "C"  void PlayerAction_StopListeningForBinding_m3872947489 (PlayerAction_t3117799861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.PlayerAction::get_IsListeningForBinding()
extern "C"  bool PlayerAction_get_IsListeningForBinding_m1340776732 (PlayerAction_t3117799861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.BindingSource> InControl.PlayerAction::get_Bindings()
extern "C"  ReadOnlyCollection_1_t3456574770 * PlayerAction_get_Bindings_m2554040167 (PlayerAction_t3117799861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::RemoveOrphanedBindings()
extern "C"  void PlayerAction_RemoveOrphanedBindings_m2166958255 (PlayerAction_t3117799861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::Update(System.UInt64,System.Single,InControl.InputDevice)
extern "C"  void PlayerAction_Update_m3162599715 (PlayerAction_t3117799861 * __this, uint64_t ___updateTick0, float ___deltaTime1, InputDevice_t4071704914 * ___device2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::UpdateBindings(System.UInt64,System.Single)
extern "C"  void PlayerAction_UpdateBindings_m2830549715 (PlayerAction_t3117799861 * __this, uint64_t ___updateTick0, float ___deltaTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::DetectBindings()
extern "C"  void PlayerAction_DetectBindings_m1967022727 (PlayerAction_t3117799861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::UpdateVisibleBindings()
extern "C"  void PlayerAction_UpdateVisibleBindings_m874808131 (PlayerAction_t3117799861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InControl.InputDevice InControl.PlayerAction::get_Device()
extern "C"  InputDevice_t4071704914 * PlayerAction_get_Device_m3841497886 (PlayerAction_t3117799861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::set_Device(InControl.InputDevice)
extern "C"  void PlayerAction_set_Device_m3225572479 (PlayerAction_t3117799861 * __this, InputDevice_t4071704914 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.PlayerAction::get_LowerDeadZone()
extern "C"  float PlayerAction_get_LowerDeadZone_m2688464456 (PlayerAction_t3117799861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::set_LowerDeadZone(System.Single)
extern "C"  void PlayerAction_set_LowerDeadZone_m3172300299 (PlayerAction_t3117799861 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.PlayerAction::get_UpperDeadZone()
extern "C"  float PlayerAction_get_UpperDeadZone_m624823977 (PlayerAction_t3117799861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::set_UpperDeadZone(System.Single)
extern "C"  void PlayerAction_set_UpperDeadZone_m1624146762 (PlayerAction_t3117799861 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::Load(System.IO.BinaryReader)
extern "C"  void PlayerAction_Load_m1895141647 (PlayerAction_t3117799861 * __this, BinaryReader_t3990958868 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.PlayerAction::Save(System.IO.BinaryWriter)
extern "C"  void PlayerAction_Save_m2926060278 (PlayerAction_t3117799861 * __this, BinaryWriter_t4146364100 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
