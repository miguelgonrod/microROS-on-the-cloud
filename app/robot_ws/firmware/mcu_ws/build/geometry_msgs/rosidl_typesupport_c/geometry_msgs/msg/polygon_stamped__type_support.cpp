// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from geometry_msgs:msg/PolygonStamped.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "geometry_msgs/msg/detail/polygon_stamped__struct.h"
#include "geometry_msgs/msg/detail/polygon_stamped__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace geometry_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _PolygonStamped_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PolygonStamped_type_support_ids_t;

static const _PolygonStamped_type_support_ids_t _PolygonStamped_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _PolygonStamped_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PolygonStamped_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PolygonStamped_type_support_symbol_names_t _PolygonStamped_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PolygonStamped)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, PolygonStamped)),
  }
};

typedef struct _PolygonStamped_type_support_data_t
{
  void * data[2];
} _PolygonStamped_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PolygonStamped)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, PolygonStamped)();
#ifdef __cplusplus
}
#endif

static _PolygonStamped_type_support_data_t _PolygonStamped_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PolygonStamped),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, PolygonStamped),
  }
};
#else
static _PolygonStamped_type_support_data_t _PolygonStamped_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _PolygonStamped_message_typesupport_map = {
  2,
  "geometry_msgs",
  &_PolygonStamped_message_typesupport_ids.typesupport_identifier[0],
  &_PolygonStamped_message_typesupport_symbol_names.symbol_name[0],
  &_PolygonStamped_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t PolygonStamped_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PolygonStamped_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace geometry_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, geometry_msgs, msg, PolygonStamped)() {
  if (!::geometry_msgs::msg::rosidl_typesupport_c::PolygonStamped_message_type_support_handle.typesupport_identifier) {
    ::geometry_msgs::msg::rosidl_typesupport_c::PolygonStamped_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::geometry_msgs::msg::rosidl_typesupport_c::PolygonStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
