#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharp_InControl_NativeDeviceDriverType14424685.h"
#include "AssemblyU2DCSharp_InControl_NativeDeviceTransportT1125540552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeDeviceInfo
struct  NativeDeviceInfo_t1383951833 
{
public:
	// System.String InControl.NativeDeviceInfo::name
	String_t* ___name_0;
	// System.String InControl.NativeDeviceInfo::location
	String_t* ___location_1;
	// System.String InControl.NativeDeviceInfo::serialNumber
	String_t* ___serialNumber_2;
	// System.UInt16 InControl.NativeDeviceInfo::vendorID
	uint16_t ___vendorID_3;
	// System.UInt16 InControl.NativeDeviceInfo::productID
	uint16_t ___productID_4;
	// System.UInt32 InControl.NativeDeviceInfo::versionNumber
	uint32_t ___versionNumber_5;
	// InControl.NativeDeviceDriverType InControl.NativeDeviceInfo::driverType
	uint16_t ___driverType_6;
	// InControl.NativeDeviceTransportType InControl.NativeDeviceInfo::transportType
	uint16_t ___transportType_7;
	// System.UInt32 InControl.NativeDeviceInfo::numButtons
	uint32_t ___numButtons_8;
	// System.UInt32 InControl.NativeDeviceInfo::numAnalogs
	uint32_t ___numAnalogs_9;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(NativeDeviceInfo_t1383951833, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_location_1() { return static_cast<int32_t>(offsetof(NativeDeviceInfo_t1383951833, ___location_1)); }
	inline String_t* get_location_1() const { return ___location_1; }
	inline String_t** get_address_of_location_1() { return &___location_1; }
	inline void set_location_1(String_t* value)
	{
		___location_1 = value;
		Il2CppCodeGenWriteBarrier(&___location_1, value);
	}

	inline static int32_t get_offset_of_serialNumber_2() { return static_cast<int32_t>(offsetof(NativeDeviceInfo_t1383951833, ___serialNumber_2)); }
	inline String_t* get_serialNumber_2() const { return ___serialNumber_2; }
	inline String_t** get_address_of_serialNumber_2() { return &___serialNumber_2; }
	inline void set_serialNumber_2(String_t* value)
	{
		___serialNumber_2 = value;
		Il2CppCodeGenWriteBarrier(&___serialNumber_2, value);
	}

	inline static int32_t get_offset_of_vendorID_3() { return static_cast<int32_t>(offsetof(NativeDeviceInfo_t1383951833, ___vendorID_3)); }
	inline uint16_t get_vendorID_3() const { return ___vendorID_3; }
	inline uint16_t* get_address_of_vendorID_3() { return &___vendorID_3; }
	inline void set_vendorID_3(uint16_t value)
	{
		___vendorID_3 = value;
	}

	inline static int32_t get_offset_of_productID_4() { return static_cast<int32_t>(offsetof(NativeDeviceInfo_t1383951833, ___productID_4)); }
	inline uint16_t get_productID_4() const { return ___productID_4; }
	inline uint16_t* get_address_of_productID_4() { return &___productID_4; }
	inline void set_productID_4(uint16_t value)
	{
		___productID_4 = value;
	}

	inline static int32_t get_offset_of_versionNumber_5() { return static_cast<int32_t>(offsetof(NativeDeviceInfo_t1383951833, ___versionNumber_5)); }
	inline uint32_t get_versionNumber_5() const { return ___versionNumber_5; }
	inline uint32_t* get_address_of_versionNumber_5() { return &___versionNumber_5; }
	inline void set_versionNumber_5(uint32_t value)
	{
		___versionNumber_5 = value;
	}

	inline static int32_t get_offset_of_driverType_6() { return static_cast<int32_t>(offsetof(NativeDeviceInfo_t1383951833, ___driverType_6)); }
	inline uint16_t get_driverType_6() const { return ___driverType_6; }
	inline uint16_t* get_address_of_driverType_6() { return &___driverType_6; }
	inline void set_driverType_6(uint16_t value)
	{
		___driverType_6 = value;
	}

	inline static int32_t get_offset_of_transportType_7() { return static_cast<int32_t>(offsetof(NativeDeviceInfo_t1383951833, ___transportType_7)); }
	inline uint16_t get_transportType_7() const { return ___transportType_7; }
	inline uint16_t* get_address_of_transportType_7() { return &___transportType_7; }
	inline void set_transportType_7(uint16_t value)
	{
		___transportType_7 = value;
	}

	inline static int32_t get_offset_of_numButtons_8() { return static_cast<int32_t>(offsetof(NativeDeviceInfo_t1383951833, ___numButtons_8)); }
	inline uint32_t get_numButtons_8() const { return ___numButtons_8; }
	inline uint32_t* get_address_of_numButtons_8() { return &___numButtons_8; }
	inline void set_numButtons_8(uint32_t value)
	{
		___numButtons_8 = value;
	}

	inline static int32_t get_offset_of_numAnalogs_9() { return static_cast<int32_t>(offsetof(NativeDeviceInfo_t1383951833, ___numAnalogs_9)); }
	inline uint32_t get_numAnalogs_9() const { return ___numAnalogs_9; }
	inline uint32_t* get_address_of_numAnalogs_9() { return &___numAnalogs_9; }
	inline void set_numAnalogs_9(uint32_t value)
	{
		___numAnalogs_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: InControl.NativeDeviceInfo
struct NativeDeviceInfo_t1383951833_marshaled_pinvoke
{
	char ___name_0[128];
	char ___location_1[128];
	char ___serialNumber_2[64];
	uint16_t ___vendorID_3;
	uint16_t ___productID_4;
	uint32_t ___versionNumber_5;
	uint16_t ___driverType_6;
	uint16_t ___transportType_7;
	uint32_t ___numButtons_8;
	uint32_t ___numAnalogs_9;
};
// Native definition for marshalling of: InControl.NativeDeviceInfo
struct NativeDeviceInfo_t1383951833_marshaled_com
{
	char ___name_0[128];
	char ___location_1[128];
	char ___serialNumber_2[64];
	uint16_t ___vendorID_3;
	uint16_t ___productID_4;
	uint32_t ___versionNumber_5;
	uint16_t ___driverType_6;
	uint16_t ___transportType_7;
	uint32_t ___numButtons_8;
	uint32_t ___numAnalogs_9;
};
