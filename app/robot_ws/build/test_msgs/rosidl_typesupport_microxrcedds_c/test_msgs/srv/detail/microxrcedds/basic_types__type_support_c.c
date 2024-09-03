// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from test_msgs:srv/BasicTypes.idl
// generated code does not contain a copyright notice
#include "test_msgs/srv/detail/basic_types__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/srv/detail/basic_types__struct.h"
#include "test_msgs/srv/detail/basic_types__functions.h"

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

#include "rosidl_runtime_c/string.h"  // string_value
#include "rosidl_runtime_c/string_functions.h"  // string_value

// forward declare type support functions


typedef test_msgs__srv__BasicTypes_Request _BasicTypes_Request__ros_msg_type;

static bool _BasicTypes_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _BasicTypes_Request__ros_msg_type * ros_message = (_BasicTypes_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: bool_value
  rv = ucdr_serialize_bool(cdr, (ros_message->bool_value) ? 0x01 : 0x00);
  // Member: byte_value
  rv = ucdr_serialize_uint8_t(cdr, ros_message->byte_value);
  // Member: char_value
  rv = ucdr_serialize_uint8_t(cdr, ros_message->char_value);
  // Member: float32_value
  rv = ucdr_serialize_float(cdr, ros_message->float32_value);
  // Member: float64_value
  rv = ucdr_serialize_double(cdr, ros_message->float64_value);
  // Member: int8_value
  rv = ucdr_serialize_int8_t(cdr, ros_message->int8_value);
  // Member: uint8_value
  rv = ucdr_serialize_uint8_t(cdr, ros_message->uint8_value);
  // Member: int16_value
  rv = ucdr_serialize_int16_t(cdr, ros_message->int16_value);
  // Member: uint16_value
  rv = ucdr_serialize_uint16_t(cdr, ros_message->uint16_value);
  // Member: int32_value
  rv = ucdr_serialize_int32_t(cdr, ros_message->int32_value);
  // Member: uint32_value
  rv = ucdr_serialize_uint32_t(cdr, ros_message->uint32_value);
  // Member: int64_value
  rv = ucdr_serialize_int64_t(cdr, ros_message->int64_value);
  // Member: uint64_value
  rv = ucdr_serialize_uint64_t(cdr, ros_message->uint64_value);
  // Member: string_value
 {
    uint32_t string_len = (ros_message->string_value.data == NULL) ? 0 : (uint32_t)strlen(ros_message->string_value.data) + 1;
    ros_message->string_value.size = (ros_message->string_value.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->string_value.data, string_len);
  }

  return rv;
}

