# Copyright 2022 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and
# limitations under the License.

# Generated from generate_version_header.cmake.in
# This file is used by ament_generate_version_header()

set(GENERATED_HEADER_FILE "/home/robot/app/robot_ws/firmware/dev_ws/build/ament_cmake_gen_version_h/ament_generate_version_header/some_lib/ament_generate_version_header/version.hpp")
set(VERSION_TEMPLATE_FILE "/home/robot/app/robot_ws/firmware/dev_ws/ament/ament_cmake/ament_cmake_gen_version_h/cmake/version.h.in")

set(VERSION_MAJOR "1")
set(VERSION_MINOR "3")
set(VERSION_PATCH "10")
set(VERSION_STR "1.3.10")

set(PROJECT_NAME_UPPER "AMENT_CMAKE_GEN_VERSION_H")

configure_file("${VERSION_TEMPLATE_FILE}" "${GENERATED_HEADER_FILE}")
