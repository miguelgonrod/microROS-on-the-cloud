// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from test_msgs:msg/BoundedSequences.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/bounded_sequences__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/msg/detail/bounded_sequences__struct.h"
#include "test_msgs/msg/detail/bounded_sequences__functions.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // bool_values, bool_values_default, byte_values, byte_values_default, char_values, char_values_default, float32_values, float32_values_default, float64_values, float64_values_default, int16_values, int16_values_default, int32_values, int32_values_default, int64_values, int64_values_default, int8_values, int8_values_default, uint16_values, uint16_values_default, uint32_values, uint32_values_default, uint64_values, uint64_values_default, uint8_values, uint8_values_default
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // bool_values, bool_values_default, byte_values, byte_values_default, char_values, char_values_default, float32_values, float32_values_default, float64_values, float64_values_default, int16_values, int16_values_default, int32_values, int32_values_default, int64_values, int64_values_default, int8_values, int8_values_default, uint16_values, uint16_values_default, uint32_values, uint32_values_default, uint64_values, uint64_values_default, uint8_values, uint8_values_default
#include "rosidl_runtime_c/string.h"  // string_values, string_values_default
#include "rosidl_runtime_c/string_functions.h"  // string_values, string_values_default
#include "test_msgs/msg/detail/basic_types__functions.h"  // basic_types_values
#include "test_msgs/msg/detail/constants__functions.h"  // constants_values
#include "test_msgs/msg/detail/defaults__functions.h"  // defaults_values

