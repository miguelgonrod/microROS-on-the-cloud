#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "microxrcedds_client" for configuration "Debug"
set_property(TARGET microxrcedds_client APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(microxrcedds_client PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libmicroxrcedds_client.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS microxrcedds_client )
list(APPEND _IMPORT_CHECK_FILES_FOR_microxrcedds_client "${_IMPORT_PREFIX}/lib/libmicroxrcedds_client.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
