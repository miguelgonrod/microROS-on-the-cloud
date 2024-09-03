// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rcl_interfaces:srv/GetParameterTypes.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/srv/detail/get_parameter_types__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rcl_interfaces/srv/detail/get_parameter_types__struct.h"
#include "rcl_interfaces/srv/detail/get_parameter_types__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // names
#include "rosidl_runtime_c/string_functions.h"  // names

// forward declare type support functions


using _GetParameterTypes_Request__ros_msg_type = rcl_interfaces__srv__GetParameterTypes_Request;

static bool _GetParameterTypes_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetParameterTypes_Request__ros_msg_type * ros_message = static_cast<const _GetParameterTypes_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: names
  {
    size_t size = ros_message->names.size;
    auto array_ptr = ros_message->names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _GetParameterTypes_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetParameterTypes_Request__ros_msg_type * ros_message = static_cast<_GetParameterTypes_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->names, size)) {
      fprintf(stderr, "failed to create array for field 'names'");
      return false;
    }
    auto array_ptr = ros_message->names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'names'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__srv__GetParameterTypes_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetParameterTypes_Request__ros_msg_type * ros_message = static_cast<const _GetParameterTypes_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name names
  {
    size_t array_size = ros_message->names.size;
    auto array_ptr = ros_message->names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetParameterTypes_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rcl_interfaces__srv__GetParameterTypes_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__srv__GetParameterTypes_Request(
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

  // member: names
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rcl_interfaces__srv__GetParameterTypes_Request;
    is_plain =
      (
      offsetof(DataType, names) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetParameterTypes_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rcl_interfaces__srv__GetParameterTypes_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetParameterTypes_Request = {
  "rcl_interfaces::srv",
  "GetParameterTypes_Request",
  _GetParameterTypes_Request__cdr_serialize,
  _GetParameterTypes_Request__cdr_deserialize,
  _GetParameterTypes_Request__get_serialized_size,
  _GetParameterTypes_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetParameterTypes_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetParameterTypes_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, srv, GetParameterTypes_Request)() {
  return &_GetParameterTypes_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rcl_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_parameter_types__struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_parameter_types__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // types
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // types

// forward declare type support functions


using _GetParameterTypes_Response__ros_msg_type = rcl_interfaces__srv__GetParameterTypes_Response;

static bool _GetParameterTypes_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetParameterTypes_Response__ros_msg_type * ros_message = static_cast<const _GetParameterTypes_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: types
  {
    size_t size = ros_message->types.size;
    auto array_ptr = ros_message->types.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _GetParameterTypes_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetParameterTypes_Response__ros_msg_type * ros_message = static_cast<_GetParameterTypes_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: types
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->types.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->types);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->types, size)) {
      fprintf(stderr, "failed to create array for field 'types'");
      return false;
    }
    auto array_ptr = ros_message->types.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__srv__GetParameterTypes_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetParameterTypes_Response__ros_msg_type * ros_message = static_cast<const _GetParameterTypes_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name types
  {
    size_t array_size = ros_message->types.size;
    auto array_ptr = ros_message->types.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetParameterTypes_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rcl_interfaces__srv__GetParameterTypes_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__srv__GetParameterTypes_Response(
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

  // member: types
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rcl_interfaces__srv__GetParameterTypes_Response;
    is_plain =
      (
      offsetof(DataType, types) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetParameterTypes_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rcl_interfaces__srv__GetParameterTypes_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetParameterTypes_Response = {
  "rcl_interfaces::srv",
  "GetParameterTypes_Response",
  _GetParameterTypes_Response__cdr_serialize,
  _GetParameterTypes_Response__cdr_deserialize,
  _GetParameterTypes_Response__get_serialized_size,
  _GetParameterTypes_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetParameterTypes_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetParameterTypes_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, srv, GetParameterTypes_Response)() {
  return &_GetParameterTypes_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rcl_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rcl_interfaces/srv/get_parameter_types.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetParameterTypes__callbacks = {
  "rcl_interfaces::srv",
  "GetParameterTypes",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, srv, GetParameterTypes_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, srv, GetParameterTypes_Response)(),
};

static rosidl_service_type_support_t GetParameterTypes__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetParameterTypes__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, srv, GetParameterTypes)() {
  return &GetParameterTypes__handle;
}

#if defined(__cplusplus)
}
#endif
