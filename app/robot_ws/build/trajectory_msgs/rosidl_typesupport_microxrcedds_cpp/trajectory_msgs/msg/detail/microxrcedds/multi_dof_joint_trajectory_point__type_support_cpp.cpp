// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from trajectory_msgs:msg/MultiDOFJointTrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__struct.hpp"

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
  const geometry_msgs::msg::Transform &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  geometry_msgs::msg::Transform &);

size_t get_serialized_size(
  const geometry_msgs::msg::Transform &,
  size_t current_alignment);

size_t
max_serialized_size_Transform(
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
  const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: transforms
  {
    size_t size = ros_message.transforms.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.transforms[i],
        cdr);
      i++;
    }
  }
  // Member: velocities
  {
    size_t size = ros_message.velocities.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.velocities[i],
        cdr);
      i++;
    }
  }
  // Member: accelerations
  {
    size_t size = ros_message.accelerations.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.accelerations[i],
        cdr);
      i++;
    }
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
  trajectory_msgs::msg::MultiDOFJointTrajectoryPoint & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: transforms
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.transforms.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.transforms[i]);
      i++;
    }
  }
  // Member: velocities
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.velocities.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.velocities[i]);
      i++;
    }
  }
  // Member: accelerations
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.accelerations.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = geometry_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.accelerations[i]);
      i++;
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
  const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: transforms
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.transforms.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.transforms[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: velocities
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.velocities.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.velocities[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: accelerations
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.accelerations.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = geometry_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.accelerations[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: time_from_start
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.time_from_start,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_trajectory_msgs
max_serialized_size_MultiDOFJointTrajectoryPoint(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: transforms
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
  // Member: time_from_start
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Duration(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _MultiDOFJointTrajectoryPoint__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MultiDOFJointTrajectoryPoint__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MultiDOFJointTrajectoryPoint__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MultiDOFJointTrajectoryPoint__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _MultiDOFJointTrajectoryPoint__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_MultiDOFJointTrajectoryPoint(&full_bounded, 0);
}

static message_type_support_callbacks_t _MultiDOFJointTrajectoryPoint__callbacks = {
  "trajectory_msgs::msg",
  "MultiDOFJointTrajectoryPoint",
  _MultiDOFJointTrajectoryPoint__cdr_serialize,
  _MultiDOFJointTrajectoryPoint__cdr_deserialize,
  _MultiDOFJointTrajectoryPoint__get_serialized_size,
  _MultiDOFJointTrajectoryPoint__get_serialized_size_with_initial_alignment,
  _MultiDOFJointTrajectoryPoint__max_serialized_size
};

static rosidl_message_type_support_t _MultiDOFJointTrajectoryPoint__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_MultiDOFJointTrajectoryPoint__callbacks,
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
get_message_type_support_handle<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint>()
{
  return &trajectory_msgs::msg::typesupport_microxrcedds_cpp::_MultiDOFJointTrajectoryPoint__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint)() {
  return &trajectory_msgs::msg::typesupport_microxrcedds_cpp::_MultiDOFJointTrajectoryPoint__handle;
}

#ifdef __cplusplus
}
#endif
