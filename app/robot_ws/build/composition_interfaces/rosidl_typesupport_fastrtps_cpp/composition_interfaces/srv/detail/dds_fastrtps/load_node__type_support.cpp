// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from composition_interfaces:srv/LoadNode.idl
// generated code does not contain a copyright notice
#include "composition_interfaces/srv/detail/load_node__rosidl_typesupport_fastrtps_cpp.hpp"
#include "composition_interfaces/srv/detail/load_node__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace rcl_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rcl_interfaces::msg::Parameter &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rcl_interfaces::msg::Parameter &);
size_t get_serialized_size(
  const rcl_interfaces::msg::Parameter &,
  size_t current_alignment);
size_t
max_serialized_size_Parameter(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rcl_interfaces

// functions for rcl_interfaces::msg::Parameter already declared above


namespace composition_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_composition_interfaces
cdr_serialize(
  const composition_interfaces::srv::LoadNode_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: package_name
  cdr << ros_message.package_name;
  // Member: plugin_name
  cdr << ros_message.plugin_name;
  // Member: node_name
  cdr << ros_message.node_name;
  // Member: node_namespace
  cdr << ros_message.node_namespace;
  // Member: log_level
  cdr << ros_message.log_level;
  // Member: remap_rules
  {
    cdr << ros_message.remap_rules;
  }
  // Member: parameters
  {
    size_t size = ros_message.parameters.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rcl_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.parameters[i],
        cdr);
    }
  }
  // Member: extra_arguments
  {
    size_t size = ros_message.extra_arguments.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rcl_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.extra_arguments[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_composition_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  composition_interfaces::srv::LoadNode_Request & ros_message)
{
  // Member: package_name
  cdr >> ros_message.package_name;

  // Member: plugin_name
  cdr >> ros_message.plugin_name;

  // Member: node_name
  cdr >> ros_message.node_name;

  // Member: node_namespace
  cdr >> ros_message.node_namespace;

  // Member: log_level
  cdr >> ros_message.log_level;

  // Member: remap_rules
  {
    cdr >> ros_message.remap_rules;
  }

  // Member: parameters
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.parameters.resize(size);
    for (size_t i = 0; i < size; i++) {
      rcl_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.parameters[i]);
    }
  }

  // Member: extra_arguments
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.extra_arguments.resize(size);
    for (size_t i = 0; i < size; i++) {
      rcl_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.extra_arguments[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_composition_interfaces
get_serialized_size(
  const composition_interfaces::srv::LoadNode_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: package_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.package_name.size() + 1);
  // Member: plugin_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.plugin_name.size() + 1);
  // Member: node_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.node_name.size() + 1);
  // Member: node_namespace
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.node_namespace.size() + 1);
  // Member: log_level
  {
    size_t item_size = sizeof(ros_message.log_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remap_rules
  {
    size_t array_size = ros_message.remap_rules.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.remap_rules[index].size() + 1);
    }
  }
  // Member: parameters
  {
    size_t array_size = ros_message.parameters.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rcl_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.parameters[index], current_alignment);
    }
  }
  // Member: extra_arguments
  {
    size_t array_size = ros_message.extra_arguments.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rcl_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.extra_arguments[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_composition_interfaces
max_serialized_size_LoadNode_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: package_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: plugin_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: node_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: node_namespace
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: log_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: remap_rules
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: parameters
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        rcl_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Parameter(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: extra_arguments
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        rcl_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Parameter(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = composition_interfaces::srv::LoadNode_Request;
    is_plain =
      (
      offsetof(DataType, extra_arguments) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LoadNode_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const composition_interfaces::srv::LoadNode_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LoadNode_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
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

static size_t _LoadNode_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LoadNode_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LoadNode_Request__callbacks = {
  "composition_interfaces::srv",
  "LoadNode_Request",
  _LoadNode_Request__cdr_serialize,
  _LoadNode_Request__cdr_deserialize,
  _LoadNode_Request__get_serialized_size,
  _LoadNode_Request__max_serialized_size
};

static rosidl_message_type_support_t _LoadNode_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LoadNode_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace composition_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_composition_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<composition_interfaces::srv::LoadNode_Request>()
{
  return &composition_interfaces::srv::typesupport_fastrtps_cpp::_LoadNode_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, composition_interfaces, srv, LoadNode_Request)() {
  return &composition_interfaces::srv::typesupport_fastrtps_cpp::_LoadNode_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace composition_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_composition_interfaces
cdr_serialize(
  const composition_interfaces::srv::LoadNode_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: error_message
  cdr << ros_message.error_message;
  // Member: full_node_name
  cdr << ros_message.full_node_name;
  // Member: unique_id
  cdr << ros_message.unique_id;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_composition_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  composition_interfaces::srv::LoadNode_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: error_message
  cdr >> ros_message.error_message;

  // Member: full_node_name
  cdr >> ros_message.full_node_name;

  // Member: unique_id
  cdr >> ros_message.unique_id;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_composition_interfaces
get_serialized_size(
  const composition_interfaces::srv::LoadNode_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.error_message.size() + 1);
  // Member: full_node_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.full_node_name.size() + 1);
  // Member: unique_id
  {
    size_t item_size = sizeof(ros_message.unique_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_composition_interfaces
max_serialized_size_LoadNode_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error_message
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: full_node_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: unique_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = composition_interfaces::srv::LoadNode_Response;
    is_plain =
      (
      offsetof(DataType, unique_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LoadNode_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const composition_interfaces::srv::LoadNode_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LoadNode_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
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

static size_t _LoadNode_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LoadNode_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LoadNode_Response__callbacks = {
  "composition_interfaces::srv",
  "LoadNode_Response",
  _LoadNode_Response__cdr_serialize,
  _LoadNode_Response__cdr_deserialize,
  _LoadNode_Response__get_serialized_size,
  _LoadNode_Response__max_serialized_size
};

static rosidl_message_type_support_t _LoadNode_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LoadNode_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace composition_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_composition_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<composition_interfaces::srv::LoadNode_Response>()
{
  return &composition_interfaces::srv::typesupport_fastrtps_cpp::_LoadNode_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, composition_interfaces, srv, LoadNode_Response)() {
  return &composition_interfaces::srv::typesupport_fastrtps_cpp::_LoadNode_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace composition_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _LoadNode__callbacks = {
  "composition_interfaces::srv",
  "LoadNode",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, composition_interfaces, srv, LoadNode_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, composition_interfaces, srv, LoadNode_Response)(),
};

static rosidl_service_type_support_t _LoadNode__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LoadNode__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace composition_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_composition_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<composition_interfaces::srv::LoadNode>()
{
  return &composition_interfaces::srv::typesupport_fastrtps_cpp::_LoadNode__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, composition_interfaces, srv, LoadNode)() {
  return &composition_interfaces::srv::typesupport_fastrtps_cpp::_LoadNode__handle;
}

#ifdef __cplusplus
}
#endif
