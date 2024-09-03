// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from test_msgs:action/NestedMessage.idl
// generated code does not contain a copyright notice
#include "test_msgs/action/detail/nested_message__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/action/detail/nested_message__struct.h"
#include "test_msgs/action/detail/nested_message__functions.h"

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

#include "builtin_interfaces/msg/detail/time__functions.h"  // nested_different_pkg
#include "test_msgs/msg/detail/basic_types__functions.h"  // nested_field
#include "test_msgs/msg/detail/builtins__functions.h"  // nested_field_no_pkg

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time)();
size_t get_serialized_size_test_msgs__msg__BasicTypes(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__BasicTypes(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes)();
size_t get_serialized_size_test_msgs__msg__Builtins(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__Builtins(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Builtins)();


typedef test_msgs__action__NestedMessage_Goal _NestedMessage_Goal__ros_msg_type;

static bool _NestedMessage_Goal__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _NestedMessage_Goal__ros_msg_type * ros_message = (_NestedMessage_Goal__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: nested_field_no_pkg
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Builtins
      )()->data))->cdr_serialize(&ros_message->nested_field_no_pkg, cdr);
  // Member: nested_field
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes
      )()->data))->cdr_serialize(&ros_message->nested_field, cdr);
  // Member: nested_different_pkg
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_serialize(&ros_message->nested_different_pkg, cdr);

  return rv;
}

static bool _NestedMessage_Goal__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _NestedMessage_Goal__ros_msg_type * ros_message = (_NestedMessage_Goal__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: nested_field_no_pkg
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Builtins
      )()->data))->cdr_deserialize(cdr, &ros_message->nested_field_no_pkg);
  // Field name: nested_field
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes
      )()->data))->cdr_deserialize(cdr, &ros_message->nested_field);
  // Field name: nested_different_pkg
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_deserialize(cdr, &ros_message->nested_different_pkg);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__action__NestedMessage_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _NestedMessage_Goal__ros_msg_type * ros_message = (const _NestedMessage_Goal__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: nested_field_no_pkg
  current_alignment +=
    get_serialized_size_test_msgs__msg__Builtins(&ros_message->nested_field_no_pkg, current_alignment);
  // Member: nested_field
  current_alignment +=
    get_serialized_size_test_msgs__msg__BasicTypes(&ros_message->nested_field, current_alignment);
  // Member: nested_different_pkg
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Time(&ros_message->nested_different_pkg, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NestedMessage_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__action__NestedMessage_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__action__NestedMessage_Goal(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: nested_field_no_pkg
  current_alignment +=
    max_serialized_size_test_msgs__msg__Builtins(full_bounded, current_alignment);
  // Member: nested_field
  current_alignment +=
    max_serialized_size_test_msgs__msg__BasicTypes(full_bounded, current_alignment);
  // Member: nested_different_pkg
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Time(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _NestedMessage_Goal__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__action__NestedMessage_Goal(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_NestedMessage_Goal = {
  "test_msgs::action",
  "NestedMessage_Goal",
  _NestedMessage_Goal__cdr_serialize,
  _NestedMessage_Goal__cdr_deserialize,
  _NestedMessage_Goal__get_serialized_size,
  get_serialized_size_test_msgs__action__NestedMessage_Goal,
  _NestedMessage_Goal__max_serialized_size
};

static rosidl_message_type_support_t _NestedMessage_Goal__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_NestedMessage_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Goal)() {
  return &_NestedMessage_Goal__type_support;
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
// #include "test_msgs/action/detail/nested_message__struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__functions.h"

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
// #include "builtin_interfaces/msg/detail/time__functions.h"  // nested_different_pkg
// already included above
// #include "test_msgs/msg/detail/basic_types__functions.h"  // nested_field
// already included above
// #include "test_msgs/msg/detail/builtins__functions.h"  // nested_field_no_pkg

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time)();
size_t get_serialized_size_test_msgs__msg__BasicTypes(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__BasicTypes(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes)();
size_t get_serialized_size_test_msgs__msg__Builtins(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__Builtins(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Builtins)();


typedef test_msgs__action__NestedMessage_Result _NestedMessage_Result__ros_msg_type;

static bool _NestedMessage_Result__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _NestedMessage_Result__ros_msg_type * ros_message = (_NestedMessage_Result__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: nested_field_no_pkg
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Builtins
      )()->data))->cdr_serialize(&ros_message->nested_field_no_pkg, cdr);
  // Member: nested_field
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes
      )()->data))->cdr_serialize(&ros_message->nested_field, cdr);
  // Member: nested_different_pkg
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_serialize(&ros_message->nested_different_pkg, cdr);

  return rv;
}

