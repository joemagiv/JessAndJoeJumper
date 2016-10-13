#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InControl.BindingSource
struct BindingSource_t1899497234;
// System.Func`3<InControl.PlayerAction,InControl.BindingSource,System.Boolean>
struct Func_3_t3096970153;
// System.Action`2<InControl.PlayerAction,InControl.BindingSource>
struct Action_2_t3940837668;
// System.Action`3<InControl.PlayerAction,InControl.BindingSource,InControl.BindingSourceRejectionType>
struct Action_3_t1188444478;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.BindingListenOptions
struct  BindingListenOptions_t2027175824  : public Il2CppObject
{
public:
	// System.Boolean InControl.BindingListenOptions::IncludeControllers
	bool ___IncludeControllers_0;
	// System.Boolean InControl.BindingListenOptions::IncludeUnknownControllers
	bool ___IncludeUnknownControllers_1;
	// System.Boolean InControl.BindingListenOptions::IncludeNonStandardControls
	bool ___IncludeNonStandardControls_2;
	// System.Boolean InControl.BindingListenOptions::IncludeMouseButtons
	bool ___IncludeMouseButtons_3;
	// System.Boolean InControl.BindingListenOptions::IncludeKeys
	bool ___IncludeKeys_4;
	// System.Boolean InControl.BindingListenOptions::IncludeModifiersAsFirstClassKeys
	bool ___IncludeModifiersAsFirstClassKeys_5;
	// System.UInt32 InControl.BindingListenOptions::MaxAllowedBindings
	uint32_t ___MaxAllowedBindings_6;
	// System.UInt32 InControl.BindingListenOptions::MaxAllowedBindingsPerType
	uint32_t ___MaxAllowedBindingsPerType_7;
	// System.Boolean InControl.BindingListenOptions::AllowDuplicateBindingsPerSet
	bool ___AllowDuplicateBindingsPerSet_8;
	// System.Boolean InControl.BindingListenOptions::UnsetDuplicateBindingsOnSet
	bool ___UnsetDuplicateBindingsOnSet_9;
	// InControl.BindingSource InControl.BindingListenOptions::ReplaceBinding
	BindingSource_t1899497234 * ___ReplaceBinding_10;
	// System.Func`3<InControl.PlayerAction,InControl.BindingSource,System.Boolean> InControl.BindingListenOptions::OnBindingFound
	Func_3_t3096970153 * ___OnBindingFound_11;
	// System.Action`2<InControl.PlayerAction,InControl.BindingSource> InControl.BindingListenOptions::OnBindingAdded
	Action_2_t3940837668 * ___OnBindingAdded_12;
	// System.Action`3<InControl.PlayerAction,InControl.BindingSource,InControl.BindingSourceRejectionType> InControl.BindingListenOptions::OnBindingRejected
	Action_3_t1188444478 * ___OnBindingRejected_13;

public:
	inline static int32_t get_offset_of_IncludeControllers_0() { return static_cast<int32_t>(offsetof(BindingListenOptions_t2027175824, ___IncludeControllers_0)); }
	inline bool get_IncludeControllers_0() const { return ___IncludeControllers_0; }
	inline bool* get_address_of_IncludeControllers_0() { return &___IncludeControllers_0; }
	inline void set_IncludeControllers_0(bool value)
	{
		___IncludeControllers_0 = value;
	}

	inline static int32_t get_offset_of_IncludeUnknownControllers_1() { return static_cast<int32_t>(offsetof(BindingListenOptions_t2027175824, ___IncludeUnknownControllers_1)); }
	inline bool get_IncludeUnknownControllers_1() const { return ___IncludeUnknownControllers_1; }
	inline bool* get_address_of_IncludeUnknownControllers_1() { return &___IncludeUnknownControllers_1; }
	inline void set_IncludeUnknownControllers_1(bool value)
	{
		___IncludeUnknownControllers_1 = value;
	}

	inline static int32_t get_offset_of_IncludeNonStandardControls_2() { return static_cast<int32_t>(offsetof(BindingListenOptions_t2027175824, ___IncludeNonStandardControls_2)); }
	inline bool get_IncludeNonStandardControls_2() const { return ___IncludeNonStandardControls_2; }
	inline bool* get_address_of_IncludeNonStandardControls_2() { return &___IncludeNonStandardControls_2; }
	inline void set_IncludeNonStandardControls_2(bool value)
	{
		___IncludeNonStandardControls_2 = value;
	}

	inline static int32_t get_offset_of_IncludeMouseButtons_3() { return static_cast<int32_t>(offsetof(BindingListenOptions_t2027175824, ___IncludeMouseButtons_3)); }
	inline bool get_IncludeMouseButtons_3() const { return ___IncludeMouseButtons_3; }
	inline bool* get_address_of_IncludeMouseButtons_3() { return &___IncludeMouseButtons_3; }
	inline void set_IncludeMouseButtons_3(bool value)
	{
		___IncludeMouseButtons_3 = value;
	}

	inline static int32_t get_offset_of_IncludeKeys_4() { return static_cast<int32_t>(offsetof(BindingListenOptions_t2027175824, ___IncludeKeys_4)); }
	inline bool get_IncludeKeys_4() const { return ___IncludeKeys_4; }
	inline bool* get_address_of_IncludeKeys_4() { return &___IncludeKeys_4; }
	inline void set_IncludeKeys_4(bool value)
	{
		___IncludeKeys_4 = value;
	}

