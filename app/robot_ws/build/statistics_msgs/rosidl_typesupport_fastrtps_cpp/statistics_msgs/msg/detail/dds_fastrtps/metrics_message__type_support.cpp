// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from statistics_msgs:msg/MetricsMessage.idl
// generated code does not contain a copyright notice
#include "statistics_msgs/msg/detail/metrics_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "statistics_msgs/msg/detail/metrics_message__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces

// functions for builtin_interfaces::msg::Time already declared above

namespace statistics_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const statistics_msgs::msg::StatisticDataPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  statistics_msgs::msg::StatisticDataPoint &);
size_t get_serialized_size(
  const statistics_msgs::msg::StatisticDataPoint &,
  size_t current_alignment);
size_t
max_serialized_size_StatisticDataPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace statistics_msgs


namespace statistics_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_statistics_msgs
cdr_serialize(
  const statistics_msgs::msg::MetricsMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: measurement_source_name
  cdr << ros_message.measurement_source_name;
  // Member: metrics_source
  cdr << ros_message.metrics_source;
  // Member: unit
  cdr << ros_message.unit;
  // Member: window_start
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.window_start,
    cdr);
  // Member: window_stop
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.window_stop,
    cdr);
  // Member: statistics
  {
    size_t size = ros_message.statistics.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      statistics_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.statistics[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_statistics_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  statistics_msgs::msg::MetricsMessage & ros_message)
{
  // Member: measurement_source_name
  cdr >> ros_message.measurement_source_name;

  // Member: metrics_source
  cdr >> ros_message.metrics_source;

  // Member: unit
  cdr >> ros_message.unit;

  // Member: window_start
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.window_start);

  // Member: window_stop
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.window_stop);

  // Member: statistics
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.statistics.resize(size);
    for (size_t i = 0; i < size; i++) {
      statistics_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.statistics[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_statistics_msgs
get_serialized_size(
  const statistics_msgs::msg::MetricsMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: measurement_source_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.measurement_source_name.size() + 1);
  // Member: metrics_source
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.metrics_source.size() + 1);
  // Member: unit
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.unit.size() + 1);
  // Member: window_start

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.window_start, current_alignment);
  // Member: window_stop

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.window_stop, current_alignment);
  // Member: statistics
  {
    size_t array_size = ros_message.statistics.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        statistics_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.statistics[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_statistics_msgs
max_serialized_size_MetricsMessage(
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


  // Member: measurement_source_name
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

  // Member: metrics_source
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

  // Member: unit
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

  // Member: window_start
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: window_stop
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: statistics
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
        statistics_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_StatisticDataPoint(
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
    using DataType = statistics_msgs::msg::MetricsMessage;
    is_plain =
      (
      offsetof(DataType, statistics) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MetricsMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const statistics_msgs::msg::MetricsMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MetricsMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<statistics_msgs::msg::MetricsMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MetricsMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const statistics_msgs::msg::MetricsMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MetricsMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MetricsMessage(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MetricsMessage__callbacks = {
  "statistics_msgs::msg",
  "MetricsMessage",
  _MetricsMessage__cdr_serialize,
  _MetricsMessage__cdr_deserialize,
  _MetricsMessage__get_serialized_size,
  _MetricsMessage__max_serialized_size
};

static rosidl_message_type_support_t _MetricsMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MetricsMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace statistics_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_statistics_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<statistics_msgs::msg::MetricsMessage>()
{
  return &statistics_msgs::msg::typesupport_fastrtps_cpp::_MetricsMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, statistics_msgs, msg, MetricsMessage)() {
  return &statistics_msgs::msg::typesupport_fastrtps_cpp::_MetricsMessage__handle;
}

#ifdef __cplusplus
}
#endif
