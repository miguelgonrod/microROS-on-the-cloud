// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from sensor_msgs:msg/JointState.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/joint_state__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "sensor_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "sensor_msgs/msg/detail/joint_state__struct.h"
#include "sensor_msgs/msg/detail/joint_state__functions.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // effort, position, velocity
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // effort, position, velocity
#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_sensor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header)();


typedef sensor_msgs__msg__JointState _JointState__ros_msg_type;

static bool _JointState__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _JointState__ros_msg_type * ros_message = (_JointState__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: name
  {
    const size_t size = ros_message->name.size;
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      uint32_t string_len = (ros_message->name.data[i].data == NULL) ? 0 : (uint32_t)strlen(ros_message->name.data[i].data) + 1;
      ros_message->name.data[i].size = (ros_message->name.data[i].data == NULL) ? 0 : string_len - 1;
      rv = ucdr_serialize_sequence_char(cdr, ros_message->name.data[i].data, string_len);
    }
  }
  // Member: position
  {
    const size_t size = ros_message->position.size;
    rv = ucdr_serialize_sequence_double(cdr, ros_message->position.data, size);
  }
  // Member: velocity
  {
    const size_t size = ros_message->velocity.size;
    rv = ucdr_serialize_sequence_double(cdr, ros_message->velocity.data, size);
  }
  // Member: effort
  {
    const size_t size = ros_message->effort.size;
    rv = ucdr_serialize_sequence_double(cdr, ros_message->effort.data, size);
  }

  return rv;
}

static bool _JointState__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _JointState__ros_msg_type * ros_message = (_JointState__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, Header
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: name
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->name.capacity){
      return 0;
    }
    ros_message->name.size = size;

    for (size_t i = 0; rv && i < size; i++) {
      size_t capacity = ros_message->name.data[i].capacity;
      uint32_t string_size;
      char * data = ros_message->name.data[i].data;
      rv = ucdr_deserialize_sequence_char(cdr, data, capacity, &string_size);
      if (rv) {
        ros_message->name.data[i].size = (string_size == 0) ? 0 : string_size - 1;
      } else if(string_size > capacity){
        cdr->error = false;
        cdr->last_data_size = 1;
        ros_message->name.data[i].size = 0;
        ucdr_align_to(cdr, sizeof(char));
        ucdr_advance_buffer(cdr, string_size);
      }
    }
  }
  // Field name: position
  {
    uint32_t size;
    const size_t capacity = ros_message->position.capacity;
    rv = ucdr_deserialize_sequence_double(cdr, ros_message->position.data, capacity, &size);
    if (rv) {
      ros_message->position.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->position.size = 0;
      ucdr_align_to(cdr, sizeof(double));
      ucdr_advance_buffer(cdr, size * sizeof(double));
    }
  }
  // Field name: velocity
  {
    uint32_t size;
    const size_t capacity = ros_message->velocity.capacity;
    rv = ucdr_deserialize_sequence_double(cdr, ros_message->velocity.data, capacity, &size);
    if (rv) {
      ros_message->velocity.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->velocity.size = 0;
      ucdr_align_to(cdr, sizeof(double));
      ucdr_advance_buffer(cdr, size * sizeof(double));
    }
  }
  // Field name: effort
  {
    uint32_t size;
    const size_t capacity = ros_message->effort.capacity;
    rv = ucdr_deserialize_sequence_double(cdr, ros_message->effort.data, capacity, &size);
    if (rv) {
      ros_message->effort.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->effort.size = 0;
      ucdr_align_to(cdr, sizeof(double));
      ucdr_advance_buffer(cdr, size * sizeof(double));
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t get_serialized_size_sensor_msgs__msg__JointState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _JointState__ros_msg_type * ros_message = (const _JointState__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_std_msgs__msg__Header(&ros_message->header, current_alignment);
  // Member: name
  {
    const size_t sequence_size = ros_message->name.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
      current_alignment += ros_message->name.data[i].size + 1;
    }
  }
  // Member: position
  {
    size_t sequence_size = ros_message->position.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->position.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: velocity
  {
    size_t sequence_size = ros_message->velocity.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->velocity.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: effort
  {
    size_t sequence_size = ros_message->effort.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->effort.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JointState__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_sensor_msgs__msg__JointState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_sensor_msgs
size_t max_serialized_size_sensor_msgs__msg__JointState(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_std_msgs__msg__Header(full_bounded, current_alignment);
  // Member: name
  {
    *full_bounded = false;
  }
  // Member: position
  {
    *full_bounded = false;
  }
  // Member: velocity
  {
    *full_bounded = false;
  }
  // Member: effort
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _JointState__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_sensor_msgs__msg__JointState(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_JointState = {
  "sensor_msgs::msg",
  "JointState",
  _JointState__cdr_serialize,
  _JointState__cdr_deserialize,
  _JointState__get_serialized_size,
  get_serialized_size_sensor_msgs__msg__JointState,
  _JointState__max_serialized_size
};

static rosidl_message_type_support_t _JointState__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_JointState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, JointState)() {
  return &_JointState__type_support;
}

#if defined(__cplusplus)
}
#endif
