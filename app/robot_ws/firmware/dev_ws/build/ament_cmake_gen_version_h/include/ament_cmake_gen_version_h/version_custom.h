// Copyright 2015 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef AMENT_CMAKE_GEN_VERSION_H__VERSION_H_
#define AMENT_CMAKE_GEN_VERSION_H__VERSION_H_

/// \def AMENT_CMAKE_GEN_VERSION_H_VERSION_MAJOR
/// Defines AMENT_CMAKE_GEN_VERSION_H major version number
#define AMENT_CMAKE_GEN_VERSION_H_VERSION_MAJOR (1)

/// \def AMENT_CMAKE_GEN_VERSION_H_VERSION_MINOR
/// Defines AMENT_CMAKE_GEN_VERSION_H minor version number
#define AMENT_CMAKE_GEN_VERSION_H_VERSION_MINOR (2)

/// \def AMENT_CMAKE_GEN_VERSION_H_VERSION_PATCH
/// Defines AMENT_CMAKE_GEN_VERSION_H version patch number
#define AMENT_CMAKE_GEN_VERSION_H_VERSION_PATCH (3)

/// \def AMENT_CMAKE_GEN_VERSION_H_VERSION_STR
/// Defines AMENT_CMAKE_GEN_VERSION_H version string
#define AMENT_CMAKE_GEN_VERSION_H_VERSION_STR "1.2.3"

/// \def AMENT_CMAKE_GEN_VERSION_H_VERSION_GTE
/// Defines a macro to check whether the version of AMENT_CMAKE_GEN_VERSION_H is greater than or equal to
/// the given version triple.
#define AMENT_CMAKE_GEN_VERSION_H_VERSION_GTE(major, minor, patch) ( \
     (major < AMENT_CMAKE_GEN_VERSION_H_VERSION_MAJOR) ? true \
     : (major > AMENT_CMAKE_GEN_VERSION_H_VERSION_MAJOR) ? false \
     : (minor < AMENT_CMAKE_GEN_VERSION_H_VERSION_MINOR) ? true \
     : (minor > AMENT_CMAKE_GEN_VERSION_H_VERSION_MINOR) ? false \
     : (patch < AMENT_CMAKE_GEN_VERSION_H_VERSION_PATCH) ? true \
     : (patch > AMENT_CMAKE_GEN_VERSION_H_VERSION_PATCH) ? false \
     : true)

#endif  // AMENT_CMAKE_GEN_VERSION_H__VERSION_H_
