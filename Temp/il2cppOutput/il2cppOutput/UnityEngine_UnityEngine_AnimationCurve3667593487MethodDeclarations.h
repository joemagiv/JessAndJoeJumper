﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t3589549831;
struct AnimationCurve_t3667593487_marshaled_pinvoke;
struct AnimationCurve_t3667593487_marshaled_com;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve__ctor_m2436282331 (AnimationCurve_t3667593487 * __this, KeyframeU5BU5D_t3589549831* ___keys0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C"  void AnimationCurve__ctor_m4037844610 (AnimationCurve_t3667593487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C"  void AnimationCurve_Cleanup_m386995588 (AnimationCurve_t3667593487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C"  void AnimationCurve_Finalize_m2382224032 (AnimationCurve_t3667593487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C"  float AnimationCurve_Evaluate_m547727012 (AnimationCurve_t3667593487 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::Linear(System.Single,System.Single,System.Single,System.Single)
extern "C"  AnimationCurve_t3667593487 * AnimationCurve_Linear_m3091030662 (Il2CppObject * __this /* static, unused */, float ___timeStart0, float ___valueStart1, float ___timeEnd2, float ___valueEnd3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C"  void AnimationCurve_Init_m4012213483 (AnimationCurve_t3667593487 * __this, KeyframeU5BU5D_t3589549831* ___keys0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AnimationCurve_t3667593487;
struct AnimationCurve_t3667593487_marshaled_pinvoke;

extern "C" void AnimationCurve_t3667593487_marshal_pinvoke(const AnimationCurve_t3667593487& unmarshaled, AnimationCurve_t3667593487_marshaled_pinvoke& marshaled);
extern "C" void AnimationCurve_t3667593487_marshal_pinvoke_back(const AnimationCurve_t3667593487_marshaled_pinvoke& marshaled, AnimationCurve_t3667593487& unmarshaled);
extern "C" void AnimationCurve_t3667593487_marshal_pinvoke_cleanup(AnimationCurve_t3667593487_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct AnimationCurve_t3667593487;
struct AnimationCurve_t3667593487_marshaled_com;

extern "C" void AnimationCurve_t3667593487_marshal_com(const AnimationCurve_t3667593487& unmarshaled, AnimationCurve_t3667593487_marshaled_com& marshaled);
extern "C" void AnimationCurve_t3667593487_marshal_com_back(const AnimationCurve_t3667593487_marshaled_com& marshaled, AnimationCurve_t3667593487& unmarshaled);
extern "C" void AnimationCurve_t3667593487_marshal_com_cleanup(AnimationCurve_t3667593487_marshaled_com& marshaled);
