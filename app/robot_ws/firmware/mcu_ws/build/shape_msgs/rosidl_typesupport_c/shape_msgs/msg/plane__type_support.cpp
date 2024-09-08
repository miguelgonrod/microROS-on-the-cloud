// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from shape_msgs:msg/Plane.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "shape_msgs/msg/detail/plane__struct.h"
#include "shape_msgs/msg/detail/plane__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace shape_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Plane_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Plane_type_support_ids_t;

static const _Plane_type_support_ids_t _Plane_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Plane_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Plane_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Plane_type_support_symbol_names_t _Plane_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, Plane)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, shape_msgs, msg, Plane)),
  }
};

typedef struct _Plane_type_support_data_t
{
  void * data[2];
} _Plane_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, Plane)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, shape_msgs, msg, Plane)();
#ifdef __cplusplus
}
#endif

static _Plane_type_support_data_t _Plane_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, Plane),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, shape_msgs, msg, Plane),
  }
};
#else
static _Plane_type_support_data_t _Plane_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Plane_message_typesupport_map = {
  2,
  "shape_msgs",
  &_Plane_message_typesupport_ids.typesupport_identifier[0],
  &_Plane_message_typesupport_symbol_names.symbol_name[0],
  &_Plane_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Plane_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Plane_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace shape_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, shape_msgs, msg, Plane)() {
  if (!::shape_msgs::msg::rosidl_typesupport_c::Plane_message_type_support_handle.typesupport_identifier) {
    ::shape_msgs::msg::rosidl_typesupport_c::Plane_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::shape_msgs::msg::rosidl_typesupport_c::Plane_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
