// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from test_msgs:action/Fibonacci.idl
// generated code does not contain a copyright notice
#include "test_msgs/action/detail/fibonacci__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/action/detail/fibonacci__struct.h"
#include "test_msgs/action/detail/fibonacci__functions.h"

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


typedef test_msgs__action__Fibonacci_Goal _Fibonacci_Goal__ros_msg_type;

static bool _Fibonacci_Goal__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Fibonacci_Goal__ros_msg_type * ros_message = (_Fibonacci_Goal__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: order
  rv = ucdr_serialize_int32_t(cdr, ros_message->order);

  return rv;
}

static bool _Fibonacci_Goal__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Fibonacci_Goal__ros_msg_type * ros_message = (_Fibonacci_Goal__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: order
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->order);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__action__Fibonacci_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Fibonacci_Goal__ros_msg_type * ros_message = (const _Fibonacci_Goal__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: order
  {
    const size_t item_size = sizeof(ros_message->order);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Fibonacci_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__action__Fibonacci_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__action__Fibonacci_Goal(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: order
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);

  return current_alignment - initial_alignment;
}

static size_t _Fibonacci_Goal__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__action__Fibonacci_Goal(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Fibonacci_Goal = {
  "test_msgs::action",
  "Fibonacci_Goal",
  _Fibonacci_Goal__cdr_serialize,
  _Fibonacci_Goal__cdr_deserialize,
  _Fibonacci_Goal__get_serialized_size,
  get_serialized_size_test_msgs__action__Fibonacci_Goal,
  _Fibonacci_Goal__max_serialized_size
};

static rosidl_message_type_support_t _Fibonacci_Goal__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Fibonacci_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Goal)() {
  return &_Fibonacci_Goal__type_support;
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
// #include "test_msgs/action/detail/fibonacci__struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__functions.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // sequence
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // sequence

// forward declare type support functions


typedef test_msgs__action__Fibonacci_Result _Fibonacci_Result__ros_msg_type;

static bool _Fibonacci_Result__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Fibonacci_Result__ros_msg_type * ros_message = (_Fibonacci_Result__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: sequence
  {
    const size_t size = ros_message->sequence.size;
    rv = ucdr_serialize_sequence_int32_t(cdr, ros_message->sequence.data, size);
  }

  return rv;
}

static bool _Fibonacci_Result__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Fibonacci_Result__ros_msg_type * ros_message = (_Fibonacci_Result__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: sequence
  {
    uint32_t size;
    const size_t capacity = ros_message->sequence.capacity;
    rv = ucdr_deserialize_sequence_int32_t(cdr, ros_message->sequence.data, capacity, &size);
    if (rv) {
      ros_message->sequence.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->sequence.size = 0;
      ucdr_align_to(cdr, sizeof(int32_t));
      ucdr_advance_buffer(cdr, size * sizeof(int32_t));
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__action__Fibonacci_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Fibonacci_Result__ros_msg_type * ros_message = (const _Fibonacci_Result__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: sequence
  {
    size_t sequence_size = ros_message->sequence.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->sequence.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Fibonacci_Result__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__action__Fibonacci_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__action__Fibonacci_Result(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: sequence
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _Fibonacci_Result__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__action__Fibonacci_Result(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Fibonacci_Result = {
  "test_msgs::action",
  "Fibonacci_Result",
  _Fibonacci_Result__cdr_serialize,
  _Fibonacci_Result__cdr_deserialize,
  _Fibonacci_Result__get_serialized_size,
  get_serialized_size_test_msgs__action__Fibonacci_Result,
  _Fibonacci_Result__max_serialized_size
};

static rosidl_message_type_support_t _Fibonacci_Result__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Fibonacci_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Result)() {
  return &_Fibonacci_Result__type_support;
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
// #include "test_msgs/action/detail/fibonacci__struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__functions.h"

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
// #include "rosidl_runtime_c/primitives_sequence.h"  // sequence
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // sequence

// forward declare type support functions


typedef test_msgs__action__Fibonacci_Feedback _Fibonacci_Feedback__ros_msg_type;

static bool _Fibonacci_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Fibonacci_Feedback__ros_msg_type * ros_message = (_Fibonacci_Feedback__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: sequence
  {
    const size_t size = ros_message->sequence.size;
    rv = ucdr_serialize_sequence_int32_t(cdr, ros_message->sequence.data, size);
  }

  return rv;
}

static bool _Fibonacci_Feedback__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Fibonacci_Feedback__ros_msg_type * ros_message = (_Fibonacci_Feedback__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: sequence
  {
    uint32_t size;
    const size_t capacity = ros_message->sequence.capacity;
    rv = ucdr_deserialize_sequence_int32_t(cdr, ros_message->sequence.data, capacity, &size);
    if (rv) {
      ros_message->sequence.size = size;
    } else if(size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->sequence.size = 0;
      ucdr_align_to(cdr, sizeof(int32_t));
      ucdr_advance_buffer(cdr, size * sizeof(int32_t));
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__action__Fibonacci_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Fibonacci_Feedback__ros_msg_type * ros_message = (const _Fibonacci_Feedback__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: sequence
  {
    size_t sequence_size = ros_message->sequence.size;
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    if (0 < sequence_size) {
      size_t item_size = sizeof(ros_message->sequence.data[0]);
      current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Fibonacci_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__action__Fibonacci_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__action__Fibonacci_Feedback(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: sequence
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _Fibonacci_Feedback__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__action__Fibonacci_Feedback(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Fibonacci_Feedback = {
  "test_msgs::action",
  "Fibonacci_Feedback",
  _Fibonacci_Feedback__cdr_serialize,
  _Fibonacci_Feedback__cdr_deserialize,
  _Fibonacci_Feedback__get_serialized_size,
  get_serialized_size_test_msgs__action__Fibonacci_Feedback,
  _Fibonacci_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _Fibonacci_Feedback__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Fibonacci_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Feedback)() {
  return &_Fibonacci_Feedback__type_support;
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
// #include "test_msgs/action/detail/fibonacci__struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__functions.h"

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
// #include "test_msgs/action/detail/fibonacci__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_test_msgs__action__Fibonacci_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__action__Fibonacci_Goal(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Goal)();
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


typedef test_msgs__action__Fibonacci_SendGoal_Request _Fibonacci_SendGoal_Request__ros_msg_type;

static bool _Fibonacci_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Fibonacci_SendGoal_Request__ros_msg_type * ros_message = (_Fibonacci_SendGoal_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_serialize(&ros_message->goal_id, cdr);
  // Member: goal
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Goal
      )()->data))->cdr_serialize(&ros_message->goal, cdr);

  return rv;
}

static bool _Fibonacci_SendGoal_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Fibonacci_SendGoal_Request__ros_msg_type * ros_message = (_Fibonacci_SendGoal_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_deserialize(cdr, &ros_message->goal_id);
  // Field name: goal
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Goal
      )()->data))->cdr_deserialize(cdr, &ros_message->goal);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__action__Fibonacci_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Fibonacci_SendGoal_Request__ros_msg_type * ros_message = (const _Fibonacci_SendGoal_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment +=
    get_serialized_size_unique_identifier_msgs__msg__UUID(&ros_message->goal_id, current_alignment);
  // Member: goal
  current_alignment +=
    get_serialized_size_test_msgs__action__Fibonacci_Goal(&ros_message->goal, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Fibonacci_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__action__Fibonacci_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__action__Fibonacci_SendGoal_Request(
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
    max_serialized_size_test_msgs__action__Fibonacci_Goal(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _Fibonacci_SendGoal_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__action__Fibonacci_SendGoal_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Fibonacci_SendGoal_Request = {
  "test_msgs::action",
  "Fibonacci_SendGoal_Request",
  _Fibonacci_SendGoal_Request__cdr_serialize,
  _Fibonacci_SendGoal_Request__cdr_deserialize,
  _Fibonacci_SendGoal_Request__get_serialized_size,
  get_serialized_size_test_msgs__action__Fibonacci_SendGoal_Request,
  _Fibonacci_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _Fibonacci_SendGoal_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Fibonacci_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_SendGoal_Request)() {
  return &_Fibonacci_SendGoal_Request__type_support;
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
// #include "test_msgs/action/detail/fibonacci__struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__functions.h"

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


typedef test_msgs__action__Fibonacci_SendGoal_Response _Fibonacci_SendGoal_Response__ros_msg_type;

static bool _Fibonacci_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Fibonacci_SendGoal_Response__ros_msg_type * ros_message = (_Fibonacci_SendGoal_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: accepted
  rv = ucdr_serialize_bool(cdr, (ros_message->accepted) ? 0x01 : 0x00);
  // Member: stamp
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_serialize(&ros_message->stamp, cdr);

  return rv;
}

static bool _Fibonacci_SendGoal_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Fibonacci_SendGoal_Response__ros_msg_type * ros_message = (_Fibonacci_SendGoal_Response__ros_msg_type *)(untyped_ros_message);
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
size_t get_serialized_size_test_msgs__action__Fibonacci_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Fibonacci_SendGoal_Response__ros_msg_type * ros_message = (const _Fibonacci_SendGoal_Response__ros_msg_type *)(untyped_ros_message);
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

static uint32_t _Fibonacci_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__action__Fibonacci_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__action__Fibonacci_SendGoal_Response(
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

static size_t _Fibonacci_SendGoal_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__action__Fibonacci_SendGoal_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Fibonacci_SendGoal_Response = {
  "test_msgs::action",
  "Fibonacci_SendGoal_Response",
  _Fibonacci_SendGoal_Response__cdr_serialize,
  _Fibonacci_SendGoal_Response__cdr_deserialize,
  _Fibonacci_SendGoal_Response__get_serialized_size,
  get_serialized_size_test_msgs__action__Fibonacci_SendGoal_Response,
  _Fibonacci_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _Fibonacci_SendGoal_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Fibonacci_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_SendGoal_Response)() {
  return &_Fibonacci_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/action/fibonacci.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Fibonacci_SendGoal__callbacks = {
  "test_msgs::action",
  "Fibonacci_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_SendGoal_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_SendGoal_Response),
};

static rosidl_service_type_support_t Fibonacci_SendGoal__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &Fibonacci_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_SendGoal)() {
  return &Fibonacci_SendGoal__handle;
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
// #include "test_msgs/action/detail/fibonacci__struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__functions.h"

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


typedef test_msgs__action__Fibonacci_GetResult_Request _Fibonacci_GetResult_Request__ros_msg_type;

static bool _Fibonacci_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Fibonacci_GetResult_Request__ros_msg_type * ros_message = (_Fibonacci_GetResult_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_serialize(&ros_message->goal_id, cdr);

  return rv;
}

static bool _Fibonacci_GetResult_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Fibonacci_GetResult_Request__ros_msg_type * ros_message = (_Fibonacci_GetResult_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_deserialize(cdr, &ros_message->goal_id);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__action__Fibonacci_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Fibonacci_GetResult_Request__ros_msg_type * ros_message = (const _Fibonacci_GetResult_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment +=
    get_serialized_size_unique_identifier_msgs__msg__UUID(&ros_message->goal_id, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Fibonacci_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__action__Fibonacci_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__action__Fibonacci_GetResult_Request(
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

static size_t _Fibonacci_GetResult_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__action__Fibonacci_GetResult_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Fibonacci_GetResult_Request = {
  "test_msgs::action",
  "Fibonacci_GetResult_Request",
  _Fibonacci_GetResult_Request__cdr_serialize,
  _Fibonacci_GetResult_Request__cdr_deserialize,
  _Fibonacci_GetResult_Request__get_serialized_size,
  get_serialized_size_test_msgs__action__Fibonacci_GetResult_Request,
  _Fibonacci_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _Fibonacci_GetResult_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Fibonacci_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_GetResult_Request)() {
  return &_Fibonacci_GetResult_Request__type_support;
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
// #include "test_msgs/action/detail/fibonacci__struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__functions.h"

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
// #include "test_msgs/action/detail/fibonacci__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_test_msgs__action__Fibonacci_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__action__Fibonacci_Result(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Result)();


typedef test_msgs__action__Fibonacci_GetResult_Response _Fibonacci_GetResult_Response__ros_msg_type;

static bool _Fibonacci_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Fibonacci_GetResult_Response__ros_msg_type * ros_message = (_Fibonacci_GetResult_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: status
  rv = ucdr_serialize_int8_t(cdr, ros_message->status);
  // Member: result
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Result
      )()->data))->cdr_serialize(&ros_message->result, cdr);

  return rv;
}

static bool _Fibonacci_GetResult_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Fibonacci_GetResult_Response__ros_msg_type * ros_message = (_Fibonacci_GetResult_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: status
  rv = ucdr_deserialize_int8_t(cdr, &ros_message->status);
  // Field name: result
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Result
      )()->data))->cdr_deserialize(cdr, &ros_message->result);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__action__Fibonacci_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Fibonacci_GetResult_Response__ros_msg_type * ros_message = (const _Fibonacci_GetResult_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: status
  {
    const size_t item_size = sizeof(ros_message->status);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: result
  current_alignment +=
    get_serialized_size_test_msgs__action__Fibonacci_Result(&ros_message->result, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Fibonacci_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__action__Fibonacci_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__action__Fibonacci_GetResult_Response(
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
    max_serialized_size_test_msgs__action__Fibonacci_Result(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _Fibonacci_GetResult_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__action__Fibonacci_GetResult_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Fibonacci_GetResult_Response = {
  "test_msgs::action",
  "Fibonacci_GetResult_Response",
  _Fibonacci_GetResult_Response__cdr_serialize,
  _Fibonacci_GetResult_Response__cdr_deserialize,
  _Fibonacci_GetResult_Response__get_serialized_size,
  get_serialized_size_test_msgs__action__Fibonacci_GetResult_Response,
  _Fibonacci_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _Fibonacci_GetResult_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Fibonacci_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_GetResult_Response)() {
  return &_Fibonacci_GetResult_Response__type_support;
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
// #include "test_msgs/action/fibonacci.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Fibonacci_GetResult__callbacks = {
  "test_msgs::action",
  "Fibonacci_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_GetResult_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_GetResult_Response),
};

static rosidl_service_type_support_t Fibonacci_GetResult__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &Fibonacci_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_GetResult)() {
  return &Fibonacci_GetResult__handle;
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
// #include "test_msgs/action/detail/fibonacci__struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__functions.h"

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
// #include "test_msgs/action/detail/fibonacci__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_test_msgs__action__Fibonacci_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__action__Fibonacci_Feedback(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Feedback)();
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


typedef test_msgs__action__Fibonacci_FeedbackMessage _Fibonacci_FeedbackMessage__ros_msg_type;

static bool _Fibonacci_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Fibonacci_FeedbackMessage__ros_msg_type * ros_message = (_Fibonacci_FeedbackMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_serialize(&ros_message->goal_id, cdr);
  // Member: feedback
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Feedback
      )()->data))->cdr_serialize(&ros_message->feedback, cdr);

  return rv;
}

static bool _Fibonacci_FeedbackMessage__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Fibonacci_FeedbackMessage__ros_msg_type * ros_message = (_Fibonacci_FeedbackMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: goal_id
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, unique_identifier_msgs, msg, UUID
      )()->data))->cdr_deserialize(cdr, &ros_message->goal_id);
  // Field name: feedback
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Feedback
      )()->data))->cdr_deserialize(cdr, &ros_message->feedback);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__action__Fibonacci_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Fibonacci_FeedbackMessage__ros_msg_type * ros_message = (const _Fibonacci_FeedbackMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment +=
    get_serialized_size_unique_identifier_msgs__msg__UUID(&ros_message->goal_id, current_alignment);
  // Member: feedback
  current_alignment +=
    get_serialized_size_test_msgs__action__Fibonacci_Feedback(&ros_message->feedback, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Fibonacci_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__action__Fibonacci_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__action__Fibonacci_FeedbackMessage(
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
    max_serialized_size_test_msgs__action__Fibonacci_Feedback(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _Fibonacci_FeedbackMessage__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__action__Fibonacci_FeedbackMessage(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Fibonacci_FeedbackMessage = {
  "test_msgs::action",
  "Fibonacci_FeedbackMessage",
  _Fibonacci_FeedbackMessage__cdr_serialize,
  _Fibonacci_FeedbackMessage__cdr_deserialize,
  _Fibonacci_FeedbackMessage__get_serialized_size,
  get_serialized_size_test_msgs__action__Fibonacci_FeedbackMessage,
  _Fibonacci_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _Fibonacci_FeedbackMessage__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Fibonacci_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_FeedbackMessage)() {
  return &_Fibonacci_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
