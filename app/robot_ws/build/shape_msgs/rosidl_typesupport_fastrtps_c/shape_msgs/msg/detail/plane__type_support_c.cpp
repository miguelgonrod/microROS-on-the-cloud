// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from shape_msgs:msg/Plane.idl
// generated code does not contain a copyright notice
#include "shape_msgs/msg/detail/plane__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "shape_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "shape_msgs/msg/detail/plane__struct.h"
#include "shape_msgs/msg/detail/plane__functions.h"
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


using _Plane__ros_msg_type = shape_msgs__msg__Plane;

static bool _Plane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Plane__ros_msg_type * ros_message = static_cast<const _Plane__ros_msg_type *>(untyped_ros_message);
  // Field name: coef
  {
    size_t size = 4;
    auto array_ptr = ros_message->coef;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Plane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Plane__ros_msg_type * ros_message = static_cast<_Plane__ros_msg_type *>(untyped_ros_message);
  // Field name: coef
  {
    size_t size = 4;
    auto array_ptr = ros_message->coef;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shape_msgs
size_t get_serialized_size_shape_msgs__msg__Plane(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Plane__ros_msg_type * ros_message = static_cast<const _Plane__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name coef
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->coef;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Plane__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_shape_msgs__msg__Plane(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_shape_msgs
size_t max_serialized_size_shape_msgs__msg__Plane(
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

  // member: coef
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = shape_msgs__msg__Plane;
    is_plain =
      (
      offsetof(DataType, coef) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Plane__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_shape_msgs__msg__Plane(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Plane = {
  "shape_msgs::msg",
  "Plane",
  _Plane__cdr_serialize,
  _Plane__cdr_deserialize,
  _Plane__get_serialized_size,
  _Plane__max_serialized_size
};

static rosidl_message_type_support_t _Plane__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Plane,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, shape_msgs, msg, Plane)() {
  return &_Plane__type_support;
}

#if defined(__cplusplus)
}
#endif
