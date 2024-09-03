// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from complex_msgs:msg/MultiStringTest.idl
// generated code does not contain a copyright notice
#include "complex_msgs/msg/detail/multi_string_test__rosidl_typesupport_fastrtps_cpp.hpp"
#include "complex_msgs/msg/detail/multi_string_test__struct.hpp"

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

namespace complex_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_complex_msgs
cdr_serialize(
  const complex_msgs::msg::MultiStringTest & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: data1
  cdr << ros_message.data1;
  // Member: data2
  cdr << ros_message.data2;
  // Member: data3
  cdr << ros_message.data3;
  // Member: data4
  cdr << ros_message.data4;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_complex_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  complex_msgs::msg::MultiStringTest & ros_message)
{
  // Member: data1
  cdr >> ros_message.data1;

  // Member: data2
  cdr >> ros_message.data2;

  // Member: data3
  cdr >> ros_message.data3;

  // Member: data4
  cdr >> ros_message.data4;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_complex_msgs
get_serialized_size(
  const complex_msgs::msg::MultiStringTest & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: data1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.data1.size() + 1);
  // Member: data2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.data2.size() + 1);
  // Member: data3
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.data3.size() + 1);
  // Member: data4
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.data4.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_complex_msgs
max_serialized_size_MultiStringTest(
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


  // Member: data1
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

  // Member: data2
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

  // Member: data3
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

  // Member: data4
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
    using DataType = complex_msgs::msg::MultiStringTest;
    is_plain =
      (
      offsetof(DataType, data4) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MultiStringTest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const complex_msgs::msg::MultiStringTest *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MultiStringTest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<complex_msgs::msg::MultiStringTest *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MultiStringTest__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const complex_msgs::msg::MultiStringTest *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MultiStringTest__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MultiStringTest(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MultiStringTest__callbacks = {
  "complex_msgs::msg",
  "MultiStringTest",
  _MultiStringTest__cdr_serialize,
  _MultiStringTest__cdr_deserialize,
  _MultiStringTest__get_serialized_size,
  _MultiStringTest__max_serialized_size
};

static rosidl_message_type_support_t _MultiStringTest__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MultiStringTest__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace complex_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_complex_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<complex_msgs::msg::MultiStringTest>()
{
  return &complex_msgs::msg::typesupport_fastrtps_cpp::_MultiStringTest__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, complex_msgs, msg, MultiStringTest)() {
  return &complex_msgs::msg::typesupport_fastrtps_cpp::_MultiStringTest__handle;
}

#ifdef __cplusplus
}
#endif
