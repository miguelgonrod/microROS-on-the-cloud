// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from test_msgs:msg/WStrings.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/w_strings__rosidl_typesupport_fastrtps_cpp.hpp"
#include "test_msgs/msg/detail/w_strings__struct.hpp"

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

namespace test_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::msg::WStrings & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: wstring_value
  {
    std::wstring wstr;
    rosidl_typesupport_fastrtps_cpp::u16string_to_wstring(ros_message.wstring_value, wstr);
    cdr << wstr;
  }
  // Member: wstring_value_default1
  {
    std::wstring wstr;
    rosidl_typesupport_fastrtps_cpp::u16string_to_wstring(ros_message.wstring_value_default1, wstr);
    cdr << wstr;
  }
  // Member: wstring_value_default2
  {
    std::wstring wstr;
    rosidl_typesupport_fastrtps_cpp::u16string_to_wstring(ros_message.wstring_value_default2, wstr);
    cdr << wstr;
  }
  // Member: wstring_value_default3
  {
    std::wstring wstr;
    rosidl_typesupport_fastrtps_cpp::u16string_to_wstring(ros_message.wstring_value_default3, wstr);
    cdr << wstr;
  }
  // Member: array_of_wstrings
  {
    std::wstring wstr;
    for (size_t i = 0; i < 3; i++) {
      rosidl_typesupport_fastrtps_cpp::u16string_to_wstring(ros_message.array_of_wstrings[i], wstr);
      cdr << wstr;
    }
  }
  // Member: bounded_sequence_of_wstrings
  {
    size_t size = ros_message.bounded_sequence_of_wstrings.size();
    if (size > 3) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    std::wstring wstr;
    for (size_t i = 0; i < size; i++) {
      rosidl_typesupport_fastrtps_cpp::u16string_to_wstring(ros_message.bounded_sequence_of_wstrings[i], wstr);
      cdr << wstr;
    }
  }
  // Member: unbounded_sequence_of_wstrings
  {
    size_t size = ros_message.unbounded_sequence_of_wstrings.size();
    cdr << static_cast<uint32_t>(size);
    std::wstring wstr;
    for (size_t i = 0; i < size; i++) {
      rosidl_typesupport_fastrtps_cpp::u16string_to_wstring(ros_message.unbounded_sequence_of_wstrings[i], wstr);
      cdr << wstr;
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs::msg::WStrings & ros_message)
{
  // Member: wstring_value
  {
    std::wstring wstr;
    cdr >> wstr;
    bool succeeded = rosidl_typesupport_fastrtps_cpp::wstring_to_u16string(wstr, ros_message.wstring_value);
    if (!succeeded) {
      fprintf(stderr, "failed to create wstring from u16string\n");
      return false;
    }
  }

  // Member: wstring_value_default1
  {
    std::wstring wstr;
    cdr >> wstr;
    bool succeeded = rosidl_typesupport_fastrtps_cpp::wstring_to_u16string(wstr, ros_message.wstring_value_default1);
    if (!succeeded) {
      fprintf(stderr, "failed to create wstring from u16string\n");
      return false;
    }
  }

  // Member: wstring_value_default2
  {
    std::wstring wstr;
    cdr >> wstr;
    bool succeeded = rosidl_typesupport_fastrtps_cpp::wstring_to_u16string(wstr, ros_message.wstring_value_default2);
    if (!succeeded) {
      fprintf(stderr, "failed to create wstring from u16string\n");
      return false;
    }
  }

  // Member: wstring_value_default3
  {
    std::wstring wstr;
    cdr >> wstr;
    bool succeeded = rosidl_typesupport_fastrtps_cpp::wstring_to_u16string(wstr, ros_message.wstring_value_default3);
    if (!succeeded) {
      fprintf(stderr, "failed to create wstring from u16string\n");
      return false;
    }
  }

  // Member: array_of_wstrings
  {
    std::wstring wstr;
    for (size_t i = 0; i < 3; i++) {
      cdr >> wstr;
      bool succeeded = rosidl_typesupport_fastrtps_cpp::wstring_to_u16string(wstr, ros_message.array_of_wstrings[i]);
      if (!succeeded) {
        fprintf(stderr, "failed to create wstring from u16string\n");
        return false;
      }
    }
  }

  // Member: bounded_sequence_of_wstrings
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.bounded_sequence_of_wstrings.resize(size);
    std::wstring wstr;
    for (size_t i = 0; i < size; i++) {
      cdr >> wstr;
      bool succeeded = rosidl_typesupport_fastrtps_cpp::wstring_to_u16string(wstr, ros_message.bounded_sequence_of_wstrings[i]);
      if (!succeeded) {
        fprintf(stderr, "failed to create wstring from u16string\n");
        return false;
      }
    }
  }

  // Member: unbounded_sequence_of_wstrings
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.unbounded_sequence_of_wstrings.resize(size);
    std::wstring wstr;
    for (size_t i = 0; i < size; i++) {
      cdr >> wstr;
      bool succeeded = rosidl_typesupport_fastrtps_cpp::wstring_to_u16string(wstr, ros_message.unbounded_sequence_of_wstrings[i]);
      if (!succeeded) {
        fprintf(stderr, "failed to create wstring from u16string\n");
        return false;
      }
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::msg::WStrings & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: wstring_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    wchar_size *
    (ros_message.wstring_value.size() + 1);
  // Member: wstring_value_default1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    wchar_size *
    (ros_message.wstring_value_default1.size() + 1);
  // Member: wstring_value_default2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    wchar_size *
    (ros_message.wstring_value_default2.size() + 1);
  // Member: wstring_value_default3
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    wchar_size *
    (ros_message.wstring_value_default3.size() + 1);
  // Member: array_of_wstrings
  {
    size_t array_size = 3;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        (ros_message.array_of_wstrings[index].size() + 1);
    }
  }
  // Member: bounded_sequence_of_wstrings
  {
    size_t array_size = ros_message.bounded_sequence_of_wstrings.size();
    if (array_size > 3) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        (ros_message.bounded_sequence_of_wstrings[index].size() + 1);
    }
  }
  // Member: unbounded_sequence_of_wstrings
  {
    size_t array_size = ros_message.unbounded_sequence_of_wstrings.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        (ros_message.unbounded_sequence_of_wstrings[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
max_serialized_size_WStrings(
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


  // Member: wstring_value
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        1;
    }
  }

  // Member: wstring_value_default1
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        1;
    }
  }

  // Member: wstring_value_default2
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        1;
    }
  }

  // Member: wstring_value_default3
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        1;
    }
  }

  // Member: array_of_wstrings
  {
    size_t array_size = 3;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        1;
    }
  }

  // Member: bounded_sequence_of_wstrings
  {
    size_t array_size = 3;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        1;
    }
  }

  // Member: unbounded_sequence_of_wstrings
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
        wchar_size *
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = test_msgs::msg::WStrings;
    is_plain =
      (
      offsetof(DataType, unbounded_sequence_of_wstrings) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _WStrings__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const test_msgs::msg::WStrings *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WStrings__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::msg::WStrings *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WStrings__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::msg::WStrings *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WStrings__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_WStrings(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _WStrings__callbacks = {
  "test_msgs::msg",
  "WStrings",
  _WStrings__cdr_serialize,
  _WStrings__cdr_deserialize,
  _WStrings__get_serialized_size,
  _WStrings__max_serialized_size
};

static rosidl_message_type_support_t _WStrings__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WStrings__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace test_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_test_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::msg::WStrings>()
{
  return &test_msgs::msg::typesupport_fastrtps_cpp::_WStrings__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_msgs, msg, WStrings)() {
  return &test_msgs::msg::typesupport_fastrtps_cpp::_WStrings__handle;
}

#ifdef __cplusplus
}
#endif
