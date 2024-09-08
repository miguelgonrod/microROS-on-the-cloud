// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from test_msgs:msg/MultiNested.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "test_msgs/msg/detail/multi_nested__struct.h"
#include "test_msgs/msg/detail/multi_nested__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace test_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _MultiNested_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MultiNested_type_support_ids_t;

static const _MultiNested_type_support_ids_t _MultiNested_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _MultiNested_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MultiNested_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MultiNested_type_support_symbol_names_t _MultiNested_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, MultiNested)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, MultiNested)),
  }
};

typedef struct _MultiNested_type_support_data_t
{
  void * data[2];
} _MultiNested_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, MultiNested)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, MultiNested)();
#ifdef __cplusplus
}
#endif

static _MultiNested_type_support_data_t _MultiNested_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, MultiNested),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, MultiNested),
  }
};
#else
static _MultiNested_type_support_data_t _MultiNested_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _MultiNested_message_typesupport_map = {
  2,
  "test_msgs",
  &_MultiNested_message_typesupport_ids.typesupport_identifier[0],
  &_MultiNested_message_typesupport_symbol_names.symbol_name[0],
  &_MultiNested_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t MultiNested_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MultiNested_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, msg, MultiNested)() {
  if (!::test_msgs::msg::rosidl_typesupport_c::MultiNested_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::msg::rosidl_typesupport_c::MultiNested_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::msg::rosidl_typesupport_c::MultiNested_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
