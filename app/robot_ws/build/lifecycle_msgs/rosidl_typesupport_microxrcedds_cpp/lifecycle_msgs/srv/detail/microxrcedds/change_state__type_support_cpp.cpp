// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from lifecycle_msgs:srv/ChangeState.idl
// generated code does not contain a copyright notice
#include "lifecycle_msgs/srv/detail/change_state__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "lifecycle_msgs/srv/detail/change_state__struct.hpp"

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
namespace lifecycle_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const lifecycle_msgs::msg::Transition &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  lifecycle_msgs::msg::Transition &);

size_t get_serialized_size(
  const lifecycle_msgs::msg::Transition &,
  size_t current_alignment);

size_t
max_serialized_size_Transition(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace lifecycle_msgs


namespace lifecycle_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_lifecycle_msgs
cdr_serialize(
  const lifecycle_msgs::srv::ChangeState_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: transition
  rv = lifecycle_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.transition,
    cdr);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_lifecycle_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  lifecycle_msgs::srv::ChangeState_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: transition
  rv = lifecycle_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.transition);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_lifecycle_msgs
get_serialized_size(
  const lifecycle_msgs::srv::ChangeState_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: transition
  current_alignment += lifecycle_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.transition,
    current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_lifecycle_msgs
max_serialized_size_ChangeState_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: transition
  current_alignment += lifecycle_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Transition(
    full_bounded,
    current_alignment);

  return current_alignment - initial_alignment;
}

static bool _ChangeState_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const lifecycle_msgs::srv::ChangeState_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ChangeState_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lifecycle_msgs::srv::ChangeState_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ChangeState_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lifecycle_msgs::srv::ChangeState_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ChangeState_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const lifecycle_msgs::srv::ChangeState_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ChangeState_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ChangeState_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _ChangeState_Request__callbacks = {
  "lifecycle_msgs::srv",
  "ChangeState_Request",
  _ChangeState_Request__cdr_serialize,
  _ChangeState_Request__cdr_deserialize,
  _ChangeState_Request__get_serialized_size,
  _ChangeState_Request__get_serialized_size_with_initial_alignment,
  _ChangeState_Request__max_serialized_size
};

static rosidl_message_type_support_t _ChangeState_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ChangeState_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace lifecycle_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_lifecycle_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<lifecycle_msgs::srv::ChangeState_Request>()
{
  return &lifecycle_msgs::srv::typesupport_microxrcedds_cpp::_ChangeState_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, lifecycle_msgs, srv, ChangeState_Request)() {
  return &lifecycle_msgs::srv::typesupport_microxrcedds_cpp::_ChangeState_Request__handle;
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

namespace lifecycle_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_lifecycle_msgs
cdr_serialize(
  const lifecycle_msgs::srv::ChangeState_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: success
  rv = ucdr_serialize_bool(cdr, ros_message.success);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_lifecycle_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  lifecycle_msgs::srv::ChangeState_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: success
  rv = ucdr_deserialize_bool(cdr, &ros_message.success);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_lifecycle_msgs
get_serialized_size(
  const lifecycle_msgs::srv::ChangeState_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: success
  {
    const size_t item_size = sizeof(ros_message.success);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_lifecycle_msgs
max_serialized_size_ChangeState_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: success
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static bool _ChangeState_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const lifecycle_msgs::srv::ChangeState_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ChangeState_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lifecycle_msgs::srv::ChangeState_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ChangeState_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lifecycle_msgs::srv::ChangeState_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ChangeState_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const lifecycle_msgs::srv::ChangeState_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ChangeState_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ChangeState_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _ChangeState_Response__callbacks = {
  "lifecycle_msgs::srv",
  "ChangeState_Response",
  _ChangeState_Response__cdr_serialize,
  _ChangeState_Response__cdr_deserialize,
  _ChangeState_Response__get_serialized_size,
  _ChangeState_Response__get_serialized_size_with_initial_alignment,
  _ChangeState_Response__max_serialized_size
};

static rosidl_message_type_support_t _ChangeState_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ChangeState_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace lifecycle_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_lifecycle_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<lifecycle_msgs::srv::ChangeState_Response>()
{
  return &lifecycle_msgs::srv::typesupport_microxrcedds_cpp::_ChangeState_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, lifecycle_msgs, srv, ChangeState_Response)() {
  return &lifecycle_msgs::srv::typesupport_microxrcedds_cpp::_ChangeState_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace lifecycle_msgs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _ChangeState__callbacks = {
  "lifecycle_msgs::srv",
  "ChangeState",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, lifecycle_msgs, srv, ChangeState_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, lifecycle_msgs, srv, ChangeState_Response),
};

static rosidl_service_type_support_t _ChangeState__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ChangeState__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace lifecycle_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_lifecycle_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<lifecycle_msgs::srv::ChangeState>()
{
  return &lifecycle_msgs::srv::typesupport_microxrcedds_cpp::_ChangeState__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, lifecycle_msgs, srv, ChangeState)() {
  return &lifecycle_msgs::srv::typesupport_microxrcedds_cpp::_ChangeState__handle;
}

#ifdef __cplusplus
}
#endif
