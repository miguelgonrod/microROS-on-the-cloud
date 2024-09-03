// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from statistics_msgs:msg/MetricsMessage.idl
// generated code does not contain a copyright notice
#include "statistics_msgs/msg/detail/metrics_message__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "statistics_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "statistics_msgs/msg/detail/metrics_message__struct.h"
#include "statistics_msgs/msg/detail/metrics_message__functions.h"

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

#include "builtin_interfaces/msg/detail/time__functions.h"  // window_start, window_stop
#include "rosidl_runtime_c/string.h"  // measurement_source_name, metrics_source, unit
#include "rosidl_runtime_c/string_functions.h"  // measurement_source_name, metrics_source, unit
#include "statistics_msgs/msg/detail/statistic_data_point__functions.h"  // statistics

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_statistics_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_statistics_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_statistics_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time)();
size_t get_serialized_size_statistics_msgs__msg__StatisticDataPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_statistics_msgs__msg__StatisticDataPoint(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, statistics_msgs, msg, StatisticDataPoint)();


typedef statistics_msgs__msg__MetricsMessage _MetricsMessage__ros_msg_type;

static bool _MetricsMessage__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _MetricsMessage__ros_msg_type * ros_message = (_MetricsMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: measurement_source_name
 {
    uint32_t string_len = (ros_message->measurement_source_name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->measurement_source_name.data) + 1;
    ros_message->measurement_source_name.size = (ros_message->measurement_source_name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->measurement_source_name.data, string_len);
  }
  // Member: metrics_source
 {
    uint32_t string_len = (ros_message->metrics_source.data == NULL) ? 0 : (uint32_t)strlen(ros_message->metrics_source.data) + 1;
    ros_message->metrics_source.size = (ros_message->metrics_source.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->metrics_source.data, string_len);
  }
  // Member: unit
 {
    uint32_t string_len = (ros_message->unit.data == NULL) ? 0 : (uint32_t)strlen(ros_message->unit.data) + 1;
    ros_message->unit.size = (ros_message->unit.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->unit.data, string_len);
  }
  // Member: window_start
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_serialize(&ros_message->window_start, cdr);
  // Member: window_stop
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_serialize(&ros_message->window_stop, cdr);
  // Member: statistics
  {
    const size_t size = ros_message->statistics.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, statistics_msgs, msg, StatisticDataPoint
          )()->data))->cdr_serialize(&ros_message->statistics.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _MetricsMessage__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _MetricsMessage__ros_msg_type * ros_message = (_MetricsMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: measurement_source_name
  {
    size_t capacity = ros_message->measurement_source_name.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->measurement_source_name.data, capacity, &string_size);
    if (rv) {
      ros_message->measurement_source_name.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->measurement_source_name.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: metrics_source
  {
    size_t capacity = ros_message->metrics_source.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->metrics_source.data, capacity, &string_size);
    if (rv) {
      ros_message->metrics_source.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->metrics_source.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: unit
  {
    size_t capacity = ros_message->unit.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->unit.data, capacity, &string_size);
    if (rv) {
      ros_message->unit.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->unit.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: window_start
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_deserialize(cdr, &ros_message->window_start);
  // Field name: window_stop
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_deserialize(cdr, &ros_message->window_stop);
  // Field name: statistics
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->statistics.capacity){
      return 0;
    }

    ros_message->statistics.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, statistics_msgs, msg, StatisticDataPoint
        )()->data))->cdr_deserialize(cdr, &ros_message->statistics.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_statistics_msgs
size_t get_serialized_size_statistics_msgs__msg__MetricsMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _MetricsMessage__ros_msg_type * ros_message = (const _MetricsMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: measurement_source_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->measurement_source_name.size + 1;
  // Member: metrics_source
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->metrics_source.size + 1;
  // Member: unit
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->unit.size + 1;
  // Member: window_start
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Time(&ros_message->window_start, current_alignment);
  // Member: window_stop
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Time(&ros_message->window_stop, current_alignment);
  // Member: statistics
  {
    const size_t sequence_size = ros_message->statistics.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, statistics_msgs, msg, StatisticDataPoint
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->statistics.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MetricsMessage__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_statistics_msgs__msg__MetricsMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_statistics_msgs
size_t max_serialized_size_statistics_msgs__msg__MetricsMessage(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: measurement_source_name
  *full_bounded = false;
  // Member: metrics_source
  *full_bounded = false;
  // Member: unit
  *full_bounded = false;
  // Member: window_start
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Time(full_bounded, current_alignment);
  // Member: window_stop
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Time(full_bounded, current_alignment);
  // Member: statistics
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _MetricsMessage__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_statistics_msgs__msg__MetricsMessage(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_MetricsMessage = {
  "statistics_msgs::msg",
  "MetricsMessage",
  _MetricsMessage__cdr_serialize,
  _MetricsMessage__cdr_deserialize,
  _MetricsMessage__get_serialized_size,
  get_serialized_size_statistics_msgs__msg__MetricsMessage,
  _MetricsMessage__max_serialized_size
};

static rosidl_message_type_support_t _MetricsMessage__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_MetricsMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, statistics_msgs, msg, MetricsMessage)() {
  return &_MetricsMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