static bool _BasicTypes_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _BasicTypes_Request__ros_msg_type * ros_message = (_BasicTypes_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: bool_value
  rv = ucdr_deserialize_bool(cdr, &ros_message->bool_value);
  // Field name: byte_value
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->byte_value);
  // Field name: char_value
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->char_value);
  // Field name: float32_value
  rv = ucdr_deserialize_float(cdr, &ros_message->float32_value);
  // Field name: float64_value
  rv = ucdr_deserialize_double(cdr, &ros_message->float64_value);
  // Field name: int8_value
  rv = ucdr_deserialize_int8_t(cdr, &ros_message->int8_value);
  // Field name: uint8_value
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->uint8_value);
  // Field name: int16_value
  rv = ucdr_deserialize_int16_t(cdr, &ros_message->int16_value);
  // Field name: uint16_value
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message->uint16_value);
  // Field name: int32_value
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->int32_value);
  // Field name: uint32_value
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->uint32_value);
  // Field name: int64_value
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->int64_value);
  // Field name: uint64_value
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message->uint64_value);
  // Field name: string_value
  {
    size_t capacity = ros_message->string_value.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->string_value.data, capacity, &string_size);
    if (rv) {
      ros_message->string_value.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->string_value.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__srv__BasicTypes_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _BasicTypes_Request__ros_msg_type * ros_message = (const _BasicTypes_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: bool_value
  {
    const size_t item_size = sizeof(ros_message->bool_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: byte_value
  {
    const size_t item_size = sizeof(ros_message->byte_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: char_value
  {
    const size_t item_size = sizeof(ros_message->char_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: float32_value
  {
    const size_t item_size = sizeof(ros_message->float32_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: float64_value
  {
    const size_t item_size = sizeof(ros_message->float64_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int8_value
  {
    const size_t item_size = sizeof(ros_message->int8_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint8_value
  {
    const size_t item_size = sizeof(ros_message->uint8_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int16_value
  {
    const size_t item_size = sizeof(ros_message->int16_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint16_value
  {
    const size_t item_size = sizeof(ros_message->uint16_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int32_value
  {
    const size_t item_size = sizeof(ros_message->int32_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint32_value
  {
    const size_t item_size = sizeof(ros_message->uint32_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int64_value
  {
    const size_t item_size = sizeof(ros_message->int64_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint64_value
  {
    const size_t item_size = sizeof(ros_message->uint64_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: string_value
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->string_value.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _BasicTypes_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__srv__BasicTypes_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__srv__BasicTypes_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: bool_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: byte_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: char_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: float32_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: float64_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: int8_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: uint8_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: int16_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + sizeof(int16_t);
  // Member: uint16_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: int32_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: uint32_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: int64_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);
  // Member: uint64_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);
  // Member: string_value
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _BasicTypes_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__srv__BasicTypes_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_BasicTypes_Request = {
  "test_msgs::srv",
  "BasicTypes_Request",
  _BasicTypes_Request__cdr_serialize,
  _BasicTypes_Request__cdr_deserialize,
  _BasicTypes_Request__get_serialized_size,
  get_serialized_size_test_msgs__srv__BasicTypes_Request,
  _BasicTypes_Request__max_serialized_size
};

static rosidl_message_type_support_t _BasicTypes_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_BasicTypes_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, BasicTypes_Request)() {
  return &_BasicTypes_Request__type_support;
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
// #include "test_msgs/srv/detail/basic_types__struct.h"
// already included above
// #include "test_msgs/srv/detail/basic_types__functions.h"

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
// #include "rosidl_runtime_c/string.h"  // string_value
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // string_value

// forward declare type support functions


typedef test_msgs__srv__BasicTypes_Response _BasicTypes_Response__ros_msg_type;

static bool _BasicTypes_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _BasicTypes_Response__ros_msg_type * ros_message = (_BasicTypes_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: bool_value
  rv = ucdr_serialize_bool(cdr, (ros_message->bool_value) ? 0x01 : 0x00);
  // Member: byte_value
  rv = ucdr_serialize_uint8_t(cdr, ros_message->byte_value);
  // Member: char_value
  rv = ucdr_serialize_uint8_t(cdr, ros_message->char_value);
  // Member: float32_value
  rv = ucdr_serialize_float(cdr, ros_message->float32_value);
  // Member: float64_value
  rv = ucdr_serialize_double(cdr, ros_message->float64_value);
  // Member: int8_value
  rv = ucdr_serialize_int8_t(cdr, ros_message->int8_value);
  // Member: uint8_value
  rv = ucdr_serialize_uint8_t(cdr, ros_message->uint8_value);
  // Member: int16_value
  rv = ucdr_serialize_int16_t(cdr, ros_message->int16_value);
  // Member: uint16_value
  rv = ucdr_serialize_uint16_t(cdr, ros_message->uint16_value);
  // Member: int32_value
  rv = ucdr_serialize_int32_t(cdr, ros_message->int32_value);
  // Member: uint32_value
  rv = ucdr_serialize_uint32_t(cdr, ros_message->uint32_value);
  // Member: int64_value
  rv = ucdr_serialize_int64_t(cdr, ros_message->int64_value);
  // Member: uint64_value
  rv = ucdr_serialize_uint64_t(cdr, ros_message->uint64_value);
  // Member: string_value
 {
    uint32_t string_len = (ros_message->string_value.data == NULL) ? 0 : (uint32_t)strlen(ros_message->string_value.data) + 1;
    ros_message->string_value.size = (ros_message->string_value.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->string_value.data, string_len);
  }

  return rv;
}

static bool _BasicTypes_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _BasicTypes_Response__ros_msg_type * ros_message = (_BasicTypes_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: bool_value
  rv = ucdr_deserialize_bool(cdr, &ros_message->bool_value);
  // Field name: byte_value
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->byte_value);
  // Field name: char_value
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->char_value);
  // Field name: float32_value
  rv = ucdr_deserialize_float(cdr, &ros_message->float32_value);
  // Field name: float64_value
  rv = ucdr_deserialize_double(cdr, &ros_message->float64_value);
  // Field name: int8_value
  rv = ucdr_deserialize_int8_t(cdr, &ros_message->int8_value);
  // Field name: uint8_value
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->uint8_value);
  // Field name: int16_value
  rv = ucdr_deserialize_int16_t(cdr, &ros_message->int16_value);
  // Field name: uint16_value
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message->uint16_value);
  // Field name: int32_value
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->int32_value);
  // Field name: uint32_value
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->uint32_value);
  // Field name: int64_value
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->int64_value);
  // Field name: uint64_value
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message->uint64_value);
  // Field name: string_value
  {
    size_t capacity = ros_message->string_value.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->string_value.data, capacity, &string_size);
    if (rv) {
      ros_message->string_value.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->string_value.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__srv__BasicTypes_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _BasicTypes_Response__ros_msg_type * ros_message = (const _BasicTypes_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: bool_value
  {
    const size_t item_size = sizeof(ros_message->bool_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: byte_value
  {
    const size_t item_size = sizeof(ros_message->byte_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: char_value
  {
    const size_t item_size = sizeof(ros_message->char_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: float32_value
  {
    const size_t item_size = sizeof(ros_message->float32_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: float64_value
  {
    const size_t item_size = sizeof(ros_message->float64_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int8_value
  {
    const size_t item_size = sizeof(ros_message->int8_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint8_value
  {
    const size_t item_size = sizeof(ros_message->uint8_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int16_value
  {
    const size_t item_size = sizeof(ros_message->int16_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint16_value
  {
    const size_t item_size = sizeof(ros_message->uint16_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int32_value
  {
    const size_t item_size = sizeof(ros_message->int32_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint32_value
  {
    const size_t item_size = sizeof(ros_message->uint32_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: int64_value
  {
    const size_t item_size = sizeof(ros_message->int64_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: uint64_value
  {
    const size_t item_size = sizeof(ros_message->uint64_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: string_value
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->string_value.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _BasicTypes_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__srv__BasicTypes_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__srv__BasicTypes_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: bool_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: byte_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: char_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: float32_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: float64_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: int8_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: uint8_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: int16_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(int16_t)) + sizeof(int16_t);
  // Member: uint16_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);
  // Member: int32_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: uint32_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: int64_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);
  // Member: uint64_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);
  // Member: string_value
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _BasicTypes_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__srv__BasicTypes_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_BasicTypes_Response = {
  "test_msgs::srv",
  "BasicTypes_Response",
  _BasicTypes_Response__cdr_serialize,
  _BasicTypes_Response__cdr_deserialize,
  _BasicTypes_Response__get_serialized_size,
  get_serialized_size_test_msgs__srv__BasicTypes_Response,
  _BasicTypes_Response__max_serialized_size
};

static rosidl_message_type_support_t _BasicTypes_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_BasicTypes_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, BasicTypes_Response)() {
  return &_BasicTypes_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/srv/basic_types.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t BasicTypes__callbacks = {
  "test_msgs::srv",
  "BasicTypes",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, BasicTypes_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, BasicTypes_Response),
};

static rosidl_service_type_support_t BasicTypes__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &BasicTypes__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, BasicTypes)() {
  return &BasicTypes__handle;
}

#if defined(__cplusplus)
}
#endif
