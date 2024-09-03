// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sensor_msgs:msg/RegionOfInterest.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/region_of_interest__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sensor_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"
#include "sensor_msgs/msg/detail/region_of_interest__functions.h"
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


using _RegionOfInterest__ros_msg_type = sensor_msgs__msg__RegionOfInterest;

static bool _RegionOfInterest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RegionOfInterest__ros_msg_type * ros_message = static_cast<const _RegionOfInterest__ros_msg_type *>(untyped_ros_message);
  // Field name: x_offset
  {
    cdr << ros_message->x_offset;
  }

  // Field name: y_offset
  {
    cdr << ros_message->y_offset;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: width
  {
    cdr << ros_message->width;
  }

  // Field name: do_rectify
  {
    cdr << (ros_message->do_rectify ? true : false);
  }

  return true;
}

static bool _RegionOfInterest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RegionOfInterest__ros_msg_type * ros_message = static_cast<_RegionOfInterest__ros_msg_type *>(untyped_ros_message);
  // Field name: x_offset
  {
    cdr >> ros_message->x_offset;
  }

  // Field name: y_offset
  {
    cdr >> ros_message->y_offset;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: width
  {
    cdr >> ros_message->width;
  }

  // Field name: do_rectify
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->do_rectify = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensor_msgs
size_t get_serialized_size_sensor_msgs__msg__RegionOfInterest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RegionOfInterest__ros_msg_type * ros_message = static_cast<const _RegionOfInterest__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x_offset
  {
    size_t item_size = sizeof(ros_message->x_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_offset
  {
    size_t item_size = sizeof(ros_message->y_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name width
  {
    size_t item_size = sizeof(ros_message->width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name do_rectify
  {
    size_t item_size = sizeof(ros_message->do_rectify);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RegionOfInterest__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sensor_msgs__msg__RegionOfInterest(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensor_msgs
size_t max_serialized_size_sensor_msgs__msg__RegionOfInterest(
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

  // member: x_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: do_rectify
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sensor_msgs__msg__RegionOfInterest;
    is_plain =
      (
      offsetof(DataType, do_rectify) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RegionOfInterest__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sensor_msgs__msg__RegionOfInterest(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RegionOfInterest = {
  "sensor_msgs::msg",
  "RegionOfInterest",
  _RegionOfInterest__cdr_serialize,
  _RegionOfInterest__cdr_deserialize,
  _RegionOfInterest__get_serialized_size,
  _RegionOfInterest__max_serialized_size
};

static rosidl_message_type_support_t _RegionOfInterest__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RegionOfInterest,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, RegionOfInterest)() {
  return &_RegionOfInterest__type_support;
}

#if defined(__cplusplus)
}
#endif
