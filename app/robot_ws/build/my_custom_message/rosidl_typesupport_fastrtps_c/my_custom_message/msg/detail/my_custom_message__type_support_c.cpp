// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_custom_message:msg/MyCustomMessage.idl
// generated code does not contain a copyright notice
#include "my_custom_message/msg/detail/my_custom_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_custom_message/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_custom_message/msg/detail/my_custom_message__struct.h"
#include "my_custom_message/msg/detail/my_custom_message__functions.h"
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


using _MyCustomMessage__ros_msg_type = my_custom_message__msg__MyCustomMessage;

static bool _MyCustomMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MyCustomMessage__ros_msg_type * ros_message = static_cast<const _MyCustomMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_test
  {
    cdr << (ros_message->bool_test ? true : false);
  }

  // Field name: byte_test
  {
    cdr << ros_message->byte_test;
  }

  // Field name: char_test
  {
    cdr << ros_message->char_test;
  }

  // Field name: float32_test
  {
    cdr << ros_message->float32_test;
  }

  // Field name: double_test
  {
    cdr << ros_message->double_test;
  }

  // Field name: int8_test
  {
    cdr << ros_message->int8_test;
  }

  // Field name: uint8_test
  {
    cdr << ros_message->uint8_test;
  }

  // Field name: int16_test
  {
    cdr << ros_message->int16_test;
  }

  // Field name: uint16_test
  {
    cdr << ros_message->uint16_test;
  }

  // Field name: int32_test
  {
    cdr << ros_message->int32_test;
  }

  // Field name: uint32_test
  {
    cdr << ros_message->uint32_test;
  }

  // Field name: int64_test
  {
    cdr << ros_message->int64_test;
  }

  // Field name: uint64_test
  {
    cdr << ros_message->uint64_test;
  }

  return true;
}

static bool _MyCustomMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MyCustomMessage__ros_msg_type * ros_message = static_cast<_MyCustomMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_test
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bool_test = tmp ? true : false;
  }

  // Field name: byte_test
  {
    cdr >> ros_message->byte_test;
  }

  // Field name: char_test
  {
    cdr >> ros_message->char_test;
  }

  // Field name: float32_test
  {
    cdr >> ros_message->float32_test;
  }

  // Field name: double_test
  {
    cdr >> ros_message->double_test;
  }

  // Field name: int8_test
  {
    cdr >> ros_message->int8_test;
  }

  // Field name: uint8_test
  {
    cdr >> ros_message->uint8_test;
  }

  // Field name: int16_test
  {
    cdr >> ros_message->int16_test;
  }

  // Field name: uint16_test
  {
    cdr >> ros_message->uint16_test;
  }

  // Field name: int32_test
  {
    cdr >> ros_message->int32_test;
  }

  // Field name: uint32_test
  {
    cdr >> ros_message->uint32_test;
  }

  // Field name: int64_test
  {
    cdr >> ros_message->int64_test;
  }

  // Field name: uint64_test
  {
    cdr >> ros_message->uint64_test;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_message
size_t get_serialized_size_my_custom_message__msg__MyCustomMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MyCustomMessage__ros_msg_type * ros_message = static_cast<const _MyCustomMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bool_test
  {
    size_t item_size = sizeof(ros_message->bool_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name byte_test
  {
    size_t item_size = sizeof(ros_message->byte_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name char_test
  {
    size_t item_size = sizeof(ros_message->char_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float32_test
  {
    size_t item_size = sizeof(ros_message->float32_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name double_test
  {
    size_t item_size = sizeof(ros_message->double_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int8_test
  {
    size_t item_size = sizeof(ros_message->int8_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint8_test
  {
    size_t item_size = sizeof(ros_message->uint8_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int16_test
  {
    size_t item_size = sizeof(ros_message->int16_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint16_test
  {
    size_t item_size = sizeof(ros_message->uint16_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int32_test
  {
    size_t item_size = sizeof(ros_message->int32_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint32_test
  {
    size_t item_size = sizeof(ros_message->uint32_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int64_test
  {
    size_t item_size = sizeof(ros_message->int64_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint64_test
  {
    size_t item_size = sizeof(ros_message->uint64_test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MyCustomMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_custom_message__msg__MyCustomMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_custom_message
size_t max_serialized_size_my_custom_message__msg__MyCustomMessage(
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

  // member: bool_test
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: byte_test
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: char_test
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: float32_test
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: double_test
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: int8_test
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: uint8_test
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: int16_test
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: uint16_test
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: int32_test
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uint32_test
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: int64_test
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: uint64_test
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
    using DataType = my_custom_message__msg__MyCustomMessage;
    is_plain =
      (
      offsetof(DataType, uint64_test) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MyCustomMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_custom_message__msg__MyCustomMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MyCustomMessage = {
  "my_custom_message::msg",
  "MyCustomMessage",
  _MyCustomMessage__cdr_serialize,
  _MyCustomMessage__cdr_deserialize,
  _MyCustomMessage__get_serialized_size,
  _MyCustomMessage__max_serialized_size
};

static rosidl_message_type_support_t _MyCustomMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MyCustomMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_custom_message, msg, MyCustomMessage)() {
  return &_MyCustomMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
