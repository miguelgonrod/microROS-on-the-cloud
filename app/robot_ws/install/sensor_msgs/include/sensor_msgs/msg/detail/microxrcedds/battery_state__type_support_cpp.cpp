// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice
#include "sensor_msgs/msg/detail/battery_state__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "sensor_msgs/msg/detail/battery_state__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  std_msgs::msg::Header &);

size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);

size_t
max_serialized_size_Header(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace std_msgs


namespace sensor_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_serialize(
  const sensor_msgs::msg::BatteryState & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: voltage
  rv = ucdr_serialize_float(cdr, ros_message.voltage);
  // Member: temperature
  rv = ucdr_serialize_float(cdr, ros_message.temperature);
  // Member: current
  rv = ucdr_serialize_float(cdr, ros_message.current);
  // Member: charge
  rv = ucdr_serialize_float(cdr, ros_message.charge);
  // Member: capacity
  rv = ucdr_serialize_float(cdr, ros_message.capacity);
  // Member: design_capacity
  rv = ucdr_serialize_float(cdr, ros_message.design_capacity);
  // Member: percentage
  rv = ucdr_serialize_float(cdr, ros_message.percentage);
  // Member: power_supply_status
  rv = ucdr_serialize_uint8_t(cdr, ros_message.power_supply_status);
  // Member: power_supply_health
  rv = ucdr_serialize_uint8_t(cdr, ros_message.power_supply_health);
  // Member: power_supply_technology
  rv = ucdr_serialize_uint8_t(cdr, ros_message.power_supply_technology);
  // Member: present
  rv = ucdr_serialize_bool(cdr, ros_message.present);
  // Member: cell_voltage
  {
    size_t size = ros_message.cell_voltage.size();
    rv = ucdr_serialize_sequence_float(cdr, &ros_message.cell_voltage[0], size);
  }
  // Member: cell_temperature
  {
    size_t size = ros_message.cell_temperature.size();
    rv = ucdr_serialize_sequence_float(cdr, &ros_message.cell_temperature[0], size);
  }
  // Member: location
  rv = ucdr_serialize_string(cdr, ros_message.location.c_str());
  // Member: serial_number
  rv = ucdr_serialize_string(cdr, ros_message.serial_number.c_str());

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  sensor_msgs::msg::BatteryState & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = std_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: voltage
  rv = ucdr_deserialize_float(cdr, &ros_message.voltage);
  // Member: temperature
  rv = ucdr_deserialize_float(cdr, &ros_message.temperature);
  // Member: current
  rv = ucdr_deserialize_float(cdr, &ros_message.current);
  // Member: charge
  rv = ucdr_deserialize_float(cdr, &ros_message.charge);
  // Member: capacity
  rv = ucdr_deserialize_float(cdr, &ros_message.capacity);
  // Member: design_capacity
  rv = ucdr_deserialize_float(cdr, &ros_message.design_capacity);
  // Member: percentage
  rv = ucdr_deserialize_float(cdr, &ros_message.percentage);
  // Member: power_supply_status
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.power_supply_status);
  // Member: power_supply_health
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.power_supply_health);
  // Member: power_supply_technology
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.power_supply_technology);
  // Member: present
  rv = ucdr_deserialize_bool(cdr, &ros_message.present);
  // Member: cell_voltage
  {
    uint32_t size;
    const size_t capacity = ros_message.cell_voltage.capacity();
    ros_message.cell_voltage.resize(capacity);
    rv = ucdr_deserialize_sequence_float(cdr, &ros_message.cell_voltage[0], capacity, &size);
    if (rv) {
      ros_message.cell_voltage.resize(size);
    }
  }
  // Member: cell_temperature
  {
    uint32_t size;
    const size_t capacity = ros_message.cell_temperature.capacity();
    ros_message.cell_temperature.resize(capacity);
    rv = ucdr_deserialize_sequence_float(cdr, &ros_message.cell_temperature[0], capacity, &size);
    if (rv) {
      ros_message.cell_temperature.resize(size);
    }
  }
  // Member: location
  ros_message.location.resize(ros_message.location.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.location[0], ros_message.location.capacity());
  if (rv) {
    ros_message.location.resize(std::strlen(&ros_message.location[0]));
  }
  // Member: serial_number
  ros_message.serial_number.resize(ros_message.serial_number.capacity());
  rv = ucdr_deserialize_string(cdr, &ros_message.serial_number[0], ros_message.serial_number.capacity());
  if (rv) {
    ros_message.serial_number.resize(std::strlen(&ros_message.serial_number[0]));
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
get_serialized_size(
  const sensor_msgs::msg::BatteryState & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: voltage
  {
    const size_t item_size = sizeof(ros_message.voltage);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: temperature
  {
    const size_t item_size = sizeof(ros_message.temperature);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: current
  {
    const size_t item_size = sizeof(ros_message.current);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: charge
  {
    const size_t item_size = sizeof(ros_message.charge);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: capacity
  {
    const size_t item_size = sizeof(ros_message.capacity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: design_capacity
  {
    const size_t item_size = sizeof(ros_message.design_capacity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: percentage
  {
    const size_t item_size = sizeof(ros_message.percentage);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: power_supply_status
  {
    const size_t item_size = sizeof(ros_message.power_supply_status);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: power_supply_health
  {
    const size_t item_size = sizeof(ros_message.power_supply_health);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: power_supply_technology
  {
    const size_t item_size = sizeof(ros_message.power_supply_technology);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: present
  {
    const size_t item_size = sizeof(ros_message.present);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: cell_voltage
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.cell_voltage.size();
    size_t item_size = sizeof(ros_message.cell_voltage[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: cell_temperature
  {
  // Member is abstractsequence
    size_t sequence_size = ros_message.cell_temperature.size();
    size_t item_size = sizeof(ros_message.cell_temperature[0]);
    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
    current_alignment += ucdr_alignment(current_alignment, item_size) + (sequence_size * item_size);
  }
  // Member: location
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.location.size() + 1;
  // Member: serial_number
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message.serial_number.size() + 1;

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_sensor_msgs
max_serialized_size_BatteryState(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += std_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_Header(
    full_bounded,
    current_alignment);
  // Member: voltage
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: temperature
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: current
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: charge
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: capacity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: design_capacity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: percentage
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: power_supply_status
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: power_supply_health
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: power_supply_technology
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: present
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: cell_voltage
  {
    *full_bounded = false;
  }
  // Member: cell_temperature
  {
    *full_bounded = false;
  }
  // Member: location
  *full_bounded = false;
  // Member: serial_number
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static bool _BatteryState__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::BatteryState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BatteryState__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensor_msgs::msg::BatteryState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BatteryState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::BatteryState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BatteryState__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const sensor_msgs::msg::BatteryState *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _BatteryState__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_BatteryState(&full_bounded, 0);
}

static message_type_support_callbacks_t _BatteryState__callbacks = {
  "sensor_msgs::msg",
  "BatteryState",
  _BatteryState__cdr_serialize,
  _BatteryState__cdr_deserialize,
  _BatteryState__get_serialized_size,
  _BatteryState__get_serialized_size_with_initial_alignment,
  _BatteryState__max_serialized_size
};

static rosidl_message_type_support_t _BatteryState__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_BatteryState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace sensor_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_sensor_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<sensor_msgs::msg::BatteryState>()
{
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_BatteryState__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, sensor_msgs, msg, BatteryState)() {
  return &sensor_msgs::msg::typesupport_microxrcedds_cpp::_BatteryState__handle;
}

#ifdef __cplusplus
}
#endif