	inline static int32_t get_offset_of_IncludeModifiersAsFirstClassKeys_5() { return static_cast<int32_t>(offsetof(BindingListenOptions_t2027175824, ___IncludeModifiersAsFirstClassKeys_5)); }
	inline bool get_IncludeModifiersAsFirstClassKeys_5() const { return ___IncludeModifiersAsFirstClassKeys_5; }
	inline bool* get_address_of_IncludeModifiersAsFirstClassKeys_5() { return &___IncludeModifiersAsFirstClassKeys_5; }
	inline void set_IncludeModifiersAsFirstClassKeys_5(bool value)
	{
		___IncludeModifiersAsFirstClassKeys_5 = value;
	}

	inline static int32_t get_offset_of_MaxAllowedBindings_6() { return static_cast<int32_t>(offsetof(BindingListenOptions_t2027175824, ___MaxAllowedBindings_6)); }
	inline uint32_t get_MaxAllowedBindings_6() const { return ___MaxAllowedBindings_6; }
	inline uint32_t* get_address_of_MaxAllowedBindings_6() { return &___MaxAllowedBindings_6; }
	inline void set_MaxAllowedBindings_6(uint32_t value)
	{
		___MaxAllowedBindings_6 = value;
	}

	inline static int32_t get_offset_of_MaxAllowedBindingsPerType_7() { return static_cast<int32_t>(offsetof(BindingListenOptions_t2027175824, ___MaxAllowedBindingsPerType_7)); }
	inline uint32_t get_MaxAllowedBindingsPerType_7() const { return ___MaxAllowedBindingsPerType_7; }
	inline uint32_t* get_address_of_MaxAllowedBindingsPerType_7() { return &___MaxAllowedBindingsPerType_7; }
	inline void set_MaxAllowedBindingsPerType_7(uint32_t value)
	{
		___MaxAllowedBindingsPerType_7 = value;
	}

	inline static int32_t get_offset_of_AllowDuplicateBindingsPerSet_8() { return static_cast<int32_t>(offsetof(BindingListenOptions_t2027175824, ___AllowDuplicateBindingsPerSet_8)); }
	inline bool get_AllowDuplicateBindingsPerSet_8() const { return ___AllowDuplicateBindingsPerSet_8; }
	inline bool* get_address_of_AllowDuplicateBindingsPerSet_8() { return &___AllowDuplicateBindingsPerSet_8; }
	inline void set_AllowDuplicateBindingsPerSet_8(bool value)
	{
		___AllowDuplicateBindingsPerSet_8 = value;
	}

	inline static int32_t get_offset_of_UnsetDuplicateBindingsOnSet_9() { return static_cast<int32_t>(offsetof(BindingListenOptions_t2027175824, ___UnsetDuplicateBindingsOnSet_9)); }
	inline bool get_UnsetDuplicateBindingsOnSet_9() const { return ___UnsetDuplicateBindingsOnSet_9; }
	inline bool* get_address_of_UnsetDuplicateBindingsOnSet_9() { return &___UnsetDuplicateBindingsOnSet_9; }
	inline void set_UnsetDuplicateBindingsOnSet_9(bool value)
	{
		___UnsetDuplicateBindingsOnSet_9 = value;
	}

	inline static int32_t get_offset_of_ReplaceBinding_10() { return static_cast<int32_t>(offsetof(BindingListenOptions_t2027175824, ___ReplaceBinding_10)); }
	inline BindingSource_t1899497234 * get_ReplaceBinding_10() const { return ___ReplaceBinding_10; }
	inline BindingSource_t1899497234 ** get_address_of_ReplaceBinding_10() { return &___ReplaceBinding_10; }
	inline void set_ReplaceBinding_10(BindingSource_t1899497234 * value)
	{
		___ReplaceBinding_10 = value;
		Il2CppCodeGenWriteBarrier(&___ReplaceBinding_10, value);
	}

	inline static int32_t get_offset_of_OnBindingFound_11() { return static_cast<int32_t>(offsetof(BindingListenOptions_t2027175824, ___OnBindingFound_11)); }
	inline Func_3_t3096970153 * get_OnBindingFound_11() const { return ___OnBindingFound_11; }
	inline Func_3_t3096970153 ** get_address_of_OnBindingFound_11() { return &___OnBindingFound_11; }
	inline void set_OnBindingFound_11(Func_3_t3096970153 * value)
	{
		___OnBindingFound_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnBindingFound_11, value);
	}

	inline static int32_t get_offset_of_OnBindingAdded_12() { return static_cast<int32_t>(offsetof(BindingListenOptions_t2027175824, ___OnBindingAdded_12)); }
	inline Action_2_t3940837668 * get_OnBindingAdded_12() const { return ___OnBindingAdded_12; }
	inline Action_2_t3940837668 ** get_address_of_OnBindingAdded_12() { return &___OnBindingAdded_12; }
	inline void set_OnBindingAdded_12(Action_2_t3940837668 * value)
	{
		___OnBindingAdded_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnBindingAdded_12, value);
	}

	inline static int32_t get_offset_of_OnBindingRejected_13() { return static_cast<int32_t>(offsetof(BindingListenOptions_t2027175824, ___OnBindingRejected_13)); }
	inline Action_3_t1188444478 * get_OnBindingRejected_13() const { return ___OnBindingRejected_13; }
	inline Action_3_t1188444478 ** get_address_of_OnBindingRejected_13() { return &___OnBindingRejected_13; }
	inline void set_OnBindingRejected_13(Action_3_t1188444478 * value)
	{
		___OnBindingRejected_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnBindingRejected_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
