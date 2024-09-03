// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rcl_interfaces:srv/SetParameters.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/srv/detail/set_parameters__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rcl_interfaces/srv/detail/set_parameters__struct.hpp"

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
namespace rcl_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const rcl_interfaces::msg::Parameter &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  rcl_interfaces::msg::Parameter &);

size_t get_serialized_size(
  const rcl_interfaces::msg::Parameter &,
  size_t current_alignment);

size_t
max_serialized_size_Parameter(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace rcl_interfaces


namespace rcl_interfaces
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_serialize(
  const rcl_interfaces::srv::SetParameters_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: parameters
  {
    size_t size = ros_message.parameters.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rcl_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.parameters[i],
        cdr);
      i++;
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  rcl_interfaces::srv::SetParameters_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: parameters
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.parameters.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rcl_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.parameters[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
get_serialized_size(
  const rcl_interfaces::srv::SetParameters_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: parameters
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.parameters.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = rcl_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.parameters[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
max_serialized_size_SetParameters_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: parameters
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _SetParameters_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rcl_interfaces::srv::SetParameters_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetParameters_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rcl_interfaces::srv::SetParameters_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetParameters_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rcl_interfaces::srv::SetParameters_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetParameters_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rcl_interfaces::srv::SetParameters_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _SetParameters_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_SetParameters_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _SetParameters_Request__callbacks = {
  "rcl_interfaces::srv",
  "SetParameters_Request",
  _SetParameters_Request__cdr_serialize,
  _SetParameters_Request__cdr_deserialize,
  _SetParameters_Request__get_serialized_size,
  _SetParameters_Request__get_serialized_size_with_initial_alignment,
  _SetParameters_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetParameters_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_SetParameters_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace rcl_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rcl_interfaces::srv::SetParameters_Request>()
{
  return &rcl_interfaces::srv::typesupport_microxrcedds_cpp::_SetParameters_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, srv, SetParameters_Request)() {
  return &rcl_interfaces::srv::typesupport_microxrcedds_cpp::_SetParameters_Request__handle;
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
namespace rcl_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const rcl_interfaces::msg::SetParametersResult &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  rcl_interfaces::msg::SetParametersResult &);

size_t get_serialized_size(
  const rcl_interfaces::msg::SetParametersResult &,
  size_t current_alignment);

size_t
max_serialized_size_SetParametersResult(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace rcl_interfaces


namespace rcl_interfaces
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_serialize(
  const rcl_interfaces::srv::SetParameters_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: results
  {
    size_t size = ros_message.results.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rcl_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.results[i],
        cdr);
      i++;
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  rcl_interfaces::srv::SetParameters_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: results
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.results.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rcl_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.results[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
get_serialized_size(
  const rcl_interfaces::srv::SetParameters_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: results
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.results.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = rcl_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.results[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
max_serialized_size_SetParameters_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: results
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _SetParameters_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rcl_interfaces::srv::SetParameters_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetParameters_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rcl_interfaces::srv::SetParameters_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetParameters_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rcl_interfaces::srv::SetParameters_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetParameters_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rcl_interfaces::srv::SetParameters_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _SetParameters_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_SetParameters_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _SetParameters_Response__callbacks = {
  "rcl_interfaces::srv",
  "SetParameters_Response",
  _SetParameters_Response__cdr_serialize,
  _SetParameters_Response__cdr_deserialize,
  _SetParameters_Response__get_serialized_size,
  _SetParameters_Response__get_serialized_size_with_initial_alignment,
  _SetParameters_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetParameters_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_SetParameters_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace rcl_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rcl_interfaces::srv::SetParameters_Response>()
{
  return &rcl_interfaces::srv::typesupport_microxrcedds_cpp::_SetParameters_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, srv, SetParameters_Response)() {
  return &rcl_interfaces::srv::typesupport_microxrcedds_cpp::_SetParameters_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace rcl_interfaces
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _SetParameters__callbacks = {
  "rcl_interfaces::srv",
  "SetParameters",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, srv, SetParameters_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, srv, SetParameters_Response),
};

static rosidl_service_type_support_t _SetParameters__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_SetParameters__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace rcl_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_rcl_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<rcl_interfaces::srv::SetParameters>()
{
  return &rcl_interfaces::srv::typesupport_microxrcedds_cpp::_SetParameters__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, srv, SetParameters)() {
  return &rcl_interfaces::srv::typesupport_microxrcedds_cpp::_SetParameters__handle;
}

#ifdef __cplusplus
}
#endif
