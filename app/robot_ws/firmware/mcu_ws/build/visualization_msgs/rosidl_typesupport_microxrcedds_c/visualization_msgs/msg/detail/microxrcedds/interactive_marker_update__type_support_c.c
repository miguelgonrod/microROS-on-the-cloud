// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from visualization_msgs:msg/InteractiveMarkerUpdate.idl
// generated code does not contain a copyright notice
#include "visualization_msgs/msg/detail/interactive_marker_update__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "visualization_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "visualization_msgs/msg/detail/interactive_marker_update__struct.h"
#include "visualization_msgs/msg/detail/interactive_marker_update__functions.h"

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

#include "rosidl_runtime_c/string.h"  // erases, server_id
#include "rosidl_runtime_c/string_functions.h"  // erases, server_id
#include "visualization_msgs/msg/detail/interactive_marker__functions.h"  // markers
#include "visualization_msgs/msg/detail/interactive_marker_pose__functions.h"  // poses

// forward declare type support functions
size_t get_serialized_size_visualization_msgs__msg__InteractiveMarker(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_visualization_msgs__msg__InteractiveMarker(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, InteractiveMarker)();
size_t get_serialized_size_visualization_msgs__msg__InteractiveMarkerPose(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_visualization_msgs__msg__InteractiveMarkerPose(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, InteractiveMarkerPose)();


typedef visualization_msgs__msg__InteractiveMarkerUpdate _InteractiveMarkerUpdate__ros_msg_type;

static bool _InteractiveMarkerUpdate__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _InteractiveMarkerUpdate__ros_msg_type * ros_message = (_InteractiveMarkerUpdate__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: server_id
 {
    uint32_t string_len = (ros_message->server_id.data == NULL) ? 0 : (uint32_t)strlen(ros_message->server_id.data) + 1;
    ros_message->server_id.size = (ros_message->server_id.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->server_id.data, string_len);
  }
  // Member: seq_num
  rv = ucdr_serialize_uint64_t(cdr, ros_message->seq_num);
  // Member: type
  rv = ucdr_serialize_uint8_t(cdr, ros_message->type);
  // Member: markers
  {
    const size_t size = ros_message->markers.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, InteractiveMarker
          )()->data))->cdr_serialize(&ros_message->markers.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: poses
  {
    const size_t size = ros_message->poses.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, InteractiveMarkerPose
          )()->data))->cdr_serialize(&ros_message->poses.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: erases
  {
    const size_t size = ros_message->erases.size;
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      uint32_t string_len = (ros_message->erases.data[i].data == NULL) ? 0 : (uint32_t)strlen(ros_message->erases.data[i].data) + 1;
      ros_message->erases.data[i].size = (ros_message->erases.data[i].data == NULL) ? 0 : string_len - 1;
      rv = ucdr_serialize_sequence_char(cdr, ros_message->erases.data[i].data, string_len);
    }
  }

  return rv;
}

static bool _InteractiveMarkerUpdate__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _InteractiveMarkerUpdate__ros_msg_type * ros_message = (_InteractiveMarkerUpdate__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: server_id
  {
    size_t capacity = ros_message->server_id.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->server_id.data, capacity, &string_size);
    if (rv) {
      ros_message->server_id.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->server_id.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: seq_num
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message->seq_num);
  // Field name: type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->type);
  // Field name: markers
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->markers.capacity){
      return 0;
    }

    ros_message->markers.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, InteractiveMarker
        )()->data))->cdr_deserialize(cdr, &ros_message->markers.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: poses
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->poses.capacity){
      return 0;
    }

    ros_message->poses.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, InteractiveMarkerPose
        )()->data))->cdr_deserialize(cdr, &ros_message->poses.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: erases
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->erases.capacity){
      return 0;
    }
    ros_message->erases.size = size;

    for (size_t i = 0; rv && i < size; i++) {
      size_t capacity = ros_message->erases.data[i].capacity;
      uint32_t string_size;
      char * data = ros_message->erases.data[i].data;
      rv = ucdr_deserialize_sequence_char(cdr, data, capacity, &string_size);
      if (rv) {
        ros_message->erases.data[i].size = (string_size == 0) ? 0 : string_size - 1;
      } else if(string_size > capacity){
        cdr->error = false;
        cdr->last_data_size = 1;
        ros_message->erases.data[i].size = 0;
        ucdr_align_to(cdr, sizeof(char));
        ucdr_advance_buffer(cdr, string_size);
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_visualization_msgs
size_t get_serialized_size_visualization_msgs__msg__InteractiveMarkerUpdate(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _InteractiveMarkerUpdate__ros_msg_type * ros_message = (const _InteractiveMarkerUpdate__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: server_id
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->server_id.size + 1;
  // Member: seq_num
  {
    const size_t item_size = sizeof(ros_message->seq_num);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: type
  {
    const size_t item_size = sizeof(ros_message->type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: markers
  {
    const size_t sequence_size = ros_message->markers.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, InteractiveMarker
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->markers.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: poses
  {
    const size_t sequence_size = ros_message->poses.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, InteractiveMarkerPose
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->poses.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: erases
  {
    const size_t sequence_size = ros_message->erases.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
      current_alignment += ros_message->erases.data[i].size + 1;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _InteractiveMarkerUpdate__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_visualization_msgs__msg__InteractiveMarkerUpdate(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_visualization_msgs
size_t max_serialized_size_visualization_msgs__msg__InteractiveMarkerUpdate(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: server_id
  *full_bounded = false;
  // Member: seq_num
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);
  // Member: type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: markers
  {
    *full_bounded = false;
  }
  // Member: poses
  {
    *full_bounded = false;
  }
  // Member: erases
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _InteractiveMarkerUpdate__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_visualization_msgs__msg__InteractiveMarkerUpdate(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_InteractiveMarkerUpdate = {
  "visualization_msgs::msg",
  "InteractiveMarkerUpdate",
  _InteractiveMarkerUpdate__cdr_serialize,
  _InteractiveMarkerUpdate__cdr_deserialize,
  _InteractiveMarkerUpdate__get_serialized_size,
  get_serialized_size_visualization_msgs__msg__InteractiveMarkerUpdate,
  _InteractiveMarkerUpdate__max_serialized_size
};

static rosidl_message_type_support_t _InteractiveMarkerUpdate__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_InteractiveMarkerUpdate,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, InteractiveMarkerUpdate)() {
  return &_InteractiveMarkerUpdate__type_support;
}

#if defined(__cplusplus)
}
#endif
