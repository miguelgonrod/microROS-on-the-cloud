// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from std_msgs:msg/UInt64MultiArray.idl
// generated code does not contain a copyright notice
#include "std_msgs/msg/detail/u_int64_multi_array__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "std_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "std_msgs/msg/detail/u_int64_multi_array__struct.h"
#include "std_msgs/msg/detail/u_int64_multi_array__functions.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // data
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // data
#include "std_msgs/msg/detail/multi_array_layout__functions.h"  // layout

// forward declare type support functions
size_t get_serialized_size_std_msgs__msg__MultiArrayLayout(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_std_msgs__msg__MultiArrayLayout(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, MultiArrayLayout)();


typedef std_msgs__msg__UInt64MultiArray _UInt64MultiArray__ros_msg_type;

static bool _UInt64MultiArray__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _UInt64MultiArray__ros_msg_type * ros_message = (_UInt64MultiArray__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: layout
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, MultiArrayLayout
      )()->data))->cdr_serialize(&ros_message->layout, cdr);
  // Member: data
  {
    const size_t size = ros_message->data.size;
    rv = ucdr_serialize_sequence_uint64_t(cdr, ros_message->data.data, size);
  }

  return rv;
}

static bool _UInt64MultiArray__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _UInt64MultiArray__ros_msg_type * ros_message = (_UInt64MultiArray__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: layout
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, MultiArrayLayout
      )()->data))->cdr_deserialize(cdr, &ros_message->layout);
  // Field name: data
  {
    uint32_t size;
    const size_t capacity = ros_message->data.capacity;
    rv = ucdr_deserialize_sequence_uint64_t(cdr, ros_message->data.data, capacity, &size);
    if (rv) {
      ros_message->data.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->data.size = 0;
      ucdr_align_to(cdr, sizeof(uint64_t));
      ucdr_advance_buffer(cdr, size * sizeof(uint64_t));
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_std_msgs
size_t get_serialized_size_std_msgs__msg__UInt64MultiArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _UInt64MultiArray__ros_msg_type * ros_message = (const _UInt64MultiArray__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: layout
  current_alignment +=
    get_serialized_size_std_msgs__msg__MultiArrayLayout(&ros_message->layout, current_alignment);
  // Member: data
  {
    size_t sequence_size = ros_message->data.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->data.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _UInt64MultiArray__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_std_msgs__msg__UInt64MultiArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_std_msgs
size_t max_serialized_size_std_msgs__msg__UInt64MultiArray(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: layout
  current_alignment +=
    max_serialized_size_std_msgs__msg__MultiArrayLayout(full_bounded, current_alignment);
  // Member: data
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _UInt64MultiArray__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_std_msgs__msg__UInt64MultiArray(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_UInt64MultiArray = {
  "std_msgs::msg",
  "UInt64MultiArray",
  _UInt64MultiArray__cdr_serialize,
  _UInt64MultiArray__cdr_deserialize,
  _UInt64MultiArray__get_serialized_size,
  get_serialized_size_std_msgs__msg__UInt64MultiArray,
  _UInt64MultiArray__max_serialized_size
};

static rosidl_message_type_support_t _UInt64MultiArray__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_UInt64MultiArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, UInt64MultiArray)() {
  return &_UInt64MultiArray__type_support;
}

#if defined(__cplusplus)
}
#endif