// forward declare type support functions
size_t get_serialized_size_test_msgs__msg__BasicTypes(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__BasicTypes(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes)();
size_t get_serialized_size_test_msgs__msg__Constants(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__Constants(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Constants)();
size_t get_serialized_size_test_msgs__msg__Defaults(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__Defaults(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Defaults)();


typedef test_msgs__msg__BoundedSequences _BoundedSequences__ros_msg_type;

static bool _BoundedSequences__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _BoundedSequences__ros_msg_type * ros_message = (_BoundedSequences__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: bool_values
  {
    const size_t size = ros_message->bool_values.size;
    rv = ucdr_serialize_sequence_bool(cdr, ros_message->bool_values.data, size);
  }
  // Member: byte_values
  {
    const size_t size = ros_message->byte_values.size;
    rv = ucdr_serialize_sequence_uint8_t(cdr, ros_message->byte_values.data, size);
  }
  // Member: char_values
  {
    const size_t size = ros_message->char_values.size;
    rv = ucdr_serialize_sequence_uint8_t(cdr, ros_message->char_values.data, size);
  }
  // Member: float32_values
  {
    const size_t size = ros_message->float32_values.size;
    rv = ucdr_serialize_sequence_float(cdr, ros_message->float32_values.data, size);
  }
  // Member: float64_values
  {
    const size_t size = ros_message->float64_values.size;
    rv = ucdr_serialize_sequence_double(cdr, ros_message->float64_values.data, size);
  }
  // Member: int8_values
  {
    const size_t size = ros_message->int8_values.size;
    rv = ucdr_serialize_sequence_int8_t(cdr, ros_message->int8_values.data, size);
  }
  // Member: uint8_values
  {
    const size_t size = ros_message->uint8_values.size;
    rv = ucdr_serialize_sequence_uint8_t(cdr, ros_message->uint8_values.data, size);
  }
  // Member: int16_values
  {
    const size_t size = ros_message->int16_values.size;
    rv = ucdr_serialize_sequence_int16_t(cdr, ros_message->int16_values.data, size);
  }
  // Member: uint16_values
  {
    const size_t size = ros_message->uint16_values.size;
    rv = ucdr_serialize_sequence_uint16_t(cdr, ros_message->uint16_values.data, size);
  }
  // Member: int32_values
  {
    const size_t size = ros_message->int32_values.size;
    rv = ucdr_serialize_sequence_int32_t(cdr, ros_message->int32_values.data, size);
  }
  // Member: uint32_values
  {
    const size_t size = ros_message->uint32_values.size;
    rv = ucdr_serialize_sequence_uint32_t(cdr, ros_message->uint32_values.data, size);
  }
  // Member: int64_values
  {
    const size_t size = ros_message->int64_values.size;
    rv = ucdr_serialize_sequence_int64_t(cdr, ros_message->int64_values.data, size);
  }
  // Member: uint64_values
  {
    const size_t size = ros_message->uint64_values.size;
    rv = ucdr_serialize_sequence_uint64_t(cdr, ros_message->uint64_values.data, size);
  }
  // Member: string_values
  {
    const size_t size = ros_message->string_values.size;
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      uint32_t string_len = (ros_message->string_values.data[i].data == NULL) ? 0 : (uint32_t)strlen(ros_message->string_values.data[i].data) + 1;
      ros_message->string_values.data[i].size = (ros_message->string_values.data[i].data == NULL) ? 0 : string_len - 1;
      rv = ucdr_serialize_sequence_char(cdr, ros_message->string_values.data[i].data, string_len);
    }
  }
  // Member: basic_types_values
  {
    const size_t size = ros_message->basic_types_values.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes
          )()->data))->cdr_serialize(&ros_message->basic_types_values.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: constants_values
  {
    const size_t size = ros_message->constants_values.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Constants
          )()->data))->cdr_serialize(&ros_message->constants_values.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: defaults_values
  {
    const size_t size = ros_message->defaults_values.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Defaults
          )()->data))->cdr_serialize(&ros_message->defaults_values.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: bool_values_default
  {
    const size_t size = ros_message->bool_values_default.size;
    rv = ucdr_serialize_sequence_bool(cdr, ros_message->bool_values_default.data, size);
  }
  // Member: byte_values_default
  {
    const size_t size = ros_message->byte_values_default.size;
    rv = ucdr_serialize_sequence_uint8_t(cdr, ros_message->byte_values_default.data, size);
  }
  // Member: char_values_default
  {
    const size_t size = ros_message->char_values_default.size;
    rv = ucdr_serialize_sequence_uint8_t(cdr, ros_message->char_values_default.data, size);
  }
  // Member: float32_values_default
  {
    const size_t size = ros_message->float32_values_default.size;
    rv = ucdr_serialize_sequence_float(cdr, ros_message->float32_values_default.data, size);
  }
  // Member: float64_values_default
  {
    const size_t size = ros_message->float64_values_default.size;
    rv = ucdr_serialize_sequence_double(cdr, ros_message->float64_values_default.data, size);
  }
  // Member: int8_values_default
  {
    const size_t size = ros_message->int8_values_default.size;
    rv = ucdr_serialize_sequence_int8_t(cdr, ros_message->int8_values_default.data, size);
  }
  // Member: uint8_values_default
  {
    const size_t size = ros_message->uint8_values_default.size;
    rv = ucdr_serialize_sequence_uint8_t(cdr, ros_message->uint8_values_default.data, size);
  }
  // Member: int16_values_default
  {
    const size_t size = ros_message->int16_values_default.size;
    rv = ucdr_serialize_sequence_int16_t(cdr, ros_message->int16_values_default.data, size);
  }
  // Member: uint16_values_default
  {
    const size_t size = ros_message->uint16_values_default.size;
    rv = ucdr_serialize_sequence_uint16_t(cdr, ros_message->uint16_values_default.data, size);
  }
  // Member: int32_values_default
  {
    const size_t size = ros_message->int32_values_default.size;
    rv = ucdr_serialize_sequence_int32_t(cdr, ros_message->int32_values_default.data, size);
  }
  // Member: uint32_values_default
  {
    const size_t size = ros_message->uint32_values_default.size;
    rv = ucdr_serialize_sequence_uint32_t(cdr, ros_message->uint32_values_default.data, size);
  }
  // Member: int64_values_default
  {
    const size_t size = ros_message->int64_values_default.size;
    rv = ucdr_serialize_sequence_int64_t(cdr, ros_message->int64_values_default.data, size);
  }
  // Member: uint64_values_default
  {
    const size_t size = ros_message->uint64_values_default.size;
    rv = ucdr_serialize_sequence_uint64_t(cdr, ros_message->uint64_values_default.data, size);
  }
  // Member: string_values_default
  {
    const size_t size = ros_message->string_values_default.size;
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      uint32_t string_len = (ros_message->string_values_default.data[i].data == NULL) ? 0 : (uint32_t)strlen(ros_message->string_values_default.data[i].data) + 1;
      ros_message->string_values_default.data[i].size = (ros_message->string_values_default.data[i].data == NULL) ? 0 : string_len - 1;
      rv = ucdr_serialize_sequence_char(cdr, ros_message->string_values_default.data[i].data, string_len);
    }
  }
  // Member: alignment_check
  rv = ucdr_serialize_int32_t(cdr, ros_message->alignment_check);

  return rv;
}

