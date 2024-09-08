#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rcl::rcl" for configuration "Debug"
set_property(TARGET rcl::rcl APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(rcl::rcl PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/librcl.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS rcl::rcl )
list(APPEND _IMPORT_CHECK_FILES_FOR_rcl::rcl "${_IMPORT_PREFIX}/lib/librcl.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
