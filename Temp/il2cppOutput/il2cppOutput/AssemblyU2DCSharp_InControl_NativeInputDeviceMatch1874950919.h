#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t4054002952;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Nullable_1_gen108794446.h"
#include "mscorlib_System_Nullable_1_gen108794504.h"
#include "mscorlib_System_Nullable_1_gen98551208.h"
#include "mscorlib_System_Nullable_1_gen1209667075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeInputDeviceMatcher
struct  NativeInputDeviceMatcher_t1874950919  : public Il2CppObject
{
public:
	// System.Nullable`1<System.UInt16> InControl.NativeInputDeviceMatcher::VendorID
	Nullable_1_t108794446  ___VendorID_0;
	// System.Nullable`1<System.UInt16> InControl.NativeInputDeviceMatcher::ProductID
	Nullable_1_t108794446  ___ProductID_1;
	// System.Nullable`1<System.UInt32> InControl.NativeInputDeviceMatcher::VersionNumber
	Nullable_1_t108794504  ___VersionNumber_2;
	// System.Nullable`1<InControl.NativeDeviceDriverType> InControl.NativeInputDeviceMatcher::DriverType
	Nullable_1_t98551208  ___DriverType_3;
	// System.Nullable`1<InControl.NativeDeviceTransportType> InControl.NativeInputDeviceMatcher::TransportType
	Nullable_1_t1209667075  ___TransportType_4;
	// System.String[] InControl.NativeInputDeviceMatcher::NameLiterals
	StringU5BU5D_t4054002952* ___NameLiterals_5;
	// System.String[] InControl.NativeInputDeviceMatcher::NamePatterns
	StringU5BU5D_t4054002952* ___NamePatterns_6;

public:
	inline static int32_t get_offset_of_VendorID_0() { return static_cast<int32_t>(offsetof(NativeInputDeviceMatcher_t1874950919, ___VendorID_0)); }
	inline Nullable_1_t108794446  get_VendorID_0() const { return ___VendorID_0; }
	inline Nullable_1_t108794446 * get_address_of_VendorID_0() { return &___VendorID_0; }
	inline void set_VendorID_0(Nullable_1_t108794446  value)
	{
		___VendorID_0 = value;
	}

	inline static int32_t get_offset_of_ProductID_1() { return static_cast<int32_t>(offsetof(NativeInputDeviceMatcher_t1874950919, ___ProductID_1)); }
	inline Nullable_1_t108794446  get_ProductID_1() const { return ___ProductID_1; }
	inline Nullable_1_t108794446 * get_address_of_ProductID_1() { return &___ProductID_1; }
	inline void set_ProductID_1(Nullable_1_t108794446  value)
	{
		___ProductID_1 = value;
	}

	inline static int32_t get_offset_of_VersionNumber_2() { return static_cast<int32_t>(offsetof(NativeInputDeviceMatcher_t1874950919, ___VersionNumber_2)); }
	inline Nullable_1_t108794504  get_VersionNumber_2() const { return ___VersionNumber_2; }
	inline Nullable_1_t108794504 * get_address_of_VersionNumber_2() { return &___VersionNumber_2; }
	inline void set_VersionNumber_2(Nullable_1_t108794504  value)
	{
		___VersionNumber_2 = value;
	}

	inline static int32_t get_offset_of_DriverType_3() { return static_cast<int32_t>(offsetof(NativeInputDeviceMatcher_t1874950919, ___DriverType_3)); }
	inline Nullable_1_t98551208  get_DriverType_3() const { return ___DriverType_3; }
	inline Nullable_1_t98551208 * get_address_of_DriverType_3() { return &___DriverType_3; }
	inline void set_DriverType_3(Nullable_1_t98551208  value)
	{
		___DriverType_3 = value;
	}

	inline static int32_t get_offset_of_TransportType_4() { return static_cast<int32_t>(offsetof(NativeInputDeviceMatcher_t1874950919, ___TransportType_4)); }
	inline Nullable_1_t1209667075  get_TransportType_4() const { return ___TransportType_4; }
	inline Nullable_1_t1209667075 * get_address_of_TransportType_4() { return &___TransportType_4; }
	inline void set_TransportType_4(Nullable_1_t1209667075  value)
	{
		___TransportType_4 = value;
	}

	inline static int32_t get_offset_of_NameLiterals_5() { return static_cast<int32_t>(offsetof(NativeInputDeviceMatcher_t1874950919, ___NameLiterals_5)); }
	inline StringU5BU5D_t4054002952* get_NameLiterals_5() const { return ___NameLiterals_5; }
	inline StringU5BU5D_t4054002952** get_address_of_NameLiterals_5() { return &___NameLiterals_5; }
	inline void set_NameLiterals_5(StringU5BU5D_t4054002952* value)
	{
		___NameLiterals_5 = value;
		Il2CppCodeGenWriteBarrier(&___NameLiterals_5, value);
	}

	inline static int32_t get_offset_of_NamePatterns_6() { return static_cast<int32_t>(offsetof(NativeInputDeviceMatcher_t1874950919, ___NamePatterns_6)); }
	inline StringU5BU5D_t4054002952* get_NamePatterns_6() const { return ___NamePatterns_6; }
	inline StringU5BU5D_t4054002952** get_address_of_NamePatterns_6() { return &___NamePatterns_6; }
	inline void set_NamePatterns_6(StringU5BU5D_t4054002952* value)
	{
		___NamePatterns_6 = value;
		Il2CppCodeGenWriteBarrier(&___NamePatterns_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
