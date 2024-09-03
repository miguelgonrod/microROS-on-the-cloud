// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from trajectory_msgs:msg/MultiDOFJointTrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "trajectory_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__struct.h"
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__functions.h"

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
#include "geometry_msgs/msg/detail/transform__functions.h"  // transforms
#include "geometry_msgs/msg/detail/twist__functions.h"  // accelerations, velocities

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
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_trajectory_msgs
size_t get_serialized_size_geometry_msgs__msg__Transform(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_trajectory_msgs
size_t max_serialized_size_geometry_msgs__msg__Transform(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_trajectory_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Transform)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_trajectory_msgs
size_t get_serialized_size_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_trajectory_msgs
size_t max_serialized_size_geometry_msgs__msg__Twist(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_trajectory_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Twist)();


typedef trajectory_msgs__msg__MultiDOFJointTrajectoryPoint _MultiDOFJointTrajectoryPoint__ros_msg_type;

static bool _MultiDOFJointTrajectoryPoint__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _MultiDOFJointTrajectoryPoint__ros_msg_type * ros_message = (_MultiDOFJointTrajectoryPoint__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: transforms
  {
    const size_t size = ros_message->transforms.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Transform
          )()->data))->cdr_serialize(&ros_message->transforms.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: velocities
  {
    const size_t size = ros_message->velocities.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Twist
          )()->data))->cdr_serialize(&ros_message->velocities.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: accelerations
  {
    const size_t size = ros_message->accelerations.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Twist
          )()->data))->cdr_serialize(&ros_message->accelerations.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: time_from_start
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Duration
      )()->data))->cdr_serialize(&ros_message->time_from_start, cdr);

  return rv;
}

static bool _MultiDOFJointTrajectoryPoint__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _MultiDOFJointTrajectoryPoint__ros_msg_type * ros_message = (_MultiDOFJointTrajectoryPoint__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: transforms
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->transforms.capacity){
      return 0;
    }

    ros_message->transforms.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Transform
        )()->data))->cdr_deserialize(cdr, &ros_message->transforms.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: velocities
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->velocities.capacity){
      return 0;
    }

    ros_message->velocities.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Twist
        )()->data))->cdr_deserialize(cdr, &ros_message->velocities.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: accelerations
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->accelerations.capacity){
      return 0;
    }

    ros_message->accelerations.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Twist
        )()->data))->cdr_deserialize(cdr, &ros_message->accelerations.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: time_from_start
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Duration
      )()->data))->cdr_deserialize(cdr, &ros_message->time_from_start);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_trajectory_msgs
size_t get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _MultiDOFJointTrajectoryPoint__ros_msg_type * ros_message = (const _MultiDOFJointTrajectoryPoint__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: transforms
  {
    const size_t sequence_size = ros_message->transforms.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Transform
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->transforms.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: velocities
  {
    const size_t sequence_size = ros_message->velocities.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Twist
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->velocities.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: accelerations
  {
    const size_t sequence_size = ros_message->accelerations.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Twist
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->accelerations.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: time_from_start
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Duration(&ros_message->time_from_start, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MultiDOFJointTrajectoryPoint__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_trajectory_msgs
size_t max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(
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
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Duration(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _MultiDOFJointTrajectoryPoint__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_MultiDOFJointTrajectoryPoint = {
  "trajectory_msgs::msg",
  "MultiDOFJointTrajectoryPoint",
  _MultiDOFJointTrajectoryPoint__cdr_serialize,
  _MultiDOFJointTrajectoryPoint__cdr_deserialize,
  _MultiDOFJointTrajectoryPoint__get_serialized_size,
  get_serialized_size_trajectory_msgs__msg__MultiDOFJointTrajectoryPoint,
  _MultiDOFJointTrajectoryPoint__max_serialized_size
};

static rosidl_message_type_support_t _MultiDOFJointTrajectoryPoint__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_MultiDOFJointTrajectoryPoint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, trajectory_msgs, msg, MultiDOFJointTrajectoryPoint)() {
  return &_MultiDOFJointTrajectoryPoint__type_support;
}

#if defined(__cplusplus)
}
#endif
