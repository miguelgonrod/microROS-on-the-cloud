#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "microcdr" for configuration "Release"
set_property(TARGET microcdr APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(microcdr PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmicrocdr.so.2.0.1"
  IMPORTED_SONAME_RELEASE "libmicrocdr.so.2.0"
  )

list(APPEND _IMPORT_CHECK_TARGETS microcdr )
list(APPEND _IMPORT_CHECK_FILES_FOR_microcdr "${_IMPORT_PREFIX}/lib/libmicrocdr.so.2.0.1" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
