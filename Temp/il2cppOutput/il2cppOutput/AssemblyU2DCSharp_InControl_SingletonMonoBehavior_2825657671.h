#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.SingletonMonoBehavior`2<System.Object,System.Object>
struct  SingletonMonoBehavior_2_t825657671  : public MonoBehaviour_t667441552
{
public:

public:
};

struct SingletonMonoBehavior_2_t825657671_StaticFields
{
public:
	// T InControl.SingletonMonoBehavior`2::instance
	Il2CppObject * ___instance_2;
	// System.Boolean InControl.SingletonMonoBehavior`2::hasInstance
	bool ___hasInstance_3;
	// System.Object InControl.SingletonMonoBehavior`2::lockObject
	Il2CppObject * ___lockObject_4;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(SingletonMonoBehavior_2_t825657671_StaticFields, ___instance_2)); }
	inline Il2CppObject * get_instance_2() const { return ___instance_2; }
	inline Il2CppObject ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(Il2CppObject * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_hasInstance_3() { return static_cast<int32_t>(offsetof(SingletonMonoBehavior_2_t825657671_StaticFields, ___hasInstance_3)); }
	inline bool get_hasInstance_3() const { return ___hasInstance_3; }
	inline bool* get_address_of_hasInstance_3() { return &___hasInstance_3; }
	inline void set_hasInstance_3(bool value)
	{
		___hasInstance_3 = value;
	}

	inline static int32_t get_offset_of_lockObject_4() { return static_cast<int32_t>(offsetof(SingletonMonoBehavior_2_t825657671_StaticFields, ___lockObject_4)); }
	inline Il2CppObject * get_lockObject_4() const { return ___lockObject_4; }
	inline Il2CppObject ** get_address_of_lockObject_4() { return &___lockObject_4; }
	inline void set_lockObject_4(Il2CppObject * value)
	{
		___lockObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___lockObject_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
