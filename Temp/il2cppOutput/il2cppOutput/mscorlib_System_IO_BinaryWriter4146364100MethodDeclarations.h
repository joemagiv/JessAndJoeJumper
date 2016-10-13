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

// System.IO.BinaryWriter
struct BinaryWriter_t4146364100;
// System.IO.Stream
struct Stream_t1561764144;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_Text_Encoding2012439129.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.IO.BinaryWriter::.ctor()
extern "C"  void BinaryWriter__ctor_m3320479349 (BinaryWriter_t4146364100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void BinaryWriter__ctor_m3271046021 (BinaryWriter_t4146364100 * __this, Stream_t1561764144 * ___output0, Encoding_t2012439129 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.cctor()
extern "C"  void BinaryWriter__cctor_m3668515800 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::System.IDisposable.Dispose()
extern "C"  void BinaryWriter_System_IDisposable_Dispose_m3902299210 (BinaryWriter_t4146364100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Dispose(System.Boolean)
extern "C"  void BinaryWriter_Dispose_m1210247017 (BinaryWriter_t4146364100 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte)
extern "C"  void BinaryWriter_Write_m1743996025 (BinaryWriter_t4146364100 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int32)
extern "C"  void BinaryWriter_Write_m2714466819 (BinaryWriter_t4146364100 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.String)
extern "C"  void BinaryWriter_Write_m3000791184 (BinaryWriter_t4146364100 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt16)
extern "C"  void BinaryWriter_Write_m3541318530 (BinaryWriter_t4146364100 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt64)
extern "C"  void BinaryWriter_Write_m3541323273 (BinaryWriter_t4146364100 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write7BitEncodedInt(System.Int32)
extern "C"  void BinaryWriter_Write7BitEncodedInt_m1552112122 (BinaryWriter_t4146364100 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
