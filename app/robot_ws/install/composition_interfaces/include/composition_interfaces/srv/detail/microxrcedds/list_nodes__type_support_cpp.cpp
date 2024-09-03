// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from composition_interfaces:srv/ListNodes.idl
// generated code does not contain a copyright notice
#include "composition_interfaces/srv/detail/list_nodes__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "composition_interfaces/srv/detail/list_nodes__struct.hpp"

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

namespace composition_interfaces
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_composition_interfaces
cdr_serialize(
  const composition_interfaces::srv::ListNodes_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message.structure_needs_at_least_one_member);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_composition_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  composition_interfaces::srv::ListNodes_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.structure_needs_at_least_one_member);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_composition_interfaces
get_serialized_size(
  const composition_interfaces::srv::ListNodes_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_composition_interfaces
max_serialized_size_ListNodes_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static bool _ListNodes_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const composition_interfaces::srv::ListNodes_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ListNodes_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<composition_interfaces::srv::ListNodes_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ListNodes_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const composition_interfaces::srv::ListNodes_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ListNodes_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const composition_interfaces::srv::ListNodes_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ListNodes_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ListNodes_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _ListNodes_Request__callbacks = {
  "composition_interfaces::srv",
  "ListNodes_Request",
  _ListNodes_Request__cdr_serialize,
  _ListNodes_Request__cdr_deserialize,
  _ListNodes_Request__get_serialized_size,
  _ListNodes_Request__get_serialized_size_with_initial_alignment,
  _ListNodes_Request__max_serialized_size
};

static rosidl_message_type_support_t _ListNodes_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ListNodes_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace composition_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_composition_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<composition_interfaces::srv::ListNodes_Request>()
{
  return &composition_interfaces::srv::typesupport_microxrcedds_cpp::_ListNodes_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, composition_interfaces, srv, ListNodes_Request)() {
  return &composition_interfaces::srv::typesupport_microxrcedds_cpp::_ListNodes_Request__handle;
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

namespace composition_interfaces
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_composition_interfaces
cdr_serialize(
  const composition_interfaces::srv::ListNodes_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: full_node_names
  {
    size_t size = ros_message.full_node_names.size();
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      rv = ucdr_serialize_string(cdr, ros_message.full_node_names[i].c_str());
    }
  }
  // Member: unique_ids
  {
    size_t size = ros_message.unique_ids.size();
    rv = ucdr_serialize_sequence_uint64_t(cdr, &ros_message.unique_ids[0], size);
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_composition_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  composition_interfaces::srv::ListNodes_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: full_node_names
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if (size > ros_message.full_node_names.capacity()) {
      ros_message.full_node_names.resize(size);
    } else {
      ros_message.full_node_names.resize(ros_message.full_node_names.capacity());
    }

    for (size_t i = 0; rv && i < size; i++) {
      uint32_t capacity = ros_message.full_node_names[i].capacity();
      char * temp = static_cast<char *>(malloc(capacity * sizeof(char)));
      rv = ucdr_deserialize_string(cdr, temp, capacity);
      if (rv) {
        std::string stemp(temp);
        stemp.shrink_to_fit();
        ros_message.full_node_names[i] = std::move(stemp);
      }
      free(temp);
    }
  }
  // Member: unique_ids
  {
    uint32_t size;
    const size_t capacity = ros_message.unique_ids.capacity();
    ros_message.unique_ids.resize(capacity);
    rv = ucdr_deserialize_sequence_uint64_t(cdr, &ros_message.unique_ids[0], capacity, &size);
    if (rv) {
      ros_message.unique_ids.resize(size);
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_composition_interfaces
get_serialized_size(
  const composition_interfaces::srv::ListNodes_Response & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: full_node_names
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.full_node_names.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = ros_message.full_node_names[i].size() + 1;
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
  // Member: unique_ids
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.unique_ids.size();
    size_t item_size = sizeof(ros_message.unique_ids[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_composition_interfaces
max_serialized_size_ListNodes_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: full_node_names
  {
    *full_bounded = false;
  }
  // Member: unique_ids
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _ListNodes_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const composition_interfaces::srv::ListNodes_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ListNodes_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<composition_interfaces::srv::ListNodes_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ListNodes_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const composition_interfaces::srv::ListNodes_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ListNodes_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const composition_interfaces::srv::ListNodes_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _ListNodes_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ListNodes_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _ListNodes_Response__callbacks = {
  "composition_interfaces::srv",
  "ListNodes_Response",
  _ListNodes_Response__cdr_serialize,
  _ListNodes_Response__cdr_deserialize,
  _ListNodes_Response__get_serialized_size,
  _ListNodes_Response__get_serialized_size_with_initial_alignment,
  _ListNodes_Response__max_serialized_size
};

static rosidl_message_type_support_t _ListNodes_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ListNodes_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace composition_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_composition_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<composition_interfaces::srv::ListNodes_Response>()
{
  return &composition_interfaces::srv::typesupport_microxrcedds_cpp::_ListNodes_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, composition_interfaces, srv, ListNodes_Response)() {
  return &composition_interfaces::srv::typesupport_microxrcedds_cpp::_ListNodes_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/service_type_support_decl.hpp"

namespace composition_interfaces
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

static service_type_support_callbacks_t _ListNodes__callbacks = {
  "composition_interfaces::srv",
  "ListNodes",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, composition_interfaces, srv, ListNodes_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, composition_interfaces, srv, ListNodes_Response),
};

static rosidl_service_type_support_t _ListNodes__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_ListNodes__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace srv

}  // namespace composition_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_composition_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<composition_interfaces::srv::ListNodes>()
{
  return &composition_interfaces::srv::typesupport_microxrcedds_cpp::_ListNodes__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, composition_interfaces, srv, ListNodes)() {
  return &composition_interfaces::srv::typesupport_microxrcedds_cpp::_ListNodes__handle;
}

#ifdef __cplusplus
}
#endif
