#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t2727095145;
// InControl.InputDevice
struct InputDevice_t4071704914;
// InControl.TouchControl[]
struct TouchControlU5BU5D_t1845925045;
// InControl.TouchPool
struct TouchPool_t2243093773;
// System.Collections.Generic.List`1<InControl.Touch>
struct List_1_t3701334049;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.Touch>
struct ReadOnlyCollection_1_t3890226033;
// InControl.Touch
struct Touch_t2333148497;
// System.Action
struct Action_t3771233898;

#include "AssemblyU2DCSharp_InControl_SingletonMonoBehavior_3721842154.h"
#include "AssemblyU2DCSharp_InControl_TouchManager_GizmoShow3947311649.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.TouchManager
struct  TouchManager_t3098555564  : public SingletonMonoBehavior_2_t3721842154
{
public:
	// UnityEngine.Camera InControl.TouchManager::touchCamera
	Camera_t2727095145 * ___touchCamera_5;
	// InControl.TouchManager/GizmoShowOption InControl.TouchManager::controlsShowGizmos
	int32_t ___controlsShowGizmos_6;
	// System.Boolean InControl.TouchManager::enableControlsOnTouch
	bool ___enableControlsOnTouch_7;
	// System.Boolean InControl.TouchManager::_controlsEnabled
	bool ____controlsEnabled_8;
	// System.Int32 InControl.TouchManager::controlsLayer
	int32_t ___controlsLayer_9;
	// InControl.InputDevice InControl.TouchManager::device
	InputDevice_t4071704914 * ___device_10;
	// UnityEngine.Vector3 InControl.TouchManager::viewSize
	Vector3_t4282066566  ___viewSize_11;
	// UnityEngine.Vector2 InControl.TouchManager::screenSize
	Vector2_t4282066565  ___screenSize_12;
	// UnityEngine.Vector2 InControl.TouchManager::halfScreenSize
	Vector2_t4282066565  ___halfScreenSize_13;
	// System.Single InControl.TouchManager::percentToWorld
	float ___percentToWorld_14;
	// System.Single InControl.TouchManager::halfPercentToWorld
	float ___halfPercentToWorld_15;
	// System.Single InControl.TouchManager::pixelToWorld
	float ___pixelToWorld_16;
	// System.Single InControl.TouchManager::halfPixelToWorld
	float ___halfPixelToWorld_17;
	// InControl.TouchControl[] InControl.TouchManager::touchControls
	TouchControlU5BU5D_t1845925045* ___touchControls_18;
	// InControl.TouchPool InControl.TouchManager::cachedTouches
	TouchPool_t2243093773 * ___cachedTouches_19;
	// System.Collections.Generic.List`1<InControl.Touch> InControl.TouchManager::activeTouches
	List_1_t3701334049 * ___activeTouches_20;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.Touch> InControl.TouchManager::readOnlyActiveTouches
	ReadOnlyCollection_1_t3890226033 * ___readOnlyActiveTouches_21;
	// UnityEngine.Vector2 InControl.TouchManager::lastMousePosition
	Vector2_t4282066565  ___lastMousePosition_22;
	// System.Boolean InControl.TouchManager::isReady
	bool ___isReady_23;
	// InControl.Touch InControl.TouchManager::mouseTouch
	Touch_t2333148497 * ___mouseTouch_24;

public:
	inline static int32_t get_offset_of_touchCamera_5() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___touchCamera_5)); }
	inline Camera_t2727095145 * get_touchCamera_5() const { return ___touchCamera_5; }
	inline Camera_t2727095145 ** get_address_of_touchCamera_5() { return &___touchCamera_5; }
	inline void set_touchCamera_5(Camera_t2727095145 * value)
	{
		___touchCamera_5 = value;
		Il2CppCodeGenWriteBarrier(&___touchCamera_5, value);
	}

	inline static int32_t get_offset_of_controlsShowGizmos_6() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___controlsShowGizmos_6)); }
	inline int32_t get_controlsShowGizmos_6() const { return ___controlsShowGizmos_6; }
	inline int32_t* get_address_of_controlsShowGizmos_6() { return &___controlsShowGizmos_6; }
	inline void set_controlsShowGizmos_6(int32_t value)
	{
		___controlsShowGizmos_6 = value;
	}

	inline static int32_t get_offset_of_enableControlsOnTouch_7() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___enableControlsOnTouch_7)); }
	inline bool get_enableControlsOnTouch_7() const { return ___enableControlsOnTouch_7; }
	inline bool* get_address_of_enableControlsOnTouch_7() { return &___enableControlsOnTouch_7; }
	inline void set_enableControlsOnTouch_7(bool value)
	{
		___enableControlsOnTouch_7 = value;
	}

	inline static int32_t get_offset_of__controlsEnabled_8() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ____controlsEnabled_8)); }
	inline bool get__controlsEnabled_8() const { return ____controlsEnabled_8; }
	inline bool* get_address_of__controlsEnabled_8() { return &____controlsEnabled_8; }
	inline void set__controlsEnabled_8(bool value)
	{
		____controlsEnabled_8 = value;
	}

	inline static int32_t get_offset_of_controlsLayer_9() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___controlsLayer_9)); }
	inline int32_t get_controlsLayer_9() const { return ___controlsLayer_9; }
	inline int32_t* get_address_of_controlsLayer_9() { return &___controlsLayer_9; }
	inline void set_controlsLayer_9(int32_t value)
	{
		___controlsLayer_9 = value;
	}

	inline static int32_t get_offset_of_device_10() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___device_10)); }
	inline InputDevice_t4071704914 * get_device_10() const { return ___device_10; }
	inline InputDevice_t4071704914 ** get_address_of_device_10() { return &___device_10; }
	inline void set_device_10(InputDevice_t4071704914 * value)
	{
		___device_10 = value;
		Il2CppCodeGenWriteBarrier(&___device_10, value);
	}

	inline static int32_t get_offset_of_viewSize_11() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___viewSize_11)); }
	inline Vector3_t4282066566  get_viewSize_11() const { return ___viewSize_11; }
	inline Vector3_t4282066566 * get_address_of_viewSize_11() { return &___viewSize_11; }
	inline void set_viewSize_11(Vector3_t4282066566  value)
	{
		___viewSize_11 = value;
	}

	inline static int32_t get_offset_of_screenSize_12() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___screenSize_12)); }
	inline Vector2_t4282066565  get_screenSize_12() const { return ___screenSize_12; }
	inline Vector2_t4282066565 * get_address_of_screenSize_12() { return &___screenSize_12; }
	inline void set_screenSize_12(Vector2_t4282066565  value)
	{
		___screenSize_12 = value;
	}

	inline static int32_t get_offset_of_halfScreenSize_13() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___halfScreenSize_13)); }
	inline Vector2_t4282066565  get_halfScreenSize_13() const { return ___halfScreenSize_13; }
	inline Vector2_t4282066565 * get_address_of_halfScreenSize_13() { return &___halfScreenSize_13; }
	inline void set_halfScreenSize_13(Vector2_t4282066565  value)
	{
		___halfScreenSize_13 = value;
	}

	inline static int32_t get_offset_of_percentToWorld_14() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___percentToWorld_14)); }
	inline float get_percentToWorld_14() const { return ___percentToWorld_14; }
	inline float* get_address_of_percentToWorld_14() { return &___percentToWorld_14; }
	inline void set_percentToWorld_14(float value)
	{
		___percentToWorld_14 = value;
	}

	inline static int32_t get_offset_of_halfPercentToWorld_15() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___halfPercentToWorld_15)); }
	inline float get_halfPercentToWorld_15() const { return ___halfPercentToWorld_15; }
	inline float* get_address_of_halfPercentToWorld_15() { return &___halfPercentToWorld_15; }
	inline void set_halfPercentToWorld_15(float value)
	{
		___halfPercentToWorld_15 = value;
	}

	inline static int32_t get_offset_of_pixelToWorld_16() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___pixelToWorld_16)); }
	inline float get_pixelToWorld_16() const { return ___pixelToWorld_16; }
	inline float* get_address_of_pixelToWorld_16() { return &___pixelToWorld_16; }
	inline void set_pixelToWorld_16(float value)
	{
		___pixelToWorld_16 = value;
	}

	inline static int32_t get_offset_of_halfPixelToWorld_17() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___halfPixelToWorld_17)); }
	inline float get_halfPixelToWorld_17() const { return ___halfPixelToWorld_17; }
	inline float* get_address_of_halfPixelToWorld_17() { return &___halfPixelToWorld_17; }
	inline void set_halfPixelToWorld_17(float value)
	{
		___halfPixelToWorld_17 = value;
	}

	inline static int32_t get_offset_of_touchControls_18() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___touchControls_18)); }
	inline TouchControlU5BU5D_t1845925045* get_touchControls_18() const { return ___touchControls_18; }
	inline TouchControlU5BU5D_t1845925045** get_address_of_touchControls_18() { return &___touchControls_18; }
	inline void set_touchControls_18(TouchControlU5BU5D_t1845925045* value)
	{
		___touchControls_18 = value;
		Il2CppCodeGenWriteBarrier(&___touchControls_18, value);
	}

	inline static int32_t get_offset_of_cachedTouches_19() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___cachedTouches_19)); }
	inline TouchPool_t2243093773 * get_cachedTouches_19() const { return ___cachedTouches_19; }
	inline TouchPool_t2243093773 ** get_address_of_cachedTouches_19() { return &___cachedTouches_19; }
	inline void set_cachedTouches_19(TouchPool_t2243093773 * value)
	{
		___cachedTouches_19 = value;
		Il2CppCodeGenWriteBarrier(&___cachedTouches_19, value);
	}

	inline static int32_t get_offset_of_activeTouches_20() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___activeTouches_20)); }
	inline List_1_t3701334049 * get_activeTouches_20() const { return ___activeTouches_20; }
	inline List_1_t3701334049 ** get_address_of_activeTouches_20() { return &___activeTouches_20; }
	inline void set_activeTouches_20(List_1_t3701334049 * value)
	{
		___activeTouches_20 = value;
		Il2CppCodeGenWriteBarrier(&___activeTouches_20, value);
	}

	inline static int32_t get_offset_of_readOnlyActiveTouches_21() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___readOnlyActiveTouches_21)); }
	inline ReadOnlyCollection_1_t3890226033 * get_readOnlyActiveTouches_21() const { return ___readOnlyActiveTouches_21; }
	inline ReadOnlyCollection_1_t3890226033 ** get_address_of_readOnlyActiveTouches_21() { return &___readOnlyActiveTouches_21; }
	inline void set_readOnlyActiveTouches_21(ReadOnlyCollection_1_t3890226033 * value)
	{
		___readOnlyActiveTouches_21 = value;
		Il2CppCodeGenWriteBarrier(&___readOnlyActiveTouches_21, value);
	}

	inline static int32_t get_offset_of_lastMousePosition_22() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___lastMousePosition_22)); }
	inline Vector2_t4282066565  get_lastMousePosition_22() const { return ___lastMousePosition_22; }
	inline Vector2_t4282066565 * get_address_of_lastMousePosition_22() { return &___lastMousePosition_22; }
	inline void set_lastMousePosition_22(Vector2_t4282066565  value)
	{
		___lastMousePosition_22 = value;
	}

	inline static int32_t get_offset_of_isReady_23() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___isReady_23)); }
	inline bool get_isReady_23() const { return ___isReady_23; }
	inline bool* get_address_of_isReady_23() { return &___isReady_23; }
	inline void set_isReady_23(bool value)
	{
		___isReady_23 = value;
	}

	inline static int32_t get_offset_of_mouseTouch_24() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564, ___mouseTouch_24)); }
	inline Touch_t2333148497 * get_mouseTouch_24() const { return ___mouseTouch_24; }
	inline Touch_t2333148497 ** get_address_of_mouseTouch_24() { return &___mouseTouch_24; }
	inline void set_mouseTouch_24(Touch_t2333148497 * value)
	{
		___mouseTouch_24 = value;
		Il2CppCodeGenWriteBarrier(&___mouseTouch_24, value);
	}
};

struct TouchManager_t3098555564_StaticFields
{
public:
	// System.Action InControl.TouchManager::OnSetup
	Action_t3771233898 * ___OnSetup_25;

public:
	inline static int32_t get_offset_of_OnSetup_25() { return static_cast<int32_t>(offsetof(TouchManager_t3098555564_StaticFields, ___OnSetup_25)); }
	inline Action_t3771233898 * get_OnSetup_25() const { return ___OnSetup_25; }
	inline Action_t3771233898 ** get_address_of_OnSetup_25() { return &___OnSetup_25; }
	inline void set_OnSetup_25(Action_t3771233898 * value)
	{
		___OnSetup_25 = value;
		Il2CppCodeGenWriteBarrier(&___OnSetup_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
