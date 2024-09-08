// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from std_msgs:msg/UInt64MultiArray.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "std_msgs/msg/detail/u_int64_multi_array__struct.h"
#include "std_msgs/msg/detail/u_int64_multi_array__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace std_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _UInt64MultiArray_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _UInt64MultiArray_type_support_ids_t;

static const _UInt64MultiArray_type_support_ids_t _UInt64MultiArray_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _UInt64MultiArray_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _UInt64MultiArray_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _UInt64MultiArray_type_support_symbol_names_t _UInt64MultiArray_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, UInt64MultiArray)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, UInt64MultiArray)),
  }
};

typedef struct _UInt64MultiArray_type_support_data_t
{
  void * data[2];
} _UInt64MultiArray_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, UInt64MultiArray)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, UInt64MultiArray)();
#ifdef __cplusplus
}
#endif

static _UInt64MultiArray_type_support_data_t _UInt64MultiArray_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, UInt64MultiArray),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_msgs, msg, UInt64MultiArray),
  }
};
#else
static _UInt64MultiArray_type_support_data_t _UInt64MultiArray_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _UInt64MultiArray_message_typesupport_map = {
  2,
  "std_msgs",
  &_UInt64MultiArray_message_typesupport_ids.typesupport_identifier[0],
  &_UInt64MultiArray_message_typesupport_symbol_names.symbol_name[0],
  &_UInt64MultiArray_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t UInt64MultiArray_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_UInt64MultiArray_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace std_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, std_msgs, msg, UInt64MultiArray)() {
  if (!::std_msgs::msg::rosidl_typesupport_c::UInt64MultiArray_message_type_support_handle.typesupport_identifier) {
    ::std_msgs::msg::rosidl_typesupport_c::UInt64MultiArray_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::std_msgs::msg::rosidl_typesupport_c::UInt64MultiArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
