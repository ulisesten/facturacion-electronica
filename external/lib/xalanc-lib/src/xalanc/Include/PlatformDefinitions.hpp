/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the  "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#if !defined(PLATFORMDEFINITIONS_HEADER_GUARD_1357924680)
#define PLATFORMDEFINITIONS_HEADER_GUARD_1357924680

#if defined(__cplusplus)
# include <xercesc/util/XercesDefs.hpp>
#else
/* Include xercesc autoconf to define XMLCh when using a 'C' compiler. */
# include <xercesc/util/Xerces_autoconf_config.hpp>
# include <xercesc/util/XercesVersion.hpp>
#endif

#if defined(_MSC_VER)

#pragma warning(disable: 4127 4146 4251 4284 4345 4351 4355 4511 4512 4514 4521 4702 4710 4711 4786 4097 4503 4786; error: 4150 4172 4238 4239 4715)
#include <basetsd.h>

// Note: this no longer seems necessary with current MSVC
#if !defined(__INTEL_COMPILER) && _MSC_VER >= 1400
#define XALAN_AUTO_PTR_REQUIRES_DEFINITION
#endif

#if defined(_DEBUG) && defined(NDEBUG)
#error NDEBUG must not be defined when _DEBUG is defined.
#elif !defined(_DEBUG) && !defined(NDEBUG)
#error NDEBUG must be defined when _DEBUG is not defined.
#endif

#endif // _MSC_VER

#if defined(__hpux)

#if !defined(_HP_NAMESPACE_STD) && defined(RWSTD_MULTI_THREAD) && !defined(__HPACC_THREAD_SAFE_RB_TREE)
#define __HPACC_THREAD_SAFE_RB_TREE
#endif

#endif // __hpux

// ---------------------------------------------------------------------------
//  A define in the build for each project is also used to control whether
//  the export keyword is from the project's viewpoint or the client's.
//  These defines provide the platform specific keywords that they need
//  to do this.
// ---------------------------------------------------------------------------
#if defined(_MSC_VER)
#define XALAN_PLATFORM_EXPORT     __declspec(dllexport)
#define XALAN_PLATFORM_IMPORT     __declspec(dllimport)
#define XALAN_PLATFORM_EXPORT_FUNCTION(T) XALAN_PLATFORM_EXPORT T
#define XALAN_PLATFORM_IMPORT_FUNCTION(T) XALAN_PLATFORM_IMPORT T
#else
#define XALAN_PLATFORM_EXPORT
#define XALAN_PLATFORM_IMPORT
#define XALAN_PLATFORM_EXPORT_FUNCTION(T) T XALAN_PLATFORM_EXPORT
#define XALAN_PLATFORM_IMPORT_FUNCTION(T) T XALAN_PLATFORM_IMPORT
#endif

#define XALAN_HAVE_GMTIME_R 1
#define XALAN_HAVE_LOCALTIME_R 1
#define XALAN_HAVE_ISNAN 1
/* #undef XALAN_HAVE__ISNAN */
#define XALAN_HAVE_STD_ISNAN 1

#define XALAN_USE_THREAD_STD 1
/* #undef XALAN_USE_THREAD_POSIX */
/* #undef XALAN_USE_THREAD_WINDOWS */

#define XALAN_HAVE_SIGNAL 1
/* #undef XALAN_HAVE_WIN32_SET_CONSOLE_CTRL_HANDLER */

#define XALAN_HAVE_USLEEP 1
/* #undef XALAN_HAVE_WIN32_SLEEP */

#define XALAN_HAVE_UNISTD_H 1
/* #undef XALAN_HAVE_WIN32_DIRECT_H */

/* #undef XALAN_WINDOWS */
/* #undef XALAN_WINDOWS_DIR_FUNCTIONS */
/* #undef XALAN_NEWLINE_IS_CRLF */
/* #undef XALAN_USE_WINDOWS_COLLATION */

/* #undef XALAN_NON_ASCII_PLATFORM */

#include <xalanc/Include/XalanVersion.hpp>

#if defined(__cplusplus)

// ---------------------------------------------------------------------------
// Define namespace symbols if the compiler supports it.
// ---------------------------------------------------------------------------
namespace XALAN_CPP_NAMESPACE { }
namespace xalanc = XALAN_CPP_NAMESPACE;


#include <cstddef>


namespace XALAN_CPP_NAMESPACE {

typedef XMLSize_t       XalanSize_t;
typedef XMLFilePos      XalanFilePos;
typedef XMLFileLoc      XalanFileLoc;

typedef XMLCh           XalanDOMChar;
typedef unsigned int    XalanUnicodeChar;
typedef XMLSSize_t      XalanSSize_t;

template<bool value>
struct XalanCompileErrorBoolean
{
    char    foo[value];
};
 
}


#define XALAN_STATIC_ASSERT(expr) xalanc::XalanCompileErrorBoolean<bool(expr)>()



#endif // __cplusplus



#endif  // PLATFORMDEFINITIONS_HEADER_GUARD_1357924680
