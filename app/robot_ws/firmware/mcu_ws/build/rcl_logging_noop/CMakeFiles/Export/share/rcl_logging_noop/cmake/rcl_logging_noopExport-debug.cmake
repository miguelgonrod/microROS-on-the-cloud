#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rcl_logging_noop::rcl_logging_noop" for configuration "Debug"
set_property(TARGET rcl_logging_noop::rcl_logging_noop APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(rcl_logging_noop::rcl_logging_noop PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/librcl_logging_noop.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS rcl_logging_noop::rcl_logging_noop )
list(APPEND _IMPORT_CHECK_FILES_FOR_rcl_logging_noop::rcl_logging_noop "${_IMPORT_PREFIX}/lib/librcl_logging_noop.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
