#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t3721690872;
// UnityEngine.WebCamTexture
struct WebCamTexture_t1290350902;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DeviceCamera
struct  DeviceCamera_t3055454523  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.WebCamDevice[] DeviceCamera::devices
	WebCamDeviceU5BU5D_t3721690872* ___devices_2;
	// UnityEngine.WebCamTexture DeviceCamera::webcamTexture
	WebCamTexture_t1290350902 * ___webcamTexture_3;
	// System.String DeviceCamera::frontCamName
	String_t* ___frontCamName_4;

public:
	inline static int32_t get_offset_of_devices_2() { return static_cast<int32_t>(offsetof(DeviceCamera_t3055454523, ___devices_2)); }
	inline WebCamDeviceU5BU5D_t3721690872* get_devices_2() const { return ___devices_2; }
	inline WebCamDeviceU5BU5D_t3721690872** get_address_of_devices_2() { return &___devices_2; }
	inline void set_devices_2(WebCamDeviceU5BU5D_t3721690872* value)
	{
		___devices_2 = value;
		Il2CppCodeGenWriteBarrier(&___devices_2, value);
	}

	inline static int32_t get_offset_of_webcamTexture_3() { return static_cast<int32_t>(offsetof(DeviceCamera_t3055454523, ___webcamTexture_3)); }
	inline WebCamTexture_t1290350902 * get_webcamTexture_3() const { return ___webcamTexture_3; }
	inline WebCamTexture_t1290350902 ** get_address_of_webcamTexture_3() { return &___webcamTexture_3; }
	inline void set_webcamTexture_3(WebCamTexture_t1290350902 * value)
	{
		___webcamTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___webcamTexture_3, value);
	}

	inline static int32_t get_offset_of_frontCamName_4() { return static_cast<int32_t>(offsetof(DeviceCamera_t3055454523, ___frontCamName_4)); }
	inline String_t* get_frontCamName_4() const { return ___frontCamName_4; }
	inline String_t** get_address_of_frontCamName_4() { return &___frontCamName_4; }
	inline void set_frontCamName_4(String_t* value)
	{
		___frontCamName_4 = value;
		Il2CppCodeGenWriteBarrier(&___frontCamName_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
