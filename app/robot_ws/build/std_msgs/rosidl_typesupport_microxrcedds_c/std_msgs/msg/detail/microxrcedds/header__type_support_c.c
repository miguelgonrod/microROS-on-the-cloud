// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from std_msgs:msg/Header.idl
// generated code does not contain a copyright notice
#include "std_msgs/msg/detail/header__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "std_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "std_msgs/msg/detail/header__struct.h"
#include "std_msgs/msg/detail/header__functions.h"

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
#include "rosidl_runtime_c/string.h"  // frame_id
#include "rosidl_runtime_c/string_functions.h"  // frame_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_std_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_std_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_std_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time)();


typedef std_msgs__msg__Header _Header__ros_msg_type;

static bool _Header__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Header__ros_msg_type * ros_message = (_Header__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: stamp
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_serialize(&ros_message->stamp, cdr);
  // Member: frame_id
 {
    uint32_t string_len = (ros_message->frame_id.data == NULL) ? 0 : (uint32_t)strlen(ros_message->frame_id.data) + 1;
    ros_message->frame_id.size = (ros_message->frame_id.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->frame_id.data, string_len);
  }

  return rv;
}

static bool _Header__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Header__ros_msg_type * ros_message = (_Header__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: stamp
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_deserialize(cdr, &ros_message->stamp);
  // Field name: frame_id
  {
    size_t capacity = ros_message->frame_id.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->frame_id.data, capacity, &string_size);
    if (rv) {
      ros_message->frame_id.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->frame_id.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_std_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Header__ros_msg_type * ros_message = (const _Header__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: stamp
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Time(&ros_message->stamp, current_alignment);
  // Member: frame_id
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->frame_id.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _Header__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_std_msgs__msg__Header(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_std_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: stamp
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Time(full_bounded, current_alignment);
  // Member: frame_id
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _Header__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_std_msgs__msg__Header(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Header = {
  "std_msgs::msg",
  "Header",
  _Header__cdr_serialize,
  _Header__cdr_deserialize,
  _Header__get_serialized_size,
  get_serialized_size_std_msgs__msg__Header,
  _Header__max_serialized_size
};

static rosidl_message_type_support_t _Header__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Header,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header)() {
  return &_Header__type_support;
}

#if defined(__cplusplus)
}
#endif
