// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from geometry_msgs:msg/TwistWithCovariance.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/twist_with_covariance__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.hpp"

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
  const geometry_msgs::msg::Twist &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  geometry_msgs::msg::Twist &);

size_t get_serialized_size(
  const geometry_msgs::msg::Twist &,
  size_t current_alignment);

size_t
max_serialized_size_Twist(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace geometry_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_geometry_msgs
cdr_serialize(
  const geometry_msgs::msg::TwistWithCovariance & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: twist
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.twist,
    cdr);
  // Member: covariance
  {
    size_t size = ros_message.covariance.size();
    rv = ucdr_serialize_array_double(cdr, ros_message.covariance.data(), size);
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_geometry_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  geometry_msgs::msg::TwistWithCovariance & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: twist
  rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.twist);
  // Member: covariance
  {
    const size_t size = ros_message.covariance.size();
    rv = ucdr_deserialize_array_double(cdr, ros_message.covariance.data(), size);
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_geometry_msgs
get_serialized_size(
  const geometry_msgs::msg::TwistWithCovariance & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: twist
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.twist,
    current_alignment);
  // Member: covariance
  {
    const size_t array_size = 36;
    const size_t item_size = sizeof(ros_message.covariance[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_geometry_msgs
max_serialized_size_TwistWithCovariance(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: twist
  current_alignment += geometry_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Twist(
    full_bounded,
    current_alignment);
  // Member: covariance
  {
    const size_t array_size = 36;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }

  return current_alignment - initial_alignment;
}

static bool _TwistWithCovariance__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const geometry_msgs::msg::TwistWithCovariance *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TwistWithCovariance__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<geometry_msgs::msg::TwistWithCovariance *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TwistWithCovariance__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const geometry_msgs::msg::TwistWithCovariance *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TwistWithCovariance__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const geometry_msgs::msg::TwistWithCovariance *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _TwistWithCovariance__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_TwistWithCovariance(&full_bounded, 0);
}

static message_type_support_callbacks_t _TwistWithCovariance__callbacks = {
  "geometry_msgs::msg",
  "TwistWithCovariance",
  _TwistWithCovariance__cdr_serialize,
  _TwistWithCovariance__cdr_deserialize,
  _TwistWithCovariance__get_serialized_size,
  _TwistWithCovariance__get_serialized_size_with_initial_alignment,
  _TwistWithCovariance__max_serialized_size
};

static rosidl_message_type_support_t _TwistWithCovariance__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_TwistWithCovariance__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace geometry_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_geometry_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<geometry_msgs::msg::TwistWithCovariance>()
{
  return &geometry_msgs::msg::typesupport_microxrcedds_cpp::_TwistWithCovariance__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, geometry_msgs, msg, TwistWithCovariance)() {
  return &geometry_msgs::msg::typesupport_microxrcedds_cpp::_TwistWithCovariance__handle;
}

#ifdef __cplusplus
}
#endif
