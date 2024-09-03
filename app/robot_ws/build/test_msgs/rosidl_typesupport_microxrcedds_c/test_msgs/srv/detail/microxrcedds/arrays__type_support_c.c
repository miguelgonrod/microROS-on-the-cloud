// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from test_msgs:srv/Arrays.idl
// generated code does not contain a copyright notice
#include "test_msgs/srv/detail/arrays__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/srv/detail/arrays__struct.h"
#include "test_msgs/srv/detail/arrays__functions.h"

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


typedef test_msgs__srv__Arrays_Request _Arrays_Request__ros_msg_type;

static bool _Arrays_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Arrays_Request__ros_msg_type * ros_message = (_Arrays_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: bool_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_bool(cdr, ros_message->bool_values, size);
  }
  // Member: byte_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message->byte_values, size);
  }
  // Member: char_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message->char_values, size);
  }
  // Member: float32_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_float(cdr, ros_message->float32_values, size);
  }
  // Member: float64_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_double(cdr, ros_message->float64_values, size);
  }
  // Member: int8_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_int8_t(cdr, ros_message->int8_values, size);
  }
  // Member: uint8_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message->uint8_values, size);
  }
  // Member: int16_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_int16_t(cdr, ros_message->int16_values, size);
  }
  // Member: uint16_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint16_t(cdr, ros_message->uint16_values, size);
  }
  // Member: int32_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_int32_t(cdr, ros_message->int32_values, size);
  }
  // Member: uint32_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint32_t(cdr, ros_message->uint32_values, size);
  }
  // Member: int64_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_int64_t(cdr, ros_message->int64_values, size);
  }
  // Member: uint64_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint64_t(cdr, ros_message->uint64_values, size);
  }
  // Member: string_values
  {
    // Micro CDR only support arrays of basic and namespaced types.
  }
  // Member: basic_types_values
  {
    const size_t array_size = sizeof(ros_message->basic_types_values)/sizeof(ros_message->basic_types_values[0]);
    for(size_t i = 0; i < array_size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes
          )()->data))->cdr_serialize(&ros_message->basic_types_values[i], cdr);
        if(rv == false){
          break;
        }
    }
  }
  // Member: constants_values
  {
    const size_t array_size = sizeof(ros_message->constants_values)/sizeof(ros_message->constants_values[0]);
    for(size_t i = 0; i < array_size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Constants
          )()->data))->cdr_serialize(&ros_message->constants_values[i], cdr);
        if(rv == false){
          break;
        }
    }
  }
  // Member: defaults_values
  {
    const size_t array_size = sizeof(ros_message->defaults_values)/sizeof(ros_message->defaults_values[0]);
    for(size_t i = 0; i < array_size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Defaults
          )()->data))->cdr_serialize(&ros_message->defaults_values[i], cdr);
        if(rv == false){
          break;
        }
    }
  }
  // Member: bool_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_bool(cdr, ros_message->bool_values_default, size);
  }
  // Member: byte_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message->byte_values_default, size);
  }
  // Member: char_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message->char_values_default, size);
  }
  // Member: float32_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_float(cdr, ros_message->float32_values_default, size);
  }
  // Member: float64_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_double(cdr, ros_message->float64_values_default, size);
  }
  // Member: int8_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_int8_t(cdr, ros_message->int8_values_default, size);
  }
  // Member: uint8_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message->uint8_values_default, size);
  }
  // Member: int16_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_int16_t(cdr, ros_message->int16_values_default, size);
  }
  // Member: uint16_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint16_t(cdr, ros_message->uint16_values_default, size);
  }
  // Member: int32_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_int32_t(cdr, ros_message->int32_values_default, size);
  }
  // Member: uint32_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint32_t(cdr, ros_message->uint32_values_default, size);
  }
  // Member: int64_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_int64_t(cdr, ros_message->int64_values_default, size);
  }
  // Member: uint64_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint64_t(cdr, ros_message->uint64_values_default, size);
  }
  // Member: string_values_default
  {
    // Micro CDR only support arrays of basic and namespaced types.
  }

  return rv;
}

