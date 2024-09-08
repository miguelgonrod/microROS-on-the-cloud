
if(NOT "/home/robot/app/robot_ws/firmware/mcu_ws/build/libyaml_vendor/libyaml-0.2.5-prefix/src/libyaml-0.2.5-stamp/libyaml-0.2.5-gitinfo.txt" IS_NEWER_THAN "/home/robot/app/robot_ws/firmware/mcu_ws/build/libyaml_vendor/libyaml-0.2.5-prefix/src/libyaml-0.2.5-stamp/libyaml-0.2.5-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/home/robot/app/robot_ws/firmware/mcu_ws/build/libyaml_vendor/libyaml-0.2.5-prefix/src/libyaml-0.2.5-stamp/libyaml-0.2.5-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/home/robot/app/robot_ws/firmware/mcu_ws/build/libyaml_vendor/libyaml-0.2.5-prefix/src/libyaml-0.2.5"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/robot/app/robot_ws/firmware/mcu_ws/build/libyaml_vendor/libyaml-0.2.5-prefix/src/libyaml-0.2.5'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout --config "advice.detachedHead=false" --config "advice.detachedHead=false" "https://github.com/yaml/libyaml.git" "libyaml-0.2.5"
    WORKING_DIRECTORY "/home/robot/app/robot_ws/firmware/mcu_ws/build/libyaml_vendor/libyaml-0.2.5-prefix/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/yaml/libyaml.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout 2c891fc7a770e8ba2fec34fc6b545c672beb37e6 --
  WORKING_DIRECTORY "/home/robot/app/robot_ws/firmware/mcu_ws/build/libyaml_vendor/libyaml-0.2.5-prefix/src/libyaml-0.2.5"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: '2c891fc7a770e8ba2fec34fc6b545c672beb37e6'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/home/robot/app/robot_ws/firmware/mcu_ws/build/libyaml_vendor/libyaml-0.2.5-prefix/src/libyaml-0.2.5"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/robot/app/robot_ws/firmware/mcu_ws/build/libyaml_vendor/libyaml-0.2.5-prefix/src/libyaml-0.2.5'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/home/robot/app/robot_ws/firmware/mcu_ws/build/libyaml_vendor/libyaml-0.2.5-prefix/src/libyaml-0.2.5-stamp/libyaml-0.2.5-gitinfo.txt"
    "/home/robot/app/robot_ws/firmware/mcu_ws/build/libyaml_vendor/libyaml-0.2.5-prefix/src/libyaml-0.2.5-stamp/libyaml-0.2.5-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/robot/app/robot_ws/firmware/mcu_ws/build/libyaml_vendor/libyaml-0.2.5-prefix/src/libyaml-0.2.5-stamp/libyaml-0.2.5-gitclone-lastrun.txt'")
endif()

