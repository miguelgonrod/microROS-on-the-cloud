// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from composition_interfaces:srv/LoadNode.idl
// generated code does not contain a copyright notice
#include "composition_interfaces/srv/detail/load_node__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "composition_interfaces/srv/detail/load_node__struct.hpp"

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


namespace composition_interfaces
{

namespace srv
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_composition_interfaces
cdr_serialize(
  const composition_interfaces::srv::LoadNode_Request & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: package_name
  rv = ucdr_serialize_string(cdr, ros_message.package_name.c_str());
  // Member: plugin_name
  rv = ucdr_serialize_string(cdr, ros_message.plugin_name.c_str());
  // Member: node_name
  rv = ucdr_serialize_string(cdr, ros_message.node_name.c_str());
  // Member: node_namespace
  rv = ucdr_serialize_string(cdr, ros_message.node_namespace.c_str());
  // Member: log_level
  rv = ucdr_serialize_uint8_t(cdr, ros_message.log_level);
  // Member: remap_rules
  {
    size_t size = ros_message.remap_rules.size();
    rv = ucdr_serialize_uint32_t(cdr, size);
    for (size_t i = 0; rv && i < size; ++i) {
      rv = ucdr_serialize_string(cdr, ros_message.remap_rules[i].c_str());
    }
  }
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
  // Member: extra_arguments
  {
    size_t size = ros_message.extra_arguments.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rcl_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.extra_arguments[i],
        cdr);
      i++;
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_composition_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  composition_interfaces::srv::LoadNode_Request & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: package_name
  ros_message.package_name.resize(ros_message.package_name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.package_name[0], ros_message.package_name.capacity());
  if (rv) {
    ros_message.package_name.resize(std::strlen(&ros_message.package_name[0]));
  }
  // Member: plugin_name
  ros_message.plugin_name.resize(ros_message.plugin_name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.plugin_name[0], ros_message.plugin_name.capacity());
  if (rv) {
    ros_message.plugin_name.resize(std::strlen(&ros_message.plugin_name[0]));
  }
  // Member: node_name
  ros_message.node_name.resize(ros_message.node_name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.node_name[0], ros_message.node_name.capacity());
  if (rv) {
    ros_message.node_name.resize(std::strlen(&ros_message.node_name[0]));
  }
  // Member: node_namespace
  ros_message.node_namespace.resize(ros_message.node_namespace.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.node_namespace[0], ros_message.node_namespace.capacity());
  if (rv) {
    ros_message.node_namespace.resize(std::strlen(&ros_message.node_namespace[0]));
  }
  // Member: log_level
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.log_level);
  // Member: remap_rules
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if (size > ros_message.remap_rules.capacity()) {
      ros_message.remap_rules.resize(size);
    } else {
      ros_message.remap_rules.resize(ros_message.remap_rules.capacity());
    }