static bool _NestedMessage_Result__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _NestedMessage_Result__ros_msg_type * ros_message = (_NestedMessage_Result__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: nested_field_no_pkg
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Builtins
      )()->data))->cdr_deserialize(cdr, &ros_message->nested_field_no_pkg);
  // Field name: nested_field
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes
      )()->data))->cdr_deserialize(cdr, &ros_message->nested_field);
  // Field name: nested_different_pkg
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_deserialize(cdr, &ros_message->nested_different_pkg);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__action__NestedMessage_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _NestedMessage_Result__ros_msg_type * ros_message = (const _NestedMessage_Result__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: nested_field_no_pkg
  current_alignment +=
    get_serialized_size_test_msgs__msg__Builtins(&ros_message->nested_field_no_pkg, current_alignment);
  // Member: nested_field
  current_alignment +=
    get_serialized_size_test_msgs__msg__BasicTypes(&ros_message->nested_field, current_alignment);
  // Member: nested_different_pkg
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Time(&ros_message->nested_different_pkg, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NestedMessage_Result__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__action__NestedMessage_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__action__NestedMessage_Result(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: nested_field_no_pkg
  current_alignment +=
    max_serialized_size_test_msgs__msg__Builtins(full_bounded, current_alignment);
  // Member: nested_field
  current_alignment +=
    max_serialized_size_test_msgs__msg__BasicTypes(full_bounded, current_alignment);
  // Member: nested_different_pkg
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Time(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _NestedMessage_Result__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__action__NestedMessage_Result(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_NestedMessage_Result = {
  "test_msgs::action",
  "NestedMessage_Result",
  _NestedMessage_Result__cdr_serialize,
  _NestedMessage_Result__cdr_deserialize,
  _NestedMessage_Result__get_serialized_size,
  get_serialized_size_test_msgs__action__NestedMessage_Result,
  _NestedMessage_Result__max_serialized_size
};

static rosidl_message_type_support_t _NestedMessage_Result__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_NestedMessage_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Result)() {
  return &_NestedMessage_Result__type_support;
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
// #include "test_msgs/action/detail/nested_message__struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__functions.h"

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
// #include "builtin_interfaces/msg/detail/time__functions.h"  // nested_different_pkg
// already included above
// #include "test_msgs/msg/detail/basic_types__functions.h"  // nested_field
// already included above
// #include "test_msgs/msg/detail/builtins__functions.h"  // nested_field_no_pkg

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time)();
size_t get_serialized_size_test_msgs__msg__BasicTypes(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__BasicTypes(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes)();
size_t get_serialized_size_test_msgs__msg__Builtins(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__Builtins(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Builtins)();


typedef test_msgs__action__NestedMessage_Feedback _NestedMessage_Feedback__ros_msg_type;

static bool _NestedMessage_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _NestedMessage_Feedback__ros_msg_type * ros_message = (_NestedMessage_Feedback__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: nested_field_no_pkg
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Builtins
      )()->data))->cdr_serialize(&ros_message->nested_field_no_pkg, cdr);
  // Member: nested_field
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes
      )()->data))->cdr_serialize(&ros_message->nested_field, cdr);
  // Member: nested_different_pkg
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_serialize(&ros_message->nested_different_pkg, cdr);

  return rv;
}