static bool _BoundedSequences__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _BoundedSequences__ros_msg_type * ros_message = (_BoundedSequences__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: bool_values
  {
    uint32_t size;
    const size_t capacity = ros_message->bool_values.capacity;
    rv = ucdr_deserialize_sequence_bool(cdr, ros_message->bool_values.data, capacity, &size);
    if (rv) {
      ros_message->bool_values.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->bool_values.size = 0;
      ucdr_align_to(cdr, sizeof(bool));
      ucdr_advance_buffer(cdr, size * sizeof(bool));
    }
  }
  // Field name: byte_values
  {
    uint32_t size;
    const size_t capacity = ros_message->byte_values.capacity;
    rv = ucdr_deserialize_sequence_uint8_t(cdr, ros_message->byte_values.data, capacity, &size);
    if (rv) {
      ros_message->byte_values.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->byte_values.size = 0;
      ucdr_align_to(cdr, sizeof(uint8_t));
      ucdr_advance_buffer(cdr, size * sizeof(uint8_t));
    }
  }
  // Field name: char_values
  {
    uint32_t size;
    const size_t capacity = ros_message->char_values.capacity;
    rv = ucdr_deserialize_sequence_uint8_t(cdr, ros_message->char_values.data, capacity, &size);
    if (rv) {
      ros_message->char_values.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->char_values.size = 0;
      ucdr_align_to(cdr, sizeof(uint8_t));
      ucdr_advance_buffer(cdr, size * sizeof(uint8_t));
    }
  }
  // Field name: float32_values
  {
    uint32_t size;
    const size_t capacity = ros_message->float32_values.capacity;
    rv = ucdr_deserialize_sequence_float(cdr, ros_message->float32_values.data, capacity, &size);
    if (rv) {
      ros_message->float32_values.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->float32_values.size = 0;
      ucdr_align_to(cdr, sizeof(float));
      ucdr_advance_buffer(cdr, size * sizeof(float));
    }
  }
  // Field name: float64_values
  {
    uint32_t size;
    const size_t capacity = ros_message->float64_values.capacity;
    rv = ucdr_deserialize_sequence_double(cdr, ros_message->float64_values.data, capacity, &size);
    if (rv) {
      ros_message->float64_values.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->float64_values.size = 0;
      ucdr_align_to(cdr, sizeof(double));
      ucdr_advance_buffer(cdr, size * sizeof(double));
    }
  }
  // Field name: int8_values
  {
    uint32_t size;
    const size_t capacity = ros_message->int8_values.capacity;
    rv = ucdr_deserialize_sequence_int8_t(cdr, ros_message->int8_values.data, capacity, &size);
    if (rv) {
      ros_message->int8_values.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->int8_values.size = 0;
      ucdr_align_to(cdr, sizeof(int8_t));
      ucdr_advance_buffer(cdr, size * sizeof(int8_t));
    }
  }
  // Field name: uint8_values
  {
    uint32_t size;
    const size_t capacity = ros_message->uint8_values.capacity;
    rv = ucdr_deserialize_sequence_uint8_t(cdr, ros_message->uint8_values.data, capacity, &size);
    if (rv) {
      ros_message->uint8_values.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->uint8_values.size = 0;
      ucdr_align_to(cdr, sizeof(uint8_t));
      ucdr_advance_buffer(cdr, size * sizeof(uint8_t));
    }
  }
  // Field name: int16_values
  {
    uint32_t size;
    const size_t capacity = ros_message->int16_values.capacity;
    rv = ucdr_deserialize_sequence_int16_t(cdr, ros_message->int16_values.data, capacity, &size);
    if (rv) {
      ros_message->int16_values.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->int16_values.size = 0;
      ucdr_align_to(cdr, sizeof(int16_t));
      ucdr_advance_buffer(cdr, size * sizeof(int16_t));
    }
  }
  // Field name: uint16_values
  {
    uint32_t size;
    const size_t capacity = ros_message->uint16_values.capacity;
    rv = ucdr_deserialize_sequence_uint16_t(cdr, ros_message->uint16_values.data, capacity, &size);
    if (rv) {
      ros_message->uint16_values.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->uint16_values.size = 0;
      ucdr_align_to(cdr, sizeof(uint16_t));
      ucdr_advance_buffer(cdr, size * sizeof(uint16_t));
    }
  }
  // Field name: int32_values
  {
    uint32_t size;
    const size_t capacity = ros_message->int32_values.capacity;
    rv = ucdr_deserialize_sequence_int32_t(cdr, ros_message->int32_values.data, capacity, &size);
    if (rv) {
      ros_message->int32_values.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->int32_values.size = 0;
      ucdr_align_to(cdr, sizeof(int32_t));
      ucdr_advance_buffer(cdr, size * sizeof(int32_t));
    }
  }
  // Field name: uint32_values
  {
    uint32_t size;
    const size_t capacity = ros_message->uint32_values.capacity;
    rv = ucdr_deserialize_sequence_uint32_t(cdr, ros_message->uint32_values.data, capacity, &size);
    if (rv) {
      ros_message->uint32_values.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->uint32_values.size = 0;
      ucdr_align_to(cdr, sizeof(uint32_t));
      ucdr_advance_buffer(cdr, size * sizeof(uint32_t));
    }
  }
  // Field name: int64_values
  {
    uint32_t size;
    const size_t capacity = ros_message->int64_values.capacity;
    rv = ucdr_deserialize_sequence_int64_t(cdr, ros_message->int64_values.data, capacity, &size);
    if (rv) {
      ros_message->int64_values.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->int64_values.size = 0;
      ucdr_align_to(cdr, sizeof(int64_t));
      ucdr_advance_buffer(cdr, size * sizeof(int64_t));
    }
  }
  // Field name: uint64_values
  {
    uint32_t size;
    const size_t capacity = ros_message->uint64_values.capacity;
    rv = ucdr_deserialize_sequence_uint64_t(cdr, ros_message->uint64_values.data, capacity, &size);
    if (rv) {
      ros_message->uint64_values.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->uint64_values.size = 0;
      ucdr_align_to(cdr, sizeof(uint64_t));
      ucdr_advance_buffer(cdr, size * sizeof(uint64_t));
    }
  }
  // Field name: string_values
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->string_values.capacity){
      return 0;
    }
    ros_message->string_values.size = size;

    for (size_t i = 0; rv && i < size; i++) {
      size_t capacity = ros_message->string_values.data[i].capacity;
      uint32_t string_size;
      char * data = ros_message->string_values.data[i].data;
      rv = ucdr_deserialize_sequence_char(cdr, data, capacity, &string_size);
      if (rv) {
        ros_message->string_values.data[i].size = (string_size == 0) ? 0 : string_size - 1;
      } else if(string_size > capacity){
        cdr->error = false;
        cdr->last_data_size = 1;
        ros_message->string_values.data[i].size = 0;
        ucdr_align_to(cdr, sizeof(char));
        ucdr_advance_buffer(cdr, string_size);
      }
    }
  }
  // Field name: basic_types_values
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->basic_types_values.capacity){
      return 0;
    }

    ros_message->basic_types_values.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes
        )()->data))->cdr_deserialize(cdr, &ros_message->basic_types_values.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: constants_values
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->constants_values.capacity){
      return 0;
    }

    ros_message->constants_values.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Constants
        )()->data))->cdr_deserialize(cdr, &ros_message->constants_values.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: defaults_values
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->defaults_values.capacity){
      return 0;
    }

    ros_message->defaults_values.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Defaults
        )()->data))->cdr_deserialize(cdr, &ros_message->defaults_values.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: bool_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message->bool_values_default.capacity;
    rv = ucdr_deserialize_sequence_bool(cdr, ros_message->bool_values_default.data, capacity, &size);
    if (rv) {
      ros_message->bool_values_default.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->bool_values_default.size = 0;
      ucdr_align_to(cdr, sizeof(bool));
      ucdr_advance_buffer(cdr, size * sizeof(bool));
    }
  }
  // Field name: byte_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message->byte_values_default.capacity;
    rv = ucdr_deserialize_sequence_uint8_t(cdr, ros_message->byte_values_default.data, capacity, &size);
    if (rv) {
      ros_message->byte_values_default.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->byte_values_default.size = 0;
      ucdr_align_to(cdr, sizeof(uint8_t));
      ucdr_advance_buffer(cdr, size * sizeof(uint8_t));
    }
  }
  // Field name: char_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message->char_values_default.capacity;
    rv = ucdr_deserialize_sequence_uint8_t(cdr, ros_message->char_values_default.data, capacity, &size);
    if (rv) {
      ros_message->char_values_default.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->char_values_default.size = 0;
      ucdr_align_to(cdr, sizeof(uint8_t));
      ucdr_advance_buffer(cdr, size * sizeof(uint8_t));
    }
  }
  // Field name: float32_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message->float32_values_default.capacity;
    rv = ucdr_deserialize_sequence_float(cdr, ros_message->float32_values_default.data, capacity, &size);
    if (rv) {
      ros_message->float32_values_default.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->float32_values_default.size = 0;
      ucdr_align_to(cdr, sizeof(float));
      ucdr_advance_buffer(cdr, size * sizeof(float));
    }
  }
  // Field name: float64_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message->float64_values_default.capacity;
    rv = ucdr_deserialize_sequence_double(cdr, ros_message->float64_values_default.data, capacity, &size);
    if (rv) {
      ros_message->float64_values_default.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->float64_values_default.size = 0;
      ucdr_align_to(cdr, sizeof(double));
      ucdr_advance_buffer(cdr, size * sizeof(double));
    }
  }
  // Field name: int8_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message->int8_values_default.capacity;
    rv = ucdr_deserialize_sequence_int8_t(cdr, ros_message->int8_values_default.data, capacity, &size);
    if (rv) {
      ros_message->int8_values_default.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->int8_values_default.size = 0;
      ucdr_align_to(cdr, sizeof(int8_t));
      ucdr_advance_buffer(cdr, size * sizeof(int8_t));
    }
  }
  // Field name: uint8_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message->uint8_values_default.capacity;
    rv = ucdr_deserialize_sequence_uint8_t(cdr, ros_message->uint8_values_default.data, capacity, &size);
    if (rv) {
      ros_message->uint8_values_default.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->uint8_values_default.size = 0;
      ucdr_align_to(cdr, sizeof(uint8_t));
      ucdr_advance_buffer(cdr, size * sizeof(uint8_t));
    }
  }
  // Field name: int16_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message->int16_values_default.capacity;
    rv = ucdr_deserialize_sequence_int16_t(cdr, ros_message->int16_values_default.data, capacity, &size);
    if (rv) {
      ros_message->int16_values_default.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->int16_values_default.size = 0;
      ucdr_align_to(cdr, sizeof(int16_t));
      ucdr_advance_buffer(cdr, size * sizeof(int16_t));
    }
  }
  // Field name: uint16_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message->uint16_values_default.capacity;
    rv = ucdr_deserialize_sequence_uint16_t(cdr, ros_message->uint16_values_default.data, capacity, &size);
    if (rv) {
      ros_message->uint16_values_default.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->uint16_values_default.size = 0;
      ucdr_align_to(cdr, sizeof(uint16_t));
      ucdr_advance_buffer(cdr, size * sizeof(uint16_t));
    }
  }
  // Field name: int32_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message->int32_values_default.capacity;
    rv = ucdr_deserialize_sequence_int32_t(cdr, ros_message->int32_values_default.data, capacity, &size);
    if (rv) {
      ros_message->int32_values_default.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->int32_values_default.size = 0;
      ucdr_align_to(cdr, sizeof(int32_t));
      ucdr_advance_buffer(cdr, size * sizeof(int32_t));
    }
  }
  // Field name: uint32_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message->uint32_values_default.capacity;
    rv = ucdr_deserialize_sequence_uint32_t(cdr, ros_message->uint32_values_default.data, capacity, &size);
    if (rv) {
      ros_message->uint32_values_default.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->uint32_values_default.size = 0;
      ucdr_align_to(cdr, sizeof(uint32_t));
      ucdr_advance_buffer(cdr, size * sizeof(uint32_t));
    }
  }
  // Field name: int64_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message->int64_values_default.capacity;
    rv = ucdr_deserialize_sequence_int64_t(cdr, ros_message->int64_values_default.data, capacity, &size);
    if (rv) {
      ros_message->int64_values_default.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->int64_values_default.size = 0;
      ucdr_align_to(cdr, sizeof(int64_t));
      ucdr_advance_buffer(cdr, size * sizeof(int64_t));
    }
  }
  // Field name: uint64_values_default
  {
    uint32_t size;
    const size_t capacity = ros_message->uint64_values_default.capacity;
    rv = ucdr_deserialize_sequence_uint64_t(cdr, ros_message->uint64_values_default.data, capacity, &size);
    if (rv) {
      ros_message->uint64_values_default.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->uint64_values_default.size = 0;
      ucdr_align_to(cdr, sizeof(uint64_t));
      ucdr_advance_buffer(cdr, size * sizeof(uint64_t));
    }
  }
  // Field name: string_values_default
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->string_values_default.capacity){
      return 0;
    }
    ros_message->string_values_default.size = size;

    for (size_t i = 0; rv && i < size; i++) {
      size_t capacity = ros_message->string_values_default.data[i].capacity;
      uint32_t string_size;
      char * data = ros_message->string_values_default.data[i].data;
      rv = ucdr_deserialize_sequence_char(cdr, data, capacity, &string_size);
      if (rv) {
        ros_message->string_values_default.data[i].size = (string_size == 0) ? 0 : string_size - 1;
      } else if(string_size > capacity){
        cdr->error = false;
        cdr->last_data_size = 1;
        ros_message->string_values_default.data[i].size = 0;
        ucdr_align_to(cdr, sizeof(char));
        ucdr_advance_buffer(cdr, string_size);
      }
    }
  }
  // Field name: alignment_check
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->alignment_check);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__msg__BoundedSequences(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _BoundedSequences__ros_msg_type * ros_message = (const _BoundedSequences__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: bool_values
  {
    size_t sequence_size = ros_message->bool_values.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->bool_values.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: byte_values
  {
    size_t sequence_size = ros_message->byte_values.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->byte_values.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: char_values
  {
    size_t sequence_size = ros_message->char_values.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->char_values.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: float32_values
  {
    size_t sequence_size = ros_message->float32_values.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->float32_values.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: float64_values
  {
    size_t sequence_size = ros_message->float64_values.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->float64_values.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: int8_values
  {
    size_t sequence_size = ros_message->int8_values.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->int8_values.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: uint8_values
  {
    size_t sequence_size = ros_message->uint8_values.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->uint8_values.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: int16_values
  {
    size_t sequence_size = ros_message->int16_values.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->int16_values.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: uint16_values
  {
    size_t sequence_size = ros_message->uint16_values.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->uint16_values.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: int32_values
  {
    size_t sequence_size = ros_message->int32_values.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->int32_values.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: uint32_values
  {
    size_t sequence_size = ros_message->uint32_values.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->uint32_values.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: int64_values
  {
    size_t sequence_size = ros_message->int64_values.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->int64_values.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: uint64_values
  {
    size_t sequence_size = ros_message->uint64_values.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->uint64_values.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: string_values
  {
    const size_t sequence_size = ros_message->string_values.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
      current_alignment += ros_message->string_values.data[i].size + 1;
    }
  }
  // Member: basic_types_values
  {
    const size_t sequence_size = ros_message->basic_types_values.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->basic_types_values.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: constants_values
  {
    const size_t sequence_size = ros_message->constants_values.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Constants
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->constants_values.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: defaults_values
  {
    const size_t sequence_size = ros_message->defaults_values.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Defaults
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->defaults_values.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: bool_values_default
  {
    size_t sequence_size = ros_message->bool_values_default.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->bool_values_default.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: byte_values_default
  {
    size_t sequence_size = ros_message->byte_values_default.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->byte_values_default.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: char_values_default
  {
    size_t sequence_size = ros_message->char_values_default.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->char_values_default.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: float32_values_default
  {
    size_t sequence_size = ros_message->float32_values_default.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->float32_values_default.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: float64_values_default
  {
    size_t sequence_size = ros_message->float64_values_default.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->float64_values_default.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: int8_values_default
  {
    size_t sequence_size = ros_message->int8_values_default.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->int8_values_default.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: uint8_values_default
  {
    size_t sequence_size = ros_message->uint8_values_default.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->uint8_values_default.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: int16_values_default
  {
    size_t sequence_size = ros_message->int16_values_default.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->int16_values_default.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: uint16_values_default
  {
    size_t sequence_size = ros_message->uint16_values_default.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->uint16_values_default.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: int32_values_default
  {
    size_t sequence_size = ros_message->int32_values_default.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->int32_values_default.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: uint32_values_default
  {
    size_t sequence_size = ros_message->uint32_values_default.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->uint32_values_default.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: int64_values_default
  {
    size_t sequence_size = ros_message->int64_values_default.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->int64_values_default.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: uint64_values_default
  {
    size_t sequence_size = ros_message->uint64_values_default.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->uint64_values_default.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }
  // Member: string_values_default
  {
    const size_t sequence_size = ros_message->string_values_default.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
      current_alignment += ros_message->string_values_default.data[i].size + 1;
    }
  }
  // Member: alignment_check
  {
    const size_t item_size = sizeof(ros_message->alignment_check);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BoundedSequences__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__msg__BoundedSequences(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__msg__BoundedSequences(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: bool_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + (max_sequence_size * sizeof(bool));
  }
  // Member: byte_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (max_sequence_size * sizeof(uint8_t));
  }
  // Member: char_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (max_sequence_size * sizeof(uint8_t));
  }
  // Member: float32_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (max_sequence_size * sizeof(float));
  }
  // Member: float64_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (max_sequence_size * sizeof(double));
  }
  // Member: int8_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + (max_sequence_size * sizeof(int8_t));
  }
  // Member: uint8_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (max_sequence_size * sizeof(uint8_t));
  }
  // Member: int16_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + (max_sequence_size * sizeof(int16_t));
  }
  // Member: uint16_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + (max_sequence_size * sizeof(uint16_t));
  }
  // Member: int32_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + (max_sequence_size * sizeof(int32_t));
  }
  // Member: uint32_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + (max_sequence_size * sizeof(uint32_t));
  }
  // Member: int64_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + (max_sequence_size * sizeof(int64_t));
  }
  // Member: uint64_values
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + (max_sequence_size * sizeof(uint64_t));
  }
  // Member: string_values
  {
    *full_bounded = false;
  }
  // Member: basic_types_values
  {
    *full_bounded = false;
  }
  // Member: constants_values
  {
    *full_bounded = false;
  }
  // Member: defaults_values
  {
    *full_bounded = false;
  }
  // Member: bool_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + (max_sequence_size * sizeof(bool));
  }
  // Member: byte_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (max_sequence_size * sizeof(uint8_t));
  }
  // Member: char_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (max_sequence_size * sizeof(uint8_t));
  }
  // Member: float32_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (max_sequence_size * sizeof(float));
  }
  // Member: float64_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (max_sequence_size * sizeof(double));
  }
  // Member: int8_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + (max_sequence_size * sizeof(int8_t));
  }
  // Member: uint8_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (max_sequence_size * sizeof(uint8_t));
  }
  // Member: int16_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + (max_sequence_size * sizeof(int16_t));
  }
  // Member: uint16_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + (max_sequence_size * sizeof(uint16_t));
  }
  // Member: int32_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + (max_sequence_size * sizeof(int32_t));
  }
  // Member: uint32_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + (max_sequence_size * sizeof(uint32_t));
  }
  // Member: int64_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + (max_sequence_size * sizeof(int64_t));
  }
  // Member: uint64_values_default
  {
    const size_t max_sequence_size = 3;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + (max_sequence_size * sizeof(uint64_t));
  }
  // Member: string_values_default
  {
    *full_bounded = false;
  }
  // Member: alignment_check
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);

  return current_alignment - initial_alignment;
}

static size_t _BoundedSequences__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__msg__BoundedSequences(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_BoundedSequences = {
  "test_msgs::msg",
  "BoundedSequences",
  _BoundedSequences__cdr_serialize,
  _BoundedSequences__cdr_deserialize,
  _BoundedSequences__get_serialized_size,
  get_serialized_size_test_msgs__msg__BoundedSequences,
  _BoundedSequences__max_serialized_size
};

static rosidl_message_type_support_t _BoundedSequences__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_BoundedSequences,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BoundedSequences)() {
  return &_BoundedSequences__type_support;
}

#if defined(__cplusplus)
}
#endif
