// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/RegionOfInterest.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/region_of_interest__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace sensor_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensor_msgs
cdr_serialize(
  const sensor_msgs::msg::RegionOfInterest & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x_offset
  cdr << ros_message.x_offset;
  // Member: y_offset
  cdr << ros_message.y_offset;
  // Member: height
  cdr << ros_message.height;
  // Member: width
  cdr << ros_message.width;
  // Member: do_rectify
  cdr << (ros_message.do_rectify ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensor_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sensor_msgs::msg::RegionOfInterest & ros_message)
{
  // Member: x_offset
  cdr >> ros_message.x_offset;

  // Member: y_offset
  cdr >> ros_message.y_offset;

  // Member: height
  cdr >> ros_message.height;

  // Member: width
  cdr >> ros_message.width;

  // Member: do_rectify
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.do_rectify = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensor_msgs
get_serialized_size(
  const sensor_msgs::msg::RegionOfInterest & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x_offset
  {
    size_t item_size = sizeof(ros_message.x_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_offset
  {
    size_t item_size = sizeof(ros_message.y_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: height
  {
    size_t item_size = sizeof(ros_message.height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: width
  {
    size_t item_size = sizeof(ros_message.width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: do_rectify
  {
    size_t item_size = sizeof(ros_message.do_rectify);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensor_msgs
max_serialized_size_RegionOfInterest(
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


  // Member: x_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: do_rectify
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
    using DataType = sensor_msgs::msg::RegionOfInterest;
    is_plain =
      (
      offsetof(DataType, do_rectify) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RegionOfInterest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::RegionOfInterest *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RegionOfInterest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensor_msgs::msg::RegionOfInterest *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RegionOfInterest__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::RegionOfInterest *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RegionOfInterest__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RegionOfInterest(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RegionOfInterest__callbacks = {
  "sensor_msgs::msg",
  "RegionOfInterest",
  _RegionOfInterest__cdr_serialize,
  _RegionOfInterest__cdr_deserialize,
  _RegionOfInterest__get_serialized_size,
  _RegionOfInterest__max_serialized_size
};

static rosidl_message_type_support_t _RegionOfInterest__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RegionOfInterest__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sensor_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sensor_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<sensor_msgs::msg::RegionOfInterest>()
{
  return &sensor_msgs::msg::typesupport_fastrtps_cpp::_RegionOfInterest__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sensor_msgs, msg, RegionOfInterest)() {
  return &sensor_msgs::msg::typesupport_fastrtps_cpp::_RegionOfInterest__handle;
}

#ifdef __cplusplus
}
#endif
