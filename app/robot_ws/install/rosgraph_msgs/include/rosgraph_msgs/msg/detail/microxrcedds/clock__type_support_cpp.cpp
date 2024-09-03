// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rosgraph_msgs:msg/Clock.idl
// generated code does not contain a copyright notice
#include "rosgraph_msgs/msg/detail/clock__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rosgraph_msgs/msg/detail/clock__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Time &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);

size_t
max_serialized_size_Time(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace rosgraph_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosgraph_msgs
cdr_serialize(
  const rosgraph_msgs::msg::Clock & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: clock
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.clock,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosgraph_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  rosgraph_msgs::msg::Clock & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: clock
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.clock);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosgraph_msgs
get_serialized_size(
  const rosgraph_msgs::msg::Clock & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: clock
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.clock,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rosgraph_msgs
max_serialized_size_Clock(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: clock
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Time(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _Clock__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rosgraph_msgs::msg::Clock *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Clock__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosgraph_msgs::msg::Clock *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Clock__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosgraph_msgs::msg::Clock *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Clock__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rosgraph_msgs::msg::Clock *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Clock__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Clock(&full_bounded, 0);
}

static message_type_support_callbacks_t _Clock__callbacks = {
  "rosgraph_msgs::msg",
  "Clock",
  _Clock__cdr_serialize,
  _Clock__cdr_deserialize,
  _Clock__get_serialized_size,
  _Clock__get_serialized_size_with_initial_alignment,
  _Clock__max_serialized_size
};

static rosidl_message_type_support_t _Clock__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Clock__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace rosgraph_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_rosgraph_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rosgraph_msgs::msg::Clock>()
{
  return &rosgraph_msgs::msg::typesupport_microxrcedds_cpp::_Clock__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rosgraph_msgs, msg, Clock)() {
  return &rosgraph_msgs::msg::typesupport_microxrcedds_cpp::_Clock__handle;
}

#ifdef __cplusplus
}
#endif
