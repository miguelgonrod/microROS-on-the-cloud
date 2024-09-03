// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from micro_ros_msgs:msg/Graph.idl
// generated code does not contain a copyright notice
#include "micro_ros_msgs/msg/detail/graph__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "micro_ros_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "micro_ros_msgs/msg/detail/graph__struct.h"
#include "micro_ros_msgs/msg/detail/graph__functions.h"

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

#include "micro_ros_msgs/msg/detail/node__functions.h"  // nodes

// forward declare type support functions
size_t get_serialized_size_micro_ros_msgs__msg__Node(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_micro_ros_msgs__msg__Node(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, micro_ros_msgs, msg, Node)();


typedef micro_ros_msgs__msg__Graph _Graph__ros_msg_type;

static bool _Graph__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Graph__ros_msg_type * ros_message = (_Graph__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: nodes
  {
    const size_t size = ros_message->nodes.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, micro_ros_msgs, msg, Node
          )()->data))->cdr_serialize(&ros_message->nodes.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _Graph__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Graph__ros_msg_type * ros_message = (_Graph__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: nodes
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->nodes.capacity){
      return 0;
    }

    ros_message->nodes.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, micro_ros_msgs, msg, Node
        )()->data))->cdr_deserialize(cdr, &ros_message->nodes.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_micro_ros_msgs
size_t get_serialized_size_micro_ros_msgs__msg__Graph(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Graph__ros_msg_type * ros_message = (const _Graph__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: nodes
  {
    const size_t sequence_size = ros_message->nodes.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, micro_ros_msgs, msg, Node
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->nodes.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Graph__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_micro_ros_msgs__msg__Graph(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_micro_ros_msgs
size_t max_serialized_size_micro_ros_msgs__msg__Graph(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: nodes
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _Graph__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_micro_ros_msgs__msg__Graph(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Graph = {
  "micro_ros_msgs::msg",
  "Graph",
  _Graph__cdr_serialize,
  _Graph__cdr_deserialize,
  _Graph__get_serialized_size,
  get_serialized_size_micro_ros_msgs__msg__Graph,
  _Graph__max_serialized_size
};

static rosidl_message_type_support_t _Graph__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Graph,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, micro_ros_msgs, msg, Graph)() {
  return &_Graph__type_support;
}

#if defined(__cplusplus)
}
#endif
