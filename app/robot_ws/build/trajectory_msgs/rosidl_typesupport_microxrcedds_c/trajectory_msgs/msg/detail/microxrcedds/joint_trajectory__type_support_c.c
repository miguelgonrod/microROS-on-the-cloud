// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from trajectory_msgs:msg/JointTrajectory.idl
// generated code does not contain a copyright notice
#include "trajectory_msgs/msg/detail/joint_trajectory__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "trajectory_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"

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

#include "rosidl_runtime_c/string.h"  // joint_names
#include "rosidl_runtime_c/string_functions.h"  // joint_names
#include "std_msgs/msg/detail/header__functions.h"  // header
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"  // points

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_trajectory_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_trajectory_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_trajectory_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header)();
size_t get_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_trajectory_msgs__msg__JointTrajectoryPoint(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, trajectory_msgs, msg, JointTrajectoryPoint)();


typedef trajectory_msgs__msg__JointTrajectory _JointTrajectory__ros_msg_type;

static bool _JointTrajectory__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _JointTrajectory__ros_msg_type * ros_message = (_JointTrajectory__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: joint_names
  {
    const size_t size = ros_message->joint_names.size;
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      uint32_t string_len = (ros_message->joint_names.data[i].data == NULL) ? 0 : (uint32_t)strlen(ros_message->joint_names.data[i].data) + 1;
      ros_message->joint_names.data[i].size = (ros_message->joint_names.data[i].data == NULL) ? 0 : string_len - 1;
      rv = ucdr_serialize_sequence_char(cdr, ros_message->joint_names.data[i].data, string_len);
    }
  }
  // Member: points
  {
    const size_t size = ros_message->points.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, trajectory_msgs, msg, JointTrajectoryPoint
          )()->data))->cdr_serialize(&ros_message->points.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _JointTrajectory__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _JointTrajectory__ros_msg_type * ros_message = (_JointTrajectory__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: joint_names
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->joint_names.capacity){
      return 0;
    }
    ros_message->joint_names.size = size;

    for (size_t i = 0; rv && i < size; i++) {
      size_t capacity = ros_message->joint_names.data[i].capacity;
      uint32_t string_size;
      char * data = ros_message->joint_names.data[i].data;
      rv = ucdr_deserialize_sequence_char(cdr, data, capacity, &string_size);
      if (rv) {
        ros_message->joint_names.data[i].size = (string_size == 0) ? 0 : string_size - 1;
      } else if(string_size > capacity){
        cdr->error = false;
        cdr->last_data_size = 1;
        ros_message->joint_names.data[i].size = 0;
        ucdr_align_to(cdr, sizeof(char));
        ucdr_advance_buffer(cdr, string_size);
      }
    }
  }
  // Field name: points
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->points.capacity){
      return 0;
    }

    ros_message->points.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, trajectory_msgs, msg, JointTrajectoryPoint
        )()->data))->cdr_deserialize(cdr, &ros_message->points.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_trajectory_msgs
size_t get_serialized_size_trajectory_msgs__msg__JointTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _JointTrajectory__ros_msg_type * ros_message = (const _JointTrajectory__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: joint_names
  {
    const size_t sequence_size = ros_message->joint_names.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
      current_alignment += ros_message->joint_names.data[i].size + 1;
    }
  }
  // Member: points
  {
    const size_t sequence_size = ros_message->points.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, trajectory_msgs, msg, JointTrajectoryPoint
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->points.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JointTrajectory__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_trajectory_msgs__msg__JointTrajectory(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_trajectory_msgs
size_t max_serialized_size_trajectory_msgs__msg__JointTrajectory(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: joint_names
  {
    *full_bounded = false;
  }
  // Member: points
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _JointTrajectory__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_trajectory_msgs__msg__JointTrajectory(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_JointTrajectory = {
  "trajectory_msgs::msg",
  "JointTrajectory",
  _JointTrajectory__cdr_serialize,
  _JointTrajectory__cdr_deserialize,
  _JointTrajectory__get_serialized_size,
  get_serialized_size_trajectory_msgs__msg__JointTrajectory,
  _JointTrajectory__max_serialized_size
};

static rosidl_message_type_support_t _JointTrajectory__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_JointTrajectory,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, trajectory_msgs, msg, JointTrajectory)() {
  return &_JointTrajectory__type_support;
}

#if defined(__cplusplus)
}
#endif
