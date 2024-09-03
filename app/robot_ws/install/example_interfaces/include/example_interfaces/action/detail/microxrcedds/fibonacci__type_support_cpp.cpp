// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from example_interfaces:action/Fibonacci.idl
// generated code does not contain a copyright notice
#include "example_interfaces/action/detail/fibonacci__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "example_interfaces/action/detail/fibonacci__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions

namespace example_interfaces
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_serialize(
  const example_interfaces::action::Fibonacci_Goal & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: order
  rv = ucdr_serialize_int32_t(cdr, ros_message.order);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  example_interfaces::action::Fibonacci_Goal & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: order
  rv = ucdr_deserialize_int32_t(cdr, &ros_message.order);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
get_serialized_size(
  const example_interfaces::action::Fibonacci_Goal & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: order
  {
    const size_t item_size = sizeof(ros_message.order);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
max_serialized_size_Fibonacci_Goal(
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

static bool _Fibonacci_Goal__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_Goal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Fibonacci_Goal__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<example_interfaces::action::Fibonacci_Goal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Fibonacci_Goal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_Goal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Fibonacci_Goal__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_Goal *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Fibonacci_Goal__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Fibonacci_Goal(&full_bounded, 0);
}

static message_type_support_callbacks_t _Fibonacci_Goal__callbacks = {
  "example_interfaces::action",
  "Fibonacci_Goal",
  _Fibonacci_Goal__cdr_serialize,
  _Fibonacci_Goal__cdr_deserialize,
  _Fibonacci_Goal__get_serialized_size,
  _Fibonacci_Goal__get_serialized_size_with_initial_alignment,
  _Fibonacci_Goal__max_serialized_size
};

static rosidl_message_type_support_t _Fibonacci_Goal__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Fibonacci_Goal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_example_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::action::Fibonacci_Goal>()
{
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_Goal__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_Goal)() {
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_Goal__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions

namespace example_interfaces
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_serialize(
  const example_interfaces::action::Fibonacci_Result & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: sequence
  {
    size_t size = ros_message.sequence.size();
    rv = ucdr_serialize_sequence_int32_t(cdr, &ros_message.sequence[0], size);
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  example_interfaces::action::Fibonacci_Result & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: sequence
  {
    uint32_t size;
    const size_t capacity = ros_message.sequence.capacity();
    ros_message.sequence.resize(capacity);
    rv = ucdr_deserialize_sequence_int32_t(cdr, &ros_message.sequence[0], capacity, &size);
    if (rv) {
      ros_message.sequence.resize(size);
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
get_serialized_size(
  const example_interfaces::action::Fibonacci_Result & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: sequence
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.sequence.size();
    size_t item_size = sizeof(ros_message.sequence[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
max_serialized_size_Fibonacci_Result(
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

static bool _Fibonacci_Result__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_Result *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Fibonacci_Result__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<example_interfaces::action::Fibonacci_Result *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Fibonacci_Result__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_Result *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Fibonacci_Result__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_Result *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Fibonacci_Result__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Fibonacci_Result(&full_bounded, 0);
}

static message_type_support_callbacks_t _Fibonacci_Result__callbacks = {
  "example_interfaces::action",
  "Fibonacci_Result",
  _Fibonacci_Result__cdr_serialize,
  _Fibonacci_Result__cdr_deserialize,
  _Fibonacci_Result__get_serialized_size,
  _Fibonacci_Result__get_serialized_size_with_initial_alignment,
  _Fibonacci_Result__max_serialized_size
};

static rosidl_message_type_support_t _Fibonacci_Result__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Fibonacci_Result__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_example_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::action::Fibonacci_Result>()
{
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_Result__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_Result)() {
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_Result__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions

namespace example_interfaces
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_serialize(
  const example_interfaces::action::Fibonacci_Feedback & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: sequence
  {
    size_t size = ros_message.sequence.size();
    rv = ucdr_serialize_sequence_int32_t(cdr, &ros_message.sequence[0], size);
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  example_interfaces::action::Fibonacci_Feedback & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: sequence
  {
    uint32_t size;
    const size_t capacity = ros_message.sequence.capacity();
    ros_message.sequence.resize(capacity);
    rv = ucdr_deserialize_sequence_int32_t(cdr, &ros_message.sequence[0], capacity, &size);
    if (rv) {
      ros_message.sequence.resize(size);
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
get_serialized_size(
  const example_interfaces::action::Fibonacci_Feedback & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: sequence
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.sequence.size();
    size_t item_size = sizeof(ros_message.sequence[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
max_serialized_size_Fibonacci_Feedback(
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

static bool _Fibonacci_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_Feedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Fibonacci_Feedback__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<example_interfaces::action::Fibonacci_Feedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Fibonacci_Feedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_Feedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Fibonacci_Feedback__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_Feedback *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Fibonacci_Feedback__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Fibonacci_Feedback(&full_bounded, 0);
}

static message_type_support_callbacks_t _Fibonacci_Feedback__callbacks = {
  "example_interfaces::action",
  "Fibonacci_Feedback",
  _Fibonacci_Feedback__cdr_serialize,
  _Fibonacci_Feedback__cdr_deserialize,
  _Fibonacci_Feedback__get_serialized_size,
  _Fibonacci_Feedback__get_serialized_size_with_initial_alignment,
  _Fibonacci_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _Fibonacci_Feedback__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Fibonacci_Feedback__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_example_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::action::Fibonacci_Feedback>()
{
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_Feedback__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_Feedback)() {
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_Feedback__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  unique_identifier_msgs::msg::UUID &);

size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);

size_t
max_serialized_size_UUID(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace example_interfaces
{
namespace action
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const example_interfaces::action::Fibonacci_Goal &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  example_interfaces::action::Fibonacci_Goal &);

size_t get_serialized_size(
  const example_interfaces::action::Fibonacci_Goal &,
  size_t current_alignment);

size_t
max_serialized_size_Fibonacci_Goal(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace action
}  // namespace example_interfaces


namespace example_interfaces
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_serialize(
  const example_interfaces::action::Fibonacci_SendGoal_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: goal
  rv = example_interfaces::action::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  example_interfaces::action::Fibonacci_SendGoal_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal_id);
  // Member: goal
  rv = example_interfaces::action::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
get_serialized_size(
  const example_interfaces::action::Fibonacci_SendGoal_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal_id,
    current_alignment);
  // Member: goal
  current_alignment += example_interfaces::action::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
max_serialized_size_Fibonacci_SendGoal_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_UUID(
    full_bounded,
    current_alignment);
  // Member: goal
  current_alignment += example_interfaces::action::typesupport_microxrcedds_cpp::max_serialized_size_Fibonacci_Goal(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _Fibonacci_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Fibonacci_SendGoal_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<example_interfaces::action::Fibonacci_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Fibonacci_SendGoal_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_SendGoal_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Fibonacci_SendGoal_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_SendGoal_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Fibonacci_SendGoal_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Fibonacci_SendGoal_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _Fibonacci_SendGoal_Request__callbacks = {
  "example_interfaces::action",
  "Fibonacci_SendGoal_Request",
  _Fibonacci_SendGoal_Request__cdr_serialize,
  _Fibonacci_SendGoal_Request__cdr_deserialize,
  _Fibonacci_SendGoal_Request__get_serialized_size,
  _Fibonacci_SendGoal_Request__get_serialized_size_with_initial_alignment,
  _Fibonacci_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _Fibonacci_SendGoal_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Fibonacci_SendGoal_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_example_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::action::Fibonacci_SendGoal_Request>()
{
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_SendGoal_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_SendGoal_Request)() {
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_SendGoal_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Time &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);

size_t
max_serialized_size_Time(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace example_interfaces
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_serialize(
  const example_interfaces::action::Fibonacci_SendGoal_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: accepted
  rv = ucdr_serialize_bool(cdr, ros_message.accepted);
  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  example_interfaces::action::Fibonacci_SendGoal_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: accepted
  rv = ucdr_deserialize_bool(cdr, &ros_message.accepted);
  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.stamp);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
get_serialized_size(
  const example_interfaces::action::Fibonacci_SendGoal_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: accepted
  {
    const size_t item_size = sizeof(ros_message.accepted);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.stamp,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
max_serialized_size_Fibonacci_SendGoal_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: accepted
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Time(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _Fibonacci_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Fibonacci_SendGoal_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<example_interfaces::action::Fibonacci_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Fibonacci_SendGoal_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_SendGoal_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Fibonacci_SendGoal_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_SendGoal_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Fibonacci_SendGoal_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Fibonacci_SendGoal_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _Fibonacci_SendGoal_Response__callbacks = {
  "example_interfaces::action",
  "Fibonacci_SendGoal_Response",
  _Fibonacci_SendGoal_Response__cdr_serialize,
  _Fibonacci_SendGoal_Response__cdr_deserialize,
  _Fibonacci_SendGoal_Response__get_serialized_size,
  _Fibonacci_SendGoal_Response__get_serialized_size_with_initial_alignment,
  _Fibonacci_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _Fibonacci_SendGoal_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Fibonacci_SendGoal_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_example_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::action::Fibonacci_SendGoal_Response>()
{
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_SendGoal_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_SendGoal_Response)() {
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_SendGoal_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace example_interfaces
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _Fibonacci_SendGoal__callbacks = {
  "example_interfaces::action",
  "Fibonacci_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_SendGoal_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_SendGoal_Response),
};

static rosidl_service_type_support_t _Fibonacci_SendGoal__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Fibonacci_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_example_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<example_interfaces::action::Fibonacci_SendGoal>()
{
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_SendGoal__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_SendGoal)() {
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_SendGoal__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  unique_identifier_msgs::msg::UUID &);

size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);

size_t
max_serialized_size_UUID(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs


namespace example_interfaces
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_serialize(
  const example_interfaces::action::Fibonacci_GetResult_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  example_interfaces::action::Fibonacci_GetResult_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal_id);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
get_serialized_size(
  const example_interfaces::action::Fibonacci_GetResult_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal_id,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
max_serialized_size_Fibonacci_GetResult_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_UUID(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _Fibonacci_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_GetResult_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Fibonacci_GetResult_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<example_interfaces::action::Fibonacci_GetResult_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Fibonacci_GetResult_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_GetResult_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Fibonacci_GetResult_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_GetResult_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Fibonacci_GetResult_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Fibonacci_GetResult_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _Fibonacci_GetResult_Request__callbacks = {
  "example_interfaces::action",
  "Fibonacci_GetResult_Request",
  _Fibonacci_GetResult_Request__cdr_serialize,
  _Fibonacci_GetResult_Request__cdr_deserialize,
  _Fibonacci_GetResult_Request__get_serialized_size,
  _Fibonacci_GetResult_Request__get_serialized_size_with_initial_alignment,
  _Fibonacci_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _Fibonacci_GetResult_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Fibonacci_GetResult_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_example_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::action::Fibonacci_GetResult_Request>()
{
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_GetResult_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_GetResult_Request)() {
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_GetResult_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace example_interfaces
{
namespace action
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const example_interfaces::action::Fibonacci_Result &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  example_interfaces::action::Fibonacci_Result &);

size_t get_serialized_size(
  const example_interfaces::action::Fibonacci_Result &,
  size_t current_alignment);

size_t
max_serialized_size_Fibonacci_Result(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace action
}  // namespace example_interfaces


namespace example_interfaces
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_serialize(
  const example_interfaces::action::Fibonacci_GetResult_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: status
  rv = ucdr_serialize_int8_t(cdr, ros_message.status);
  // Member: result
  rv = example_interfaces::action::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.result,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  example_interfaces::action::Fibonacci_GetResult_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: status
  rv = ucdr_deserialize_int8_t(cdr, &ros_message.status);
  // Member: result
  rv = example_interfaces::action::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.result);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
get_serialized_size(
  const example_interfaces::action::Fibonacci_GetResult_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: status
  {
    const size_t item_size = sizeof(ros_message.status);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: result
  current_alignment += example_interfaces::action::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.result,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
max_serialized_size_Fibonacci_GetResult_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: status
  current_alignment += ucdr_alignment(current_alignment, sizeof(int8_t)) + sizeof(int8_t);
  // Member: result
  current_alignment += example_interfaces::action::typesupport_microxrcedds_cpp::max_serialized_size_Fibonacci_Result(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _Fibonacci_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_GetResult_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Fibonacci_GetResult_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<example_interfaces::action::Fibonacci_GetResult_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Fibonacci_GetResult_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_GetResult_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Fibonacci_GetResult_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_GetResult_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Fibonacci_GetResult_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Fibonacci_GetResult_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _Fibonacci_GetResult_Response__callbacks = {
  "example_interfaces::action",
  "Fibonacci_GetResult_Response",
  _Fibonacci_GetResult_Response__cdr_serialize,
  _Fibonacci_GetResult_Response__cdr_deserialize,
  _Fibonacci_GetResult_Response__get_serialized_size,
  _Fibonacci_GetResult_Response__get_serialized_size_with_initial_alignment,
  _Fibonacci_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _Fibonacci_GetResult_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Fibonacci_GetResult_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_example_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::action::Fibonacci_GetResult_Response>()
{
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_GetResult_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_GetResult_Response)() {
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_GetResult_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace example_interfaces
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _Fibonacci_GetResult__callbacks = {
  "example_interfaces::action",
  "Fibonacci_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_GetResult_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_GetResult_Response),
};

static rosidl_service_type_support_t _Fibonacci_GetResult__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Fibonacci_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_example_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<example_interfaces::action::Fibonacci_GetResult>()
{
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_GetResult__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_GetResult)() {
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_GetResult__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <algorithm>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include <cstring>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
// already included above
// #include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  unique_identifier_msgs::msg::UUID &);

size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);

size_t
max_serialized_size_UUID(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace example_interfaces
{
namespace action
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const example_interfaces::action::Fibonacci_Feedback &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  example_interfaces::action::Fibonacci_Feedback &);

size_t get_serialized_size(
  const example_interfaces::action::Fibonacci_Feedback &,
  size_t current_alignment);

size_t
max_serialized_size_Fibonacci_Feedback(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace action
}  // namespace example_interfaces


namespace example_interfaces
{

namespace action
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_serialize(
  const example_interfaces::action::Fibonacci_FeedbackMessage & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: feedback
  rv = example_interfaces::action::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.feedback,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  example_interfaces::action::Fibonacci_FeedbackMessage & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: goal_id
  rv = unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.goal_id);
  // Member: feedback
  rv = example_interfaces::action::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.feedback);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
get_serialized_size(
  const example_interfaces::action::Fibonacci_FeedbackMessage & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.goal_id,
    current_alignment);
  // Member: feedback
  current_alignment += example_interfaces::action::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.feedback,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
max_serialized_size_Fibonacci_FeedbackMessage(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: goal_id
  current_alignment += unique_identifier_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_UUID(
    full_bounded,
    current_alignment);
  // Member: feedback
  current_alignment += example_interfaces::action::typesupport_microxrcedds_cpp::max_serialized_size_Fibonacci_Feedback(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _Fibonacci_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Fibonacci_FeedbackMessage__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<example_interfaces::action::Fibonacci_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Fibonacci_FeedbackMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_FeedbackMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Fibonacci_FeedbackMessage__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const example_interfaces::action::Fibonacci_FeedbackMessage *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _Fibonacci_FeedbackMessage__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_Fibonacci_FeedbackMessage(&full_bounded, 0);
}

static message_type_support_callbacks_t _Fibonacci_FeedbackMessage__callbacks = {
  "example_interfaces::action",
  "Fibonacci_FeedbackMessage",
  _Fibonacci_FeedbackMessage__cdr_serialize,
  _Fibonacci_FeedbackMessage__cdr_deserialize,
  _Fibonacci_FeedbackMessage__get_serialized_size,
  _Fibonacci_FeedbackMessage__get_serialized_size_with_initial_alignment,
  _Fibonacci_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _Fibonacci_FeedbackMessage__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_Fibonacci_FeedbackMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace action

}  // namespace example_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_example_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::action::Fibonacci_FeedbackMessage>()
{
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_FeedbackMessage__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, action, Fibonacci_FeedbackMessage)() {
  return &example_interfaces::action::typesupport_microxrcedds_cpp::_Fibonacci_FeedbackMessage__handle;
}

#ifdef __cplusplus
}
#endif
