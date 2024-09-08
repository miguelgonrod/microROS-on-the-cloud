// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from actionlib_msgs:msg/GoalID.idl
// generated code does not contain a copyright notice
#include "actionlib_msgs/msg/detail/goal_id__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "actionlib_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "actionlib_msgs/msg/detail/goal_id__struct.h"
#include "actionlib_msgs/msg/detail/goal_id__functions.h"

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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp
#include "rosidl_runtime_c/string.h"  // id
#include "rosidl_runtime_c/string_functions.h"  // id

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_actionlib_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_actionlib_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_actionlib_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time)();


typedef actionlib_msgs__msg__GoalID _GoalID__ros_msg_type;

static bool _GoalID__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _GoalID__ros_msg_type * ros_message = (_GoalID__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: stamp
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_serialize(&ros_message->stamp, cdr);
  // Member: id
 {
    uint32_t string_len = (ros_message->id.data == NULL) ? 0 : (uint32_t)strlen(ros_message->id.data) + 1;
    ros_message->id.size = (ros_message->id.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->id.data, string_len);
  }

  return rv;
}

static bool _GoalID__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _GoalID__ros_msg_type * ros_message = (_GoalID__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: stamp
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_deserialize(cdr, &ros_message->stamp);
  // Field name: id
  {
    size_t capacity = ros_message->id.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->id.data, capacity, &string_size);
    if (rv) {
      ros_message->id.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->id.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_actionlib_msgs
size_t get_serialized_size_actionlib_msgs__msg__GoalID(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _GoalID__ros_msg_type * ros_message = (const _GoalID__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: stamp
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Time(&ros_message->stamp, current_alignment);
  // Member: id
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->id.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _GoalID__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_actionlib_msgs__msg__GoalID(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_actionlib_msgs
size_t max_serialized_size_actionlib_msgs__msg__GoalID(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: stamp
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Time(full_bounded, current_alignment);
  // Member: id
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _GoalID__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_actionlib_msgs__msg__GoalID(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_GoalID = {
  "actionlib_msgs::msg",
  "GoalID",
  _GoalID__cdr_serialize,
  _GoalID__cdr_deserialize,
  _GoalID__get_serialized_size,
  get_serialized_size_actionlib_msgs__msg__GoalID,
  _GoalID__max_serialized_size
};

static rosidl_message_type_support_t _GoalID__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_GoalID,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, actionlib_msgs, msg, GoalID)() {
  return &_GoalID__type_support;
}

#if defined(__cplusplus)
}
#endif
