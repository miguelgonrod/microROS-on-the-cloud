// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from sensor_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "sensor_msgs/msg/detail/battery_state__struct.h"
#include "sensor_msgs/msg/detail/battery_state__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace sensor_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _BatteryState_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _BatteryState_type_support_ids_t;

static const _BatteryState_type_support_ids_t _BatteryState_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _BatteryState_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _BatteryState_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatteryState_type_support_symbol_names_t _BatteryState_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, BatteryState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, BatteryState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, msg, BatteryState)),
  }
};

typedef struct _BatteryState_type_support_data_t
{
  void * data[3];
} _BatteryState_type_support_data_t;

static _BatteryState_type_support_data_t _BatteryState_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatteryState_message_typesupport_map = {
  3,
  "sensor_msgs",
  &_BatteryState_message_typesupport_ids.typesupport_identifier[0],
  &_BatteryState_message_typesupport_symbol_names.symbol_name[0],
  &_BatteryState_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatteryState_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatteryState_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace sensor_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sensor_msgs, msg, BatteryState)() {
  return &::sensor_msgs::msg::rosidl_typesupport_c::BatteryState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
