// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from geometry_msgs:msg/VelocityStamped.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/velocity_stamped__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "geometry_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "geometry_msgs/msg/detail/velocity_stamped__struct.h"
#include "geometry_msgs/msg/detail/velocity_stamped__functions.h"

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

#include "geometry_msgs/msg/detail/twist__functions.h"  // velocity
#include "rosidl_runtime_c/string.h"  // body_frame_id, reference_frame_id
#include "rosidl_runtime_c/string_functions.h"  // body_frame_id, reference_frame_id
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_geometry_msgs__msg__Twist(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Twist)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_geometry_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_geometry_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_geometry_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header)();


typedef geometry_msgs__msg__VelocityStamped _VelocityStamped__ros_msg_type;

static bool _VelocityStamped__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _VelocityStamped__ros_msg_type * ros_message = (_VelocityStamped__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: body_frame_id
 {
    uint32_t string_len = (ros_message->body_frame_id.data == NULL) ? 0 : (uint32_t)strlen(ros_message->body_frame_id.data) + 1;
    ros_message->body_frame_id.size = (ros_message->body_frame_id.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->body_frame_id.data, string_len);
  }
  // Member: reference_frame_id
 {
    uint32_t string_len = (ros_message->reference_frame_id.data == NULL) ? 0 : (uint32_t)strlen(ros_message->reference_frame_id.data) + 1;
    ros_message->reference_frame_id.size = (ros_message->reference_frame_id.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->reference_frame_id.data, string_len);
  }
  // Member: velocity
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Twist
      )()->data))->cdr_serialize(&ros_message->velocity, cdr);

  return rv;
}

static bool _VelocityStamped__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _VelocityStamped__ros_msg_type * ros_message = (_VelocityStamped__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: body_frame_id
  {
    size_t capacity = ros_message->body_frame_id.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->body_frame_id.data, capacity, &string_size);
    if (rv) {
      ros_message->body_frame_id.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->body_frame_id.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: reference_frame_id
  {
    size_t capacity = ros_message->reference_frame_id.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->reference_frame_id.data, capacity, &string_size);
    if (rv) {
      ros_message->reference_frame_id.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->reference_frame_id.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: velocity
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Twist
      )()->data))->cdr_deserialize(cdr, &ros_message->velocity);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t get_serialized_size_geometry_msgs__msg__VelocityStamped(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _VelocityStamped__ros_msg_type * ros_message = (const _VelocityStamped__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: body_frame_id
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->body_frame_id.size + 1;
  // Member: reference_frame_id
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->reference_frame_id.size + 1;
  // Member: velocity
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Twist(&ros_message->velocity, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _VelocityStamped__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_geometry_msgs__msg__VelocityStamped(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t max_serialized_size_geometry_msgs__msg__VelocityStamped(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: body_frame_id
  *full_bounded = false;
  // Member: reference_frame_id
  *full_bounded = false;
  // Member: velocity
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Twist(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _VelocityStamped__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_geometry_msgs__msg__VelocityStamped(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_VelocityStamped = {
  "geometry_msgs::msg",
  "VelocityStamped",
  _VelocityStamped__cdr_serialize,
  _VelocityStamped__cdr_deserialize,
  _VelocityStamped__get_serialized_size,
  get_serialized_size_geometry_msgs__msg__VelocityStamped,
  _VelocityStamped__max_serialized_size
};

static rosidl_message_type_support_t _VelocityStamped__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_VelocityStamped,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, VelocityStamped)() {
  return &_VelocityStamped__type_support;
}

#if defined(__cplusplus)
}
#endif
