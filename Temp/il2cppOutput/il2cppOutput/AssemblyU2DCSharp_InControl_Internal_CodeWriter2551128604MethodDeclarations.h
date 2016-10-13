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

// InControl.Internal.CodeWriter
struct CodeWriter_t2551128604;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1108656482;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void InControl.Internal.CodeWriter::.ctor()
extern "C"  void CodeWriter__ctor_m2478184912 (CodeWriter_t2551128604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Internal.CodeWriter::IncreaseIndent()
extern "C"  void CodeWriter_IncreaseIndent_m1024220098 (CodeWriter_t2551128604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Internal.CodeWriter::DecreaseIndent()
extern "C"  void CodeWriter_DecreaseIndent_m2893826590 (CodeWriter_t2551128604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Internal.CodeWriter::Append(System.String)
extern "C"  void CodeWriter_Append_m1604744308 (CodeWriter_t2551128604 * __this, String_t* ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Internal.CodeWriter::Append(System.Boolean,System.String)
extern "C"  void CodeWriter_Append_m3863534017 (CodeWriter_t2551128604 * __this, bool ___trim0, String_t* ___code1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Internal.CodeWriter::AppendLine(System.String)
extern "C"  void CodeWriter_AppendLine_m3426780256 (CodeWriter_t2551128604 * __this, String_t* ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Internal.CodeWriter::AppendLine(System.Int32)
extern "C"  void CodeWriter_AppendLine_m3836587059 (CodeWriter_t2551128604 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Internal.CodeWriter::AppendFormat(System.String,System.Object[])
extern "C"  void CodeWriter_AppendFormat_m459690409 (CodeWriter_t2551128604 * __this, String_t* ___format0, ObjectU5BU5D_t1108656482* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.Internal.CodeWriter::AppendLineFormat(System.String,System.Object[])
extern "C"  void CodeWriter_AppendLineFormat_m104097941 (CodeWriter_t2551128604 * __this, String_t* ___format0, ObjectU5BU5D_t1108656482* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InControl.Internal.CodeWriter::ToString()
extern "C"  String_t* CodeWriter_ToString_m3754481821 (CodeWriter_t2551128604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
