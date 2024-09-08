#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rclc_parameter::rclc_parameter" for configuration "Debug"
set_property(TARGET rclc_parameter::rclc_parameter APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(rclc_parameter::rclc_parameter PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/librclc_parameter.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS rclc_parameter::rclc_parameter )
list(APPEND _IMPORT_CHECK_FILES_FOR_rclc_parameter::rclc_parameter "${_IMPORT_PREFIX}/lib/librclc_parameter.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
