// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from complex_msgs:msg/MultiStringTest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "complex_msgs/msg/detail/multi_string_test__rosidl_typesupport_introspection_c.h"
#include "complex_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "complex_msgs/msg/detail/multi_string_test__functions.h"
#include "complex_msgs/msg/detail/multi_string_test__struct.h"


// Include directives for member types
// Member `data1`
// Member `data2`
// Member `data3`
// Member `data4`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void complex_msgs__msg__MultiStringTest__rosidl_typesupport_introspection_c__MultiStringTest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  complex_msgs__msg__MultiStringTest__init(message_memory);
}

void complex_msgs__msg__MultiStringTest__rosidl_typesupport_introspection_c__MultiStringTest_fini_function(void * message_memory)
{
  complex_msgs__msg__MultiStringTest__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember complex_msgs__msg__MultiStringTest__rosidl_typesupport_introspection_c__MultiStringTest_message_member_array[4] = {
  {
    "data1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(complex_msgs__msg__MultiStringTest, data1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(complex_msgs__msg__MultiStringTest, data2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(complex_msgs__msg__MultiStringTest, data3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(complex_msgs__msg__MultiStringTest, data4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers complex_msgs__msg__MultiStringTest__rosidl_typesupport_introspection_c__MultiStringTest_message_members = {
  "complex_msgs__msg",  // message namespace
  "MultiStringTest",  // message name
  4,  // number of fields
  sizeof(complex_msgs__msg__MultiStringTest),
  complex_msgs__msg__MultiStringTest__rosidl_typesupport_introspection_c__MultiStringTest_message_member_array,  // message members
  complex_msgs__msg__MultiStringTest__rosidl_typesupport_introspection_c__MultiStringTest_init_function,  // function to initialize message memory (memory has to be allocated)
  complex_msgs__msg__MultiStringTest__rosidl_typesupport_introspection_c__MultiStringTest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t complex_msgs__msg__MultiStringTest__rosidl_typesupport_introspection_c__MultiStringTest_message_type_support_handle = {
  0,
  &complex_msgs__msg__MultiStringTest__rosidl_typesupport_introspection_c__MultiStringTest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_complex_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, complex_msgs, msg, MultiStringTest)() {
  if (!complex_msgs__msg__MultiStringTest__rosidl_typesupport_introspection_c__MultiStringTest_message_type_support_handle.typesupport_identifier) {
    complex_msgs__msg__MultiStringTest__rosidl_typesupport_introspection_c__MultiStringTest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &complex_msgs__msg__MultiStringTest__rosidl_typesupport_introspection_c__MultiStringTest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
