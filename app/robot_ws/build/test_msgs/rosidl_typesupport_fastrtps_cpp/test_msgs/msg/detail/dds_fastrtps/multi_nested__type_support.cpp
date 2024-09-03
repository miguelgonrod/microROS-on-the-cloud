// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from test_msgs:msg/MultiNested.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/multi_nested__rosidl_typesupport_fastrtps_cpp.hpp"
#include "test_msgs/msg/detail/multi_nested__struct.hpp"

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
bool cdr_serialize(
  const test_msgs::msg::Arrays &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  test_msgs::msg::Arrays &);
size_t get_serialized_size(
  const test_msgs::msg::Arrays &,
  size_t current_alignment);
size_t
max_serialized_size_Arrays(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace test_msgs

namespace test_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const test_msgs::msg::BoundedSequences &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  test_msgs::msg::BoundedSequences &);
size_t get_serialized_size(
  const test_msgs::msg::BoundedSequences &,
  size_t current_alignment);
size_t
max_serialized_size_BoundedSequences(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace test_msgs

namespace test_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const test_msgs::msg::UnboundedSequences &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  test_msgs::msg::UnboundedSequences &);
size_t get_serialized_size(
  const test_msgs::msg::UnboundedSequences &,
  size_t current_alignment);
size_t
max_serialized_size_UnboundedSequences(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace test_msgs

// functions for test_msgs::msg::Arrays already declared above

// functions for test_msgs::msg::BoundedSequences already declared above

// functions for test_msgs::msg::UnboundedSequences already declared above

// functions for test_msgs::msg::Arrays already declared above

// functions for test_msgs::msg::BoundedSequences already declared above

// functions for test_msgs::msg::UnboundedSequences already declared above


namespace test_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
cdr_serialize(
  const test_msgs::msg::MultiNested & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: array_of_arrays
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.array_of_arrays[i],
        cdr);
    }
  }
  // Member: array_of_bounded_sequences
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.array_of_bounded_sequences[i],
        cdr);
    }
  }
  // Member: array_of_unbounded_sequences
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.array_of_unbounded_sequences[i],
        cdr);
    }
  }
  // Member: bounded_sequence_of_arrays
  {
    size_t size = ros_message.bounded_sequence_of_arrays.size();
    if (size > 3) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.bounded_sequence_of_arrays[i],
        cdr);
    }
  }
  // Member: bounded_sequence_of_bounded_sequences
  {
    size_t size = ros_message.bounded_sequence_of_bounded_sequences.size();
    if (size > 3) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.bounded_sequence_of_bounded_sequences[i],
        cdr);
    }
  }
  // Member: bounded_sequence_of_unbounded_sequences
  {
    size_t size = ros_message.bounded_sequence_of_unbounded_sequences.size();
    if (size > 3) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.bounded_sequence_of_unbounded_sequences[i],
        cdr);
    }
  }
  // Member: unbounded_sequence_of_arrays
  {
    size_t size = ros_message.unbounded_sequence_of_arrays.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.unbounded_sequence_of_arrays[i],
        cdr);
    }
  }
  // Member: unbounded_sequence_of_bounded_sequences
  {
    size_t size = ros_message.unbounded_sequence_of_bounded_sequences.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.unbounded_sequence_of_bounded_sequences[i],
        cdr);
    }
  }
  // Member: unbounded_sequence_of_unbounded_sequences
  {
    size_t size = ros_message.unbounded_sequence_of_unbounded_sequences.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.unbounded_sequence_of_unbounded_sequences[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  test_msgs::msg::MultiNested & ros_message)
{
  // Member: array_of_arrays
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.array_of_arrays[i]);
    }
  }

  // Member: array_of_bounded_sequences
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.array_of_bounded_sequences[i]);
    }
  }

  // Member: array_of_unbounded_sequences
  {
    for (size_t i = 0; i < 3; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.array_of_unbounded_sequences[i]);
    }
  }

  // Member: bounded_sequence_of_arrays
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.bounded_sequence_of_arrays.resize(size);
    for (size_t i = 0; i < size; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.bounded_sequence_of_arrays[i]);
    }
  }

  // Member: bounded_sequence_of_bounded_sequences
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.bounded_sequence_of_bounded_sequences.resize(size);
    for (size_t i = 0; i < size; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.bounded_sequence_of_bounded_sequences[i]);
    }
  }

  // Member: bounded_sequence_of_unbounded_sequences
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.bounded_sequence_of_unbounded_sequences.resize(size);
    for (size_t i = 0; i < size; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.bounded_sequence_of_unbounded_sequences[i]);
    }
  }

  // Member: unbounded_sequence_of_arrays
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.unbounded_sequence_of_arrays.resize(size);
    for (size_t i = 0; i < size; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.unbounded_sequence_of_arrays[i]);
    }
  }

  // Member: unbounded_sequence_of_bounded_sequences
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.unbounded_sequence_of_bounded_sequences.resize(size);
    for (size_t i = 0; i < size; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.unbounded_sequence_of_bounded_sequences[i]);
    }
  }

  // Member: unbounded_sequence_of_unbounded_sequences
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.unbounded_sequence_of_unbounded_sequences.resize(size);
    for (size_t i = 0; i < size; i++) {
      test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.unbounded_sequence_of_unbounded_sequences[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
get_serialized_size(
  const test_msgs::msg::MultiNested & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: array_of_arrays
  {
    size_t array_size = 3;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.array_of_arrays[index], current_alignment);
    }
  }
  // Member: array_of_bounded_sequences
  {
    size_t array_size = 3;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.array_of_bounded_sequences[index], current_alignment);
    }
  }
  // Member: array_of_unbounded_sequences
  {
    size_t array_size = 3;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.array_of_unbounded_sequences[index], current_alignment);
    }
  }
  // Member: bounded_sequence_of_arrays
  {
    size_t array_size = ros_message.bounded_sequence_of_arrays.size();
    if (array_size > 3) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.bounded_sequence_of_arrays[index], current_alignment);
    }
  }
  // Member: bounded_sequence_of_bounded_sequences
  {
    size_t array_size = ros_message.bounded_sequence_of_bounded_sequences.size();
    if (array_size > 3) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.bounded_sequence_of_bounded_sequences[index], current_alignment);
    }
  }
  // Member: bounded_sequence_of_unbounded_sequences
  {
    size_t array_size = ros_message.bounded_sequence_of_unbounded_sequences.size();
    if (array_size > 3) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.bounded_sequence_of_unbounded_sequences[index], current_alignment);
    }
  }
  // Member: unbounded_sequence_of_arrays
  {
    size_t array_size = ros_message.unbounded_sequence_of_arrays.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.unbounded_sequence_of_arrays[index], current_alignment);
    }
  }
  // Member: unbounded_sequence_of_bounded_sequences
  {
    size_t array_size = ros_message.unbounded_sequence_of_bounded_sequences.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.unbounded_sequence_of_bounded_sequences[index], current_alignment);
    }
  }
  // Member: unbounded_sequence_of_unbounded_sequences
  {
    size_t array_size = ros_message.unbounded_sequence_of_unbounded_sequences.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.unbounded_sequence_of_unbounded_sequences[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_msgs
max_serialized_size_MultiNested(
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


  // Member: array_of_arrays
  {
    size_t array_size = 3;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Arrays(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: array_of_bounded_sequences
  {
    size_t array_size = 3;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BoundedSequences(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: array_of_unbounded_sequences
  {
    size_t array_size = 3;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UnboundedSequences(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: bounded_sequence_of_arrays
  {
    size_t array_size = 3;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Arrays(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: bounded_sequence_of_bounded_sequences
  {
    size_t array_size = 3;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BoundedSequences(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: bounded_sequence_of_unbounded_sequences
  {
    size_t array_size = 3;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UnboundedSequences(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: unbounded_sequence_of_arrays
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
        test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Arrays(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: unbounded_sequence_of_bounded_sequences
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
        test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BoundedSequences(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: unbounded_sequence_of_unbounded_sequences
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
        test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UnboundedSequences(
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
    using DataType = test_msgs::msg::MultiNested;
    is_plain =
      (
      offsetof(DataType, unbounded_sequence_of_unbounded_sequences) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MultiNested__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const test_msgs::msg::MultiNested *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MultiNested__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_msgs::msg::MultiNested *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MultiNested__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_msgs::msg::MultiNested *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MultiNested__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MultiNested(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MultiNested__callbacks = {
  "test_msgs::msg",
  "MultiNested",
  _MultiNested__cdr_serialize,
  _MultiNested__cdr_deserialize,
  _MultiNested__get_serialized_size,
  _MultiNested__max_serialized_size
};

static rosidl_message_type_support_t _MultiNested__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MultiNested__callbacks,
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
get_message_type_support_handle<test_msgs::msg::MultiNested>()
{
  return &test_msgs::msg::typesupport_fastrtps_cpp::_MultiNested__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_msgs, msg, MultiNested)() {
  return &test_msgs::msg::typesupport_fastrtps_cpp::_MultiNested__handle;
}

#ifdef __cplusplus
}
#endif
