#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "lifecycle_msgs::lifecycle_msgs__rosidl_typesupport_introspection_c" for configuration "Debug"
set_property(TARGET lifecycle_msgs::lifecycle_msgs__rosidl_typesupport_introspection_c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(lifecycle_msgs::lifecycle_msgs__rosidl_typesupport_introspection_c PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/liblifecycle_msgs__rosidl_typesupport_introspection_c.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS lifecycle_msgs::lifecycle_msgs__rosidl_typesupport_introspection_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_lifecycle_msgs::lifecycle_msgs__rosidl_typesupport_introspection_c "${_IMPORT_PREFIX}/lib/liblifecycle_msgs__rosidl_typesupport_introspection_c.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
