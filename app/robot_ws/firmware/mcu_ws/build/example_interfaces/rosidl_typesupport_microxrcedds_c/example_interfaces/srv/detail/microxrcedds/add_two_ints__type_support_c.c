// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from example_interfaces:srv/AddTwoInts.idl
// generated code does not contain a copyright notice
#include "example_interfaces/srv/detail/add_two_ints__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "example_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "example_interfaces/srv/detail/add_two_ints__struct.h"
#include "example_interfaces/srv/detail/add_two_ints__functions.h"

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


// forward declare type support functions


typedef example_interfaces__srv__AddTwoInts_Request _AddTwoInts_Request__ros_msg_type;

static bool _AddTwoInts_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _AddTwoInts_Request__ros_msg_type * ros_message = (_AddTwoInts_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: a
  rv = ucdr_serialize_int64_t(cdr, ros_message->a);
  // Member: b
  rv = ucdr_serialize_int64_t(cdr, ros_message->b);

  return rv;
}

static bool _AddTwoInts_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _AddTwoInts_Request__ros_msg_type * ros_message = (_AddTwoInts_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: a
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->a);
  // Field name: b
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->b);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_example_interfaces
size_t get_serialized_size_example_interfaces__srv__AddTwoInts_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _AddTwoInts_Request__ros_msg_type * ros_message = (const _AddTwoInts_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: a
  {
    const size_t item_size = sizeof(ros_message->a);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: b
  {
    const size_t item_size = sizeof(ros_message->b);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AddTwoInts_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_example_interfaces__srv__AddTwoInts_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_example_interfaces
size_t max_serialized_size_example_interfaces__srv__AddTwoInts_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: a
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);
  // Member: b
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);

  return current_alignment - initial_alignment;
}

static size_t _AddTwoInts_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_example_interfaces__srv__AddTwoInts_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_AddTwoInts_Request = {
  "example_interfaces::srv",
  "AddTwoInts_Request",
  _AddTwoInts_Request__cdr_serialize,
  _AddTwoInts_Request__cdr_deserialize,
  _AddTwoInts_Request__get_serialized_size,
  get_serialized_size_example_interfaces__srv__AddTwoInts_Request,
  _AddTwoInts_Request__max_serialized_size
};

static rosidl_message_type_support_t _AddTwoInts_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_AddTwoInts_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, AddTwoInts_Request)() {
  return &_AddTwoInts_Request__type_support;
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
// #include "example_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "example_interfaces/srv/detail/add_two_ints__struct.h"
// already included above
// #include "example_interfaces/srv/detail/add_two_ints__functions.h"

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


// forward declare type support functions


typedef example_interfaces__srv__AddTwoInts_Response _AddTwoInts_Response__ros_msg_type;

static bool _AddTwoInts_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _AddTwoInts_Response__ros_msg_type * ros_message = (_AddTwoInts_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: sum
  rv = ucdr_serialize_int64_t(cdr, ros_message->sum);

  return rv;
}

static bool _AddTwoInts_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _AddTwoInts_Response__ros_msg_type * ros_message = (_AddTwoInts_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: sum
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->sum);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_example_interfaces
size_t get_serialized_size_example_interfaces__srv__AddTwoInts_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _AddTwoInts_Response__ros_msg_type * ros_message = (const _AddTwoInts_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: sum
  {
    const size_t item_size = sizeof(ros_message->sum);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AddTwoInts_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_example_interfaces__srv__AddTwoInts_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_example_interfaces
size_t max_serialized_size_example_interfaces__srv__AddTwoInts_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: sum
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);

  return current_alignment - initial_alignment;
}

static size_t _AddTwoInts_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_example_interfaces__srv__AddTwoInts_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_AddTwoInts_Response = {
  "example_interfaces::srv",
  "AddTwoInts_Response",
  _AddTwoInts_Response__cdr_serialize,
  _AddTwoInts_Response__cdr_deserialize,
  _AddTwoInts_Response__get_serialized_size,
  get_serialized_size_example_interfaces__srv__AddTwoInts_Response,
  _AddTwoInts_Response__max_serialized_size
};

static rosidl_message_type_support_t _AddTwoInts_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_AddTwoInts_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, AddTwoInts_Response)() {
  return &_AddTwoInts_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "example_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "example_interfaces/srv/add_two_ints.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AddTwoInts__callbacks = {
  "example_interfaces::srv",
  "AddTwoInts",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, AddTwoInts_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, AddTwoInts_Response),
};

static rosidl_service_type_support_t AddTwoInts__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &AddTwoInts__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, example_interfaces, srv, AddTwoInts)() {
  return &AddTwoInts__handle;
}

#if defined(__cplusplus)
}
#endif