    for (size_t i = 0; rv && i < size; i++) {
      uint32_t capacity = ros_message.remap_rules[i].capacity();
      char * temp = static_cast<char *>(malloc(capacity * sizeof(char)));
      rv = ucdr_deserialize_string(cdr, temp, capacity);
      if (rv) {
        std::string stemp(temp);
        stemp.shrink_to_fit();
        ros_message.remap_rules[i] = std::move(stemp);
      }
      free(temp);
    }
  }
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
  // Member: extra_arguments
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.extra_arguments.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = rcl_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.extra_arguments[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_composition_interfaces
get_serialized_size(
  const composition_interfaces::srv::LoadNode_Request & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: package_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.package_name.size() + 1;
  // Member: plugin_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.plugin_name.size() + 1;
  // Member: node_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.node_name.size() + 1;
  // Member: node_namespace
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.node_namespace.size() + 1;
  // Member: log_level
  {
    const size_t item_size = sizeof(ros_message.log_level);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: remap_rules
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.remap_rules.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = ros_message.remap_rules[i].size() + 1;
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }
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
  // Member: extra_arguments
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.extra_arguments.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = rcl_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.extra_arguments[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_composition_interfaces
max_serialized_size_LoadNode_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: package_name
  *full_bounded = false;
  // Member: plugin_name
  *full_bounded = false;
  // Member: node_name
  *full_bounded = false;
  // Member: node_namespace
  *full_bounded = false;
  // Member: log_level
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: remap_rules
  {
    *full_bounded = false;
  }
  // Member: parameters
  {
    *full_bounded = false;
  }
  // Member: extra_arguments
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _LoadNode_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const composition_interfaces::srv::LoadNode_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LoadNode_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<composition_interfaces::srv::LoadNode_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LoadNode_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const composition_interfaces::srv::LoadNode_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LoadNode_Request__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const composition_interfaces::srv::LoadNode_Request *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _LoadNode_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_LoadNode_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t _LoadNode_Request__callbacks = {
  "composition_interfaces::srv",
  "LoadNode_Request",
  _LoadNode_Request__cdr_serialize,
  _LoadNode_Request__cdr_deserialize,
  _LoadNode_Request__get_serialized_size,
  _LoadNode_Request__get_serialized_size_with_initial_alignment,
  _LoadNode_Request__max_serialized_size
};

static rosidl_message_type_support_t _LoadNode_Request__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_LoadNode_Request__callbacks,
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
get_message_type_support_handle<composition_interfaces::srv::LoadNode_Request>()
{
  return &composition_interfaces::srv::typesupport_microxrcedds_cpp::_LoadNode_Request__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, composition_interfaces, srv, LoadNode_Request)() {
  return &composition_interfaces::srv::typesupport_microxrcedds_cpp::_LoadNode_Request__handle;
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
  const composition_interfaces::srv::LoadNode_Response & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: success
  rv = ucdr_serialize_bool(cdr, ros_message.success);
  // Member: error_message
  rv = ucdr_serialize_string(cdr, ros_message.error_message.c_str());
  // Member: full_node_name
  rv = ucdr_serialize_string(cdr, ros_message.full_node_name.c_str());
  // Member: unique_id
  rv = ucdr_serialize_uint64_t(cdr, ros_message.unique_id);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_composition_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  composition_interfaces::srv::LoadNode_Response & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: success
  rv = ucdr_deserialize_bool(cdr, &ros_message.success);
  // Member: error_message
  ros_message.error_message.resize(ros_message.error_message.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.error_message[0], ros_message.error_message.capacity());
  if (rv) {
    ros_message.error_message.resize(std::strlen(&ros_message.error_message[0]));
  }
  // Member: full_node_name
  ros_message.full_node_name.resize(ros_message.full_node_name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.full_node_name[0], ros_message.full_node_name.capacity());
  if (rv) {
    ros_message.full_node_name.resize(std::strlen(&ros_message.full_node_name[0]));
  }
  // Member: unique_id
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message.unique_id);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_composition_interfaces
get_serialized_size(
  const composition_interfaces::srv::LoadNode_Response & ros_message,
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
  // Member: error_message
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.error_message.size() + 1;
  // Member: full_node_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.full_node_name.size() + 1;
  // Member: unique_id
  {
    const size_t item_size = sizeof(ros_message.unique_id);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_composition_interfaces
max_serialized_size_LoadNode_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: success
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: error_message
  *full_bounded = false;
  // Member: full_node_name
  *full_bounded = false;
  // Member: unique_id
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);

  return current_alignment - initial_alignment;
}

static bool _LoadNode_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const composition_interfaces::srv::LoadNode_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LoadNode_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<composition_interfaces::srv::LoadNode_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LoadNode_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const composition_interfaces::srv::LoadNode_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LoadNode_Response__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const composition_interfaces::srv::LoadNode_Response *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _LoadNode_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_LoadNode_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t _LoadNode_Response__callbacks = {
  "composition_interfaces::srv",
  "LoadNode_Response",
  _LoadNode_Response__cdr_serialize,
  _LoadNode_Response__cdr_deserialize,
  _LoadNode_Response__get_serialized_size,
  _LoadNode_Response__get_serialized_size_with_initial_alignment,
  _LoadNode_Response__max_serialized_size
};

static rosidl_message_type_support_t _LoadNode_Response__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_LoadNode_Response__callbacks,
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
get_message_type_support_handle<composition_interfaces::srv::LoadNode_Response>()
{
  return &composition_interfaces::srv::typesupport_microxrcedds_cpp::_LoadNode_Response__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, composition_interfaces, srv, LoadNode_Response)() {
  return &composition_interfaces::srv::typesupport_microxrcedds_cpp::_LoadNode_Response__handle;
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

static service_type_support_callbacks_t _LoadNode__callbacks = {
  "composition_interfaces::srv",
  "LoadNode",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, composition_interfaces, srv, LoadNode_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, composition_interfaces, srv, LoadNode_Response),
};

static rosidl_service_type_support_t _LoadNode__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_LoadNode__callbacks,
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
get_service_type_support_handle<composition_interfaces::srv::LoadNode>()
{
  return &composition_interfaces::srv::typesupport_microxrcedds_cpp::_LoadNode__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, composition_interfaces, srv, LoadNode)() {
  return &composition_interfaces::srv::typesupport_microxrcedds_cpp::_LoadNode__handle;
}

#ifdef __cplusplus
}
#endif
