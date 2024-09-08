#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rosidl_runtime_c::rosidl_runtime_c" for configuration "Debug"
set_property(TARGET rosidl_runtime_c::rosidl_runtime_c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(rosidl_runtime_c::rosidl_runtime_c PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/librosidl_runtime_c.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS rosidl_runtime_c::rosidl_runtime_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_rosidl_runtime_c::rosidl_runtime_c "${_IMPORT_PREFIX}/lib/librosidl_runtime_c.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
