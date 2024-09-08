#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "my_custom_message::my_custom_message__rosidl_typesupport_c" for configuration "Debug"
set_property(TARGET my_custom_message::my_custom_message__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(my_custom_message::my_custom_message__rosidl_typesupport_c PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libmy_custom_message__rosidl_typesupport_c.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS my_custom_message::my_custom_message__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_my_custom_message::my_custom_message__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libmy_custom_message__rosidl_typesupport_c.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
