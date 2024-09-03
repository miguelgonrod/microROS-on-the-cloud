// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from statistics_msgs:msg/MetricsMessage.idl
// generated code does not contain a copyright notice
#include "statistics_msgs/msg/detail/metrics_message__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "statistics_msgs/msg/detail/metrics_message__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Time &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);

size_t
max_serialized_size_Time(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Time &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);

size_t
max_serialized_size_Time(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace statistics_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const statistics_msgs::msg::StatisticDataPoint &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  statistics_msgs::msg::StatisticDataPoint &);

size_t get_serialized_size(
  const statistics_msgs::msg::StatisticDataPoint &,
  size_t current_alignment);

size_t
max_serialized_size_StatisticDataPoint(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace statistics_msgs


namespace statistics_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_statistics_msgs
cdr_serialize(
  const statistics_msgs::msg::MetricsMessage & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: measurement_source_name
  rv = ucdr_serialize_string(cdr, ros_message.measurement_source_name.c_str());
  // Member: metrics_source
  rv = ucdr_serialize_string(cdr, ros_message.metrics_source.c_str());
  // Member: unit
  rv = ucdr_serialize_string(cdr, ros_message.unit.c_str());
  // Member: window_start
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.window_start,
    cdr);
  // Member: window_stop
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.window_stop,
    cdr);
  // Member: statistics
  {
    size_t size = ros_message.statistics.size();
    rv = ucdr_serialize_uint32_t(cdr, size);

    size_t i = 0;
    while (i < size && rv) {
      rv = statistics_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
        ros_message.statistics[i],
        cdr);
      i++;
    }
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_statistics_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  statistics_msgs::msg::MetricsMessage & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: measurement_source_name
  ros_message.measurement_source_name.resize(ros_message.measurement_source_name.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.measurement_source_name[0], ros_message.measurement_source_name.capacity());
  if (rv) {
    ros_message.measurement_source_name.resize(std::strlen(&ros_message.measurement_source_name[0]));
  }
  // Member: metrics_source
  ros_message.metrics_source.resize(ros_message.metrics_source.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.metrics_source[0], ros_message.metrics_source.capacity());
  if (rv) {
    ros_message.metrics_source.resize(std::strlen(&ros_message.metrics_source[0]));
  }
  // Member: unit
  ros_message.unit.resize(ros_message.unit.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.unit[0], ros_message.unit.capacity());
  if (rv) {
    ros_message.unit.resize(std::strlen(&ros_message.unit[0]));
  }
  // Member: window_start
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.window_start);
  // Member: window_stop
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.window_stop);
  // Member: statistics
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);
    ros_message.statistics.resize(size);

    size_t i = 0;
    while (i < size && rv) {
      rv = statistics_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
        cdr,
        ros_message.statistics[i]);
      i++;
    }
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_statistics_msgs
get_serialized_size(
  const statistics_msgs::msg::MetricsMessage & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: measurement_source_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.measurement_source_name.size() + 1;
  // Member: metrics_source
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.metrics_source.size() + 1;
  // Member: unit
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.unit.size() + 1;
  // Member: window_start
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.window_start,
    current_alignment);
  // Member: window_stop
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.window_stop,
    current_alignment);
  // Member: statistics
  {
  // Member is abstractsequence
    const size_t sequence_size = ros_message.statistics.size();
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for (size_t i = 0; i < sequence_size; i++) {
      const size_t item_size = statistics_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
        ros_message.statistics[i],
        current_alignment);
      current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_statistics_msgs
max_serialized_size_MetricsMessage(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: measurement_source_name
  *full_bounded = false;
  // Member: metrics_source
  *full_bounded = false;
  // Member: unit
  *full_bounded = false;
  // Member: window_start
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Time(
    full_bounded,
    current_alignment);
  // Member: window_stop
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Time(
    full_bounded,
    current_alignment);
  // Member: statistics
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static bool _MetricsMessage__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const statistics_msgs::msg::MetricsMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MetricsMessage__cdr_deserialize(
  ucdrBuffer * cdr,
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

static size_t _MetricsMessage__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const statistics_msgs::msg::MetricsMessage *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _MetricsMessage__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_MetricsMessage(&full_bounded, 0);
}

static message_type_support_callbacks_t _MetricsMessage__callbacks = {
  "statistics_msgs::msg",
  "MetricsMessage",
  _MetricsMessage__cdr_serialize,
  _MetricsMessage__cdr_deserialize,
  _MetricsMessage__get_serialized_size,
  _MetricsMessage__get_serialized_size_with_initial_alignment,
  _MetricsMessage__max_serialized_size
};

static rosidl_message_type_support_t _MetricsMessage__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_MetricsMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace statistics_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_statistics_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<statistics_msgs::msg::MetricsMessage>()
{
  return &statistics_msgs::msg::typesupport_microxrcedds_cpp::_MetricsMessage__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, statistics_msgs, msg, MetricsMessage)() {
  return &statistics_msgs::msg::typesupport_microxrcedds_cpp::_MetricsMessage__handle;
}

#ifdef __cplusplus
}
#endif
