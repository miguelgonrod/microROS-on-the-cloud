// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from trajectory_msgs:msg/JointTrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "trajectory_msgs/msg/detail/joint_trajectory_point__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.hpp"

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
  const builtin_interfaces::msg::Duration &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Duration &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Duration &,
  size_t current_alignment);

size_t
max_serialized_size_Duration(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace trajectory_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_trajectory_msgs
cdr_serialize(
  const trajectory_msgs::msg::JointTrajectoryPoint & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: positions
  {
    size_t size = ros_message.positions.size();
    rv = ucdr_serialize_sequence_double(cdr, &ros_message.positions[0], size);
  }
  // Member: velocities
  {
    size_t size = ros_message.velocities.size();
    rv = ucdr_serialize_sequence_double(cdr, &ros_message.velocities[0], size);
  }
  // Member: accelerations
  {
    size_t size = ros_message.accelerations.size();
    rv = ucdr_serialize_sequence_double(cdr, &ros_message.accelerations[0], size);
  }
  // Member: effort
  {
    size_t size = ros_message.effort.size();
    rv = ucdr_serialize_sequence_double(cdr, &ros_message.effort[0], size);
  }
  // Member: time_from_start
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.time_from_start,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_trajectory_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  trajectory_msgs::msg::JointTrajectoryPoint & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: positions
  {
    uint32_t size;
    const size_t capacity = ros_message.positions.capacity();
    ros_message.positions.resize(capacity);
    rv = ucdr_deserialize_sequence_double(cdr, &ros_message.positions[0], capacity, &size);
    if (rv) {
      ros_message.positions.resize(size);
    }
  }
  // Member: velocities
  {
    uint32_t size;
    const size_t capacity = ros_message.velocities.capacity();
    ros_message.velocities.resize(capacity);
    rv = ucdr_deserialize_sequence_double(cdr, &ros_message.velocities[0], capacity, &size);
    if (rv) {
      ros_message.velocities.resize(size);
    }
  }
  // Member: accelerations
  {
    uint32_t size;
    const size_t capacity = ros_message.accelerations.capacity();
    ros_message.accelerations.resize(capacity);
    rv = ucdr_deserialize_sequence_double(cdr, &ros_message.accelerations[0], capacity, &size);
    if (rv) {
      ros_message.accelerations.resize(size);
    }
  }
  // Member: effort
  {
    uint32_t size;
    const size_t capacity = ros_message.effort.capacity();
    ros_message.effort.resize(capacity);
    rv = ucdr_deserialize_sequence_double(cdr, &ros_message.effort[0], capacity, &size);
    if (rv) {
      ros_message.effort.resize(size);
    }
  }
  // Member: time_from_start
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.time_from_start);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_trajectory_msgs
get_serialized_size(
  const trajectory_msgs::msg::JointTrajectoryPoint & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: positions
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.positions.size();
    size_t item_size = sizeof(ros_message.positions[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: velocities
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.velocities.size();
    size_t item_size = sizeof(ros_message.velocities[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: accelerations
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.accelerations.size();
    size_t item_size = sizeof(ros_message.accelerations[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: effort
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.effort.size();
    size_t item_size = sizeof(ros_message.effort[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: time_from_start
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.time_from_start,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_trajectory_msgs
max_serialized_size_JointTrajectoryPoint(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: positions
  {
    *full_bounded = false;
  }
  // Member: velocities
  {
    *full_bounded = false;
  }
  // Member: accelerations
  {
    *full_bounded = false;
  }
  // Member: effort
  {
    *full_bounded = false;
  }
  // Member: time_from_start
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Duration(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _JointTrajectoryPoint__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const trajectory_msgs::msg::JointTrajectoryPoint *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JointTrajectoryPoint__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<trajectory_msgs::msg::JointTrajectoryPoint *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JointTrajectoryPoint__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const trajectory_msgs::msg::JointTrajectoryPoint *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JointTrajectoryPoint__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const trajectory_msgs::msg::JointTrajectoryPoint *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _JointTrajectoryPoint__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_JointTrajectoryPoint(&full_bounded, 0);
}

static message_type_support_callbacks_t _JointTrajectoryPoint__callbacks = {
  "trajectory_msgs::msg",
  "JointTrajectoryPoint",
  _JointTrajectoryPoint__cdr_serialize,
  _JointTrajectoryPoint__cdr_deserialize,
  _JointTrajectoryPoint__get_serialized_size,
  _JointTrajectoryPoint__get_serialized_size_with_initial_alignment,
  _JointTrajectoryPoint__max_serialized_size
};

static rosidl_message_type_support_t _JointTrajectoryPoint__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_JointTrajectoryPoint__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace trajectory_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_trajectory_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<trajectory_msgs::msg::JointTrajectoryPoint>()
{
  return &trajectory_msgs::msg::typesupport_microxrcedds_cpp::_JointTrajectoryPoint__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, trajectory_msgs, msg, JointTrajectoryPoint)() {
  return &trajectory_msgs::msg::typesupport_microxrcedds_cpp::_JointTrajectoryPoint__handle;
}

#ifdef __cplusplus
}
#endif
