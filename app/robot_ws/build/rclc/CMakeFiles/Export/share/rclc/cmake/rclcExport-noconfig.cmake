#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rclc::rclc" for configuration ""
set_property(TARGET rclc::rclc APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(rclc::rclc PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/librclc.so"
  IMPORTED_SONAME_NOCONFIG "librclc.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rclc::rclc )
list(APPEND _IMPORT_CHECK_FILES_FOR_rclc::rclc "${_IMPORT_PREFIX}/lib/librclc.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
