#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "exlib" for configuration ""
set_property(TARGET exlib APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(exlib PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libexlib.so"
  IMPORTED_SONAME_NOCONFIG "libexlib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS exlib )
list(APPEND _IMPORT_CHECK_FILES_FOR_exlib "${_IMPORT_PREFIX}/lib/libexlib.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
