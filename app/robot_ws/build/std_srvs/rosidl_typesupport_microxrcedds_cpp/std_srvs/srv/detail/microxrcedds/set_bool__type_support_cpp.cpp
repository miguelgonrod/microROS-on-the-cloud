// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from std_srvs:srv/SetBool.idl
// generated code does not contain a copyright notice
#include "std_srvs/srv/detail/set_bool__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "std_srvs/srv/detail/set_bool__struct.hpp"

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

namespace std_srvs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_std_srvs
cdr_serialize(
  const std_srvs::srv::SetBool_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: data
  rv = ucdr_serialize_bool(cdr, ros_message.data);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_std_srvs
cdr_deserialize(
  ucdrBuffer * cdr,
  std_srvs::srv::SetBool_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: data
  rv = ucdr_deserialize_bool(cdr, &ros_message.data);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_std_srvs
get_serialized_size(
  const std_srvs::srv::SetBool_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: data
  {
    const size_t item_size = sizeof(ros_message.data);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_std_srvs
max_serialized_size_SetBool_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: data
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static bool _SetBool_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const std_srvs::srv::SetBool_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetBool_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<std_srvs::srv::SetBool_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetBool_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const std_srvs::srv::SetBool_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetBool_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const std_srvs::srv::SetBool_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _SetBool_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_SetBool_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _SetBool_Request__callbacks = {
  "std_srvs::srv",
  "SetBool_Request",
  _SetBool_Request__cdr_serialize,
  _SetBool_Request__cdr_deserialize,
  _SetBool_Request__get_serialized_size,
  _SetBool_Request__get_serialized_size_with_initial_alignment,
  _SetBool_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetBool_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_SetBool_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace std_srvs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_std_srvs
const rosidl_message_type_support_t *
get_message_type_support_handle<std_srvs::srv::SetBool_Request>()
{
  return &std_srvs::srv::typesupport_microxrcedds_cpp::_SetBool_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, std_srvs, srv, SetBool_Request)() {
  return &std_srvs::srv::typesupport_microxrcedds_cpp::_SetBool_Request__handle;
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

namespace std_srvs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_std_srvs
cdr_serialize(
  const std_srvs::srv::SetBool_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: success
  rv = ucdr_serialize_bool(cdr, ros_message.success);
  // Member: message
  rv = ucdr_serialize_string(cdr, ros_message.message.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_std_srvs
cdr_deserialize(
  ucdrBuffer * cdr,
  std_srvs::srv::SetBool_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: success
  rv = ucdr_deserialize_bool(cdr, &ros_message.success);
  // Member: message
  ros_message.message.resize(ros_message.message.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.message[0], ros_message.message.capacity());
  if (rv) {
    ros_message.message.resize(std::strlen(&ros_message.message[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_std_srvs
get_serialized_size(
  const std_srvs::srv::SetBool_Response & ros_message,
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
  // Member: message
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.message.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_std_srvs
max_serialized_size_SetBool_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: success
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: message
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _SetBool_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const std_srvs::srv::SetBool_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetBool_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<std_srvs::srv::SetBool_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetBool_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const std_srvs::srv::SetBool_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetBool_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const std_srvs::srv::SetBool_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _SetBool_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_SetBool_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _SetBool_Response__callbacks = {
  "std_srvs::srv",
  "SetBool_Response",
  _SetBool_Response__cdr_serialize,
  _SetBool_Response__cdr_deserialize,
  _SetBool_Response__get_serialized_size,
  _SetBool_Response__get_serialized_size_with_initial_alignment,
  _SetBool_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetBool_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_SetBool_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace std_srvs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_std_srvs
const rosidl_message_type_support_t *
get_message_type_support_handle<std_srvs::srv::SetBool_Response>()
{
  return &std_srvs::srv::typesupport_microxrcedds_cpp::_SetBool_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, std_srvs, srv, SetBool_Response)() {
  return &std_srvs::srv::typesupport_microxrcedds_cpp::_SetBool_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace std_srvs
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _SetBool__callbacks = {
  "std_srvs::srv",
  "SetBool",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, std_srvs, srv, SetBool_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, std_srvs, srv, SetBool_Response),
};

static rosidl_service_type_support_t _SetBool__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_SetBool__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace std_srvs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_std_srvs
const rosidl_service_type_support_t *
get_service_type_support_handle<std_srvs::srv::SetBool>()
{
  return &std_srvs::srv::typesupport_microxrcedds_cpp::_SetBool__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, std_srvs, srv, SetBool)() {
  return &std_srvs::srv::typesupport_microxrcedds_cpp::_SetBool__handle;
}

#ifdef __cplusplus
}
#endif
