// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from example_interfaces:srv/AddTwoInts.idl
// generated code does not contain a copyright notice
#include "example_interfaces/srv/detail/add_two_ints__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "example_interfaces/srv/detail/add_two_ints__struct.hpp"

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

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_serialize(
  const example_interfaces::srv::AddTwoInts_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: a
  rv = ucdr_serialize_int64_t(cdr, ros_message.a);
  // Member: b
  rv = ucdr_serialize_int64_t(cdr, ros_message.b);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  example_interfaces::srv::AddTwoInts_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: a
  rv = ucdr_deserialize_int64_t(cdr, &ros_message.a);
  // Member: b
  rv = ucdr_deserialize_int64_t(cdr, &ros_message.b);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
get_serialized_size(
  const example_interfaces::srv::AddTwoInts_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: a
  {
    const size_t item_size = sizeof(ros_message.a);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: b
  {
    const size_t item_size = sizeof(ros_message.b);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
max_serialized_size_AddTwoInts_Request(
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

static bool _AddTwoInts_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const example_interfaces::srv::AddTwoInts_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AddTwoInts_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<example_interfaces::srv::AddTwoInts_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AddTwoInts_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const example_interfaces::srv::AddTwoInts_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AddTwoInts_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const example_interfaces::srv::AddTwoInts_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _AddTwoInts_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_AddTwoInts_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _AddTwoInts_Request__callbacks = {
  "example_interfaces::srv",
  "AddTwoInts_Request",
  _AddTwoInts_Request__cdr_serialize,
  _AddTwoInts_Request__cdr_deserialize,
  _AddTwoInts_Request__get_serialized_size,
  _AddTwoInts_Request__get_serialized_size_with_initial_alignment,
  _AddTwoInts_Request__max_serialized_size
};

static rosidl_message_type_support_t _AddTwoInts_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_AddTwoInts_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace example_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_example_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::srv::AddTwoInts_Request>()
{
  return &example_interfaces::srv::typesupport_microxrcedds_cpp::_AddTwoInts_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, srv, AddTwoInts_Request)() {
  return &example_interfaces::srv::typesupport_microxrcedds_cpp::_AddTwoInts_Request__handle;
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

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_serialize(
  const example_interfaces::srv::AddTwoInts_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: sum
  rv = ucdr_serialize_int64_t(cdr, ros_message.sum);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  example_interfaces::srv::AddTwoInts_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: sum
  rv = ucdr_deserialize_int64_t(cdr, &ros_message.sum);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
get_serialized_size(
  const example_interfaces::srv::AddTwoInts_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: sum
  {
    const size_t item_size = sizeof(ros_message.sum);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_example_interfaces
max_serialized_size_AddTwoInts_Response(
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

static bool _AddTwoInts_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const example_interfaces::srv::AddTwoInts_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AddTwoInts_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<example_interfaces::srv::AddTwoInts_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AddTwoInts_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const example_interfaces::srv::AddTwoInts_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AddTwoInts_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const example_interfaces::srv::AddTwoInts_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _AddTwoInts_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_AddTwoInts_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _AddTwoInts_Response__callbacks = {
  "example_interfaces::srv",
  "AddTwoInts_Response",
  _AddTwoInts_Response__cdr_serialize,
  _AddTwoInts_Response__cdr_deserialize,
  _AddTwoInts_Response__get_serialized_size,
  _AddTwoInts_Response__get_serialized_size_with_initial_alignment,
  _AddTwoInts_Response__max_serialized_size
};

static rosidl_message_type_support_t _AddTwoInts_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_AddTwoInts_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace example_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_example_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::srv::AddTwoInts_Response>()
{
  return &example_interfaces::srv::typesupport_microxrcedds_cpp::_AddTwoInts_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, srv, AddTwoInts_Response)() {
  return &example_interfaces::srv::typesupport_microxrcedds_cpp::_AddTwoInts_Response__handle;
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

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _AddTwoInts__callbacks = {
  "example_interfaces::srv",
  "AddTwoInts",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, srv, AddTwoInts_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, srv, AddTwoInts_Response),
};

static rosidl_service_type_support_t _AddTwoInts__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_AddTwoInts__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace example_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_example_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<example_interfaces::srv::AddTwoInts>()
{
  return &example_interfaces::srv::typesupport_microxrcedds_cpp::_AddTwoInts__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, example_interfaces, srv, AddTwoInts)() {
  return &example_interfaces::srv::typesupport_microxrcedds_cpp::_AddTwoInts__handle;
}

#ifdef __cplusplus
}
#endif
