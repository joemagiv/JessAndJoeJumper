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

// InControl.InControlException
struct InControlException_t2005277557;
// System.String
struct String_t;
// System.Exception
struct Exception_t3991598821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Exception3991598821.h"

// System.Void InControl.InControlException::.ctor()
extern "C"  void InControlException__ctor_m3595364622 (InControlException_t2005277557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InControlException::.ctor(System.String)
extern "C"  void InControlException__ctor_m3526909108 (InControlException_t2005277557 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InControl.InControlException::.ctor(System.String,System.Exception)
extern "C"  void InControlException__ctor_m2605836034 (InControlException_t2005277557 * __this, String_t* ___message0, Exception_t3991598821 * ___inner1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
