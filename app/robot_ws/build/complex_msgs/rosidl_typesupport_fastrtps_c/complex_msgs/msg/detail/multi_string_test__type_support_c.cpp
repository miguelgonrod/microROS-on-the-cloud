// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from complex_msgs:msg/MultiStringTest.idl
// generated code does not contain a copyright notice
#include "complex_msgs/msg/detail/multi_string_test__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "complex_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "complex_msgs/msg/detail/multi_string_test__struct.h"
#include "complex_msgs/msg/detail/multi_string_test__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // data1, data2, data3, data4
#include "rosidl_runtime_c/string_functions.h"  // data1, data2, data3, data4

// forward declare type support functions


using _MultiStringTest__ros_msg_type = complex_msgs__msg__MultiStringTest;

static bool _MultiStringTest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MultiStringTest__ros_msg_type * ros_message = static_cast<const _MultiStringTest__ros_msg_type *>(untyped_ros_message);
  // Field name: data1
  {
    const rosidl_runtime_c__String * str = &ros_message->data1;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: data2
  {
    const rosidl_runtime_c__String * str = &ros_message->data2;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: data3
  {
    const rosidl_runtime_c__String * str = &ros_message->data3;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: data4
  {
    const rosidl_runtime_c__String * str = &ros_message->data4;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _MultiStringTest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MultiStringTest__ros_msg_type * ros_message = static_cast<_MultiStringTest__ros_msg_type *>(untyped_ros_message);
  // Field name: data1
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->data1.data) {
      rosidl_runtime_c__String__init(&ros_message->data1);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->data1,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'data1'\n");
      return false;
    }
  }

  // Field name: data2
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->data2.data) {
      rosidl_runtime_c__String__init(&ros_message->data2);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->data2,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'data2'\n");
      return false;
    }
  }

  // Field name: data3
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->data3.data) {
      rosidl_runtime_c__String__init(&ros_message->data3);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->data3,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'data3'\n");
      return false;
    }
  }

  // Field name: data4
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->data4.data) {
      rosidl_runtime_c__String__init(&ros_message->data4);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->data4,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'data4'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
size_t get_serialized_size_complex_msgs__msg__MultiStringTest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiStringTest__ros_msg_type * ros_message = static_cast<const _MultiStringTest__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name data1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->data1.size + 1);
  // field.name data2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->data2.size + 1);
  // field.name data3
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->data3.size + 1);
  // field.name data4
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->data4.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _MultiStringTest__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_complex_msgs__msg__MultiStringTest(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
size_t max_serialized_size_complex_msgs__msg__MultiStringTest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: data1
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: data2
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: data3
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: data4
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = complex_msgs__msg__MultiStringTest;
    is_plain =
      (
      offsetof(DataType, data4) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MultiStringTest__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_complex_msgs__msg__MultiStringTest(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MultiStringTest = {
  "complex_msgs::msg",
  "MultiStringTest",
  _MultiStringTest__cdr_serialize,
  _MultiStringTest__cdr_deserialize,
  _MultiStringTest__get_serialized_size,
  _MultiStringTest__max_serialized_size
};

static rosidl_message_type_support_t _MultiStringTest__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiStringTest,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, complex_msgs, msg, MultiStringTest)() {
  return &_MultiStringTest__type_support;
}

#if defined(__cplusplus)
}
#endif
