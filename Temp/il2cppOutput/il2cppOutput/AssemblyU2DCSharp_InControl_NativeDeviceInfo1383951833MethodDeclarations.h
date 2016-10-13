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

// InControl.NativeDeviceInfo
struct NativeDeviceInfo_t1383951833;
struct NativeDeviceInfo_t1383951833_marshaled_pinvoke;
struct NativeDeviceInfo_t1383951833_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_InControl_NativeDeviceInfo1383951833.h"

// System.Boolean InControl.NativeDeviceInfo::HasSameVendorID(InControl.NativeDeviceInfo)
extern "C"  bool NativeDeviceInfo_HasSameVendorID_m3724887878 (NativeDeviceInfo_t1383951833 * __this, NativeDeviceInfo_t1383951833  ___deviceInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeDeviceInfo::HasSameProductID(InControl.NativeDeviceInfo)
extern "C"  bool NativeDeviceInfo_HasSameProductID_m906569063 (NativeDeviceInfo_t1383951833 * __this, NativeDeviceInfo_t1383951833  ___deviceInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeDeviceInfo::HasSameVersionNumber(InControl.NativeDeviceInfo)
extern "C"  bool NativeDeviceInfo_HasSameVersionNumber_m3755022942 (NativeDeviceInfo_t1383951833 * __this, NativeDeviceInfo_t1383951833  ___deviceInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeDeviceInfo::HasSameLocation(InControl.NativeDeviceInfo)
extern "C"  bool NativeDeviceInfo_HasSameLocation_m194976664 (NativeDeviceInfo_t1383951833 * __this, NativeDeviceInfo_t1383951833  ___deviceInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InControl.NativeDeviceInfo::HasSameSerialNumber(InControl.NativeDeviceInfo)
extern "C"  bool NativeDeviceInfo_HasSameSerialNumber_m414141632 (NativeDeviceInfo_t1383951833 * __this, NativeDeviceInfo_t1383951833  ___deviceInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct NativeDeviceInfo_t1383951833;
struct NativeDeviceInfo_t1383951833_marshaled_pinvoke;

extern "C" void NativeDeviceInfo_t1383951833_marshal_pinvoke(const NativeDeviceInfo_t1383951833& unmarshaled, NativeDeviceInfo_t1383951833_marshaled_pinvoke& marshaled);
extern "C" void NativeDeviceInfo_t1383951833_marshal_pinvoke_back(const NativeDeviceInfo_t1383951833_marshaled_pinvoke& marshaled, NativeDeviceInfo_t1383951833& unmarshaled);
extern "C" void NativeDeviceInfo_t1383951833_marshal_pinvoke_cleanup(NativeDeviceInfo_t1383951833_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct NativeDeviceInfo_t1383951833;
struct NativeDeviceInfo_t1383951833_marshaled_com;

extern "C" void NativeDeviceInfo_t1383951833_marshal_com(const NativeDeviceInfo_t1383951833& unmarshaled, NativeDeviceInfo_t1383951833_marshaled_com& marshaled);
extern "C" void NativeDeviceInfo_t1383951833_marshal_com_back(const NativeDeviceInfo_t1383951833_marshaled_com& marshaled, NativeDeviceInfo_t1383951833& unmarshaled);
extern "C" void NativeDeviceInfo_t1383951833_marshal_com_cleanup(NativeDeviceInfo_t1383951833_marshaled_com& marshaled);
