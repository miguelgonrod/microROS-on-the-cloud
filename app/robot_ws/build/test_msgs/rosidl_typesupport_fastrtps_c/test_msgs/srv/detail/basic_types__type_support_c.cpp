// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from test_msgs:srv/BasicTypes.idl
// generated code does not contain a copyright notice
#include "test_msgs/srv/detail/basic_types__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "test_msgs/srv/detail/basic_types__struct.h"
#include "test_msgs/srv/detail/basic_types__functions.h"
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

#include "rosidl_runtime_c/string.h"  // string_value
#include "rosidl_runtime_c/string_functions.h"  // string_value

// forward declare type support functions


using _BasicTypes_Request__ros_msg_type = test_msgs__srv__BasicTypes_Request;

static bool _BasicTypes_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BasicTypes_Request__ros_msg_type * ros_message = static_cast<const _BasicTypes_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_value
  {
    cdr << (ros_message->bool_value ? true : false);
  }

  // Field name: byte_value
  {
    cdr << ros_message->byte_value;
  }

  // Field name: char_value
  {
    cdr << ros_message->char_value;
  }

  // Field name: float32_value
  {
    cdr << ros_message->float32_value;
  }

  // Field name: float64_value
  {
    cdr << ros_message->float64_value;
  }

  // Field name: int8_value
  {
    cdr << ros_message->int8_value;
  }

  // Field name: uint8_value
  {
    cdr << ros_message->uint8_value;
  }

  // Field name: int16_value
  {
    cdr << ros_message->int16_value;
  }

  // Field name: uint16_value
  {
    cdr << ros_message->uint16_value;
  }

  // Field name: int32_value
  {
    cdr << ros_message->int32_value;
  }

  // Field name: uint32_value
  {
    cdr << ros_message->uint32_value;
  }

  // Field name: int64_value
  {
    cdr << ros_message->int64_value;
  }

  // Field name: uint64_value
  {
    cdr << ros_message->uint64_value;
  }

  // Field name: string_value
  {
    const rosidl_runtime_c__String * str = &ros_message->string_value;
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

  return true;
}