static bool _Arrays_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Arrays_Request__ros_msg_type * ros_message = (_Arrays_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: bool_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_bool(cdr, ros_message->bool_values, size);
  }
  // Field name: byte_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message->byte_values, size);
  }
  // Field name: char_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message->char_values, size);
  }
  // Field name: float32_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_float(cdr, ros_message->float32_values, size);
  }
  // Field name: float64_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_double(cdr, ros_message->float64_values, size);
  }
  // Field name: int8_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_int8_t(cdr, ros_message->int8_values, size);
  }
  // Field name: uint8_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message->uint8_values, size);
  }
  // Field name: int16_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_int16_t(cdr, ros_message->int16_values, size);
  }
  // Field name: uint16_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint16_t(cdr, ros_message->uint16_values, size);
  }
  // Field name: int32_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_int32_t(cdr, ros_message->int32_values, size);
  }
  // Field name: uint32_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint32_t(cdr, ros_message->uint32_values, size);
  }
  // Field name: int64_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_int64_t(cdr, ros_message->int64_values, size);
  }
  // Field name: uint64_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint64_t(cdr, ros_message->uint64_values, size);
  }
  // Field name: string_values
  {
    // Micro CDR only support arrays of basic and namespaced types.
  }
  // Field name: basic_types_values
  {
    const size_t array_size = sizeof(ros_message->basic_types_values)/sizeof(ros_message->basic_types_values[0]);
    for(size_t i = 0; i < array_size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes
        )()->data))->cdr_deserialize(cdr, &ros_message->basic_types_values[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: constants_values
  {
    const size_t array_size = sizeof(ros_message->constants_values)/sizeof(ros_message->constants_values[0]);
    for(size_t i = 0; i < array_size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Constants
        )()->data))->cdr_deserialize(cdr, &ros_message->constants_values[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: defaults_values
  {
    const size_t array_size = sizeof(ros_message->defaults_values)/sizeof(ros_message->defaults_values[0]);
    for(size_t i = 0; i < array_size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Defaults
        )()->data))->cdr_deserialize(cdr, &ros_message->defaults_values[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: bool_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_bool(cdr, ros_message->bool_values_default, size);
  }
  // Field name: byte_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message->byte_values_default, size);
  }
  // Field name: char_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message->char_values_default, size);
  }
  // Field name: float32_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_float(cdr, ros_message->float32_values_default, size);
  }
  // Field name: float64_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_double(cdr, ros_message->float64_values_default, size);
  }
  // Field name: int8_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_int8_t(cdr, ros_message->int8_values_default, size);
  }
  // Field name: uint8_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message->uint8_values_default, size);
  }
  // Field name: int16_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_int16_t(cdr, ros_message->int16_values_default, size);
  }
  // Field name: uint16_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint16_t(cdr, ros_message->uint16_values_default, size);
  }
  // Field name: int32_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_int32_t(cdr, ros_message->int32_values_default, size);
  }
  // Field name: uint32_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint32_t(cdr, ros_message->uint32_values_default, size);
  }
  // Field name: int64_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_int64_t(cdr, ros_message->int64_values_default, size);
  }
  // Field name: uint64_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint64_t(cdr, ros_message->uint64_values_default, size);
  }
  // Field name: string_values_default
  {
    // Micro CDR only support arrays of basic and namespaced types.
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__srv__Arrays_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Arrays_Request__ros_msg_type * ros_message = (const _Arrays_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: bool_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->bool_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: byte_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->byte_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: char_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->char_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: float32_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->float32_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: float64_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->float64_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int8_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->int8_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint8_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->uint8_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int16_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->int16_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint16_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->uint16_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int32_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->int32_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint32_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->uint32_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int64_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->int64_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint64_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->uint64_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: string_values
  {
  }
  // Member: basic_types_values
  {
    const size_t array_size = sizeof(ros_message->basic_types_values)/sizeof(ros_message->basic_types_values[0]);
    for(size_t i = 0; i < array_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->basic_types_values[i], current_alignment);
      current_alignment += element_size;
    }
  }
  // Member: constants_values
  {
    const size_t array_size = sizeof(ros_message->constants_values)/sizeof(ros_message->constants_values[0]);
    for(size_t i = 0; i < array_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Constants
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->constants_values[i], current_alignment);
      current_alignment += element_size;
    }
  }
  // Member: defaults_values
  {
    const size_t array_size = sizeof(ros_message->defaults_values)/sizeof(ros_message->defaults_values[0]);
    for(size_t i = 0; i < array_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Defaults
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->defaults_values[i], current_alignment);
      current_alignment += element_size;
    }
  }
  // Member: bool_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->bool_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: byte_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->byte_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: char_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->char_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: float32_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->float32_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: float64_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->float64_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int8_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->int8_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint8_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->uint8_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int16_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->int16_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint16_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->uint16_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int32_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->int32_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint32_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->uint32_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int64_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->int64_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint64_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->uint64_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: string_values_default
  {
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Arrays_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__srv__Arrays_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__srv__Arrays_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: bool_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + (array_size * sizeof(bool));
  }
  // Member: byte_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: char_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: float32_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (array_size * sizeof(float));
  }
  // Member: float64_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: int8_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + (array_size * sizeof(int8_t));
  }
  // Member: uint8_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: int16_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + (array_size * sizeof(int16_t));
  }
  // Member: uint16_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + (array_size * sizeof(uint16_t));
  }
  // Member: int32_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + (array_size * sizeof(int32_t));
  }
  // Member: uint32_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + (array_size * sizeof(uint32_t));
  }
  // Member: int64_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + (array_size * sizeof(int64_t));
  }
  // Member: uint64_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + (array_size * sizeof(uint64_t));
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
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + (array_size * sizeof(bool));
  }
  // Member: byte_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: char_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: float32_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (array_size * sizeof(float));
  }
  // Member: float64_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: int8_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + (array_size * sizeof(int8_t));
  }
  // Member: uint8_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: int16_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + (array_size * sizeof(int16_t));
  }
  // Member: uint16_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + (array_size * sizeof(uint16_t));
  }
  // Member: int32_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + (array_size * sizeof(int32_t));
  }
  // Member: uint32_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + (array_size * sizeof(uint32_t));
  }
  // Member: int64_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + (array_size * sizeof(int64_t));
  }
  // Member: uint64_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + (array_size * sizeof(uint64_t));
  }
  // Member: string_values_default
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _Arrays_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__srv__Arrays_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Arrays_Request = {
  "test_msgs::srv",
  "Arrays_Request",
  _Arrays_Request__cdr_serialize,
  _Arrays_Request__cdr_deserialize,
  _Arrays_Request__get_serialized_size,
  get_serialized_size_test_msgs__srv__Arrays_Request,
  _Arrays_Request__max_serialized_size
};

