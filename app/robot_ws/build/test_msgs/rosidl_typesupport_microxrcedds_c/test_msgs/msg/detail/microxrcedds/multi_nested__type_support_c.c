// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from test_msgs:msg/MultiNested.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/multi_nested__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/msg/detail/multi_nested__struct.h"
#include "test_msgs/msg/detail/multi_nested__functions.h"

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

#include "test_msgs/msg/detail/arrays__functions.h"  // array_of_arrays, bounded_sequence_of_arrays, unbounded_sequence_of_arrays
#include "test_msgs/msg/detail/bounded_sequences__functions.h"  // array_of_bounded_sequences, bounded_sequence_of_bounded_sequences, unbounded_sequence_of_bounded_sequences
#include "test_msgs/msg/detail/unbounded_sequences__functions.h"  // array_of_unbounded_sequences, bounded_sequence_of_unbounded_sequences, unbounded_sequence_of_unbounded_sequences

// forward declare type support functions
size_t get_serialized_size_test_msgs__msg__Arrays(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__Arrays(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Arrays)();
size_t get_serialized_size_test_msgs__msg__BoundedSequences(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__BoundedSequences(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BoundedSequences)();
size_t get_serialized_size_test_msgs__msg__UnboundedSequences(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__UnboundedSequences(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, UnboundedSequences)();


typedef test_msgs__msg__MultiNested _MultiNested__ros_msg_type;

static bool _MultiNested__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _MultiNested__ros_msg_type * ros_message = (_MultiNested__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: array_of_arrays
  {
    const size_t array_size = sizeof(ros_message->array_of_arrays)/sizeof(ros_message->array_of_arrays[0]);
    for(size_t i = 0; i < array_size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Arrays
          )()->data))->cdr_serialize(&ros_message->array_of_arrays[i], cdr);
        if(rv == false){
          break;
        }
    }
  }
  // Member: array_of_bounded_sequences
  {
    const size_t array_size = sizeof(ros_message->array_of_bounded_sequences)/sizeof(ros_message->array_of_bounded_sequences[0]);
    for(size_t i = 0; i < array_size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BoundedSequences
          )()->data))->cdr_serialize(&ros_message->array_of_bounded_sequences[i], cdr);
        if(rv == false){
          break;
        }
    }
  }
  // Member: array_of_unbounded_sequences
  {
    const size_t array_size = sizeof(ros_message->array_of_unbounded_sequences)/sizeof(ros_message->array_of_unbounded_sequences[0]);
    for(size_t i = 0; i < array_size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, UnboundedSequences
          )()->data))->cdr_serialize(&ros_message->array_of_unbounded_sequences[i], cdr);
        if(rv == false){
          break;
        }
    }
  }
  // Member: bounded_sequence_of_arrays
  {
    const size_t size = ros_message->bounded_sequence_of_arrays.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Arrays
          )()->data))->cdr_serialize(&ros_message->bounded_sequence_of_arrays.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: bounded_sequence_of_bounded_sequences
  {
    const size_t size = ros_message->bounded_sequence_of_bounded_sequences.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BoundedSequences
          )()->data))->cdr_serialize(&ros_message->bounded_sequence_of_bounded_sequences.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: bounded_sequence_of_unbounded_sequences
  {
    const size_t size = ros_message->bounded_sequence_of_unbounded_sequences.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, UnboundedSequences
          )()->data))->cdr_serialize(&ros_message->bounded_sequence_of_unbounded_sequences.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: unbounded_sequence_of_arrays
  {
    const size_t size = ros_message->unbounded_sequence_of_arrays.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Arrays
          )()->data))->cdr_serialize(&ros_message->unbounded_sequence_of_arrays.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: unbounded_sequence_of_bounded_sequences
  {
    const size_t size = ros_message->unbounded_sequence_of_bounded_sequences.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BoundedSequences
          )()->data))->cdr_serialize(&ros_message->unbounded_sequence_of_bounded_sequences.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: unbounded_sequence_of_unbounded_sequences
  {
    const size_t size = ros_message->unbounded_sequence_of_unbounded_sequences.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, UnboundedSequences
          )()->data))->cdr_serialize(&ros_message->unbounded_sequence_of_unbounded_sequences.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _MultiNested__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _MultiNested__ros_msg_type * ros_message = (_MultiNested__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: array_of_arrays
  {
    const size_t array_size = sizeof(ros_message->array_of_arrays)/sizeof(ros_message->array_of_arrays[0]);
    for(size_t i = 0; i < array_size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Arrays
        )()->data))->cdr_deserialize(cdr, &ros_message->array_of_arrays[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: array_of_bounded_sequences
  {
    const size_t array_size = sizeof(ros_message->array_of_bounded_sequences)/sizeof(ros_message->array_of_bounded_sequences[0]);
    for(size_t i = 0; i < array_size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BoundedSequences
        )()->data))->cdr_deserialize(cdr, &ros_message->array_of_bounded_sequences[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: array_of_unbounded_sequences
  {
    const size_t array_size = sizeof(ros_message->array_of_unbounded_sequences)/sizeof(ros_message->array_of_unbounded_sequences[0]);
    for(size_t i = 0; i < array_size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, UnboundedSequences
        )()->data))->cdr_deserialize(cdr, &ros_message->array_of_unbounded_sequences[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: bounded_sequence_of_arrays
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->bounded_sequence_of_arrays.capacity){
      return 0;
    }

    ros_message->bounded_sequence_of_arrays.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Arrays
        )()->data))->cdr_deserialize(cdr, &ros_message->bounded_sequence_of_arrays.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: bounded_sequence_of_bounded_sequences
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->bounded_sequence_of_bounded_sequences.capacity){
      return 0;
    }

    ros_message->bounded_sequence_of_bounded_sequences.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BoundedSequences
        )()->data))->cdr_deserialize(cdr, &ros_message->bounded_sequence_of_bounded_sequences.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: bounded_sequence_of_unbounded_sequences
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->bounded_sequence_of_unbounded_sequences.capacity){
      return 0;
    }

    ros_message->bounded_sequence_of_unbounded_sequences.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, UnboundedSequences
        )()->data))->cdr_deserialize(cdr, &ros_message->bounded_sequence_of_unbounded_sequences.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: unbounded_sequence_of_arrays
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->unbounded_sequence_of_arrays.capacity){
      return 0;
    }

    ros_message->unbounded_sequence_of_arrays.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Arrays
        )()->data))->cdr_deserialize(cdr, &ros_message->unbounded_sequence_of_arrays.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: unbounded_sequence_of_bounded_sequences
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->unbounded_sequence_of_bounded_sequences.capacity){
      return 0;
    }

    ros_message->unbounded_sequence_of_bounded_sequences.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BoundedSequences
        )()->data))->cdr_deserialize(cdr, &ros_message->unbounded_sequence_of_bounded_sequences.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: unbounded_sequence_of_unbounded_sequences
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->unbounded_sequence_of_unbounded_sequences.capacity){
      return 0;
    }

    ros_message->unbounded_sequence_of_unbounded_sequences.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, UnboundedSequences
        )()->data))->cdr_deserialize(cdr, &ros_message->unbounded_sequence_of_unbounded_sequences.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__msg__MultiNested(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _MultiNested__ros_msg_type * ros_message = (const _MultiNested__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: array_of_arrays
  {
    const size_t array_size = sizeof(ros_message->array_of_arrays)/sizeof(ros_message->array_of_arrays[0]);
    for(size_t i = 0; i < array_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Arrays
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->array_of_arrays[i], current_alignment);
      current_alignment += element_size;
    }
  }
  // Member: array_of_bounded_sequences
  {
    const size_t array_size = sizeof(ros_message->array_of_bounded_sequences)/sizeof(ros_message->array_of_bounded_sequences[0]);
    for(size_t i = 0; i < array_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BoundedSequences
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->array_of_bounded_sequences[i], current_alignment);
      current_alignment += element_size;
    }
  }
  // Member: array_of_unbounded_sequences
  {
    const size_t array_size = sizeof(ros_message->array_of_unbounded_sequences)/sizeof(ros_message->array_of_unbounded_sequences[0]);
    for(size_t i = 0; i < array_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, UnboundedSequences
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->array_of_unbounded_sequences[i], current_alignment);
      current_alignment += element_size;
    }
  }
  // Member: bounded_sequence_of_arrays
  {
    const size_t sequence_size = ros_message->bounded_sequence_of_arrays.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Arrays
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->bounded_sequence_of_arrays.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: bounded_sequence_of_bounded_sequences
  {
    const size_t sequence_size = ros_message->bounded_sequence_of_bounded_sequences.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BoundedSequences
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->bounded_sequence_of_bounded_sequences.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: bounded_sequence_of_unbounded_sequences
  {
    const size_t sequence_size = ros_message->bounded_sequence_of_unbounded_sequences.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, UnboundedSequences
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->bounded_sequence_of_unbounded_sequences.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: unbounded_sequence_of_arrays
  {
    const size_t sequence_size = ros_message->unbounded_sequence_of_arrays.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Arrays
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->unbounded_sequence_of_arrays.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: unbounded_sequence_of_bounded_sequences
  {
    const size_t sequence_size = ros_message->unbounded_sequence_of_bounded_sequences.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BoundedSequences
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->unbounded_sequence_of_bounded_sequences.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: unbounded_sequence_of_unbounded_sequences
  {
    const size_t sequence_size = ros_message->unbounded_sequence_of_unbounded_sequences.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, UnboundedSequences
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->unbounded_sequence_of_unbounded_sequences.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MultiNested__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__msg__MultiNested(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__msg__MultiNested(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: array_of_arrays
  {
    *full_bounded = false;
  }
  // Member: array_of_bounded_sequences
  {
    *full_bounded = false;
  }
  // Member: array_of_unbounded_sequences
  {
    *full_bounded = false;
  }
  // Member: bounded_sequence_of_arrays
  {
    *full_bounded = false;
  }
  // Member: bounded_sequence_of_bounded_sequences
  {
    *full_bounded = false;
  }
  // Member: bounded_sequence_of_unbounded_sequences
  {
    *full_bounded = false;
  }
  // Member: unbounded_sequence_of_arrays
  {
    *full_bounded = false;
  }
  // Member: unbounded_sequence_of_bounded_sequences
  {
    *full_bounded = false;
  }
  // Member: unbounded_sequence_of_unbounded_sequences
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _MultiNested__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__msg__MultiNested(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_MultiNested = {
  "test_msgs::msg",
  "MultiNested",
  _MultiNested__cdr_serialize,
  _MultiNested__cdr_deserialize,
  _MultiNested__get_serialized_size,
  get_serialized_size_test_msgs__msg__MultiNested,
  _MultiNested__max_serialized_size
};

static rosidl_message_type_support_t _MultiNested__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_MultiNested,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, MultiNested)() {
  return &_MultiNested__type_support;
}

#if defined(__cplusplus)
}
#endif
