// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from trajectory_msgs:msg/JointTrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "trajectory_msgs/msg/detail/joint_trajectory_point__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "trajectory_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.h"
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"

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

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/duration__functions.h"  // time_from_start
#include "rosidl_runtime_c/primitives_sequence.h"  // accelerations, effort, positions, velocities
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // accelerations, effort, positions, velocities

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_trajectory_msgs
size_t get_serialized_size_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_trajectory_msgs
size_t max_serialized_size_builtin_interfaces__msg__Duration(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_trajectory_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Duration)();


typedef trajectory_msgs__msg__JointTrajectoryPoint _JointTrajectoryPoint__ros_msg_type;

static bool _JointTrajectoryPoint__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _JointTrajectoryPoint__ros_msg_type * ros_message = (_JointTrajectoryPoint__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: positions
  {
    const size_t size = ros_message->positions.size;
    rv = ucdr_serialize_sequence_double(cdr, ros_message->positions.data, size);
  }
  // Member: velocities
  {
    const size_t size = ros_message->velocities.size;
    rv = ucdr_serialize_sequence_double(cdr, ros_message->velocities.data, size);
  }
  // Member: accelerations
  {
    const size_t size = ros_message->accelerations.size;
    rv = ucdr_serialize_sequence_double(cdr, ros_message->accelerations.data, size);
  }
  // Member: effort
  {
    const size_t size = ros_message->effort.size;
    rv = ucdr_serialize_sequence_double(cdr, ros_message->effort.data, size);
  }
  // Member: time_from_start
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Duration
      )()->data))->cdr_serialize(&ros_message->time_from_start, cdr);

  return rv;
}

static bool _JointTrajectoryPoint__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _JointTrajectoryPoint__ros_msg_type * ros_message = (_JointTrajectoryPoint__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: positions
  {
    uint32_t size;
    const size_t capacity = ros_message->positions.capacity;
    rv = ucdr_deserialize_sequence_double(cdr, ros_message->positions.data, capacity, &size);
    if (rv) {
      ros_message->positions.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->positions.size = 0;
      ucdr_align_to(cdr, sizeof(double));
      ucdr_advance_buffer(cdr, size * sizeof(double));
    }
  }
  // Field name: velocities
  {
    uint32_t size;
    const size_t capacity = ros_message->velocities.capacity;
    rv = ucdr_deserialize_sequence_double(cdr, ros_message->velocities.data, capacity, &size);
    if (rv) {
      ros_message->velocities.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->velocities.size = 0;
      ucdr_align_to(cdr, sizeof(double));
      ucdr_advance_buffer(cdr, size * sizeof(double));
    }
  }
  // Field name: accelerations
  {
    uint32_t size;
    const size_t capacity = ros_message->accelerations.capacity;
    rv = ucdr_deserialize_sequence_double(cdr, ros_message->accelerations.data, capacity, &size);
    if (rv) {
      ros_message->accelerations.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->accelerations.size = 0;
      ucdr_align_to(cdr, sizeof(double));
      ucdr_advance_buffer(cdr, size * sizeof(double));
    }
  }
  // Field name: effort
  {
    uint32_t size;
    const size_t capacity = ros_message->effort.capacity;
    rv = ucdr_deserialize_sequence_double(cdr, ros_message->effort.data, capacity, &size);
    if (rv) {
      ros_message->effort.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->effort.size = 0;
      ucdr_align_to(cdr, sizeof(double));
      ucdr_advance_buffer(cdr, size * sizeof(double));
    }
  }
  // Field name: time_from_start
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Duration
      )()->data))->cdr_deserialize(cdr, &ros_message->time_from_start);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_trajectory_msgs
size_t get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _JointTrajectoryPoint__ros_msg_type * ros_message = (const _JointTrajectoryPoint__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: positions
  {
    size_t sequence_size = ros_message->positions.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->positions.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: velocities
  {
    size_t sequence_size = ros_message->velocities.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->velocities.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: accelerations
  {
    size_t sequence_size = ros_message->accelerations.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->accelerations.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: effort
  {
    size_t sequence_size = ros_message->effort.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->effort.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: time_from_start
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Duration(&ros_message->time_from_start, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _JointTrajectoryPoint__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_trajectory_msgs
size_t max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
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
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Duration(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _JointTrajectoryPoint__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_JointTrajectoryPoint = {
  "trajectory_msgs::msg",
  "JointTrajectoryPoint",
  _JointTrajectoryPoint__cdr_serialize,
  _JointTrajectoryPoint__cdr_deserialize,
  _JointTrajectoryPoint__get_serialized_size,
  get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint,
  _JointTrajectoryPoint__max_serialized_size
};

static rosidl_message_type_support_t _JointTrajectoryPoint__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_JointTrajectoryPoint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, trajectory_msgs, msg, JointTrajectoryPoint)() {
  return &_JointTrajectoryPoint__type_support;
}

#if defined(__cplusplus)
}
#endif
