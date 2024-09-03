#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "microxrcedds_client" for configuration "Release"
set_property(TARGET microxrcedds_client APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(microxrcedds_client PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmicroxrcedds_client.so.2.4.2"
  IMPORTED_SONAME_RELEASE "libmicroxrcedds_client.so.2.4"
  )

list(APPEND _IMPORT_CHECK_TARGETS microxrcedds_client )
list(APPEND _IMPORT_CHECK_FILES_FOR_microxrcedds_client "${_IMPORT_PREFIX}/lib/libmicroxrcedds_client.so.2.4.2" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
