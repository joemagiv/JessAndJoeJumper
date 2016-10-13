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


#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_NativeInputOptions2078341609.h"
#include "AssemblyU2DCSharp_InControl_NativeVersionInfo2688369697.h"
#include "AssemblyU2DCSharp_InControl_NativeDeviceInfo1383951833.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void InControl.Native::Init(InControl.NativeInputOptions)
extern "C"  void Native_Init_m1257282021 (Il2CppObject * __this /* static, unused */, NativeInputOptions_t2078341609  ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Native::Stop()
extern "C"  void Native_Stop_m1709825112 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Native::GetVersionInfo(InControl.NativeVersionInfo&)
extern "C"  void Native_GetVersionInfo_m2948748473 (Il2CppObject * __this /* static, unused */, NativeVersionInfo_t2688369697 * ___versionInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.Native::GetDeviceInfo(System.UInt32,InControl.NativeDeviceInfo&)
extern "C"  bool Native_GetDeviceInfo_m2200054943 (Il2CppObject * __this /* static, unused */, uint32_t ___handle0, NativeDeviceInfo_t1383951833 * ___deviceInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.Native::GetDeviceState(System.UInt32,System.IntPtr&)
extern "C"  bool Native_GetDeviceState_m548235507 (Il2CppObject * __this /* static, unused */, uint32_t ___handle0, IntPtr_t* ___deviceState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InControl.Native::GetDeviceEvents(System.IntPtr&)
extern "C"  int32_t Native_GetDeviceEvents_m2549401147 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___deviceEvents0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Native::SetHapticState(System.UInt32,System.Byte,System.Byte)
extern "C"  void Native_SetHapticState_m4179322742 (Il2CppObject * __this /* static, unused */, uint32_t ___handle0, uint8_t ___motor01, uint8_t ___motor12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Native::SetLightColor(System.UInt32,System.Byte,System.Byte,System.Byte)
extern "C"  void Native_SetLightColor_m2530167118 (Il2CppObject * __this /* static, unused */, uint32_t ___handle0, uint8_t ___red1, uint8_t ___green2, uint8_t ___blue3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Native::SetLightFlash(System.UInt32,System.Byte,System.Byte)
extern "C"  void Native_SetLightFlash_m1517122172 (Il2CppObject * __this /* static, unused */, uint32_t ___handle0, uint8_t ___flashOnDuration1, uint8_t ___flashOffDuration2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
