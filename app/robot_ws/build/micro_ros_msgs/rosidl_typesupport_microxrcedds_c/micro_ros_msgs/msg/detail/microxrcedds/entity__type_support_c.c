// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from micro_ros_msgs:msg/Entity.idl
// generated code does not contain a copyright notice
#include "micro_ros_msgs/msg/detail/entity__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "micro_ros_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "micro_ros_msgs/msg/detail/entity__struct.h"
#include "micro_ros_msgs/msg/detail/entity__functions.h"

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

#include "rosidl_runtime_c/string.h"  // name, types
#include "rosidl_runtime_c/string_functions.h"  // name, types

// forward declare type support functions


typedef micro_ros_msgs__msg__Entity _Entity__ros_msg_type;

static bool _Entity__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Entity__ros_msg_type * ros_message = (_Entity__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: entity_type
  rv = ucdr_serialize_uint8_t(cdr, ros_message->entity_type);
  // Member: name
 {
    uint32_t string_len = (ros_message->name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->name.data) + 1;
    ros_message->name.size = (ros_message->name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->name.data, string_len);
  }
  // Member: types
  {
    const size_t size = ros_message->types.size;
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      uint32_t string_len = (ros_message->types.data[i].data == NULL) ? 0 : (uint32_t)strlen(ros_message->types.data[i].data) + 1;
      ros_message->types.data[i].size = (ros_message->types.data[i].data == NULL) ? 0 : string_len - 1;
      rv = ucdr_serialize_sequence_char(cdr, ros_message->types.data[i].data, string_len);
    }
  }

  return rv;
}

static bool _Entity__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Entity__ros_msg_type * ros_message = (_Entity__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: entity_type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->entity_type);
  // Field name: name
  {
    size_t capacity = ros_message->name.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->name.data, capacity, &string_size);
    if (rv) {
      ros_message->name.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->name.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: types
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->types.capacity){
      return 0;
    }
    ros_message->types.size = size;

    for (size_t i = 0; rv && i < size; i++) {
      size_t capacity = ros_message->types.data[i].capacity;
      uint32_t string_size;
      char * data = ros_message->types.data[i].data;
      rv = ucdr_deserialize_sequence_char(cdr, data, capacity, &string_size);
      if (rv) {
        ros_message->types.data[i].size = (string_size == 0) ? 0 : string_size - 1;
      } else if(string_size > capacity){
        cdr->error = false;
        cdr->last_data_size = 1;
        ros_message->types.data[i].size = 0;
        ucdr_align_to(cdr, sizeof(char));
        ucdr_advance_buffer(cdr, string_size);
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_micro_ros_msgs
size_t get_serialized_size_micro_ros_msgs__msg__Entity(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Entity__ros_msg_type * ros_message = (const _Entity__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: entity_type
  {
    const size_t item_size = sizeof(ros_message->entity_type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->name.size + 1;
  // Member: types
  {
    const size_t sequence_size = ros_message->types.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
      current_alignment += ros_message->types.data[i].size + 1;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Entity__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_micro_ros_msgs__msg__Entity(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_micro_ros_msgs
size_t max_serialized_size_micro_ros_msgs__msg__Entity(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: entity_type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 256 + 1;
  // Member: types
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _Entity__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_micro_ros_msgs__msg__Entity(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Entity = {
  "micro_ros_msgs::msg",
  "Entity",
  _Entity__cdr_serialize,
  _Entity__cdr_deserialize,
  _Entity__get_serialized_size,
  get_serialized_size_micro_ros_msgs__msg__Entity,
  _Entity__max_serialized_size
};

static rosidl_message_type_support_t _Entity__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Entity,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, micro_ros_msgs, msg, Entity)() {
  return &_Entity__type_support;
}

#if defined(__cplusplus)
}
#endif
