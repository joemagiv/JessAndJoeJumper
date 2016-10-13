#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.Touch>
struct ReadOnlyCollection_1_t3890226033;
// System.Collections.Generic.List`1<InControl.Touch>
struct List_1_t3701334049;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.TouchPool
struct  TouchPool_t2243093773  : public Il2CppObject
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.Touch> InControl.TouchPool::Touches
	ReadOnlyCollection_1_t3890226033 * ___Touches_0;
	// System.Collections.Generic.List`1<InControl.Touch> InControl.TouchPool::usedTouches
	List_1_t3701334049 * ___usedTouches_1;
	// System.Collections.Generic.List`1<InControl.Touch> InControl.TouchPool::freeTouches
	List_1_t3701334049 * ___freeTouches_2;

public:
	inline static int32_t get_offset_of_Touches_0() { return static_cast<int32_t>(offsetof(TouchPool_t2243093773, ___Touches_0)); }
	inline ReadOnlyCollection_1_t3890226033 * get_Touches_0() const { return ___Touches_0; }
	inline ReadOnlyCollection_1_t3890226033 ** get_address_of_Touches_0() { return &___Touches_0; }
	inline void set_Touches_0(ReadOnlyCollection_1_t3890226033 * value)
	{
		___Touches_0 = value;
		Il2CppCodeGenWriteBarrier(&___Touches_0, value);
	}

	inline static int32_t get_offset_of_usedTouches_1() { return static_cast<int32_t>(offsetof(TouchPool_t2243093773, ___usedTouches_1)); }
	inline List_1_t3701334049 * get_usedTouches_1() const { return ___usedTouches_1; }
	inline List_1_t3701334049 ** get_address_of_usedTouches_1() { return &___usedTouches_1; }
	inline void set_usedTouches_1(List_1_t3701334049 * value)
	{
		___usedTouches_1 = value;
		Il2CppCodeGenWriteBarrier(&___usedTouches_1, value);
	}

	inline static int32_t get_offset_of_freeTouches_2() { return static_cast<int32_t>(offsetof(TouchPool_t2243093773, ___freeTouches_2)); }
	inline List_1_t3701334049 * get_freeTouches_2() const { return ___freeTouches_2; }
	inline List_1_t3701334049 ** get_address_of_freeTouches_2() { return &___freeTouches_2; }
	inline void set_freeTouches_2(List_1_t3701334049 * value)
	{
		___freeTouches_2 = value;
		Il2CppCodeGenWriteBarrier(&___freeTouches_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
