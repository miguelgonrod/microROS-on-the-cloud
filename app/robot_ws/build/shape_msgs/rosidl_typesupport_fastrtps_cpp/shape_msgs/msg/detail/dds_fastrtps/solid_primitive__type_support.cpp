// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from shape_msgs:msg/SolidPrimitive.idl
// generated code does not contain a copyright notice
#include "shape_msgs/msg/detail/solid_primitive__rosidl_typesupport_fastrtps_cpp.hpp"
#include "shape_msgs/msg/detail/solid_primitive__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Polygon &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Polygon &);
size_t get_serialized_size(
  const geometry_msgs::msg::Polygon &,
  size_t current_alignment);
size_t
max_serialized_size_Polygon(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace shape_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shape_msgs
cdr_serialize(
  const shape_msgs::msg::SolidPrimitive & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: type
  cdr << ros_message.type;
  // Member: dimensions
  {
    size_t size = ros_message.dimensions.size();
    if (size > 3) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    if (size > 0) {
      cdr.serializeArray(&(ros_message.dimensions[0]), size);
    }
  }
  // Member: polygon
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.polygon,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shape_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  shape_msgs::msg::SolidPrimitive & ros_message)
{
  // Member: type
  cdr >> ros_message.type;

  // Member: dimensions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.dimensions.resize(size);
    if (size > 0) {
      cdr.deserializeArray(&(ros_message.dimensions[0]), size);
    }
  }

  // Member: polygon
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.polygon);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shape_msgs
get_serialized_size(
  const shape_msgs::msg::SolidPrimitive & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dimensions
  {
    size_t array_size = ros_message.dimensions.size();
    if (array_size > 3) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.dimensions[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: polygon

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.polygon, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shape_msgs
max_serialized_size_SolidPrimitive(
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


  // Member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dimensions
  {
    size_t array_size = 3;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: polygon
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Polygon(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = shape_msgs::msg::SolidPrimitive;
    is_plain =
      (
      offsetof(DataType, polygon) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SolidPrimitive__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const shape_msgs::msg::SolidPrimitive *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SolidPrimitive__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<shape_msgs::msg::SolidPrimitive *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SolidPrimitive__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const shape_msgs::msg::SolidPrimitive *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SolidPrimitive__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SolidPrimitive(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SolidPrimitive__callbacks = {
  "shape_msgs::msg",
  "SolidPrimitive",
  _SolidPrimitive__cdr_serialize,
  _SolidPrimitive__cdr_deserialize,
  _SolidPrimitive__get_serialized_size,
  _SolidPrimitive__max_serialized_size
};

static rosidl_message_type_support_t _SolidPrimitive__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SolidPrimitive__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace shape_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_shape_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<shape_msgs::msg::SolidPrimitive>()
{
  return &shape_msgs::msg::typesupport_fastrtps_cpp::_SolidPrimitive__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, shape_msgs, msg, SolidPrimitive)() {
  return &shape_msgs::msg::typesupport_fastrtps_cpp::_SolidPrimitive__handle;
}

#ifdef __cplusplus
}
#endif
