// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rcl_interfaces:msg/ParameterDescriptor.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/parameter_descriptor__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rcl_interfaces/msg/detail/parameter_descriptor__struct.h"
#include "rcl_interfaces/msg/detail/parameter_descriptor__functions.h"
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

#include "rcl_interfaces/msg/detail/floating_point_range__functions.h"  // floating_point_range
#include "rcl_interfaces/msg/detail/integer_range__functions.h"  // integer_range
#include "rosidl_runtime_c/string.h"  // additional_constraints, description, name
#include "rosidl_runtime_c/string_functions.h"  // additional_constraints, description, name

// forward declare type support functions
size_t get_serialized_size_rcl_interfaces__msg__FloatingPointRange(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rcl_interfaces__msg__FloatingPointRange(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, msg, FloatingPointRange)();
size_t get_serialized_size_rcl_interfaces__msg__IntegerRange(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rcl_interfaces__msg__IntegerRange(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, msg, IntegerRange)();


using _ParameterDescriptor__ros_msg_type = rcl_interfaces__msg__ParameterDescriptor;

static bool _ParameterDescriptor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ParameterDescriptor__ros_msg_type * ros_message = static_cast<const _ParameterDescriptor__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
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

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: description
  {
    const rosidl_runtime_c__String * str = &ros_message->description;
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

  // Field name: additional_constraints
  {
    const rosidl_runtime_c__String * str = &ros_message->additional_constraints;
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

  // Field name: read_only
  {
    cdr << (ros_message->read_only ? true : false);
  }

  // Field name: dynamic_typing
  {
    cdr << (ros_message->dynamic_typing ? true : false);
  }

  // Field name: floating_point_range
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rcl_interfaces, msg, FloatingPointRange
      )()->data);
    size_t size = ros_message->floating_point_range.size;
    auto array_ptr = ros_message->floating_point_range.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: integer_range
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rcl_interfaces, msg, IntegerRange
      )()->data);
    size_t size = ros_message->integer_range.size;
    auto array_ptr = ros_message->integer_range.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
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

static bool _ParameterDescriptor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ParameterDescriptor__ros_msg_type * ros_message = static_cast<_ParameterDescriptor__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: description
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->description.data) {
      rosidl_runtime_c__String__init(&ros_message->description);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->description,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'description'\n");
      return false;
    }
  }

  // Field name: additional_constraints
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->additional_constraints.data) {
      rosidl_runtime_c__String__init(&ros_message->additional_constraints);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->additional_constraints,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'additional_constraints'\n");
      return false;
    }
  }

  // Field name: read_only
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->read_only = tmp ? true : false;
  }

  // Field name: dynamic_typing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dynamic_typing = tmp ? true : false;
  }

  // Field name: floating_point_range
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rcl_interfaces, msg, FloatingPointRange
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->floating_point_range.data) {
      rcl_interfaces__msg__FloatingPointRange__Sequence__fini(&ros_message->floating_point_range);
    }
    if (!rcl_interfaces__msg__FloatingPointRange__Sequence__init(&ros_message->floating_point_range, size)) {
      fprintf(stderr, "failed to create array for field 'floating_point_range'");
      return false;
    }
    auto array_ptr = ros_message->floating_point_range.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: integer_range
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rcl_interfaces, msg, IntegerRange
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->integer_range.data) {
      rcl_interfaces__msg__IntegerRange__Sequence__fini(&ros_message->integer_range);
    }
    if (!rcl_interfaces__msg__IntegerRange__Sequence__init(&ros_message->integer_range, size)) {
      fprintf(stderr, "failed to create array for field 'integer_range'");
      return false;
    }
    auto array_ptr = ros_message->integer_range.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ParameterDescriptor__ros_msg_type * ros_message = static_cast<const _ParameterDescriptor__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->description.size + 1);
  // field.name additional_constraints
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->additional_constraints.size + 1);
  // field.name read_only
  {
    size_t item_size = sizeof(ros_message->read_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dynamic_typing
  {
    size_t item_size = sizeof(ros_message->dynamic_typing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name floating_point_range
  {
    size_t array_size = ros_message->floating_point_range.size;
    auto array_ptr = ros_message->floating_point_range.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rcl_interfaces__msg__FloatingPointRange(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name integer_range
  {
    size_t array_size = ros_message->integer_range.size;
    auto array_ptr = ros_message->integer_range.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rcl_interfaces__msg__IntegerRange(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ParameterDescriptor__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
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

  // member: name
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
  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: description
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
  // member: additional_constraints
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
  // member: read_only
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dynamic_typing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: floating_point_range
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_rcl_interfaces__msg__FloatingPointRange(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: integer_range
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_rcl_interfaces__msg__IntegerRange(
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
    using DataType = rcl_interfaces__msg__ParameterDescriptor;
    is_plain =
      (
      offsetof(DataType, integer_range) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ParameterDescriptor__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rcl_interfaces__msg__ParameterDescriptor(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ParameterDescriptor = {
  "rcl_interfaces::msg",
  "ParameterDescriptor",
  _ParameterDescriptor__cdr_serialize,
  _ParameterDescriptor__cdr_deserialize,
  _ParameterDescriptor__get_serialized_size,
  _ParameterDescriptor__max_serialized_size
};

static rosidl_message_type_support_t _ParameterDescriptor__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ParameterDescriptor,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, msg, ParameterDescriptor)() {
  return &_ParameterDescriptor__type_support;
}

#if defined(__cplusplus)
}
#endif
