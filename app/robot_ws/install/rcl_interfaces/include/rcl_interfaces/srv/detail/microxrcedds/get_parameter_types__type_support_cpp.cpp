// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from rcl_interfaces:srv/GetParameterTypes.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/srv/detail/get_parameter_types__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "rcl_interfaces/srv/detail/get_parameter_types__struct.hpp"

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

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_serialize(
  const rcl_interfaces::srv::GetParameterTypes_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: names
  {
    size_t size = ros_message.names.size();
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      rv = ucdr_serialize_string(cdr, ros_message.names[i].c_str());
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  rcl_interfaces::srv::GetParameterTypes_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: names
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if (size > ros_message.names.capacity()) {
      ros_message.names.resize(size);
    } else {
      ros_message.names.resize(ros_message.names.capacity());
    }

    for (size_t i = 0; rv && i < size; i++) {
      uint32_t capacity = ros_message.names[i].capacity();
      char * temp = static_cast<char *>(malloc(capacity * sizeof(char)));
      rv = ucdr_deserialize_string(cdr, temp, capacity);
      if (rv) {
        std::string stemp(temp);
        stemp.shrink_to_fit();
        ros_message.names[i] = std::move(stemp);
      }
      free(temp);
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
get_serialized_size(
  const rcl_interfaces::srv::GetParameterTypes_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: names
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.names.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = ros_message.names[i].size() + 1;
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
max_serialized_size_GetParameterTypes_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: names
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _GetParameterTypes_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rcl_interfaces::srv::GetParameterTypes_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetParameterTypes_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rcl_interfaces::srv::GetParameterTypes_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetParameterTypes_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rcl_interfaces::srv::GetParameterTypes_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetParameterTypes_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rcl_interfaces::srv::GetParameterTypes_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _GetParameterTypes_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_GetParameterTypes_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _GetParameterTypes_Request__callbacks = {
  "rcl_interfaces::srv",
  "GetParameterTypes_Request",
  _GetParameterTypes_Request__cdr_serialize,
  _GetParameterTypes_Request__cdr_deserialize,
  _GetParameterTypes_Request__get_serialized_size,
  _GetParameterTypes_Request__get_serialized_size_with_initial_alignment,
  _GetParameterTypes_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetParameterTypes_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_GetParameterTypes_Request__callbacks,
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
get_message_type_support_handle<rcl_interfaces::srv::GetParameterTypes_Request>()
{
  return &rcl_interfaces::srv::typesupport_microxrcedds_cpp::_GetParameterTypes_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, srv, GetParameterTypes_Request)() {
  return &rcl_interfaces::srv::typesupport_microxrcedds_cpp::_GetParameterTypes_Request__handle;
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

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_serialize(
  const rcl_interfaces::srv::GetParameterTypes_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: types
  {
    size_t size = ros_message.types.size();
    rv = ucdr_serialize_sequence_uint8_t(cdr, &ros_message.types[0], size);
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  rcl_interfaces::srv::GetParameterTypes_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: types
  {
    uint32_t size;
    const size_t capacity = ros_message.types.capacity();
    ros_message.types.resize(capacity);
    rv = ucdr_deserialize_sequence_uint8_t(cdr, &ros_message.types[0], capacity, &size);
    if (rv) {
      ros_message.types.resize(size);
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
get_serialized_size(
  const rcl_interfaces::srv::GetParameterTypes_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: types
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.types.size();
    size_t item_size = sizeof(ros_message.types[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_rcl_interfaces
max_serialized_size_GetParameterTypes_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: types
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _GetParameterTypes_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const rcl_interfaces::srv::GetParameterTypes_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetParameterTypes_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rcl_interfaces::srv::GetParameterTypes_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetParameterTypes_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rcl_interfaces::srv::GetParameterTypes_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetParameterTypes_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const rcl_interfaces::srv::GetParameterTypes_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _GetParameterTypes_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_GetParameterTypes_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _GetParameterTypes_Response__callbacks = {
  "rcl_interfaces::srv",
  "GetParameterTypes_Response",
  _GetParameterTypes_Response__cdr_serialize,
  _GetParameterTypes_Response__cdr_deserialize,
  _GetParameterTypes_Response__get_serialized_size,
  _GetParameterTypes_Response__get_serialized_size_with_initial_alignment,
  _GetParameterTypes_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetParameterTypes_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_GetParameterTypes_Response__callbacks,
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
get_message_type_support_handle<rcl_interfaces::srv::GetParameterTypes_Response>()
{
  return &rcl_interfaces::srv::typesupport_microxrcedds_cpp::_GetParameterTypes_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, srv, GetParameterTypes_Response)() {
  return &rcl_interfaces::srv::typesupport_microxrcedds_cpp::_GetParameterTypes_Response__handle;
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

static service_type_support_callbacks_t _GetParameterTypes__callbacks = {
  "rcl_interfaces::srv",
  "GetParameterTypes",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, srv, GetParameterTypes_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, srv, GetParameterTypes_Response),
};

static rosidl_service_type_support_t _GetParameterTypes__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_GetParameterTypes__callbacks,
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
get_service_type_support_handle<rcl_interfaces::srv::GetParameterTypes>()
{
  return &rcl_interfaces::srv::typesupport_microxrcedds_cpp::_GetParameterTypes__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, rcl_interfaces, srv, GetParameterTypes)() {
  return &rcl_interfaces::srv::typesupport_microxrcedds_cpp::_GetParameterTypes__handle;
}

#ifdef __cplusplus
}
#endif
