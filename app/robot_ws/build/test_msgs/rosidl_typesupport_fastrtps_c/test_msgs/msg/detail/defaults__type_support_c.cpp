// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from test_msgs:msg/Defaults.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/defaults__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "test_msgs/msg/detail/defaults__struct.h"
#include "test_msgs/msg/detail/defaults__functions.h"
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


// forward declare type support functions


using _Defaults__ros_msg_type = test_msgs__msg__Defaults;

static bool _Defaults__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Defaults__ros_msg_type * ros_message = static_cast<const _Defaults__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_value
  {
    cdr << (ros_message->bool_value ? true : false);
  }

  // Field name: byte_value
  {
    cdr << ros_message->byte_value;
  }

  // Field name: char_value
  {
    cdr << ros_message->char_value;
  }

  // Field name: float32_value
  {
    cdr << ros_message->float32_value;
  }

  // Field name: float64_value
  {
    cdr << ros_message->float64_value;
  }

  // Field name: int8_value
  {
    cdr << ros_message->int8_value;
  }

  // Field name: uint8_value
  {
    cdr << ros_message->uint8_value;
  }

  // Field name: int16_value
  {
    cdr << ros_message->int16_value;
  }

  // Field name: uint16_value
  {
    cdr << ros_message->uint16_value;
  }

  // Field name: int32_value
  {
    cdr << ros_message->int32_value;
  }

  // Field name: uint32_value
  {
    cdr << ros_message->uint32_value;
  }

  // Field name: int64_value
  {
    cdr << ros_message->int64_value;
  }

  // Field name: uint64_value
  {
    cdr << ros_message->uint64_value;
  }

  return true;
}

static bool _Defaults__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Defaults__ros_msg_type * ros_message = static_cast<_Defaults__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_value
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bool_value = tmp ? true : false;
  }

  // Field name: byte_value
  {
    cdr >> ros_message->byte_value;
  }

  // Field name: char_value
  {
    cdr >> ros_message->char_value;
  }

  // Field name: float32_value
  {
    cdr >> ros_message->float32_value;
  }

  // Field name: float64_value
  {
    cdr >> ros_message->float64_value;
  }

  // Field name: int8_value
  {
    cdr >> ros_message->int8_value;
  }

  // Field name: uint8_value
  {
    cdr >> ros_message->uint8_value;
  }

  // Field name: int16_value
  {
    cdr >> ros_message->int16_value;
  }

  // Field name: uint16_value
  {
    cdr >> ros_message->uint16_value;
  }

  // Field name: int32_value
  {
    cdr >> ros_message->int32_value;
  }

  // Field name: uint32_value
  {
    cdr >> ros_message->uint32_value;
  }

  // Field name: int64_value
  {
    cdr >> ros_message->int64_value;
  }

  // Field name: uint64_value
  {
    cdr >> ros_message->uint64_value;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__msg__Defaults(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Defaults__ros_msg_type * ros_message = static_cast<const _Defaults__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bool_value
  {
    size_t item_size = sizeof(ros_message->bool_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name byte_value
  {
    size_t item_size = sizeof(ros_message->byte_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name char_value
  {
    size_t item_size = sizeof(ros_message->char_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float32_value
  {
    size_t item_size = sizeof(ros_message->float32_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float64_value
  {
    size_t item_size = sizeof(ros_message->float64_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int8_value
  {
    size_t item_size = sizeof(ros_message->int8_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint8_value
  {
    size_t item_size = sizeof(ros_message->uint8_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int16_value
  {
    size_t item_size = sizeof(ros_message->int16_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint16_value
  {
    size_t item_size = sizeof(ros_message->uint16_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int32_value
  {
    size_t item_size = sizeof(ros_message->int32_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint32_value
  {
    size_t item_size = sizeof(ros_message->uint32_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int64_value
  {
    size_t item_size = sizeof(ros_message->int64_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint64_value
  {
    size_t item_size = sizeof(ros_message->uint64_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Defaults__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_test_msgs__msg__Defaults(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__msg__Defaults(
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

  // member: bool_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: byte_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: char_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: float32_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: float64_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: int8_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: uint8_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: int16_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: uint16_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: int32_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uint32_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: int64_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: uint64_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = test_msgs__msg__Defaults;
    is_plain =
      (
      offsetof(DataType, uint64_value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Defaults__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_test_msgs__msg__Defaults(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Defaults = {
  "test_msgs::msg",
  "Defaults",
  _Defaults__cdr_serialize,
  _Defaults__cdr_deserialize,
  _Defaults__get_serialized_size,
  _Defaults__max_serialized_size
};

static rosidl_message_type_support_t _Defaults__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Defaults,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Defaults)() {
  return &_Defaults__type_support;
}

#if defined(__cplusplus)
}
#endif