static bool _BasicTypes_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BasicTypes_Request__ros_msg_type * ros_message = static_cast<_BasicTypes_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_value
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bool_value = tmp ? true : false;
  }

  // Field name: byte_value
  {
    cdr >> ros_message->byte_value;
  }

  // Field name: char_value
  {
    cdr >> ros_message->char_value;
  }

  // Field name: float32_value
  {
    cdr >> ros_message->float32_value;
  }

  // Field name: float64_value
  {
    cdr >> ros_message->float64_value;
  }

  // Field name: int8_value
  {
    cdr >> ros_message->int8_value;
  }

  // Field name: uint8_value
  {
    cdr >> ros_message->uint8_value;
  }

  // Field name: int16_value
  {
    cdr >> ros_message->int16_value;
  }

  // Field name: uint16_value
  {
    cdr >> ros_message->uint16_value;
  }

  // Field name: int32_value
  {
    cdr >> ros_message->int32_value;
  }

  // Field name: uint32_value
  {
    cdr >> ros_message->uint32_value;
  }

  // Field name: int64_value
  {
    cdr >> ros_message->int64_value;
  }

  // Field name: uint64_value
  {
    cdr >> ros_message->uint64_value;
  }

  // Field name: string_value
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->string_value.data) {
      rosidl_runtime_c__String__init(&ros_message->string_value);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->string_value,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'string_value'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__srv__BasicTypes_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BasicTypes_Request__ros_msg_type * ros_message = static_cast<const _BasicTypes_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bool_value
  {
    size_t item_size = sizeof(ros_message->bool_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name byte_value
  {
    size_t item_size = sizeof(ros_message->byte_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name char_value
  {
    size_t item_size = sizeof(ros_message->char_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float32_value
  {
    size_t item_size = sizeof(ros_message->float32_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float64_value
  {
    size_t item_size = sizeof(ros_message->float64_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int8_value
  {
    size_t item_size = sizeof(ros_message->int8_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint8_value
  {
    size_t item_size = sizeof(ros_message->uint8_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int16_value
  {
    size_t item_size = sizeof(ros_message->int16_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint16_value
  {
    size_t item_size = sizeof(ros_message->uint16_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int32_value
  {
    size_t item_size = sizeof(ros_message->int32_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint32_value
  {
    size_t item_size = sizeof(ros_message->uint32_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int64_value
  {
    size_t item_size = sizeof(ros_message->int64_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint64_value
  {
    size_t item_size = sizeof(ros_message->uint64_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name string_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string_value.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _BasicTypes_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_test_msgs__srv__BasicTypes_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__srv__BasicTypes_Request(
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

  // member: bool_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: byte_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: char_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: float32_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: float64_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: int8_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: uint8_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: int16_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: uint16_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: int32_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uint32_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: int64_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: uint64_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: string_value
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = test_msgs__srv__BasicTypes_Request;
    is_plain =
      (
      offsetof(DataType, string_value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BasicTypes_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_test_msgs__srv__BasicTypes_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BasicTypes_Request = {
  "test_msgs::srv",
  "BasicTypes_Request",
  _BasicTypes_Request__cdr_serialize,
  _BasicTypes_Request__cdr_deserialize,
  _BasicTypes_Request__get_serialized_size,
  _BasicTypes_Request__max_serialized_size
};

static rosidl_message_type_support_t _BasicTypes_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BasicTypes_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, srv, BasicTypes_Request)() {
  return &_BasicTypes_Request__type_support;
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
// #include "test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "test_msgs/srv/detail/basic_types__struct.h"
// already included above
// #include "test_msgs/srv/detail/basic_types__functions.h"
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

// already included above
// #include "rosidl_runtime_c/string.h"  // string_value
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // string_value

// forward declare type support functions


using _BasicTypes_Response__ros_msg_type = test_msgs__srv__BasicTypes_Response;

static bool _BasicTypes_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BasicTypes_Response__ros_msg_type * ros_message = static_cast<const _BasicTypes_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_value
  {
    cdr << (ros_message->bool_value ? true : false);
  }

  // Field name: byte_value
  {
    cdr << ros_message->byte_value;
  }

  // Field name: char_value
  {
    cdr << ros_message->char_value;
  }

  // Field name: float32_value
  {
    cdr << ros_message->float32_value;
  }

  // Field name: float64_value
  {
    cdr << ros_message->float64_value;
  }

  // Field name: int8_value
  {
    cdr << ros_message->int8_value;
  }

  // Field name: uint8_value
  {
    cdr << ros_message->uint8_value;
  }

  // Field name: int16_value
  {
    cdr << ros_message->int16_value;
  }

  // Field name: uint16_value
  {
    cdr << ros_message->uint16_value;
  }

  // Field name: int32_value
  {
    cdr << ros_message->int32_value;
  }

  // Field name: uint32_value
  {
    cdr << ros_message->uint32_value;
  }

  // Field name: int64_value
  {
    cdr << ros_message->int64_value;
  }

  // Field name: uint64_value
  {
    cdr << ros_message->uint64_value;
  }

  // Field name: string_value
  {
    const rosidl_runtime_c__String * str = &ros_message->string_value;
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

  return true;
}

static bool _BasicTypes_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BasicTypes_Response__ros_msg_type * ros_message = static_cast<_BasicTypes_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_value
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bool_value = tmp ? true : false;
  }

  // Field name: byte_value
  {
    cdr >> ros_message->byte_value;
  }

  // Field name: char_value
  {
    cdr >> ros_message->char_value;
  }

  // Field name: float32_value
  {
    cdr >> ros_message->float32_value;
  }

  // Field name: float64_value
  {
    cdr >> ros_message->float64_value;
  }

  // Field name: int8_value
  {
    cdr >> ros_message->int8_value;
  }

  // Field name: uint8_value
  {
    cdr >> ros_message->uint8_value;
  }

  // Field name: int16_value
  {
    cdr >> ros_message->int16_value;
  }

  // Field name: uint16_value
  {
    cdr >> ros_message->uint16_value;
  }

  // Field name: int32_value
  {
    cdr >> ros_message->int32_value;
  }

  // Field name: uint32_value
  {
    cdr >> ros_message->uint32_value;
  }

  // Field name: int64_value
  {
    cdr >> ros_message->int64_value;
  }

  // Field name: uint64_value
  {
    cdr >> ros_message->uint64_value;
  }

  // Field name: string_value
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->string_value.data) {
      rosidl_runtime_c__String__init(&ros_message->string_value);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->string_value,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'string_value'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__srv__BasicTypes_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BasicTypes_Response__ros_msg_type * ros_message = static_cast<const _BasicTypes_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bool_value
  {
    size_t item_size = sizeof(ros_message->bool_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name byte_value
  {
    size_t item_size = sizeof(ros_message->byte_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name char_value
  {
    size_t item_size = sizeof(ros_message->char_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float32_value
  {
    size_t item_size = sizeof(ros_message->float32_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float64_value
  {
    size_t item_size = sizeof(ros_message->float64_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int8_value
  {
    size_t item_size = sizeof(ros_message->int8_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint8_value
  {
    size_t item_size = sizeof(ros_message->uint8_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int16_value
  {
    size_t item_size = sizeof(ros_message->int16_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint16_value
  {
    size_t item_size = sizeof(ros_message->uint16_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int32_value
  {
    size_t item_size = sizeof(ros_message->int32_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint32_value
  {
    size_t item_size = sizeof(ros_message->uint32_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int64_value
  {
    size_t item_size = sizeof(ros_message->int64_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint64_value
  {
    size_t item_size = sizeof(ros_message->uint64_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name string_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string_value.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _BasicTypes_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_test_msgs__srv__BasicTypes_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__srv__BasicTypes_Response(
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

  // member: bool_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: byte_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: char_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: float32_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: float64_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: int8_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: uint8_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: int16_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: uint16_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: int32_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uint32_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: int64_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: uint64_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: string_value
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = test_msgs__srv__BasicTypes_Response;
    is_plain =
      (
      offsetof(DataType, string_value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BasicTypes_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_test_msgs__srv__BasicTypes_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BasicTypes_Response = {
  "test_msgs::srv",
  "BasicTypes_Response",
  _BasicTypes_Response__cdr_serialize,
  _BasicTypes_Response__cdr_deserialize,
  _BasicTypes_Response__get_serialized_size,
  _BasicTypes_Response__max_serialized_size
};

static rosidl_message_type_support_t _BasicTypes_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BasicTypes_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, srv, BasicTypes_Response)() {
  return &_BasicTypes_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "test_msgs/srv/basic_types.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t BasicTypes__callbacks = {
  "test_msgs::srv",
  "BasicTypes",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, srv, BasicTypes_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, srv, BasicTypes_Response)(),
};

static rosidl_service_type_support_t BasicTypes__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &BasicTypes__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, srv, BasicTypes)() {
  return &BasicTypes__handle;
}

#if defined(__cplusplus)
}
#endif
