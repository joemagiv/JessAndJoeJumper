#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// InControl.InputRange
struct InputRange_t4284974673;
struct InputRange_t4284974673_marshaled_pinvoke;
struct InputRange_t4284974673_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_InputRange4284974673.h"
#include "AssemblyU2DCSharp_InControl_InputRangeType4175617323.h"

// System.Void InControl.InputRange::.ctor(System.Single,System.Single,InControl.InputRangeType)
extern "C"  void InputRange__ctor_m3276997989 (InputRange_t4284974673 * __this, float ___value00, float ___value11, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputRange::.ctor(InControl.InputRangeType)
extern "C"  void InputRange__ctor_m4023157039 (InputRange_t4284974673 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InputRange::.cctor()
extern "C"  void InputRange__cctor_m3442340923 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputRange::Includes(System.Single)
extern "C"  bool InputRange_Includes_m1001810874 (InputRange_t4284974673 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.InputRange::Excludes(System.Single)
extern "C"  bool InputRange_Excludes_m1411993836 (InputRange_t4284974673 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.InputRange::Remap(System.Single,InControl.InputRange,InControl.InputRange)
extern "C"  float InputRange_Remap_m3367760862 (Il2CppObject * __this /* static, unused */, float ___value0, InputRange_t4284974673  ___sourceRange1, InputRange_t4284974673  ___targetRange2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InControl.InputRange::Remap(System.Single,InControl.InputRangeType,InControl.InputRangeType)
extern "C"  float InputRange_Remap_m950397726 (Il2CppObject * __this /* static, unused */, float ___value0, int32_t ___sourceRangeType1, int32_t ___targetRangeType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct InputRange_t4284974673;
struct InputRange_t4284974673_marshaled_pinvoke;

extern "C" void InputRange_t4284974673_marshal_pinvoke(const InputRange_t4284974673& unmarshaled, InputRange_t4284974673_marshaled_pinvoke& marshaled);
extern "C" void InputRange_t4284974673_marshal_pinvoke_back(const InputRange_t4284974673_marshaled_pinvoke& marshaled, InputRange_t4284974673& unmarshaled);
extern "C" void InputRange_t4284974673_marshal_pinvoke_cleanup(InputRange_t4284974673_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct InputRange_t4284974673;
struct InputRange_t4284974673_marshaled_com;

extern "C" void InputRange_t4284974673_marshal_com(const InputRange_t4284974673& unmarshaled, InputRange_t4284974673_marshaled_com& marshaled);
extern "C" void InputRange_t4284974673_marshal_com_back(const InputRange_t4284974673_marshaled_com& marshaled, InputRange_t4284974673& unmarshaled);
extern "C" void InputRange_t4284974673_marshal_com_cleanup(InputRange_t4284974673_marshaled_com& marshaled);
