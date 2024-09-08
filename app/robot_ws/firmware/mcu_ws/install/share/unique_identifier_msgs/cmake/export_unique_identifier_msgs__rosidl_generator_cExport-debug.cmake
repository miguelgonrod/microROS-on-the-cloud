#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "unique_identifier_msgs::unique_identifier_msgs__rosidl_generator_c" for configuration "Debug"
set_property(TARGET unique_identifier_msgs::unique_identifier_msgs__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(unique_identifier_msgs::unique_identifier_msgs__rosidl_generator_c PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libunique_identifier_msgs__rosidl_generator_c.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS unique_identifier_msgs::unique_identifier_msgs__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_unique_identifier_msgs::unique_identifier_msgs__rosidl_generator_c "${_IMPORT_PREFIX}/lib/libunique_identifier_msgs__rosidl_generator_c.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
