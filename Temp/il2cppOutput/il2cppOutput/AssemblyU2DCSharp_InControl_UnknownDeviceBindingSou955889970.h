#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_InControl_UnknownDeviceControl2259642683.h"
#include "AssemblyU2DCSharp_InControl_UnknownDeviceBindingSo2679959507.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnknownDeviceBindingSourceListener
struct  UnknownDeviceBindingSourceListener_t955889970  : public Il2CppObject
{
public:
	// InControl.UnknownDeviceControl InControl.UnknownDeviceBindingSourceListener::detectFound
	UnknownDeviceControl_t2259642683  ___detectFound_0;
	// InControl.UnknownDeviceBindingSourceListener/DetectPhase InControl.UnknownDeviceBindingSourceListener::detectPhase
	int32_t ___detectPhase_1;

public:
	inline static int32_t get_offset_of_detectFound_0() { return static_cast<int32_t>(offsetof(UnknownDeviceBindingSourceListener_t955889970, ___detectFound_0)); }
	inline UnknownDeviceControl_t2259642683  get_detectFound_0() const { return ___detectFound_0; }
	inline UnknownDeviceControl_t2259642683 * get_address_of_detectFound_0() { return &___detectFound_0; }
	inline void set_detectFound_0(UnknownDeviceControl_t2259642683  value)
	{
		___detectFound_0 = value;
	}

	inline static int32_t get_offset_of_detectPhase_1() { return static_cast<int32_t>(offsetof(UnknownDeviceBindingSourceListener_t955889970, ___detectPhase_1)); }
	inline int32_t get_detectPhase_1() const { return ___detectPhase_1; }
	inline int32_t* get_address_of_detectPhase_1() { return &___detectPhase_1; }
	inline void set_detectPhase_1(int32_t value)
	{
		___detectPhase_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