static rosidl_message_type_support_t _Arrays_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Arrays_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, Arrays_Request)() {
  return &_Arrays_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <stdint.h>
// already included above
// #include <stdio.h>
// already included above
// #include <string.h>
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "test_msgs/srv/detail/arrays__struct.h"
// already included above
// #include "test_msgs/srv/detail/arrays__functions.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // string_values, string_values_default
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // string_values, string_values_default
// already included above
// #include "test_msgs/msg/detail/basic_types__functions.h"  // basic_types_values
// already included above
// #include "test_msgs/msg/detail/constants__functions.h"  // constants_values
// already included above
// #include "test_msgs/msg/detail/defaults__functions.h"  // defaults_values

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


typedef test_msgs__srv__Arrays_Response _Arrays_Response__ros_msg_type;

static bool _Arrays_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Arrays_Response__ros_msg_type * ros_message = (_Arrays_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: bool_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_bool(cdr, ros_message->bool_values, size);
  }
  // Member: byte_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message->byte_values, size);
  }
  // Member: char_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message->char_values, size);
  }
  // Member: float32_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_float(cdr, ros_message->float32_values, size);
  }
  // Member: float64_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_double(cdr, ros_message->float64_values, size);
  }
  // Member: int8_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_int8_t(cdr, ros_message->int8_values, size);
  }
  // Member: uint8_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message->uint8_values, size);
  }
  // Member: int16_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_int16_t(cdr, ros_message->int16_values, size);
  }
  // Member: uint16_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint16_t(cdr, ros_message->uint16_values, size);
  }
  // Member: int32_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_int32_t(cdr, ros_message->int32_values, size);
  }
  // Member: uint32_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint32_t(cdr, ros_message->uint32_values, size);
  }
  // Member: int64_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_int64_t(cdr, ros_message->int64_values, size);
  }
  // Member: uint64_values
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint64_t(cdr, ros_message->uint64_values, size);
  }
  // Member: string_values
  {
    // Micro CDR only support arrays of basic and namespaced types.
  }
  // Member: basic_types_values
  {
    const size_t array_size = sizeof(ros_message->basic_types_values)/sizeof(ros_message->basic_types_values[0]);
    for(size_t i = 0; i < array_size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes
          )()->data))->cdr_serialize(&ros_message->basic_types_values[i], cdr);
        if(rv == false){
          break;
        }
    }
  }
  // Member: constants_values
  {
    const size_t array_size = sizeof(ros_message->constants_values)/sizeof(ros_message->constants_values[0]);
    for(size_t i = 0; i < array_size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Constants
          )()->data))->cdr_serialize(&ros_message->constants_values[i], cdr);
        if(rv == false){
          break;
        }
    }
  }
  // Member: defaults_values
  {
    const size_t array_size = sizeof(ros_message->defaults_values)/sizeof(ros_message->defaults_values[0]);
    for(size_t i = 0; i < array_size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Defaults
          )()->data))->cdr_serialize(&ros_message->defaults_values[i], cdr);
        if(rv == false){
          break;
        }
    }
  }
  // Member: bool_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_bool(cdr, ros_message->bool_values_default, size);
  }
  // Member: byte_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message->byte_values_default, size);
  }
  // Member: char_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message->char_values_default, size);
  }
  // Member: float32_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_float(cdr, ros_message->float32_values_default, size);
  }
  // Member: float64_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_double(cdr, ros_message->float64_values_default, size);
  }
  // Member: int8_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_int8_t(cdr, ros_message->int8_values_default, size);
  }
  // Member: uint8_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message->uint8_values_default, size);
  }
  // Member: int16_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_int16_t(cdr, ros_message->int16_values_default, size);
  }
  // Member: uint16_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint16_t(cdr, ros_message->uint16_values_default, size);
  }
  // Member: int32_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_int32_t(cdr, ros_message->int32_values_default, size);
  }
  // Member: uint32_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint32_t(cdr, ros_message->uint32_values_default, size);
  }
  // Member: int64_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_int64_t(cdr, ros_message->int64_values_default, size);
  }
  // Member: uint64_values_default
  {
    const size_t size = 3;
    rv = ucdr_serialize_array_uint64_t(cdr, ros_message->uint64_values_default, size);
  }
  // Member: string_values_default
  {
    // Micro CDR only support arrays of basic and namespaced types.
  }

  return rv;
}

