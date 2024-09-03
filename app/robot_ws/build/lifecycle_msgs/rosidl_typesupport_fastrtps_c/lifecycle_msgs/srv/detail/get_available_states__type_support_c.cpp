// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from lifecycle_msgs:srv/GetAvailableStates.idl
// generated code does not contain a copyright notice
#include "lifecycle_msgs/srv/detail/get_available_states__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lifecycle_msgs/srv/detail/get_available_states__struct.h"
#include "lifecycle_msgs/srv/detail/get_available_states__functions.h"
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


// forward declare type support functions


using _GetAvailableStates_Request__ros_msg_type = lifecycle_msgs__srv__GetAvailableStates_Request;

static bool _GetAvailableStates_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetAvailableStates_Request__ros_msg_type * ros_message = static_cast<const _GetAvailableStates_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetAvailableStates_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetAvailableStates_Request__ros_msg_type * ros_message = static_cast<_GetAvailableStates_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
size_t get_serialized_size_lifecycle_msgs__srv__GetAvailableStates_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetAvailableStates_Request__ros_msg_type * ros_message = static_cast<const _GetAvailableStates_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetAvailableStates_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lifecycle_msgs__srv__GetAvailableStates_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
size_t max_serialized_size_lifecycle_msgs__srv__GetAvailableStates_Request(
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

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = lifecycle_msgs__srv__GetAvailableStates_Request;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetAvailableStates_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lifecycle_msgs__srv__GetAvailableStates_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetAvailableStates_Request = {
  "lifecycle_msgs::srv",
  "GetAvailableStates_Request",
  _GetAvailableStates_Request__cdr_serialize,
  _GetAvailableStates_Request__cdr_deserialize,
  _GetAvailableStates_Request__get_serialized_size,
  _GetAvailableStates_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetAvailableStates_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetAvailableStates_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, srv, GetAvailableStates_Request)() {
  return &_GetAvailableStates_Request__type_support;
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
// #include "lifecycle_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_available_states__struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_available_states__functions.h"
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

#include "lifecycle_msgs/msg/detail/state__functions.h"  // available_states

// forward declare type support functions
size_t get_serialized_size_lifecycle_msgs__msg__State(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_lifecycle_msgs__msg__State(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, msg, State)();


using _GetAvailableStates_Response__ros_msg_type = lifecycle_msgs__srv__GetAvailableStates_Response;

static bool _GetAvailableStates_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetAvailableStates_Response__ros_msg_type * ros_message = static_cast<const _GetAvailableStates_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: available_states
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, lifecycle_msgs, msg, State
      )()->data);
    size_t size = ros_message->available_states.size;
    auto array_ptr = ros_message->available_states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _GetAvailableStates_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetAvailableStates_Response__ros_msg_type * ros_message = static_cast<_GetAvailableStates_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: available_states
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, lifecycle_msgs, msg, State
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->available_states.data) {
      lifecycle_msgs__msg__State__Sequence__fini(&ros_message->available_states);
    }
    if (!lifecycle_msgs__msg__State__Sequence__init(&ros_message->available_states, size)) {
      fprintf(stderr, "failed to create array for field 'available_states'");
      return false;
    }
    auto array_ptr = ros_message->available_states.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
size_t get_serialized_size_lifecycle_msgs__srv__GetAvailableStates_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetAvailableStates_Response__ros_msg_type * ros_message = static_cast<const _GetAvailableStates_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name available_states
  {
    size_t array_size = ros_message->available_states.size;
    auto array_ptr = ros_message->available_states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_lifecycle_msgs__msg__State(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetAvailableStates_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lifecycle_msgs__srv__GetAvailableStates_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
size_t max_serialized_size_lifecycle_msgs__srv__GetAvailableStates_Response(
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

  // member: available_states
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
      size_t inner_size;
      inner_size =
        max_serialized_size_lifecycle_msgs__msg__State(
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
    using DataType = lifecycle_msgs__srv__GetAvailableStates_Response;
    is_plain =
      (
      offsetof(DataType, available_states) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetAvailableStates_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lifecycle_msgs__srv__GetAvailableStates_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetAvailableStates_Response = {
  "lifecycle_msgs::srv",
  "GetAvailableStates_Response",
  _GetAvailableStates_Response__cdr_serialize,
  _GetAvailableStates_Response__cdr_deserialize,
  _GetAvailableStates_Response__get_serialized_size,
  _GetAvailableStates_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetAvailableStates_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetAvailableStates_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, srv, GetAvailableStates_Response)() {
  return &_GetAvailableStates_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "lifecycle_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lifecycle_msgs/srv/get_available_states.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetAvailableStates__callbacks = {
  "lifecycle_msgs::srv",
  "GetAvailableStates",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, srv, GetAvailableStates_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, srv, GetAvailableStates_Response)(),
};

static rosidl_service_type_support_t GetAvailableStates__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetAvailableStates__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, srv, GetAvailableStates)() {
  return &GetAvailableStates__handle;
}

#if defined(__cplusplus)
}
#endif
