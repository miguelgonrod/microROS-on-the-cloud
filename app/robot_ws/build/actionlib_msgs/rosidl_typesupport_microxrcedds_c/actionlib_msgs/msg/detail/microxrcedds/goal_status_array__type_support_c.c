// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from actionlib_msgs:msg/GoalStatusArray.idl
// generated code does not contain a copyright notice
#include "actionlib_msgs/msg/detail/goal_status_array__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "actionlib_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "actionlib_msgs/msg/detail/goal_status_array__struct.h"
#include "actionlib_msgs/msg/detail/goal_status_array__functions.h"

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

#include "actionlib_msgs/msg/detail/goal_status__functions.h"  // status_list
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_actionlib_msgs__msg__GoalStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_actionlib_msgs__msg__GoalStatus(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, actionlib_msgs, msg, GoalStatus)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_actionlib_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_actionlib_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_actionlib_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header)();


typedef actionlib_msgs__msg__GoalStatusArray _GoalStatusArray__ros_msg_type;

static bool _GoalStatusArray__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _GoalStatusArray__ros_msg_type * ros_message = (_GoalStatusArray__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: status_list
  {
    const size_t size = ros_message->status_list.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, actionlib_msgs, msg, GoalStatus
          )()->data))->cdr_serialize(&ros_message->status_list.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _GoalStatusArray__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _GoalStatusArray__ros_msg_type * ros_message = (_GoalStatusArray__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: status_list
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->status_list.capacity){
      return 0;
    }

    ros_message->status_list.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, actionlib_msgs, msg, GoalStatus
        )()->data))->cdr_deserialize(cdr, &ros_message->status_list.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_actionlib_msgs
size_t get_serialized_size_actionlib_msgs__msg__GoalStatusArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _GoalStatusArray__ros_msg_type * ros_message = (const _GoalStatusArray__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: status_list
  {
    const size_t sequence_size = ros_message->status_list.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, actionlib_msgs, msg, GoalStatus
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->status_list.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GoalStatusArray__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_actionlib_msgs__msg__GoalStatusArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_actionlib_msgs
size_t max_serialized_size_actionlib_msgs__msg__GoalStatusArray(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: status_list
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _GoalStatusArray__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_actionlib_msgs__msg__GoalStatusArray(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_GoalStatusArray = {
  "actionlib_msgs::msg",
  "GoalStatusArray",
  _GoalStatusArray__cdr_serialize,
  _GoalStatusArray__cdr_deserialize,
  _GoalStatusArray__get_serialized_size,
  get_serialized_size_actionlib_msgs__msg__GoalStatusArray,
  _GoalStatusArray__max_serialized_size
};

static rosidl_message_type_support_t _GoalStatusArray__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_GoalStatusArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, actionlib_msgs, msg, GoalStatusArray)() {
  return &_GoalStatusArray__type_support;
}

#if defined(__cplusplus)
}
#endif
