// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from visualization_msgs:msg/MenuEntry.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/menu_entry__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "visualization_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "visualization_msgs/msg/detail/menu_entry__struct.h"
#include "visualization_msgs/msg/detail/menu_entry__functions.h"

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

#include "rosidl_runtime_c/string.h"  // command, title
#include "rosidl_runtime_c/string_functions.h"  // command, title

// forward declare type support functions


typedef visualization_msgs__msg__MenuEntry _MenuEntry__ros_msg_type;

static bool _MenuEntry__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _MenuEntry__ros_msg_type * ros_message = (_MenuEntry__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: id
  rv = ucdr_serialize_uint32_t(cdr, ros_message->id);
  // Member: parent_id
  rv = ucdr_serialize_uint32_t(cdr, ros_message->parent_id);
  // Member: title
 {
    uint32_t string_len = (ros_message->title.data == NULL) ? 0 : (uint32_t)strlen(ros_message->title.data) + 1;
    ros_message->title.size = (ros_message->title.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->title.data, string_len);
  }
  // Member: command
 {
    uint32_t string_len = (ros_message->command.data == NULL) ? 0 : (uint32_t)strlen(ros_message->command.data) + 1;
    ros_message->command.size = (ros_message->command.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->command.data, string_len);
  }
  // Member: command_type
  rv = ucdr_serialize_uint8_t(cdr, ros_message->command_type);

  return rv;
}

static bool _MenuEntry__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _MenuEntry__ros_msg_type * ros_message = (_MenuEntry__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: id
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->id);
  // Field name: parent_id
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->parent_id);
  // Field name: title
  {
    size_t capacity = ros_message->title.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->title.data, capacity, &string_size);
    if (rv) {
      ros_message->title.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->title.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: command
  {
    size_t capacity = ros_message->command.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->command.data, capacity, &string_size);
    if (rv) {
      ros_message->command.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->command.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: command_type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->command_type);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_visualization_msgs
size_t get_serialized_size_visualization_msgs__msg__MenuEntry(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _MenuEntry__ros_msg_type * ros_message = (const _MenuEntry__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: id
  {
    const size_t item_size = sizeof(ros_message->id);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: parent_id
  {
    const size_t item_size = sizeof(ros_message->parent_id);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: title
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->title.size + 1;
  // Member: command
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->command.size + 1;
  // Member: command_type
  {
    const size_t item_size = sizeof(ros_message->command_type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MenuEntry__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_visualization_msgs__msg__MenuEntry(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_visualization_msgs
size_t max_serialized_size_visualization_msgs__msg__MenuEntry(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: id
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: parent_id
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: title
  *full_bounded = false;
  // Member: command
  *full_bounded = false;
  // Member: command_type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static size_t _MenuEntry__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_visualization_msgs__msg__MenuEntry(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_MenuEntry = {
  "visualization_msgs::msg",
  "MenuEntry",
  _MenuEntry__cdr_serialize,
  _MenuEntry__cdr_deserialize,
  _MenuEntry__get_serialized_size,
  get_serialized_size_visualization_msgs__msg__MenuEntry,
  _MenuEntry__max_serialized_size
};

static rosidl_message_type_support_t _MenuEntry__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_MenuEntry,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, MenuEntry)() {
  return &_MenuEntry__type_support;
}

#if defined(__cplusplus)
}
#endif
