// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from test_msgs:srv/BasicTypes.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "test_msgs/srv/detail/basic_types__struct.h"
#include "test_msgs/srv/detail/basic_types__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace test_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _BasicTypes_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BasicTypes_Request_type_support_ids_t;

static const _BasicTypes_Request_type_support_ids_t _BasicTypes_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _BasicTypes_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BasicTypes_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BasicTypes_Request_type_support_symbol_names_t _BasicTypes_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, BasicTypes_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, BasicTypes_Request)),
  }
};

typedef struct _BasicTypes_Request_type_support_data_t
{
  void * data[2];
} _BasicTypes_Request_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, BasicTypes_Request)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, BasicTypes_Request)();
#ifdef __cplusplus
}
#endif

static _BasicTypes_Request_type_support_data_t _BasicTypes_Request_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, BasicTypes_Request),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, BasicTypes_Request),
  }
};
#else
static _BasicTypes_Request_type_support_data_t _BasicTypes_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _BasicTypes_Request_message_typesupport_map = {
  2,
  "test_msgs",
  &_BasicTypes_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BasicTypes_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BasicTypes_Request_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t BasicTypes_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BasicTypes_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, srv, BasicTypes_Request)() {
  if (!::test_msgs::srv::rosidl_typesupport_c::BasicTypes_Request_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::srv::rosidl_typesupport_c::BasicTypes_Request_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::srv::rosidl_typesupport_c::BasicTypes_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/srv/detail/basic_types__struct.h"
// already included above
// #include "test_msgs/srv/detail/basic_types__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace test_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _BasicTypes_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BasicTypes_Response_type_support_ids_t;

static const _BasicTypes_Response_type_support_ids_t _BasicTypes_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _BasicTypes_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BasicTypes_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BasicTypes_Response_type_support_symbol_names_t _BasicTypes_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, BasicTypes_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, BasicTypes_Response)),
  }
};

typedef struct _BasicTypes_Response_type_support_data_t
{
  void * data[2];
} _BasicTypes_Response_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, BasicTypes_Response)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, BasicTypes_Response)();
#ifdef __cplusplus
}
#endif

static _BasicTypes_Response_type_support_data_t _BasicTypes_Response_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, BasicTypes_Response),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, BasicTypes_Response),
  }
};
#else
static _BasicTypes_Response_type_support_data_t _BasicTypes_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _BasicTypes_Response_message_typesupport_map = {
  2,
  "test_msgs",
  &_BasicTypes_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BasicTypes_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BasicTypes_Response_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t BasicTypes_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BasicTypes_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, srv, BasicTypes_Response)() {
  if (!::test_msgs::srv::rosidl_typesupport_c::BasicTypes_Response_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::srv::rosidl_typesupport_c::BasicTypes_Response_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::srv::rosidl_typesupport_c::BasicTypes_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "test_msgs/srv/detail/basic_types__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace test_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _BasicTypes_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BasicTypes_type_support_ids_t;

static const _BasicTypes_type_support_ids_t _BasicTypes_service_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _BasicTypes_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BasicTypes_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BasicTypes_type_support_symbol_names_t _BasicTypes_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, BasicTypes)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, BasicTypes)),
  }
};

typedef struct _BasicTypes_type_support_data_t
{
  void * data[2];
} _BasicTypes_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, BasicTypes)();
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, BasicTypes)();
#ifdef __cplusplus
}
#endif

static _BasicTypes_type_support_data_t _BasicTypes_service_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, BasicTypes),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, BasicTypes),
  }
};
#else
static _BasicTypes_type_support_data_t _BasicTypes_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _BasicTypes_service_typesupport_map = {
  2,
  "test_msgs",
  &_BasicTypes_service_typesupport_ids.typesupport_identifier[0],
  &_BasicTypes_service_typesupport_symbol_names.symbol_name[0],
  &_BasicTypes_service_typesupport_data.data[0],
};

static rosidl_service_type_support_t BasicTypes_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BasicTypes_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, srv, BasicTypes)() {
  if (!::test_msgs::srv::rosidl_typesupport_c::BasicTypes_service_type_support_handle.typesupport_identifier) {
    ::test_msgs::srv::rosidl_typesupport_c::BasicTypes_service_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }
          
  return &::test_msgs::srv::rosidl_typesupport_c::BasicTypes_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
