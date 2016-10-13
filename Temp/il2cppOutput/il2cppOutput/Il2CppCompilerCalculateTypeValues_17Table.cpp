#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SFXManager149887880.h"
#include "AssemblyU2DCSharp_Shredder4090516629.h"
#include "AssemblyU2DCSharp_SmoothCamera2D2514922533.h"
#include "AssemblyU2DCSharp_InControl_BindingListenOptions2027175824.h"
#include "AssemblyU2DCSharp_InControl_BindingSource1899497234.h"
#include "AssemblyU2DCSharp_InControl_BindingSourceRejection3851666049.h"
#include "AssemblyU2DCSharp_InControl_BindingSourceType420681068.h"
#include "AssemblyU2DCSharp_InControl_DeviceBindingSource793007324.h"
#include "AssemblyU2DCSharp_InControl_DeviceBindingSourceList598124976.h"
#include "AssemblyU2DCSharp_InControl_Key160624369.h"
#include "AssemblyU2DCSharp_InControl_KeyBindingSource391562527.h"
#include "AssemblyU2DCSharp_InControl_KeyBindingSourceListen2553423603.h"
#include "AssemblyU2DCSharp_InControl_KeyCombo1628533421.h"
#include "AssemblyU2DCSharp_InControl_KeyInfo3085159231.h"
#include "AssemblyU2DCSharp_InControl_Mouse2326684343.h"
#include "AssemblyU2DCSharp_InControl_MouseBindingSource3443008281.h"
#include "AssemblyU2DCSharp_InControl_MouseBindingSourceList2218453741.h"
#include "AssemblyU2DCSharp_InControl_PlayerAction3117799861.h"
#include "AssemblyU2DCSharp_InControl_PlayerActionSet2670622205.h"
#include "AssemblyU2DCSharp_InControl_PlayerOneAxisAction2138578798.h"
#include "AssemblyU2DCSharp_InControl_PlayerTwoAxisAction1043663828.h"
#include "AssemblyU2DCSharp_InControl_UnknownDeviceBindingSou739771998.h"
#include "AssemblyU2DCSharp_InControl_UnknownDeviceBindingSou955889970.h"
#include "AssemblyU2DCSharp_InControl_UnknownDeviceBindingSo2679959507.h"
#include "AssemblyU2DCSharp_InControl_UnknownDeviceControl2259642683.h"
#include "AssemblyU2DCSharp_InControl_InControlManager658815571.h"
#include "AssemblyU2DCSharp_InControl_InputControl1543925617.h"
#include "AssemblyU2DCSharp_InControl_InputControlMapping318255021.h"
#include "AssemblyU2DCSharp_InControl_InputControlState3860714800.h"
#include "AssemblyU2DCSharp_InControl_InputControlType2879927883.h"
#include "AssemblyU2DCSharp_InControl_InputRange4284974673.h"
#include "AssemblyU2DCSharp_InControl_InputRangeType4175617323.h"
#include "AssemblyU2DCSharp_InControl_OneAxisInputControl2168578956.h"
#include "AssemblyU2DCSharp_InControl_TwoAxisInputControl2505665394.h"
#include "AssemblyU2DCSharp_InControl_InControlException2005277557.h"
#include "AssemblyU2DCSharp_InControl_LogMessageType1856853435.h"
#include "AssemblyU2DCSharp_InControl_LogMessage1843709665.h"
#include "AssemblyU2DCSharp_InControl_Logger3862062926.h"
#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"
#include "AssemblyU2DCSharp_InControl_InputDevice_AnalogSnaps596749913.h"
#include "AssemblyU2DCSharp_InControl_InputDeviceManager3034357131.h"
#include "AssemblyU2DCSharp_InControl_InputDeviceProfile1889671047.h"
#include "AssemblyU2DCSharp_InControl_InControlInputModule2818848380.h"
#include "AssemblyU2DCSharp_InControl_InControlInputModule_Bu512416397.h"
#include "AssemblyU2DCSharp_InControl_InputManager1427642817.h"
#include "AssemblyU2DCSharp_InControl_NativeAnalogSource1947235232.h"
#include "AssemblyU2DCSharp_InControl_NativeButtonSource3286595682.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_Afterglo4009732902.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_BETAOPCo2330921741.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_BatarangC785716336.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_BigBenCon695460295.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_EASportsC277561591.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_GameStop3692992112.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_GuitarHe1501014656.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_HORIReal3029157696.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_HORIReal1383765887.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_HoriBlueS101193427.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_HoriContr203734234.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_HoriDOA43873954912.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_HoriEX2C4251763545.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_HoriFigh3657270942.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_HoriFigh1976061503.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_HoriFigh2934563646.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_HoriPadE3834769970.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_HoriReal1327236112.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_HoriRealA470546075.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_HoriReal3358711650.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_HoriReal4086256799.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_HoriReal1952020461.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_HoriXbox2711200911.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_HoriXbox3878361709.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_IonDrumR2876897468.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_JoytekXb2582477324.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_KonamiDan806426835.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_Logitech3125454785.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_LogitechC680192919.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_Logitech3088590499.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_Logitech1283152165.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_Logitech3772681127.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_LogitechG186956126.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_MLGContro440153056.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_MVCTESti2731625445.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_MadCatzA3619877260.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_MadCatzBr983236474.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_MadCatzC1523245792.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_MadCatzC3193067788.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_MadCatzF2857591156.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_MadCatzF2618749455.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_MadCatzF1960568723.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_MadCatzM2097747018.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_MadCatzM1282563756.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_MadCatzP1189441105.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_MadCatzP2705943445.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_MadCatzS2737127874.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_MadCatzSF575596831.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_MadCatzSF704679550.h"
#include "AssemblyU2DCSharp_InControl_NativeProfile_MadCatzS3272401098.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1700 = { sizeof (SFXManager_t149887880), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1700[1] = 
{
	SFXManager_t149887880::get_offset_of_audioSource_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1701 = { sizeof (Shredder_t4090516629), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1701[1] = 
{
	Shredder_t4090516629::get_offset_of_platformSpawner_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1702 = { sizeof (SmoothCamera2D_t2514922533), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1702[2] = 
{
	SmoothCamera2D_t2514922533::get_offset_of_player_2(),
	SmoothCamera2D_t2514922533::get_offset_of_offset_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1703 = { sizeof (BindingListenOptions_t2027175824), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1703[14] = 
{
	BindingListenOptions_t2027175824::get_offset_of_IncludeControllers_0(),
	BindingListenOptions_t2027175824::get_offset_of_IncludeUnknownControllers_1(),
	BindingListenOptions_t2027175824::get_offset_of_IncludeNonStandardControls_2(),
	BindingListenOptions_t2027175824::get_offset_of_IncludeMouseButtons_3(),
	BindingListenOptions_t2027175824::get_offset_of_IncludeKeys_4(),
	BindingListenOptions_t2027175824::get_offset_of_IncludeModifiersAsFirstClassKeys_5(),
	BindingListenOptions_t2027175824::get_offset_of_MaxAllowedBindings_6(),
	BindingListenOptions_t2027175824::get_offset_of_MaxAllowedBindingsPerType_7(),
	BindingListenOptions_t2027175824::get_offset_of_AllowDuplicateBindingsPerSet_8(),
	BindingListenOptions_t2027175824::get_offset_of_UnsetDuplicateBindingsOnSet_9(),
	BindingListenOptions_t2027175824::get_offset_of_ReplaceBinding_10(),
	BindingListenOptions_t2027175824::get_offset_of_OnBindingFound_11(),
	BindingListenOptions_t2027175824::get_offset_of_OnBindingAdded_12(),
	BindingListenOptions_t2027175824::get_offset_of_OnBindingRejected_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1704 = { sizeof (BindingSource_t1899497234), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1704[1] = 
{
	BindingSource_t1899497234::get_offset_of_U3CBoundToU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1705 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1706 = { sizeof (BindingSourceRejectionType_t3851666049)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1706[4] = 
{
	BindingSourceRejectionType_t3851666049::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1707 = { sizeof (BindingSourceType_t420681068)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1707[6] = 
{
	BindingSourceType_t420681068::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1708 = { sizeof (DeviceBindingSource_t793007324), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1708[1] = 
{
	DeviceBindingSource_t793007324::get_offset_of_U3CControlU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1709 = { sizeof (DeviceBindingSourceListener_t598124976), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1709[2] = 
{
	DeviceBindingSourceListener_t598124976::get_offset_of_detectFound_0(),
	DeviceBindingSourceListener_t598124976::get_offset_of_detectPhase_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1710 = { sizeof (Key_t160624369)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1710[111] = 
{
	Key_t160624369::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1711 = { sizeof (KeyBindingSource_t391562527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1711[1] = 
{
	KeyBindingSource_t391562527::get_offset_of_U3CControlU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1712 = { sizeof (KeyBindingSourceListener_t2553423603), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1712[2] = 
{
	KeyBindingSourceListener_t2553423603::get_offset_of_detectFound_0(),
	KeyBindingSourceListener_t2553423603::get_offset_of_detectPhase_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1713 = { sizeof (KeyCombo_t1628533421)+ sizeof (Il2CppObject), sizeof(KeyCombo_t1628533421_marshaled_pinvoke), sizeof(KeyCombo_t1628533421_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1713[3] = 
{
	KeyCombo_t1628533421::get_offset_of_size_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	KeyCombo_t1628533421::get_offset_of_data_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	KeyCombo_t1628533421_StaticFields::get_offset_of_cachedStrings_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1714 = { sizeof (KeyInfo_t3085159231)+ sizeof (Il2CppObject), sizeof(KeyInfo_t3085159231_marshaled_pinvoke), sizeof(KeyInfo_t3085159231_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1714[5] = 
{
	KeyInfo_t3085159231::get_offset_of_key_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	KeyInfo_t3085159231::get_offset_of_name_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	KeyInfo_t3085159231::get_offset_of_macName_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	KeyInfo_t3085159231::get_offset_of_keyCodes_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	KeyInfo_t3085159231_StaticFields::get_offset_of_KeyList_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1715 = { sizeof (Mouse_t2326684343)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1715[17] = 
{
	Mouse_t2326684343::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1716 = { sizeof (MouseBindingSource_t3443008281), -1, sizeof(MouseBindingSource_t3443008281_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1716[6] = 
{
	MouseBindingSource_t3443008281_StaticFields::get_offset_of_ScaleX_1(),
	MouseBindingSource_t3443008281_StaticFields::get_offset_of_ScaleY_2(),
	MouseBindingSource_t3443008281_StaticFields::get_offset_of_ScaleZ_3(),
	MouseBindingSource_t3443008281_StaticFields::get_offset_of_JitterThreshold_4(),
	MouseBindingSource_t3443008281_StaticFields::get_offset_of_buttonTable_5(),
	MouseBindingSource_t3443008281::get_offset_of_U3CControlU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1717 = { sizeof (MouseBindingSourceListener_t2218453741), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1717[2] = 
{
	MouseBindingSourceListener_t2218453741::get_offset_of_detectFound_0(),
	MouseBindingSourceListener_t2218453741::get_offset_of_detectPhase_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1718 = { sizeof (PlayerAction_t3117799861), -1, sizeof(PlayerAction_t3117799861_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1718[13] = 
{
	PlayerAction_t3117799861::get_offset_of_ListenOptions_18(),
	PlayerAction_t3117799861::get_offset_of_LastInputType_19(),
	PlayerAction_t3117799861::get_offset_of_LastInputTypeChangedTick_20(),
	PlayerAction_t3117799861::get_offset_of_defaultBindings_21(),
	PlayerAction_t3117799861::get_offset_of_regularBindings_22(),
	PlayerAction_t3117799861::get_offset_of_visibleBindings_23(),
	PlayerAction_t3117799861::get_offset_of_bindings_24(),
	PlayerAction_t3117799861_StaticFields::get_offset_of_bindingSourceListeners_25(),
	PlayerAction_t3117799861::get_offset_of_device_26(),
	PlayerAction_t3117799861::get_offset_of_OnLastInputTypeChanged_27(),
	PlayerAction_t3117799861::get_offset_of_U3CNameU3Ek__BackingField_28(),
	PlayerAction_t3117799861::get_offset_of_U3COwnerU3Ek__BackingField_29(),
	PlayerAction_t3117799861::get_offset_of_U3CUserDataU3Ek__BackingField_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1719 = { sizeof (PlayerActionSet_t2670622205), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1719[16] = 
{
	PlayerActionSet_t2670622205::get_offset_of_LastInputType_0(),
	PlayerActionSet_t2670622205::get_offset_of_LastInputTypeChangedTick_1(),
	PlayerActionSet_t2670622205::get_offset_of_actions_2(),
	PlayerActionSet_t2670622205::get_offset_of_oneAxisActions_3(),
	PlayerActionSet_t2670622205::get_offset_of_twoAxisActions_4(),
	PlayerActionSet_t2670622205::get_offset_of_actionsByName_5(),
	PlayerActionSet_t2670622205::get_offset_of_listenOptions_6(),
	PlayerActionSet_t2670622205::get_offset_of_listenWithAction_7(),
	PlayerActionSet_t2670622205::get_offset_of_OnLastInputTypeChanged_8(),
	PlayerActionSet_t2670622205::get_offset_of_U3CDeviceU3Ek__BackingField_9(),
	PlayerActionSet_t2670622205::get_offset_of_U3CIncludeDevicesU3Ek__BackingField_10(),
	PlayerActionSet_t2670622205::get_offset_of_U3CExcludeDevicesU3Ek__BackingField_11(),
	PlayerActionSet_t2670622205::get_offset_of_U3CActionsU3Ek__BackingField_12(),
	PlayerActionSet_t2670622205::get_offset_of_U3CUpdateTickU3Ek__BackingField_13(),
	PlayerActionSet_t2670622205::get_offset_of_U3CEnabledU3Ek__BackingField_14(),
	PlayerActionSet_t2670622205::get_offset_of_U3CUserDataU3Ek__BackingField_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1720 = { sizeof (PlayerOneAxisAction_t2138578798), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1720[5] = 
{
	PlayerOneAxisAction_t2138578798::get_offset_of_negativeAction_18(),
	PlayerOneAxisAction_t2138578798::get_offset_of_positiveAction_19(),
	PlayerOneAxisAction_t2138578798::get_offset_of_LastInputType_20(),
	PlayerOneAxisAction_t2138578798::get_offset_of_OnLastInputTypeChanged_21(),
	PlayerOneAxisAction_t2138578798::get_offset_of_U3CUserDataU3Ek__BackingField_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1721 = { sizeof (PlayerTwoAxisAction_t1043663828), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1721[9] = 
{
	PlayerTwoAxisAction_t1043663828::get_offset_of_negativeXAction_19(),
	PlayerTwoAxisAction_t1043663828::get_offset_of_positiveXAction_20(),
	PlayerTwoAxisAction_t1043663828::get_offset_of_negativeYAction_21(),
	PlayerTwoAxisAction_t1043663828::get_offset_of_positiveYAction_22(),
	PlayerTwoAxisAction_t1043663828::get_offset_of_LastInputType_23(),
	PlayerTwoAxisAction_t1043663828::get_offset_of_OnLastInputTypeChanged_24(),
	PlayerTwoAxisAction_t1043663828::get_offset_of_U3CInvertXAxisU3Ek__BackingField_25(),
	PlayerTwoAxisAction_t1043663828::get_offset_of_U3CInvertYAxisU3Ek__BackingField_26(),
	PlayerTwoAxisAction_t1043663828::get_offset_of_U3CUserDataU3Ek__BackingField_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1722 = { sizeof (UnknownDeviceBindingSource_t739771998), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1722[1] = 
{
	UnknownDeviceBindingSource_t739771998::get_offset_of_U3CControlU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1723 = { sizeof (UnknownDeviceBindingSourceListener_t955889970), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1723[2] = 
{
	UnknownDeviceBindingSourceListener_t955889970::get_offset_of_detectFound_0(),
	UnknownDeviceBindingSourceListener_t955889970::get_offset_of_detectPhase_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1724 = { sizeof (DetectPhase_t2679959507)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1724[4] = 
{
	DetectPhase_t2679959507::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1725 = { sizeof (UnknownDeviceControl_t2259642683)+ sizeof (Il2CppObject), sizeof(UnknownDeviceControl_t2259642683_marshaled_pinvoke), sizeof(UnknownDeviceControl_t2259642683_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1725[5] = 
{
	UnknownDeviceControl_t2259642683_StaticFields::get_offset_of_None_0(),
	UnknownDeviceControl_t2259642683::get_offset_of_Control_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	UnknownDeviceControl_t2259642683::get_offset_of_SourceRange_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	UnknownDeviceControl_t2259642683::get_offset_of_IsButton_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	UnknownDeviceControl_t2259642683::get_offset_of_IsAnalog_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1726 = { sizeof (InControlManager_t658815571), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1726[17] = 
{
	InControlManager_t658815571::get_offset_of_logDebugInfo_5(),
	InControlManager_t658815571::get_offset_of_invertYAxis_6(),
	InControlManager_t658815571::get_offset_of_useFixedUpdate_7(),
	InControlManager_t658815571::get_offset_of_dontDestroyOnLoad_8(),
	InControlManager_t658815571::get_offset_of_suspendInBackground_9(),
	InControlManager_t658815571::get_offset_of_enableICade_10(),
	InControlManager_t658815571::get_offset_of_enableXInput_11(),
	InControlManager_t658815571::get_offset_of_xInputOverrideUpdateRate_12(),
	InControlManager_t658815571::get_offset_of_xInputUpdateRate_13(),
	InControlManager_t658815571::get_offset_of_xInputOverrideBufferSize_14(),
	InControlManager_t658815571::get_offset_of_xInputBufferSize_15(),
	InControlManager_t658815571::get_offset_of_enableNativeInput_16(),
	InControlManager_t658815571::get_offset_of_nativeInputEnableXInput_17(),
	InControlManager_t658815571::get_offset_of_nativeInputPreventSleep_18(),
	InControlManager_t658815571::get_offset_of_nativeInputOverrideUpdateRate_19(),
	InControlManager_t658815571::get_offset_of_nativeInputUpdateRate_20(),
	InControlManager_t658815571::get_offset_of_customProfiles_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1727 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1728 = { sizeof (InputControl_t1543925617), -1, sizeof(InputControl_t1543925617_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1728[7] = 
{
	InputControl_t1543925617_StaticFields::get_offset_of_Null_18(),
	InputControl_t1543925617::get_offset_of_Passive_19(),
	InputControl_t1543925617::get_offset_of_zeroTick_20(),
	InputControl_t1543925617::get_offset_of_U3CHandleU3Ek__BackingField_21(),
	InputControl_t1543925617::get_offset_of_U3CTargetU3Ek__BackingField_22(),
	InputControl_t1543925617::get_offset_of_U3CIsButtonU3Ek__BackingField_23(),
	InputControl_t1543925617::get_offset_of_U3CIsAnalogU3Ek__BackingField_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1729 = { sizeof (InputControlMapping_t318255021), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1729[13] = 
{
	InputControlMapping_t318255021::get_offset_of_Source_0(),
	InputControlMapping_t318255021::get_offset_of_Target_1(),
	InputControlMapping_t318255021::get_offset_of_Invert_2(),
	InputControlMapping_t318255021::get_offset_of_Scale_3(),
	InputControlMapping_t318255021::get_offset_of_Raw_4(),
	InputControlMapping_t318255021::get_offset_of_Passive_5(),
	InputControlMapping_t318255021::get_offset_of_IgnoreInitialZeroValue_6(),
	InputControlMapping_t318255021::get_offset_of_Sensitivity_7(),
	InputControlMapping_t318255021::get_offset_of_LowerDeadZone_8(),
	InputControlMapping_t318255021::get_offset_of_UpperDeadZone_9(),
	InputControlMapping_t318255021::get_offset_of_SourceRange_10(),
	InputControlMapping_t318255021::get_offset_of_TargetRange_11(),
	InputControlMapping_t318255021::get_offset_of_handle_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1730 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1731 = { sizeof (InputControlState_t3860714800)+ sizeof (Il2CppObject), sizeof(InputControlState_t3860714800_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1731[3] = 
{
	InputControlState_t3860714800::get_offset_of_State_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	InputControlState_t3860714800::get_offset_of_Value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	InputControlState_t3860714800::get_offset_of_RawValue_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1732 = { sizeof (InputControlType_t2879927883)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1732[115] = 
{
	InputControlType_t2879927883::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1733 = { sizeof (InputRange_t4284974673)+ sizeof (Il2CppObject), sizeof(InputRange_t4284974673_marshaled_pinvoke), sizeof(InputRange_t4284974673_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1733[14] = 
{
	InputRange_t4284974673_StaticFields::get_offset_of_None_0(),
	InputRange_t4284974673_StaticFields::get_offset_of_MinusOneToOne_1(),
	InputRange_t4284974673_StaticFields::get_offset_of_OneToMinusOne_2(),
	InputRange_t4284974673_StaticFields::get_offset_of_ZeroToOne_3(),
	InputRange_t4284974673_StaticFields::get_offset_of_ZeroToMinusOne_4(),
	InputRange_t4284974673_StaticFields::get_offset_of_OneToZero_5(),
	InputRange_t4284974673_StaticFields::get_offset_of_MinusOneToZero_6(),
	InputRange_t4284974673_StaticFields::get_offset_of_ZeroToNegativeInfinity_7(),
	InputRange_t4284974673_StaticFields::get_offset_of_ZeroToPositiveInfinity_8(),
	InputRange_t4284974673_StaticFields::get_offset_of_Everything_9(),
	InputRange_t4284974673_StaticFields::get_offset_of_TypeToRange_10(),
	InputRange_t4284974673::get_offset_of_Value0_11() + static_cast<int32_t>(sizeof(Il2CppObject)),
	InputRange_t4284974673::get_offset_of_Value1_12() + static_cast<int32_t>(sizeof(Il2CppObject)),
	InputRange_t4284974673::get_offset_of_Type_13() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1734 = { sizeof (InputRangeType_t4175617323)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1734[11] = 
{
	InputRangeType_t4175617323::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1735 = { sizeof (OneAxisInputControl_t2168578956), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1735[18] = 
{
	OneAxisInputControl_t2168578956::get_offset_of_sensitivity_0(),
	OneAxisInputControl_t2168578956::get_offset_of_lowerDeadZone_1(),
	OneAxisInputControl_t2168578956::get_offset_of_upperDeadZone_2(),
	OneAxisInputControl_t2168578956::get_offset_of_stateThreshold_3(),
	OneAxisInputControl_t2168578956::get_offset_of_FirstRepeatDelay_4(),
	OneAxisInputControl_t2168578956::get_offset_of_RepeatDelay_5(),
	OneAxisInputControl_t2168578956::get_offset_of_Raw_6(),
	OneAxisInputControl_t2168578956::get_offset_of_Enabled_7(),
	OneAxisInputControl_t2168578956::get_offset_of_pendingTick_8(),
	OneAxisInputControl_t2168578956::get_offset_of_pendingCommit_9(),
	OneAxisInputControl_t2168578956::get_offset_of_nextRepeatTime_10(),
	OneAxisInputControl_t2168578956::get_offset_of_lastPressedTime_11(),
	OneAxisInputControl_t2168578956::get_offset_of_wasRepeated_12(),
	OneAxisInputControl_t2168578956::get_offset_of_clearInputState_13(),
	OneAxisInputControl_t2168578956::get_offset_of_lastState_14(),
	OneAxisInputControl_t2168578956::get_offset_of_nextState_15(),
	OneAxisInputControl_t2168578956::get_offset_of_thisState_16(),
	OneAxisInputControl_t2168578956::get_offset_of_U3CUpdateTickU3Ek__BackingField_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1736 = { sizeof (TwoAxisInputControl_t2505665394), -1, sizeof(TwoAxisInputControl_t2505665394_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1736[19] = 
{
	TwoAxisInputControl_t2505665394_StaticFields::get_offset_of_Null_0(),
	TwoAxisInputControl_t2505665394::get_offset_of_sensitivity_1(),
	TwoAxisInputControl_t2505665394::get_offset_of_lowerDeadZone_2(),
	TwoAxisInputControl_t2505665394::get_offset_of_upperDeadZone_3(),
	TwoAxisInputControl_t2505665394::get_offset_of_stateThreshold_4(),
	TwoAxisInputControl_t2505665394::get_offset_of_Raw_5(),
	TwoAxisInputControl_t2505665394::get_offset_of_thisState_6(),
	TwoAxisInputControl_t2505665394::get_offset_of_lastState_7(),
	TwoAxisInputControl_t2505665394::get_offset_of_thisValue_8(),
	TwoAxisInputControl_t2505665394::get_offset_of_lastValue_9(),
	TwoAxisInputControl_t2505665394::get_offset_of_clearInputState_10(),
	TwoAxisInputControl_t2505665394::get_offset_of_U3CXU3Ek__BackingField_11(),
	TwoAxisInputControl_t2505665394::get_offset_of_U3CYU3Ek__BackingField_12(),
	TwoAxisInputControl_t2505665394::get_offset_of_U3CLeftU3Ek__BackingField_13(),
	TwoAxisInputControl_t2505665394::get_offset_of_U3CRightU3Ek__BackingField_14(),
	TwoAxisInputControl_t2505665394::get_offset_of_U3CUpU3Ek__BackingField_15(),
	TwoAxisInputControl_t2505665394::get_offset_of_U3CDownU3Ek__BackingField_16(),
	TwoAxisInputControl_t2505665394::get_offset_of_U3CUpdateTickU3Ek__BackingField_17(),
	TwoAxisInputControl_t2505665394::get_offset_of_U3CHasChangedU3Ek__BackingField_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1737 = { sizeof (InControlException_t2005277557), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1738 = { sizeof (LogMessageType_t1856853435)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1738[4] = 
{
	LogMessageType_t1856853435::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1739 = { sizeof (LogMessage_t1843709665)+ sizeof (Il2CppObject), sizeof(LogMessage_t1843709665_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1739[2] = 
{
	LogMessage_t1843709665::get_offset_of_text_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	LogMessage_t1843709665::get_offset_of_type_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1740 = { sizeof (Logger_t3862062926), -1, sizeof(Logger_t3862062926_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1740[1] = 
{
	Logger_t3862062926_StaticFields::get_offset_of_OnLogMessage_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1741 = { sizeof (InputDevice_t4071704914), -1, sizeof(InputDevice_t4071704914_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1741[44] = 
{
	InputDevice_t4071704914_StaticFields::get_offset_of_Null_0(),
	InputDevice_t4071704914::get_offset_of_controls_1(),
	InputDevice_t4071704914::get_offset_of_cachedLeftStickUp_2(),
	InputDevice_t4071704914::get_offset_of_cachedLeftStickDown_3(),
	InputDevice_t4071704914::get_offset_of_cachedLeftStickLeft_4(),
	InputDevice_t4071704914::get_offset_of_cachedLeftStickRight_5(),
	InputDevice_t4071704914::get_offset_of_cachedRightStickUp_6(),
	InputDevice_t4071704914::get_offset_of_cachedRightStickDown_7(),
	InputDevice_t4071704914::get_offset_of_cachedRightStickLeft_8(),
	InputDevice_t4071704914::get_offset_of_cachedRightStickRight_9(),
	InputDevice_t4071704914::get_offset_of_cachedDPadUp_10(),
	InputDevice_t4071704914::get_offset_of_cachedDPadDown_11(),
	InputDevice_t4071704914::get_offset_of_cachedDPadLeft_12(),
	InputDevice_t4071704914::get_offset_of_cachedDPadRight_13(),
	InputDevice_t4071704914::get_offset_of_cachedAction1_14(),
	InputDevice_t4071704914::get_offset_of_cachedAction2_15(),
	InputDevice_t4071704914::get_offset_of_cachedAction3_16(),
	InputDevice_t4071704914::get_offset_of_cachedAction4_17(),
	InputDevice_t4071704914::get_offset_of_cachedLeftTrigger_18(),
	InputDevice_t4071704914::get_offset_of_cachedRightTrigger_19(),
	InputDevice_t4071704914::get_offset_of_cachedLeftBumper_20(),
	InputDevice_t4071704914::get_offset_of_cachedRightBumper_21(),
	InputDevice_t4071704914::get_offset_of_cachedLeftStickButton_22(),
	InputDevice_t4071704914::get_offset_of_cachedRightStickButton_23(),
	InputDevice_t4071704914::get_offset_of_cachedLeftStickX_24(),
	InputDevice_t4071704914::get_offset_of_cachedLeftStickY_25(),
	InputDevice_t4071704914::get_offset_of_cachedRightStickX_26(),
	InputDevice_t4071704914::get_offset_of_cachedRightStickY_27(),
	InputDevice_t4071704914::get_offset_of_cachedDPadX_28(),
	InputDevice_t4071704914::get_offset_of_cachedDPadY_29(),
	InputDevice_t4071704914::get_offset_of_cachedCommand_30(),
	InputDevice_t4071704914::get_offset_of_U3CNameU3Ek__BackingField_31(),
	InputDevice_t4071704914::get_offset_of_U3CMetaU3Ek__BackingField_32(),
	InputDevice_t4071704914::get_offset_of_U3CSortOrderU3Ek__BackingField_33(),
	InputDevice_t4071704914::get_offset_of_U3CGUIDU3Ek__BackingField_34(),
	InputDevice_t4071704914::get_offset_of_U3CLastChangeTickU3Ek__BackingField_35(),
	InputDevice_t4071704914::get_offset_of_U3CIsAttachedU3Ek__BackingField_36(),
	InputDevice_t4071704914::get_offset_of_U3CRawSticksU3Ek__BackingField_37(),
	InputDevice_t4071704914::get_offset_of_U3CControlsU3Ek__BackingField_38(),
	InputDevice_t4071704914::get_offset_of_U3CControlsByTargetU3Ek__BackingField_39(),
	InputDevice_t4071704914::get_offset_of_U3CLeftStickU3Ek__BackingField_40(),
	InputDevice_t4071704914::get_offset_of_U3CRightStickU3Ek__BackingField_41(),
	InputDevice_t4071704914::get_offset_of_U3CDPadU3Ek__BackingField_42(),
	InputDevice_t4071704914::get_offset_of_U3CAnalogSnapshotU3Ek__BackingField_43(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1742 = { sizeof (AnalogSnapshotEntry_t596749913)+ sizeof (Il2CppObject), sizeof(AnalogSnapshotEntry_t596749913_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1742[3] = 
{
	AnalogSnapshotEntry_t596749913::get_offset_of_value_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	AnalogSnapshotEntry_t596749913::get_offset_of_maxValue_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	AnalogSnapshotEntry_t596749913::get_offset_of_minValue_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1743 = { sizeof (InputDeviceManager_t3034357131), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1743[1] = 
{
	InputDeviceManager_t3034357131::get_offset_of_devices_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1744 = { sizeof (InputDeviceProfile_t1889671047), -1, sizeof(InputDeviceProfile_t1889671047_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1744[12] = 
{
	InputDeviceProfile_t1889671047_StaticFields::get_offset_of_hideList_0(),
	InputDeviceProfile_t1889671047::get_offset_of_sensitivity_1(),
	InputDeviceProfile_t1889671047::get_offset_of_lowerDeadZone_2(),
	InputDeviceProfile_t1889671047::get_offset_of_upperDeadZone_3(),
	InputDeviceProfile_t1889671047::get_offset_of_U3CNameU3Ek__BackingField_4(),
	InputDeviceProfile_t1889671047::get_offset_of_U3CMetaU3Ek__BackingField_5(),
	InputDeviceProfile_t1889671047::get_offset_of_U3CAnalogMappingsU3Ek__BackingField_6(),
	InputDeviceProfile_t1889671047::get_offset_of_U3CButtonMappingsU3Ek__BackingField_7(),
	InputDeviceProfile_t1889671047::get_offset_of_U3CIncludePlatformsU3Ek__BackingField_8(),
	InputDeviceProfile_t1889671047::get_offset_of_U3CExcludePlatformsU3Ek__BackingField_9(),
	InputDeviceProfile_t1889671047::get_offset_of_U3CMaxSystemBuildNumberU3Ek__BackingField_10(),
	InputDeviceProfile_t1889671047::get_offset_of_U3CMinSystemBuildNumberU3Ek__BackingField_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1745 = { sizeof (InControlInputModule_t2818848380), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1745[23] = 
{
	InControlInputModule_t2818848380::get_offset_of_submitButton_24(),
	InControlInputModule_t2818848380::get_offset_of_cancelButton_25(),
	InControlInputModule_t2818848380::get_offset_of_analogMoveThreshold_26(),
	InControlInputModule_t2818848380::get_offset_of_moveRepeatFirstDuration_27(),
	InControlInputModule_t2818848380::get_offset_of_moveRepeatDelayDuration_28(),
	InControlInputModule_t2818848380::get_offset_of_allowMobileDevice_29(),
	InControlInputModule_t2818848380::get_offset_of_allowMouseInput_30(),
	InControlInputModule_t2818848380::get_offset_of_focusOnMouseHover_31(),
	InControlInputModule_t2818848380::get_offset_of_inputDevice_32(),
	InControlInputModule_t2818848380::get_offset_of_thisMousePosition_33(),
	InControlInputModule_t2818848380::get_offset_of_lastMousePosition_34(),
	InControlInputModule_t2818848380::get_offset_of_thisVectorState_35(),
	InControlInputModule_t2818848380::get_offset_of_lastVectorState_36(),
	InControlInputModule_t2818848380::get_offset_of_thisSubmitState_37(),
	InControlInputModule_t2818848380::get_offset_of_lastSubmitState_38(),
	InControlInputModule_t2818848380::get_offset_of_thisCancelState_39(),
	InControlInputModule_t2818848380::get_offset_of_lastCancelState_40(),
	InControlInputModule_t2818848380::get_offset_of_nextMoveRepeatTime_41(),
	InControlInputModule_t2818848380::get_offset_of_lastVectorPressedTime_42(),
	InControlInputModule_t2818848380::get_offset_of_direction_43(),
	InControlInputModule_t2818848380::get_offset_of_U3CSubmitActionU3Ek__BackingField_44(),
	InControlInputModule_t2818848380::get_offset_of_U3CCancelActionU3Ek__BackingField_45(),
	InControlInputModule_t2818848380::get_offset_of_U3CMoveActionU3Ek__BackingField_46(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1746 = { sizeof (Button_t512416397)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1746[5] = 
{
	Button_t512416397::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1747 = { sizeof (InputManager_t1427642817), -1, sizeof(InputManager_t1427642817_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1747[36] = 
{
	InputManager_t1427642817_StaticFields::get_offset_of_Version_0(),
	InputManager_t1427642817_StaticFields::get_offset_of_deviceManagers_1(),
	InputManager_t1427642817_StaticFields::get_offset_of_deviceManagerTable_2(),
	InputManager_t1427642817_StaticFields::get_offset_of_activeDevice_3(),
	InputManager_t1427642817_StaticFields::get_offset_of_devices_4(),
	InputManager_t1427642817_StaticFields::get_offset_of_playerActionSets_5(),
	InputManager_t1427642817_StaticFields::get_offset_of_Devices_6(),
	InputManager_t1427642817_StaticFields::get_offset_of_applicationIsFocused_7(),
	InputManager_t1427642817_StaticFields::get_offset_of_initialTime_8(),
	InputManager_t1427642817_StaticFields::get_offset_of_currentTime_9(),
	InputManager_t1427642817_StaticFields::get_offset_of_lastUpdateTime_10(),
	InputManager_t1427642817_StaticFields::get_offset_of_currentTick_11(),
	InputManager_t1427642817_StaticFields::get_offset_of_unityVersion_12(),
	InputManager_t1427642817_StaticFields::get_offset_of_enabled_13(),
	InputManager_t1427642817_StaticFields::get_offset_of_OnSetup_14(),
	InputManager_t1427642817_StaticFields::get_offset_of_OnUpdate_15(),
	InputManager_t1427642817_StaticFields::get_offset_of_OnReset_16(),
	InputManager_t1427642817_StaticFields::get_offset_of_OnDeviceAttached_17(),
	InputManager_t1427642817_StaticFields::get_offset_of_OnDeviceDetached_18(),
	InputManager_t1427642817_StaticFields::get_offset_of_OnActiveDeviceChanged_19(),
	InputManager_t1427642817_StaticFields::get_offset_of_OnUpdateDevices_20(),
	InputManager_t1427642817_StaticFields::get_offset_of_OnCommitDevices_21(),
	InputManager_t1427642817_StaticFields::get_offset_of_U3CCommandWasPressedU3Ek__BackingField_22(),
	InputManager_t1427642817_StaticFields::get_offset_of_U3CInvertYAxisU3Ek__BackingField_23(),
	InputManager_t1427642817_StaticFields::get_offset_of_U3CIsSetupU3Ek__BackingField_24(),
	InputManager_t1427642817_StaticFields::get_offset_of_U3CPlatformU3Ek__BackingField_25(),
	InputManager_t1427642817_StaticFields::get_offset_of_U3CSuspendInBackgroundU3Ek__BackingField_26(),
	InputManager_t1427642817_StaticFields::get_offset_of_U3CEnableNativeInputU3Ek__BackingField_27(),
	InputManager_t1427642817_StaticFields::get_offset_of_U3CEnableXInputU3Ek__BackingField_28(),
	InputManager_t1427642817_StaticFields::get_offset_of_U3CXInputUpdateRateU3Ek__BackingField_29(),
	InputManager_t1427642817_StaticFields::get_offset_of_U3CXInputBufferSizeU3Ek__BackingField_30(),
	InputManager_t1427642817_StaticFields::get_offset_of_U3CNativeInputEnableXInputU3Ek__BackingField_31(),
	InputManager_t1427642817_StaticFields::get_offset_of_U3CNativeInputPreventSleepU3Ek__BackingField_32(),
	InputManager_t1427642817_StaticFields::get_offset_of_U3CNativeInputUpdateRateU3Ek__BackingField_33(),
	InputManager_t1427642817_StaticFields::get_offset_of_U3CEnableICadeU3Ek__BackingField_34(),
	InputManager_t1427642817_StaticFields::get_offset_of_U3CU3Ef__amU24cache23_35(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1748 = { sizeof (NativeAnalogSource_t1947235232), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1748[1] = 
{
	NativeAnalogSource_t1947235232::get_offset_of_AnalogIndex_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1749 = { sizeof (NativeButtonSource_t3286595682), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1749[1] = 
{
	NativeButtonSource_t3286595682::get_offset_of_ButtonIndex_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1750 = { sizeof (AfterglowPrismaticXboxOneControllerMacProfile_t4009732902), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1751 = { sizeof (BETAOPControllerMacProfile_t2330921741), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1752 = { sizeof (BatarangControllerMacProfile_t785716336), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1753 = { sizeof (BigBenControllerMacProfile_t695460295), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1754 = { sizeof (EASportsControllerMacProfile_t277561591), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1755 = { sizeof (GameStopControllerMacProfile_t3692992112), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1756 = { sizeof (GuitarHeroControllerMacProfile_t1501014656), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1757 = { sizeof (HORIRealArcadeProVKaiFightingStickMacProfile_t3029157696), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1758 = { sizeof (HORIRealArcadeProVXMacProfile_t1383765887), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1759 = { sizeof (HoriBlueSoloControllerMacProfile_t101193427), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1760 = { sizeof (HoriControllerMacProfile_t203734234), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1761 = { sizeof (HoriDOA4ArcadeStickMacProfile_t3873954912), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1762 = { sizeof (HoriEX2ControllerMacProfile_t4251763545), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1763 = { sizeof (HoriFightStickMacProfile_t3657270942), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1764 = { sizeof (HoriFightingStickEX2MacProfile_t1976061503), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1765 = { sizeof (HoriFightingStickVXMacProfile_t2934563646), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1766 = { sizeof (HoriPadEXTurboControllerMacProfile_t3834769970), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1767 = { sizeof (HoriRealArcadeProEXMacProfile_t1327236112), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1768 = { sizeof (HoriRealArcadeProEXPremiumVLXMacProfile_t470546075), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1769 = { sizeof (HoriRealArcadeProEXSEMacProfile_t3358711650), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1770 = { sizeof (HoriRealArcadeProHayabusaMacProfile_t4086256799), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1771 = { sizeof (HoriRealArcadeProVXSAMacProfile_t1952020461), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1772 = { sizeof (HoriXbox360GemPadExMacProfile_t2711200911), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1773 = { sizeof (HoriXboxOneControllerMacProfile_t3878361709), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1774 = { sizeof (IonDrumRockerMacProfile_t2876897468), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1775 = { sizeof (JoytekXbox360ControllerMacProfile_t2582477324), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1776 = { sizeof (KonamiDancePadMacProfile_t806426835), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1777 = { sizeof (LogitechChillStreamControllerMacProfile_t3125454785), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1778 = { sizeof (LogitechControllerMacProfile_t680192919), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1779 = { sizeof (LogitechF310ControllerMacProfile_t3088590499), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1780 = { sizeof (LogitechF510ControllerMacProfile_t1283152165), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1781 = { sizeof (LogitechF710ControllerMacProfile_t3772681127), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1782 = { sizeof (LogitechG920RacingWheelMacProfile_t186956126), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1783 = { sizeof (MLGControllerMacProfile_t440153056), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1784 = { sizeof (MVCTEStickMacProfile_t2731625445), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1785 = { sizeof (MadCatzArcadeStickMacProfile_t3619877260), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1786 = { sizeof (MadCatzBrawlStickMacProfile_t983236474), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1787 = { sizeof (MadCatzCODControllerMacProfile_t1523245792), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1788 = { sizeof (MadCatzControllerMacProfile_t3193067788), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1789 = { sizeof (MadCatzFPSProMacProfile_t2857591156), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1790 = { sizeof (MadCatzFightPadControllerMacProfile_t2618749455), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1791 = { sizeof (MadCatzFightPadMacProfile_t1960568723), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1792 = { sizeof (MadCatzMicroConControllerMacProfile_t2097747018), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1793 = { sizeof (MadCatzMicroControllerMacProfile_t1282563756), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1794 = { sizeof (MadCatzPortableDrumMacProfile_t1189441105), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1795 = { sizeof (MadCatzProControllerMacProfile_t2705943445), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1796 = { sizeof (MadCatzSF4FightStickRound2TEMacProfile_t2737127874), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1797 = { sizeof (MadCatzSF4FightStickSEMacProfile_t575596831), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1798 = { sizeof (MadCatzSF4FightStickTEMacProfile_t704679550), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1799 = { sizeof (MadCatzSSF4ChunLiFightStickTEMacProfile_t3272401098), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
