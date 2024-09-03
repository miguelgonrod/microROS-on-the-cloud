// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from shape_msgs:msg/Plane.idl
// generated code does not contain a copyright notice
#include "shape_msgs/msg/detail/plane__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "shape_msgs/msg/detail/plane__struct.hpp"

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

namespace shape_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_shape_msgs
cdr_serialize(
  const shape_msgs::msg::Plane & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: coef
  {
    size_t size = ros_message.coef.size();
    rv = ucdr_serialize_array_double(cdr, ros_message.coef.data(), size);
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_shape_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  shape_msgs::msg::Plane & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: coef
  {
    const size_t size = ros_message.coef.size();
    rv = ucdr_deserialize_array_double(cdr, ros_message.coef.data(), size);
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_shape_msgs
get_serialized_size(
  const shape_msgs::msg::Plane & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: coef
  {
    const size_t array_size = 4;
    const size_t item_size = sizeof(ros_message.coef[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_shape_msgs
max_serialized_size_Plane(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: coef
  {
    const size_t array_size = 4;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }

  return current_alignment - initial_alignment;
}

static bool _Plane__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const shape_msgs::msg::Plane *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Plane__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<shape_msgs::msg::Plane *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Plane__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const shape_msgs::msg::Plane *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Plane__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const shape_msgs::msg::Plane *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Plane__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Plane(&full_bounded, 0);
}

static message_type_support_callbacks_t _Plane__callbacks = {
  "shape_msgs::msg",
  "Plane",
  _Plane__cdr_serialize,
  _Plane__cdr_deserialize,
  _Plane__get_serialized_size,
  _Plane__get_serialized_size_with_initial_alignment,
  _Plane__max_serialized_size
};

static rosidl_message_type_support_t _Plane__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Plane__callbacks,
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
get_message_type_support_handle<shape_msgs::msg::Plane>()
{
  return &shape_msgs::msg::typesupport_microxrcedds_cpp::_Plane__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, shape_msgs, msg, Plane)() {
  return &shape_msgs::msg::typesupport_microxrcedds_cpp::_Plane__handle;
}

#ifdef __cplusplus
}
#endif
