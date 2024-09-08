// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from diagnostic_msgs:msg/DiagnosticArray.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "diagnostic_msgs/msg/detail/diagnostic_array__struct.h"
#include "diagnostic_msgs/msg/detail/diagnostic_array__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace diagnostic_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _DiagnosticArray_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DiagnosticArray_type_support_ids_t;

static const _DiagnosticArray_type_support_ids_t _DiagnosticArray_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _DiagnosticArray_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DiagnosticArray_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DiagnosticArray_type_support_symbol_names_t _DiagnosticArray_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticArray)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, msg, DiagnosticArray)),
  }
};

typedef struct _DiagnosticArray_type_support_data_t
{
  void * data[2];
} _DiagnosticArray_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticArray)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, msg, DiagnosticArray)();
#ifdef __cplusplus
}
#endif

static _DiagnosticArray_type_support_data_t _DiagnosticArray_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticArray),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, diagnostic_msgs, msg, DiagnosticArray),
  }
};
#else
static _DiagnosticArray_type_support_data_t _DiagnosticArray_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _DiagnosticArray_message_typesupport_map = {
  2,
  "diagnostic_msgs",
  &_DiagnosticArray_message_typesupport_ids.typesupport_identifier[0],
  &_DiagnosticArray_message_typesupport_symbol_names.symbol_name[0],
  &_DiagnosticArray_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t DiagnosticArray_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DiagnosticArray_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace diagnostic_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, diagnostic_msgs, msg, DiagnosticArray)() {
  if (!::diagnostic_msgs::msg::rosidl_typesupport_c::DiagnosticArray_message_type_support_handle.typesupport_identifier) {
    ::diagnostic_msgs::msg::rosidl_typesupport_c::DiagnosticArray_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::diagnostic_msgs::msg::rosidl_typesupport_c::DiagnosticArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
