#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int16[]
struct Int16U5BU5D_t801762735;
// InControl.NativeInputDeviceProfile
struct NativeInputDeviceProfile_t724663166;

#include "AssemblyU2DCSharp_InControl_InputDevice4071704914.h"
#include "AssemblyU2DCSharp_InControl_NativeDeviceInfo1383951833.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeInputDevice
struct  NativeInputDevice_t1250450747  : public InputDevice_t4071704914
{
public:
	// System.Int16[] InControl.NativeInputDevice::buttons
	Int16U5BU5D_t801762735* ___buttons_44;
	// System.Int16[] InControl.NativeInputDevice::analogs
	Int16U5BU5D_t801762735* ___analogs_45;
	// InControl.NativeInputDeviceProfile InControl.NativeInputDevice::profile
	NativeInputDeviceProfile_t724663166 * ___profile_46;
	// System.Int32 InControl.NativeInputDevice::skipUpdateFrames
	int32_t ___skipUpdateFrames_47;
	// System.UInt32 InControl.NativeInputDevice::<Handle>k__BackingField
	uint32_t ___U3CHandleU3Ek__BackingField_48;
	// InControl.NativeDeviceInfo InControl.NativeInputDevice::<Info>k__BackingField
	NativeDeviceInfo_t1383951833  ___U3CInfoU3Ek__BackingField_49;

public:
	inline static int32_t get_offset_of_buttons_44() { return static_cast<int32_t>(offsetof(NativeInputDevice_t1250450747, ___buttons_44)); }
	inline Int16U5BU5D_t801762735* get_buttons_44() const { return ___buttons_44; }
	inline Int16U5BU5D_t801762735** get_address_of_buttons_44() { return &___buttons_44; }
	inline void set_buttons_44(Int16U5BU5D_t801762735* value)
	{
		___buttons_44 = value;
		Il2CppCodeGenWriteBarrier(&___buttons_44, value);
	}

	inline static int32_t get_offset_of_analogs_45() { return static_cast<int32_t>(offsetof(NativeInputDevice_t1250450747, ___analogs_45)); }
	inline Int16U5BU5D_t801762735* get_analogs_45() const { return ___analogs_45; }
	inline Int16U5BU5D_t801762735** get_address_of_analogs_45() { return &___analogs_45; }
	inline void set_analogs_45(Int16U5BU5D_t801762735* value)
	{
		___analogs_45 = value;
		Il2CppCodeGenWriteBarrier(&___analogs_45, value);
	}

	inline static int32_t get_offset_of_profile_46() { return static_cast<int32_t>(offsetof(NativeInputDevice_t1250450747, ___profile_46)); }
	inline NativeInputDeviceProfile_t724663166 * get_profile_46() const { return ___profile_46; }
	inline NativeInputDeviceProfile_t724663166 ** get_address_of_profile_46() { return &___profile_46; }
	inline void set_profile_46(NativeInputDeviceProfile_t724663166 * value)
	{
		___profile_46 = value;
		Il2CppCodeGenWriteBarrier(&___profile_46, value);
	}

	inline static int32_t get_offset_of_skipUpdateFrames_47() { return static_cast<int32_t>(offsetof(NativeInputDevice_t1250450747, ___skipUpdateFrames_47)); }
	inline int32_t get_skipUpdateFrames_47() const { return ___skipUpdateFrames_47; }
	inline int32_t* get_address_of_skipUpdateFrames_47() { return &___skipUpdateFrames_47; }
	inline void set_skipUpdateFrames_47(int32_t value)
	{
		___skipUpdateFrames_47 = value;
	}

	inline static int32_t get_offset_of_U3CHandleU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(NativeInputDevice_t1250450747, ___U3CHandleU3Ek__BackingField_48)); }
	inline uint32_t get_U3CHandleU3Ek__BackingField_48() const { return ___U3CHandleU3Ek__BackingField_48; }
	inline uint32_t* get_address_of_U3CHandleU3Ek__BackingField_48() { return &___U3CHandleU3Ek__BackingField_48; }
	inline void set_U3CHandleU3Ek__BackingField_48(uint32_t value)
	{
		___U3CHandleU3Ek__BackingField_48 = value;
	}

	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(NativeInputDevice_t1250450747, ___U3CInfoU3Ek__BackingField_49)); }
	inline NativeDeviceInfo_t1383951833  get_U3CInfoU3Ek__BackingField_49() const { return ___U3CInfoU3Ek__BackingField_49; }
	inline NativeDeviceInfo_t1383951833 * get_address_of_U3CInfoU3Ek__BackingField_49() { return &___U3CInfoU3Ek__BackingField_49; }
	inline void set_U3CInfoU3Ek__BackingField_49(NativeDeviceInfo_t1383951833  value)
	{
		___U3CInfoU3Ek__BackingField_49 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