static bool _NestedMessage_Feedback__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _NestedMessage_Feedback__ros_msg_type * ros_message = (_NestedMessage_Feedback__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: nested_field_no_pkg
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, Builtins
      )()->data))->cdr_deserialize(cdr, &ros_message->nested_field_no_pkg);
  // Field name: nested_field
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BasicTypes
      )()->data))->cdr_deserialize(cdr, &ros_message->nested_field);
  // Field name: nested_different_pkg
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_deserialize(cdr, &ros_message->nested_different_pkg);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__action__NestedMessage_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _NestedMessage_Feedback__ros_msg_type * ros_message = (const _NestedMessage_Feedback__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: nested_field_no_pkg
  current_alignment +=
    get_serialized_size_test_msgs__msg__Builtins(&ros_message->nested_field_no_pkg, current_alignment);
  // Member: nested_field
  current_alignment +=
    get_serialized_size_test_msgs__msg__BasicTypes(&ros_message->nested_field, current_alignment);
  // Member: nested_different_pkg
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Time(&ros_message->nested_different_pkg, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NestedMessage_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__action__NestedMessage_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__action__NestedMessage_Feedback(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: nested_field_no_pkg
  current_alignment +=
    max_serialized_size_test_msgs__msg__Builtins(full_bounded, current_alignment);
  // Member: nested_field
  current_alignment +=
    max_serialized_size_test_msgs__msg__BasicTypes(full_bounded, current_alignment);
  // Member: nested_different_pkg
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Time(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _NestedMessage_Feedback__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__action__NestedMessage_Feedback(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_NestedMessage_Feedback = {
  "test_msgs::action",
  "NestedMessage_Feedback",
  _NestedMessage_Feedback__cdr_serialize,
  _NestedMessage_Feedback__cdr_deserialize,
  _NestedMessage_Feedback__get_serialized_size,
  get_serialized_size_test_msgs__action__NestedMessage_Feedback,
  _NestedMessage_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _NestedMessage_Feedback__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_NestedMessage_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Feedback)() {
  return &_NestedMessage_Feedback__type_support;
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
// #include "test_msgs/action/detail/nested_message__struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__functions.h"

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
// #include "test_msgs/action/detail/nested_message__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_test_msgs__action__NestedMessage_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__action__NestedMessage_Goal(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Goal)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID)();


typedef test_msgs__action__NestedMessage_SendGoal_Request _NestedMessage_SendGoal_Request__ros_msg_type;

static bool _NestedMessage_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _NestedMessage_SendGoal_Request__ros_msg_type * ros_message = (_NestedMessage_SendGoal_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_serialize(&ros_message->goal_id, cdr);
  // Member: goal
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Goal
      )()->data))->cdr_serialize(&ros_message->goal, cdr);

  return rv;
}

static bool _NestedMessage_SendGoal_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _NestedMessage_SendGoal_Request__ros_msg_type * ros_message = (_NestedMessage_SendGoal_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_deserialize(cdr, &ros_message->goal_id);
  // Field name: goal
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Goal
      )()->data))->cdr_deserialize(cdr, &ros_message->goal);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__action__NestedMessage_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _NestedMessage_SendGoal_Request__ros_msg_type * ros_message = (const _NestedMessage_SendGoal_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment +=
    get_serialized_size_unique_identifier_msgs__msg__UUID(&ros_message->goal_id, current_alignment);
  // Member: goal
  current_alignment +=
    get_serialized_size_test_msgs__action__NestedMessage_Goal(&ros_message->goal, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NestedMessage_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__action__NestedMessage_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__action__NestedMessage_SendGoal_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment +=
    max_serialized_size_unique_identifier_msgs__msg__UUID(full_bounded, current_alignment);
  // Member: goal
  current_alignment +=
    max_serialized_size_test_msgs__action__NestedMessage_Goal(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _NestedMessage_SendGoal_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__action__NestedMessage_SendGoal_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_NestedMessage_SendGoal_Request = {
  "test_msgs::action",
  "NestedMessage_SendGoal_Request",
  _NestedMessage_SendGoal_Request__cdr_serialize,
  _NestedMessage_SendGoal_Request__cdr_deserialize,
  _NestedMessage_SendGoal_Request__get_serialized_size,
  get_serialized_size_test_msgs__action__NestedMessage_SendGoal_Request,
  _NestedMessage_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _NestedMessage_SendGoal_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_NestedMessage_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_SendGoal_Request)() {
  return &_NestedMessage_SendGoal_Request__type_support;
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
// #include "test_msgs/action/detail/nested_message__struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__functions.h"

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
// #include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time)();


typedef test_msgs__action__NestedMessage_SendGoal_Response _NestedMessage_SendGoal_Response__ros_msg_type;

static bool _NestedMessage_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _NestedMessage_SendGoal_Response__ros_msg_type * ros_message = (_NestedMessage_SendGoal_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: accepted
  rv = ucdr_serialize_bool(cdr, (ros_message->accepted) ? 0x01 : 0x00);
  // Member: stamp
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_serialize(&ros_message->stamp, cdr);

  return rv;
}

static bool _NestedMessage_SendGoal_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _NestedMessage_SendGoal_Response__ros_msg_type * ros_message = (_NestedMessage_SendGoal_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: accepted
  rv = ucdr_deserialize_bool(cdr, &ros_message->accepted);
  // Field name: stamp
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_deserialize(cdr, &ros_message->stamp);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__action__NestedMessage_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _NestedMessage_SendGoal_Response__ros_msg_type * ros_message = (const _NestedMessage_SendGoal_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: accepted
  {
    const size_t item_size = sizeof(ros_message->accepted);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: stamp
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Time(&ros_message->stamp, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NestedMessage_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__action__NestedMessage_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__action__NestedMessage_SendGoal_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: accepted
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: stamp
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Time(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _NestedMessage_SendGoal_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__action__NestedMessage_SendGoal_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_NestedMessage_SendGoal_Response = {
  "test_msgs::action",
  "NestedMessage_SendGoal_Response",
  _NestedMessage_SendGoal_Response__cdr_serialize,
  _NestedMessage_SendGoal_Response__cdr_deserialize,
  _NestedMessage_SendGoal_Response__get_serialized_size,
  get_serialized_size_test_msgs__action__NestedMessage_SendGoal_Response,
  _NestedMessage_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _NestedMessage_SendGoal_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_NestedMessage_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_SendGoal_Response)() {
  return &_NestedMessage_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/action/nested_message.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t NestedMessage_SendGoal__callbacks = {
  "test_msgs::action",
  "NestedMessage_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_SendGoal_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_SendGoal_Response),
};

static rosidl_service_type_support_t NestedMessage_SendGoal__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &NestedMessage_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_SendGoal)() {
  return &NestedMessage_SendGoal__handle;
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
// #include "test_msgs/action/detail/nested_message__struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__functions.h"

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
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID)();


typedef test_msgs__action__NestedMessage_GetResult_Request _NestedMessage_GetResult_Request__ros_msg_type;

static bool _NestedMessage_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _NestedMessage_GetResult_Request__ros_msg_type * ros_message = (_NestedMessage_GetResult_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_serialize(&ros_message->goal_id, cdr);

  return rv;
}

static bool _NestedMessage_GetResult_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _NestedMessage_GetResult_Request__ros_msg_type * ros_message = (_NestedMessage_GetResult_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_deserialize(cdr, &ros_message->goal_id);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__action__NestedMessage_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _NestedMessage_GetResult_Request__ros_msg_type * ros_message = (const _NestedMessage_GetResult_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment +=
    get_serialized_size_unique_identifier_msgs__msg__UUID(&ros_message->goal_id, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NestedMessage_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__action__NestedMessage_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__action__NestedMessage_GetResult_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment +=
    max_serialized_size_unique_identifier_msgs__msg__UUID(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _NestedMessage_GetResult_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__action__NestedMessage_GetResult_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_NestedMessage_GetResult_Request = {
  "test_msgs::action",
  "NestedMessage_GetResult_Request",
  _NestedMessage_GetResult_Request__cdr_serialize,
  _NestedMessage_GetResult_Request__cdr_deserialize,
  _NestedMessage_GetResult_Request__get_serialized_size,
  get_serialized_size_test_msgs__action__NestedMessage_GetResult_Request,
  _NestedMessage_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _NestedMessage_GetResult_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_NestedMessage_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_GetResult_Request)() {
  return &_NestedMessage_GetResult_Request__type_support;
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
// #include "test_msgs/action/detail/nested_message__struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__functions.h"

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
// #include "test_msgs/action/detail/nested_message__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_test_msgs__action__NestedMessage_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__action__NestedMessage_Result(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Result)();


typedef test_msgs__action__NestedMessage_GetResult_Response _NestedMessage_GetResult_Response__ros_msg_type;

static bool _NestedMessage_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _NestedMessage_GetResult_Response__ros_msg_type * ros_message = (_NestedMessage_GetResult_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: status
  rv = ucdr_serialize_int8_t(cdr, ros_message->status);
  // Member: result
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Result
      )()->data))->cdr_serialize(&ros_message->result, cdr);

  return rv;
}

static bool _NestedMessage_GetResult_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _NestedMessage_GetResult_Response__ros_msg_type * ros_message = (_NestedMessage_GetResult_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: status
  rv = ucdr_deserialize_int8_t(cdr, &ros_message->status);
  // Field name: result
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Result
      )()->data))->cdr_deserialize(cdr, &ros_message->result);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__action__NestedMessage_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _NestedMessage_GetResult_Response__ros_msg_type * ros_message = (const _NestedMessage_GetResult_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: status
  {
    const size_t item_size = sizeof(ros_message->status);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: result
  current_alignment +=
    get_serialized_size_test_msgs__action__NestedMessage_Result(&ros_message->result, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NestedMessage_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__action__NestedMessage_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__action__NestedMessage_GetResult_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: status
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: result
  current_alignment +=
    max_serialized_size_test_msgs__action__NestedMessage_Result(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _NestedMessage_GetResult_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__action__NestedMessage_GetResult_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_NestedMessage_GetResult_Response = {
  "test_msgs::action",
  "NestedMessage_GetResult_Response",
  _NestedMessage_GetResult_Response__cdr_serialize,
  _NestedMessage_GetResult_Response__cdr_deserialize,
  _NestedMessage_GetResult_Response__get_serialized_size,
  get_serialized_size_test_msgs__action__NestedMessage_GetResult_Response,
  _NestedMessage_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _NestedMessage_GetResult_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_NestedMessage_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_GetResult_Response)() {
  return &_NestedMessage_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "test_msgs/action/nested_message.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t NestedMessage_GetResult__callbacks = {
  "test_msgs::action",
  "NestedMessage_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_GetResult_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_GetResult_Response),
};

static rosidl_service_type_support_t NestedMessage_GetResult__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &NestedMessage_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_GetResult)() {
  return &NestedMessage_GetResult__handle;
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
// #include "test_msgs/action/detail/nested_message__struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__functions.h"

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
// #include "test_msgs/action/detail/nested_message__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_test_msgs__action__NestedMessage_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__action__NestedMessage_Feedback(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Feedback)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID)();


typedef test_msgs__action__NestedMessage_FeedbackMessage _NestedMessage_FeedbackMessage__ros_msg_type;

static bool _NestedMessage_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _NestedMessage_FeedbackMessage__ros_msg_type * ros_message = (_NestedMessage_FeedbackMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_serialize(&ros_message->goal_id, cdr);
  // Member: feedback
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Feedback
      )()->data))->cdr_serialize(&ros_message->feedback, cdr);

  return rv;
}

static bool _NestedMessage_FeedbackMessage__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _NestedMessage_FeedbackMessage__ros_msg_type * ros_message = (_NestedMessage_FeedbackMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_deserialize(cdr, &ros_message->goal_id);
  // Field name: feedback
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Feedback
      )()->data))->cdr_deserialize(cdr, &ros_message->feedback);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__action__NestedMessage_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _NestedMessage_FeedbackMessage__ros_msg_type * ros_message = (const _NestedMessage_FeedbackMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment +=
    get_serialized_size_unique_identifier_msgs__msg__UUID(&ros_message->goal_id, current_alignment);
  // Member: feedback
  current_alignment +=
    get_serialized_size_test_msgs__action__NestedMessage_Feedback(&ros_message->feedback, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NestedMessage_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__action__NestedMessage_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__action__NestedMessage_FeedbackMessage(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment +=
    max_serialized_size_unique_identifier_msgs__msg__UUID(full_bounded, current_alignment);
  // Member: feedback
  current_alignment +=
    max_serialized_size_test_msgs__action__NestedMessage_Feedback(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _NestedMessage_FeedbackMessage__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__action__NestedMessage_FeedbackMessage(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_NestedMessage_FeedbackMessage = {
  "test_msgs::action",
  "NestedMessage_FeedbackMessage",
  _NestedMessage_FeedbackMessage__cdr_serialize,
  _NestedMessage_FeedbackMessage__cdr_deserialize,
  _NestedMessage_FeedbackMessage__get_serialized_size,
  get_serialized_size_test_msgs__action__NestedMessage_FeedbackMessage,
  _NestedMessage_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _NestedMessage_FeedbackMessage__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_NestedMessage_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_FeedbackMessage)() {
  return &_NestedMessage_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
