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

/****************************************************************************
 *                     GENERATED HEADER: DO NOT MODIFY                      *
 *                                                                          *
 *   Ensure that all changes are made to the template XalanVersion.hpp.in   *
 ****************************************************************************/

#if !defined(XALANVERSION_HEADER_GUARD_1357924680)
#define XALANVERSION_HEADER_GUARD_1357924680

/// Xalan-C major version.
#define XALAN_VERSION_MAJOR (1)
/// Xalan-C minor version.
#define XALAN_VERSION_MINOR (12)
/// Xalan-C patch version.
#define XALAN_VERSION_REVISION (0)

/**
 * Xalan-C++ version represented as a single integer value.
 *
 * Useful for conditional compilation purposes, for example to enable
 * or disable version-specific capabilities.  For example to enable
 * functionality for Xalan-C++ 1.10 or greater:
 *
 * @code
 * #if _XALAN_VERSION >= 011000
 *   // code specific to new version of Xalan...
 * #else
 *   // old code here...
 * #endif
 * @endcode
 */
#define _XALAN_VERSION ((10000 * XALAN_VERSION_MAJOR) + (100 * XALAN_VERSION_MINOR) + XALAN_VERSION_REVISION)

/**
 * Xalan-C++ full version expressed as an underscore-separated string.
 *
 * Includes major, minor and patch version numbers.
 */
#define XALAN_FULLVERSIONSTR "1_12_0"

/**
 * Xalan-C++ short version expressed as an underscore-separated string.
 *
 * Includes major and minor version numbers only.
 */
#define XALAN_SHORTVERSIONSTR "1_12"

/**
 * Xalan-C++ full version expressed as an dot-separated string.
 *
 * Includes major, minor and patch version numbers.
 */
#define XALAN_FULLVERSIONDOT "1.12.0"

/// Xalan-C++ product name (used for message catalogs)
#define XALAN_PRODUCT xalanc
/// Xalan-C++ namespace, including major and minor version
#define XALAN_CPP_NAMESPACE xalanc_1_12

/**
 * Xalan-C++ short version expressed as an underscore-separated string.
 *
 * Global constant used for displaying the Xalan-C++ version at runtime.
 * Includes major, minor and patch version numbers.
 */
extern const char* const    gXalanVersionStr;

/**
 * Xalan-C++ full version expressed as an underscore-separated string.
 *
 * Global constant used for displaying the Xalan-C++ version at runtime.
 * Includes major, minor version numbers only.
 */
extern const char* const    gXalanFullVersionStr;

/**
 * Xalan-C++ major version number.
 *
 * Global constant used for checking the Xalan-C++ version at runtime.
 */
extern const unsigned int   gXalanMajVersion;

/**
 * Xalan-C++ minor version number.
 *
 * Global constant used for checking the Xalan-C++ version at runtime.
 */
extern const unsigned int   gXalanMinVersion;

/**
 * Xalan-C++ patch version number.
 *
 * Global constant used for checking the Xalan-C++ version at runtime.
 */
extern const unsigned int   gXalanRevision;


#endif // XALANVERSION_HEADER_GUARD_1357924680
