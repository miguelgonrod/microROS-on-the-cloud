// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from shape_msgs:msg/SolidPrimitive.idl
// generated code does not contain a copyright notice
#include "shape_msgs/msg/detail/solid_primitive__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "shape_msgs/msg/detail/solid_primitive__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Polygon &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  geometry_msgs::msg::Polygon &);

size_t get_serialized_size(
  const geometry_msgs::msg::Polygon &,
  size_t current_alignment);

size_t
max_serialized_size_Polygon(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace shape_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_shape_msgs
cdr_serialize(
  const shape_msgs::msg::SolidPrimitive & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: type
  rv = ucdr_serialize_uint8_t(cdr, ros_message.type);
  // Member: dimensions
  {
    size_t size = ros_message.dimensions.size();
    rv = ucdr_serialize_sequence_double(cdr, &ros_message.dimensions[0], size);
  }
  // Member: polygon
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.polygon,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_shape_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  shape_msgs::msg::SolidPrimitive & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.type);
  // Member: dimensions
  {
    uint32_t size;
    const size_t capacity = ros_message.dimensions.capacity();
    ros_message.dimensions.resize(capacity);
    rv = ucdr_deserialize_sequence_double(cdr, &ros_message.dimensions[0], capacity, &size);
    if (rv) {
      ros_message.dimensions.resize(size);
    }
  }
  // Member: polygon
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.polygon);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_shape_msgs
get_serialized_size(
  const shape_msgs::msg::SolidPrimitive & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: type
  {
    const size_t item_size = sizeof(ros_message.type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: dimensions
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.dimensions.size();
    size_t item_size = sizeof(ros_message.dimensions[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: polygon
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.polygon,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_shape_msgs
max_serialized_size_SolidPrimitive(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: dimensions
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (max_sequence_size * sizeof(double));
  }
  // Member: polygon
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Polygon(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _SolidPrimitive__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const shape_msgs::msg::SolidPrimitive *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SolidPrimitive__cdr_deserialize(
  ucdrBuffer * cdr,
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

static size_t _SolidPrimitive__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const shape_msgs::msg::SolidPrimitive *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _SolidPrimitive__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_SolidPrimitive(&full_bounded, 0);
}

static message_type_support_callbacks_t _SolidPrimitive__callbacks = {
  "shape_msgs::msg",
  "SolidPrimitive",
  _SolidPrimitive__cdr_serialize,
  _SolidPrimitive__cdr_deserialize,
  _SolidPrimitive__get_serialized_size,
  _SolidPrimitive__get_serialized_size_with_initial_alignment,
  _SolidPrimitive__max_serialized_size
};

static rosidl_message_type_support_t _SolidPrimitive__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_SolidPrimitive__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace shape_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_shape_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<shape_msgs::msg::SolidPrimitive>()
{
  return &shape_msgs::msg::typesupport_microxrcedds_cpp::_SolidPrimitive__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, shape_msgs, msg, SolidPrimitive)() {
  return &shape_msgs::msg::typesupport_microxrcedds_cpp::_SolidPrimitive__handle;
}

#ifdef __cplusplus
}
#endif
