#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rclc_parameter::rclc_parameter" for configuration ""
set_property(TARGET rclc_parameter::rclc_parameter APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(rclc_parameter::rclc_parameter PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/librclc_parameter.so"
  IMPORTED_SONAME_NOCONFIG "librclc_parameter.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rclc_parameter::rclc_parameter )
list(APPEND _IMPORT_CHECK_FILES_FOR_rclc_parameter::rclc_parameter "${_IMPORT_PREFIX}/lib/librclc_parameter.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
