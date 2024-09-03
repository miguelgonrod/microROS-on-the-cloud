// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rcl_interfaces:msg/ParameterValue.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/parameter_value__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rcl_interfaces/msg/detail/parameter_value__struct.h"
#include "rcl_interfaces/msg/detail/parameter_value__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // bool_array_value, byte_array_value, double_array_value, integer_array_value
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // bool_array_value, byte_array_value, double_array_value, integer_array_value
#include "rosidl_runtime_c/string.h"  // string_array_value, string_value
#include "rosidl_runtime_c/string_functions.h"  // string_array_value, string_value

// forward declare type support functions


using _ParameterValue__ros_msg_type = rcl_interfaces__msg__ParameterValue;

static bool _ParameterValue__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ParameterValue__ros_msg_type * ros_message = static_cast<const _ParameterValue__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: bool_value
  {
    cdr << (ros_message->bool_value ? true : false);
  }

  // Field name: integer_value
  {
    cdr << ros_message->integer_value;
  }

  // Field name: double_value
  {
    cdr << ros_message->double_value;
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

  // Field name: byte_array_value
  {
    size_t size = ros_message->byte_array_value.size;
    auto array_ptr = ros_message->byte_array_value.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: bool_array_value
  {
    size_t size = ros_message->bool_array_value.size;
    auto array_ptr = ros_message->bool_array_value.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: integer_array_value
  {
    size_t size = ros_message->integer_array_value.size;
    auto array_ptr = ros_message->integer_array_value.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: double_array_value
  {
    size_t size = ros_message->double_array_value.size;
    auto array_ptr = ros_message->double_array_value.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: string_array_value
  {
    size_t size = ros_message->string_array_value.size;
    auto array_ptr = ros_message->string_array_value.data;
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

static bool _ParameterValue__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ParameterValue__ros_msg_type * ros_message = static_cast<_ParameterValue__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: bool_value
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bool_value = tmp ? true : false;
  }

  // Field name: integer_value
  {
    cdr >> ros_message->integer_value;
  }

  // Field name: double_value
  {
    cdr >> ros_message->double_value;
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

  // Field name: byte_array_value
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->byte_array_value.data) {
      rosidl_runtime_c__octet__Sequence__fini(&ros_message->byte_array_value);
    }
    if (!rosidl_runtime_c__octet__Sequence__init(&ros_message->byte_array_value, size)) {
      fprintf(stderr, "failed to create array for field 'byte_array_value'");
      return false;
    }
    auto array_ptr = ros_message->byte_array_value.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: bool_array_value
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bool_array_value.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->bool_array_value);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->bool_array_value, size)) {
      fprintf(stderr, "failed to create array for field 'bool_array_value'");
      return false;
    }
    auto array_ptr = ros_message->bool_array_value.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: integer_array_value
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->integer_array_value.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->integer_array_value);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->integer_array_value, size)) {
      fprintf(stderr, "failed to create array for field 'integer_array_value'");
      return false;
    }
    auto array_ptr = ros_message->integer_array_value.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: double_array_value
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->double_array_value.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->double_array_value);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->double_array_value, size)) {
      fprintf(stderr, "failed to create array for field 'double_array_value'");
      return false;
    }
    auto array_ptr = ros_message->double_array_value.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: string_array_value
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->string_array_value.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->string_array_value);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->string_array_value, size)) {
      fprintf(stderr, "failed to create array for field 'string_array_value'");
      return false;
    }
    auto array_ptr = ros_message->string_array_value.data;
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
        fprintf(stderr, "failed to assign string into field 'string_array_value'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__msg__ParameterValue(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ParameterValue__ros_msg_type * ros_message = static_cast<const _ParameterValue__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bool_value
  {
    size_t item_size = sizeof(ros_message->bool_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name integer_value
  {
    size_t item_size = sizeof(ros_message->integer_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name double_value
  {
    size_t item_size = sizeof(ros_message->double_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name string_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string_value.size + 1);
  // field.name byte_array_value
  {
    size_t array_size = ros_message->byte_array_value.size;
    auto array_ptr = ros_message->byte_array_value.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bool_array_value
  {
    size_t array_size = ros_message->bool_array_value.size;
    auto array_ptr = ros_message->bool_array_value.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name integer_array_value
  {
    size_t array_size = ros_message->integer_array_value.size;
    auto array_ptr = ros_message->integer_array_value.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name double_array_value
  {
    size_t array_size = ros_message->double_array_value.size;
    auto array_ptr = ros_message->double_array_value.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name string_array_value
  {
    size_t array_size = ros_message->string_array_value.size;
    auto array_ptr = ros_message->string_array_value.data;
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

static uint32_t _ParameterValue__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rcl_interfaces__msg__ParameterValue(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__msg__ParameterValue(
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

  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bool_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: integer_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: double_value
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
  // member: byte_array_value
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bool_array_value
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: integer_array_value
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: double_array_value
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: string_array_value
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
    using DataType = rcl_interfaces__msg__ParameterValue;
    is_plain =
      (
      offsetof(DataType, string_array_value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ParameterValue__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rcl_interfaces__msg__ParameterValue(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ParameterValue = {
  "rcl_interfaces::msg",
  "ParameterValue",
  _ParameterValue__cdr_serialize,
  _ParameterValue__cdr_deserialize,
  _ParameterValue__get_serialized_size,
  _ParameterValue__max_serialized_size
};

static rosidl_message_type_support_t _ParameterValue__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ParameterValue,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, msg, ParameterValue)() {
  return &_ParameterValue__type_support;
}

#if defined(__cplusplus)
}
#endif
