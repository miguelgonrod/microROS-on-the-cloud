// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from test_msgs:msg/Arrays.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/arrays__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "test_msgs/msg/detail/arrays__struct.h"
#include "test_msgs/msg/detail/arrays__functions.h"
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

#include "rosidl_runtime_c/string.h"  // string_values, string_values_default
#include "rosidl_runtime_c/string_functions.h"  // string_values, string_values_default
#include "test_msgs/msg/detail/basic_types__functions.h"  // basic_types_values
#include "test_msgs/msg/detail/constants__functions.h"  // constants_values
#include "test_msgs/msg/detail/defaults__functions.h"  // defaults_values

// forward declare type support functions
size_t get_serialized_size_test_msgs__msg__BasicTypes(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__BasicTypes(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, BasicTypes)();
size_t get_serialized_size_test_msgs__msg__Constants(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__Constants(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Constants)();
size_t get_serialized_size_test_msgs__msg__Defaults(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__Defaults(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Defaults)();


using _Arrays__ros_msg_type = test_msgs__msg__Arrays;

static bool _Arrays__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Arrays__ros_msg_type * ros_message = static_cast<const _Arrays__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->bool_values;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: byte_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->byte_values;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: char_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->char_values;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: float32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->float32_values;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: float64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->float64_values;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int8_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int8_values;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint8_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint8_values;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int16_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int16_values;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint16_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint16_values;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int32_values;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint32_values;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int64_values;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint64_values;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: string_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_values;
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

  // Field name: basic_types_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, BasicTypes
      )()->data);
    size_t size = 3;
    auto array_ptr = ros_message->basic_types_values;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: constants_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, Constants
      )()->data);
    size_t size = 3;
    auto array_ptr = ros_message->constants_values;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: defaults_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, Defaults
      )()->data);
    size_t size = 3;
    auto array_ptr = ros_message->defaults_values;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: bool_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->bool_values_default;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: byte_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->byte_values_default;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: char_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->char_values_default;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: float32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->float32_values_default;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: float64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->float64_values_default;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int8_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int8_values_default;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint8_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint8_values_default;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int16_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int16_values_default;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint16_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint16_values_default;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int32_values_default;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint32_values_default;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int64_values_default;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint64_values_default;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: string_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_values_default;
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

  // Field name: alignment_check
  {
    cdr << ros_message->alignment_check;
  }

  return true;
}

static bool _Arrays__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Arrays__ros_msg_type * ros_message = static_cast<_Arrays__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->bool_values;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: byte_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->byte_values;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: char_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->char_values;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: float32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->float32_values;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: float64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->float64_values;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int8_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int8_values;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint8_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint8_values;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int16_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int16_values;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint16_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint16_values;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int32_values;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint32_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint32_values;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->int64_values;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint64_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint64_values;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: string_values
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_values;
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
        fprintf(stderr, "failed to assign string into field 'string_values'\n");
        return false;
      }
    }
  }

  // Field name: basic_types_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, BasicTypes
      )()->data);
    size_t size = 3;
    auto array_ptr = ros_message->basic_types_values;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: constants_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, Constants
      )()->data);
    size_t size = 3;
    auto array_ptr = ros_message->constants_values;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: defaults_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, Defaults
      )()->data);
    size_t size = 3;
    auto array_ptr = ros_message->defaults_values;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: bool_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->bool_values_default;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: byte_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->byte_values_default;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: char_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->char_values_default;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: float32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->float32_values_default;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: float64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->float64_values_default;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int8_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int8_values_default;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint8_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint8_values_default;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int16_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int16_values_default;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint16_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint16_values_default;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int32_values_default;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint32_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint32_values_default;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->int64_values_default;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint64_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->uint64_values_default;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: string_values_default
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_values_default;
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
        fprintf(stderr, "failed to assign string into field 'string_values_default'\n");
        return false;
      }
    }
  }

  // Field name: alignment_check
  {
    cdr >> ros_message->alignment_check;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__msg__Arrays(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Arrays__ros_msg_type * ros_message = static_cast<const _Arrays__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bool_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->bool_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name byte_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->byte_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name char_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->char_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float32_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float32_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float64_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float64_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int8_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int8_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint8_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint8_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int16_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int16_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint16_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint16_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int32_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int32_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint32_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint32_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int64_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int64_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint64_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint64_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name string_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->string_values;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name basic_types_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->basic_types_values;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__BasicTypes(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name constants_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->constants_values;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__Constants(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name defaults_values
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->defaults_values;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__Defaults(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name bool_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->bool_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name byte_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->byte_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name char_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->char_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float32_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float32_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float64_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->float64_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int8_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int8_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint8_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint8_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int16_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int16_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint16_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint16_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int32_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int32_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint32_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint32_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int64_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->int64_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint64_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->uint64_values_default;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name string_values_default
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->string_values_default;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name alignment_check
  {
    size_t item_size = sizeof(ros_message->alignment_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Arrays__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_test_msgs__msg__Arrays(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__msg__Arrays(
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

  // member: bool_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: byte_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: char_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: float32_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: float64_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: int8_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: uint8_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: int16_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: uint16_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: int32_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uint32_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: int64_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: uint64_values
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: string_values
  {
    size_t array_size = 3;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: basic_types_values
  {
    size_t array_size = 3;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__msg__BasicTypes(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: constants_values
  {
    size_t array_size = 3;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__msg__Constants(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: defaults_values
  {
    size_t array_size = 3;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_test_msgs__msg__Defaults(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: bool_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: byte_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: char_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: float32_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: float64_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: int8_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: uint8_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: int16_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: uint16_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: int32_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uint32_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: int64_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: uint64_values_default
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: string_values_default
  {
    size_t array_size = 3;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: alignment_check
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = test_msgs__msg__Arrays;
    is_plain =
      (
      offsetof(DataType, alignment_check) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Arrays__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_test_msgs__msg__Arrays(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Arrays = {
  "test_msgs::msg",
  "Arrays",
  _Arrays__cdr_serialize,
  _Arrays__cdr_deserialize,
  _Arrays__get_serialized_size,
  _Arrays__max_serialized_size
};

static rosidl_message_type_support_t _Arrays__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Arrays,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Arrays)() {
  return &_Arrays__type_support;
}

#if defined(__cplusplus)
}
#endif
