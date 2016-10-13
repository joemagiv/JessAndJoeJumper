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

// InControl.Logger
struct Logger_t3862062926;
// System.Action`1<InControl.LogMessage>
struct Action_1_t2239525801;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void InControl.Logger::.ctor()
extern "C"  void Logger__ctor_m2486846805 (Logger_t3862062926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Logger::add_OnLogMessage(System.Action`1<InControl.LogMessage>)
extern "C"  void Logger_add_OnLogMessage_m3409499508 (Il2CppObject * __this /* static, unused */, Action_1_t2239525801 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Logger::remove_OnLogMessage(System.Action`1<InControl.LogMessage>)
extern "C"  void Logger_remove_OnLogMessage_m1868903795 (Il2CppObject * __this /* static, unused */, Action_1_t2239525801 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Logger::LogInfo(System.String)
extern "C"  void Logger_LogInfo_m2835688349 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Logger::LogWarning(System.String)
extern "C"  void Logger_LogWarning_m2173819355 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Logger::LogError(System.String)
extern "C"  void Logger_LogError_m771518319 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