static bool _Arrays_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Arrays_Response__ros_msg_type * ros_message = (_Arrays_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: bool_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_bool(cdr, ros_message->bool_values, size);
  }
  // Field name: byte_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message->byte_values, size);
  }
  // Field name: char_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message->char_values, size);
  }
  // Field name: float32_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_float(cdr, ros_message->float32_values, size);
  }
  // Field name: float64_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_double(cdr, ros_message->float64_values, size);
  }
  // Field name: int8_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_int8_t(cdr, ros_message->int8_values, size);
  }
  // Field name: uint8_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message->uint8_values, size);
  }
  // Field name: int16_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_int16_t(cdr, ros_message->int16_values, size);
  }
  // Field name: uint16_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint16_t(cdr, ros_message->uint16_values, size);
  }
  // Field name: int32_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_int32_t(cdr, ros_message->int32_values, size);
  }
  // Field name: uint32_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint32_t(cdr, ros_message->uint32_values, size);
  }
  // Field name: int64_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_int64_t(cdr, ros_message->int64_values, size);
  }
  // Field name: uint64_values
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint64_t(cdr, ros_message->uint64_values, size);
  }
  // Field name: string_values
  {
    // Micro CDR only support arrays of basic and namespaced types.
  }
  // Field name: basic_types_values
  {
    const size_t array_size = sizeof(ros_message->basic_types_values)/sizeof(ros_message->basic_types_values[0]);
    for(size_t i = 0; i < array_size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes
        )()->data))->cdr_deserialize(cdr, &ros_message->basic_types_values[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: constants_values
  {
    const size_t array_size = sizeof(ros_message->constants_values)/sizeof(ros_message->constants_values[0]);
    for(size_t i = 0; i < array_size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Constants
        )()->data))->cdr_deserialize(cdr, &ros_message->constants_values[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: defaults_values
  {
    const size_t array_size = sizeof(ros_message->defaults_values)/sizeof(ros_message->defaults_values[0]);
    for(size_t i = 0; i < array_size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Defaults
        )()->data))->cdr_deserialize(cdr, &ros_message->defaults_values[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: bool_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_bool(cdr, ros_message->bool_values_default, size);
  }
  // Field name: byte_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message->byte_values_default, size);
  }
  // Field name: char_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message->char_values_default, size);
  }
  // Field name: float32_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_float(cdr, ros_message->float32_values_default, size);
  }
  // Field name: float64_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_double(cdr, ros_message->float64_values_default, size);
  }
  // Field name: int8_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_int8_t(cdr, ros_message->int8_values_default, size);
  }
  // Field name: uint8_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message->uint8_values_default, size);
  }
  // Field name: int16_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_int16_t(cdr, ros_message->int16_values_default, size);
  }
  // Field name: uint16_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint16_t(cdr, ros_message->uint16_values_default, size);
  }
  // Field name: int32_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_int32_t(cdr, ros_message->int32_values_default, size);
  }
  // Field name: uint32_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint32_t(cdr, ros_message->uint32_values_default, size);
  }
  // Field name: int64_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_int64_t(cdr, ros_message->int64_values_default, size);
  }
  // Field name: uint64_values_default
  {
    const size_t size = 3;
    rv = ucdr_deserialize_array_uint64_t(cdr, ros_message->uint64_values_default, size);
  }
  // Field name: string_values_default
  {
    // Micro CDR only support arrays of basic and namespaced types.
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__srv__Arrays_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Arrays_Response__ros_msg_type * ros_message = (const _Arrays_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: bool_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->bool_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: byte_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->byte_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: char_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->char_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: float32_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->float32_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: float64_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->float64_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int8_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->int8_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint8_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->uint8_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int16_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->int16_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint16_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->uint16_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int32_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->int32_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint32_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->uint32_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int64_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->int64_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint64_values
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->uint64_values[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: string_values
  {
  }
  // Member: basic_types_values
  {
    const size_t array_size = sizeof(ros_message->basic_types_values)/sizeof(ros_message->basic_types_values[0]);
    for(size_t i = 0; i < array_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->basic_types_values[i], current_alignment);
      current_alignment += element_size;
    }
  }
  // Member: constants_values
  {
    const size_t array_size = sizeof(ros_message->constants_values)/sizeof(ros_message->constants_values[0]);
    for(size_t i = 0; i < array_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Constants
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->constants_values[i], current_alignment);
      current_alignment += element_size;
    }
  }
  // Member: defaults_values
  {
    const size_t array_size = sizeof(ros_message->defaults_values)/sizeof(ros_message->defaults_values[0]);
    for(size_t i = 0; i < array_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Defaults
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->defaults_values[i], current_alignment);
      current_alignment += element_size;
    }
  }
  // Member: bool_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->bool_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: byte_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->byte_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: char_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->char_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: float32_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->float32_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: float64_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->float64_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int8_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->int8_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint8_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->uint8_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int16_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->int16_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint16_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->uint16_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int32_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->int32_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint32_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->uint32_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: int64_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->int64_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: uint64_values_default
  {
    const size_t array_size = 3;
    const size_t item_size = sizeof(ros_message->uint64_values_default[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: string_values_default
  {
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Arrays_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__srv__Arrays_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__srv__Arrays_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: bool_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + (array_size * sizeof(bool));
  }
  // Member: byte_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: char_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: float32_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (array_size * sizeof(float));
  }
  // Member: float64_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: int8_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + (array_size * sizeof(int8_t));
  }
  // Member: uint8_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: int16_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + (array_size * sizeof(int16_t));
  }
  // Member: uint16_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + (array_size * sizeof(uint16_t));
  }
  // Member: int32_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + (array_size * sizeof(int32_t));
  }
  // Member: uint32_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + (array_size * sizeof(uint32_t));
  }
  // Member: int64_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + (array_size * sizeof(int64_t));
  }
  // Member: uint64_values
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + (array_size * sizeof(uint64_t));
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
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + (array_size * sizeof(bool));
  }
  // Member: byte_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: char_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: float32_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (array_size * sizeof(float));
  }
  // Member: float64_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + (array_size * sizeof(double));
  }
  // Member: int8_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + (array_size * sizeof(int8_t));
  }
  // Member: uint8_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: int16_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + (array_size * sizeof(int16_t));
  }
  // Member: uint16_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + (array_size * sizeof(uint16_t));
  }
  // Member: int32_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + (array_size * sizeof(int32_t));
  }
  // Member: uint32_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + (array_size * sizeof(uint32_t));
  }
  // Member: int64_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + (array_size * sizeof(int64_t));
  }
  // Member: uint64_values_default
  {
    const size_t array_size = 3;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + (array_size * sizeof(uint64_t));
  }
  // Member: string_values_default
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _Arrays_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__srv__Arrays_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Arrays_Response = {
  "test_msgs::srv",
  "Arrays_Response",
  _Arrays_Response__cdr_serialize,
  _Arrays_Response__cdr_deserialize,
  _Arrays_Response__get_serialized_size,
  get_serialized_size_test_msgs__srv__Arrays_Response,
  _Arrays_Response__max_serialized_size
};

static rosidl_message_type_support_t _Arrays_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Arrays_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, Arrays_Response)() {
  return &_Arrays_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/srv/arrays.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Arrays__callbacks = {
  "test_msgs::srv",
  "Arrays",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, Arrays_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, Arrays_Response),
};

static rosidl_service_type_support_t Arrays__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &Arrays__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, Arrays)() {
  return &Arrays__handle;
}

#if defined(__cplusplus)
}
#endif
