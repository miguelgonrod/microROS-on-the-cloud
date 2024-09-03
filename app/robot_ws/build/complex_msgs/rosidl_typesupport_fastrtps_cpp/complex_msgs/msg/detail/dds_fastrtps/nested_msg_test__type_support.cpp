// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from complex_msgs:msg/NestedMsgTest.idl
// generated code does not contain a copyright notice
#include "complex_msgs/msg/detail/nested_msg_test__rosidl_typesupport_fastrtps_cpp.hpp"
#include "complex_msgs/msg/detail/nested_msg_test__struct.hpp"

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
bool cdr_serialize(
  const complex_msgs::msg::MultiStringTest &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  complex_msgs::msg::MultiStringTest &);
size_t get_serialized_size(
  const complex_msgs::msg::MultiStringTest &,
  size_t current_alignment);
size_t
max_serialized_size_MultiStringTest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace complex_msgs


namespace complex_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_complex_msgs
cdr_serialize(
  const complex_msgs::msg::NestedMsgTest & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: data1
  cdr << (ros_message.data1 ? true : false);
  // Member: data2
  cdr << ros_message.data2;
  // Member: data3
  cdr << ros_message.data3;
  // Member: data4
  cdr << ros_message.data4;
  // Member: data5
  cdr << ros_message.data5;
  // Member: data6
  cdr << ros_message.data6;
  // Member: data7
  cdr << ros_message.data7;
  // Member: data8
  cdr << ros_message.data8;
  // Member: data9
  cdr << ros_message.data9;
  // Member: data10
  cdr << ros_message.data10;
  // Member: data11
  cdr << ros_message.data11;
  // Member: data12
  cdr << ros_message.data12;
  // Member: data13
  cdr << ros_message.data13;
  // Member: data14
  complex_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.data14,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_complex_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  complex_msgs::msg::NestedMsgTest & ros_message)
{
  // Member: data1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.data1 = tmp ? true : false;
  }

  // Member: data2
  cdr >> ros_message.data2;

  // Member: data3
  cdr >> ros_message.data3;

  // Member: data4
  cdr >> ros_message.data4;

  // Member: data5
  cdr >> ros_message.data5;

  // Member: data6
  cdr >> ros_message.data6;

  // Member: data7
  cdr >> ros_message.data7;

  // Member: data8
  cdr >> ros_message.data8;

  // Member: data9
  cdr >> ros_message.data9;

  // Member: data10
  cdr >> ros_message.data10;

  // Member: data11
  cdr >> ros_message.data11;

  // Member: data12
  cdr >> ros_message.data12;

  // Member: data13
  cdr >> ros_message.data13;

  // Member: data14
  complex_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.data14);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_complex_msgs
get_serialized_size(
  const complex_msgs::msg::NestedMsgTest & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: data1
  {
    size_t item_size = sizeof(ros_message.data1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data2
  {
    size_t item_size = sizeof(ros_message.data2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data3
  {
    size_t item_size = sizeof(ros_message.data3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data4
  {
    size_t item_size = sizeof(ros_message.data4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data5
  {
    size_t item_size = sizeof(ros_message.data5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data6
  {
    size_t item_size = sizeof(ros_message.data6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data7
  {
    size_t item_size = sizeof(ros_message.data7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data8
  {
    size_t item_size = sizeof(ros_message.data8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data9
  {
    size_t item_size = sizeof(ros_message.data9);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data10
  {
    size_t item_size = sizeof(ros_message.data10);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data11
  {
    size_t item_size = sizeof(ros_message.data11);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data12
  {
    size_t item_size = sizeof(ros_message.data12);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data13
  {
    size_t item_size = sizeof(ros_message.data13);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data14

  current_alignment +=
    complex_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.data14, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_complex_msgs
max_serialized_size_NestedMsgTest(
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

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: data2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: data3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: data4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: data5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: data6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: data7
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: data8
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: data9
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: data10
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: data11
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: data12
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: data13
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: data14
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        complex_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MultiStringTest(
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
    using DataType = complex_msgs::msg::NestedMsgTest;
    is_plain =
      (
      offsetof(DataType, data14) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _NestedMsgTest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const complex_msgs::msg::NestedMsgTest *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NestedMsgTest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<complex_msgs::msg::NestedMsgTest *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NestedMsgTest__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const complex_msgs::msg::NestedMsgTest *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NestedMsgTest__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_NestedMsgTest(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _NestedMsgTest__callbacks = {
  "complex_msgs::msg",
  "NestedMsgTest",
  _NestedMsgTest__cdr_serialize,
  _NestedMsgTest__cdr_deserialize,
  _NestedMsgTest__get_serialized_size,
  _NestedMsgTest__max_serialized_size
};

static rosidl_message_type_support_t _NestedMsgTest__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NestedMsgTest__callbacks,
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
get_message_type_support_handle<complex_msgs::msg::NestedMsgTest>()
{
  return &complex_msgs::msg::typesupport_fastrtps_cpp::_NestedMsgTest__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, complex_msgs, msg, NestedMsgTest)() {
  return &complex_msgs::msg::typesupport_fastrtps_cpp::_NestedMsgTest__handle;
}

#ifdef __cplusplus
}
#endif
