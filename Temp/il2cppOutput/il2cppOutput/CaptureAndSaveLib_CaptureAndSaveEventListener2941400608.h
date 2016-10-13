#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CaptureAndSaveEventListener/OnError
struct OnError_t1516540506;
// CaptureAndSaveEventListener/OnSuccess
struct OnSuccess_t1013330901;
// CaptureAndSaveEventListener/OnScreenShot
struct OnScreenShot_t3427048564;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CaptureAndSaveEventListener
struct  CaptureAndSaveEventListener_t2941400608  : public Il2CppObject
{
public:

public:
};

struct CaptureAndSaveEventListener_t2941400608_StaticFields
{
public:
	// CaptureAndSaveEventListener/OnError CaptureAndSaveEventListener::onErrorInvoker
	OnError_t1516540506 * ___onErrorInvoker_0;
	// CaptureAndSaveEventListener/OnSuccess CaptureAndSaveEventListener::onSuccessInvoker
	OnSuccess_t1013330901 * ___onSuccessInvoker_1;
	// CaptureAndSaveEventListener/OnScreenShot CaptureAndSaveEventListener::onScreenShotInvoker
	OnScreenShot_t3427048564 * ___onScreenShotInvoker_2;

public:
	inline static int32_t get_offset_of_onErrorInvoker_0() { return static_cast<int32_t>(offsetof(CaptureAndSaveEventListener_t2941400608_StaticFields, ___onErrorInvoker_0)); }
	inline OnError_t1516540506 * get_onErrorInvoker_0() const { return ___onErrorInvoker_0; }
	inline OnError_t1516540506 ** get_address_of_onErrorInvoker_0() { return &___onErrorInvoker_0; }
	inline void set_onErrorInvoker_0(OnError_t1516540506 * value)
	{
		___onErrorInvoker_0 = value;
		Il2CppCodeGenWriteBarrier(&___onErrorInvoker_0, value);
	}

	inline static int32_t get_offset_of_onSuccessInvoker_1() { return static_cast<int32_t>(offsetof(CaptureAndSaveEventListener_t2941400608_StaticFields, ___onSuccessInvoker_1)); }
	inline OnSuccess_t1013330901 * get_onSuccessInvoker_1() const { return ___onSuccessInvoker_1; }
	inline OnSuccess_t1013330901 ** get_address_of_onSuccessInvoker_1() { return &___onSuccessInvoker_1; }
	inline void set_onSuccessInvoker_1(OnSuccess_t1013330901 * value)
	{
		___onSuccessInvoker_1 = value;
		Il2CppCodeGenWriteBarrier(&___onSuccessInvoker_1, value);
	}

	inline static int32_t get_offset_of_onScreenShotInvoker_2() { return static_cast<int32_t>(offsetof(CaptureAndSaveEventListener_t2941400608_StaticFields, ___onScreenShotInvoker_2)); }
	inline OnScreenShot_t3427048564 * get_onScreenShotInvoker_2() const { return ___onScreenShotInvoker_2; }
	inline OnScreenShot_t3427048564 ** get_address_of_onScreenShotInvoker_2() { return &___onScreenShotInvoker_2; }
	inline void set_onScreenShotInvoker_2(OnScreenShot_t3427048564 * value)
	{
		___onScreenShotInvoker_2 = value;
		Il2CppCodeGenWriteBarrier(&___onScreenShotInvoker_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
