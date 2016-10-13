#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`3<InControl.NativeDeviceInfo,System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.NativeInputDevice>,InControl.NativeInputDevice>
struct Func_3_t190884573;
// System.Collections.Generic.List`1<InControl.NativeInputDevice>
struct List_1_t2618636299;
// System.Collections.Generic.List`1<InControl.NativeInputDeviceProfile>
struct List_1_t2092848718;
// System.UInt32[]
struct UInt32U5BU5D_t3230734560;

#include "AssemblyU2DCSharp_InControl_InputDeviceManager3034357131.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeInputDeviceManager
struct  NativeInputDeviceManager_t1869349250  : public InputDeviceManager_t3034357131
{
public:
	// System.Collections.Generic.List`1<InControl.NativeInputDevice> InControl.NativeInputDeviceManager::attachedDevices
	List_1_t2618636299 * ___attachedDevices_2;
	// System.Collections.Generic.List`1<InControl.NativeInputDevice> InControl.NativeInputDeviceManager::detachedDevices
	List_1_t2618636299 * ___detachedDevices_3;
	// System.Collections.Generic.List`1<InControl.NativeInputDeviceProfile> InControl.NativeInputDeviceManager::systemDeviceProfiles
	List_1_t2092848718 * ___systemDeviceProfiles_4;
	// System.Collections.Generic.List`1<InControl.NativeInputDeviceProfile> InControl.NativeInputDeviceManager::customDeviceProfiles
	List_1_t2092848718 * ___customDeviceProfiles_5;
	// System.UInt32[] InControl.NativeInputDeviceManager::deviceEvents
	UInt32U5BU5D_t3230734560* ___deviceEvents_6;

public:
	inline static int32_t get_offset_of_attachedDevices_2() { return static_cast<int32_t>(offsetof(NativeInputDeviceManager_t1869349250, ___attachedDevices_2)); }
	inline List_1_t2618636299 * get_attachedDevices_2() const { return ___attachedDevices_2; }
	inline List_1_t2618636299 ** get_address_of_attachedDevices_2() { return &___attachedDevices_2; }
	inline void set_attachedDevices_2(List_1_t2618636299 * value)
	{
		___attachedDevices_2 = value;
		Il2CppCodeGenWriteBarrier(&___attachedDevices_2, value);
	}

	inline static int32_t get_offset_of_detachedDevices_3() { return static_cast<int32_t>(offsetof(NativeInputDeviceManager_t1869349250, ___detachedDevices_3)); }
	inline List_1_t2618636299 * get_detachedDevices_3() const { return ___detachedDevices_3; }
	inline List_1_t2618636299 ** get_address_of_detachedDevices_3() { return &___detachedDevices_3; }
	inline void set_detachedDevices_3(List_1_t2618636299 * value)
	{
		___detachedDevices_3 = value;
		Il2CppCodeGenWriteBarrier(&___detachedDevices_3, value);
	}

	inline static int32_t get_offset_of_systemDeviceProfiles_4() { return static_cast<int32_t>(offsetof(NativeInputDeviceManager_t1869349250, ___systemDeviceProfiles_4)); }
	inline List_1_t2092848718 * get_systemDeviceProfiles_4() const { return ___systemDeviceProfiles_4; }
	inline List_1_t2092848718 ** get_address_of_systemDeviceProfiles_4() { return &___systemDeviceProfiles_4; }
	inline void set_systemDeviceProfiles_4(List_1_t2092848718 * value)
	{
		___systemDeviceProfiles_4 = value;
		Il2CppCodeGenWriteBarrier(&___systemDeviceProfiles_4, value);
	}

	inline static int32_t get_offset_of_customDeviceProfiles_5() { return static_cast<int32_t>(offsetof(NativeInputDeviceManager_t1869349250, ___customDeviceProfiles_5)); }
	inline List_1_t2092848718 * get_customDeviceProfiles_5() const { return ___customDeviceProfiles_5; }
	inline List_1_t2092848718 ** get_address_of_customDeviceProfiles_5() { return &___customDeviceProfiles_5; }
	inline void set_customDeviceProfiles_5(List_1_t2092848718 * value)
	{
		___customDeviceProfiles_5 = value;
		Il2CppCodeGenWriteBarrier(&___customDeviceProfiles_5, value);
	}

	inline static int32_t get_offset_of_deviceEvents_6() { return static_cast<int32_t>(offsetof(NativeInputDeviceManager_t1869349250, ___deviceEvents_6)); }
	inline UInt32U5BU5D_t3230734560* get_deviceEvents_6() const { return ___deviceEvents_6; }
	inline UInt32U5BU5D_t3230734560** get_address_of_deviceEvents_6() { return &___deviceEvents_6; }
	inline void set_deviceEvents_6(UInt32U5BU5D_t3230734560* value)
	{
		___deviceEvents_6 = value;
		Il2CppCodeGenWriteBarrier(&___deviceEvents_6, value);
	}
};

struct NativeInputDeviceManager_t1869349250_StaticFields
{
public:
	// System.Func`3<InControl.NativeDeviceInfo,System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.NativeInputDevice>,InControl.NativeInputDevice> InControl.NativeInputDeviceManager::CustomFindDetachedDevice
	Func_3_t190884573 * ___CustomFindDetachedDevice_1;

public:
	inline static int32_t get_offset_of_CustomFindDetachedDevice_1() { return static_cast<int32_t>(offsetof(NativeInputDeviceManager_t1869349250_StaticFields, ___CustomFindDetachedDevice_1)); }
	inline Func_3_t190884573 * get_CustomFindDetachedDevice_1() const { return ___CustomFindDetachedDevice_1; }
	inline Func_3_t190884573 ** get_address_of_CustomFindDetachedDevice_1() { return &___CustomFindDetachedDevice_1; }
	inline void set_CustomFindDetachedDevice_1(Func_3_t190884573 * value)
	{
		___CustomFindDetachedDevice_1 = value;
		Il2CppCodeGenWriteBarrier(&___CustomFindDetachedDevice_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
