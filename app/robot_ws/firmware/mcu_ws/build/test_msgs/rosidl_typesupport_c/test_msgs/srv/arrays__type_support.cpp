// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from test_msgs:srv/Arrays.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "test_msgs/srv/detail/arrays__struct.h"
#include "test_msgs/srv/detail/arrays__type_support.h"
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

typedef struct _Arrays_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Arrays_Request_type_support_ids_t;

static const _Arrays_Request_type_support_ids_t _Arrays_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Arrays_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Arrays_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Arrays_Request_type_support_symbol_names_t _Arrays_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Arrays_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, Arrays_Request)),
  }
};

typedef struct _Arrays_Request_type_support_data_t
{
  void * data[2];
} _Arrays_Request_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Arrays_Request)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, Arrays_Request)();
#ifdef __cplusplus
}
#endif

static _Arrays_Request_type_support_data_t _Arrays_Request_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Arrays_Request),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, Arrays_Request),
  }
};
#else
static _Arrays_Request_type_support_data_t _Arrays_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Arrays_Request_message_typesupport_map = {
  2,
  "test_msgs",
  &_Arrays_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Arrays_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Arrays_Request_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Arrays_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Arrays_Request_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, srv, Arrays_Request)() {
  if (!::test_msgs::srv::rosidl_typesupport_c::Arrays_Request_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::srv::rosidl_typesupport_c::Arrays_Request_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::srv::rosidl_typesupport_c::Arrays_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/srv/detail/arrays__struct.h"
// already included above
// #include "test_msgs/srv/detail/arrays__type_support.h"
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

typedef struct _Arrays_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Arrays_Response_type_support_ids_t;

static const _Arrays_Response_type_support_ids_t _Arrays_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Arrays_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Arrays_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Arrays_Response_type_support_symbol_names_t _Arrays_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Arrays_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, Arrays_Response)),
  }
};

typedef struct _Arrays_Response_type_support_data_t
{
  void * data[2];
} _Arrays_Response_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Arrays_Response)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, Arrays_Response)();
#ifdef __cplusplus
}
#endif

static _Arrays_Response_type_support_data_t _Arrays_Response_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Arrays_Response),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, Arrays_Response),
  }
};
#else
static _Arrays_Response_type_support_data_t _Arrays_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Arrays_Response_message_typesupport_map = {
  2,
  "test_msgs",
  &_Arrays_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Arrays_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Arrays_Response_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Arrays_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Arrays_Response_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, srv, Arrays_Response)() {
  if (!::test_msgs::srv::rosidl_typesupport_c::Arrays_Response_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::srv::rosidl_typesupport_c::Arrays_Response_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::srv::rosidl_typesupport_c::Arrays_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "test_msgs/srv/detail/arrays__type_support.h"
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

typedef struct _Arrays_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Arrays_type_support_ids_t;

static const _Arrays_type_support_ids_t _Arrays_service_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Arrays_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Arrays_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Arrays_type_support_symbol_names_t _Arrays_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Arrays)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, Arrays)),
  }
};

typedef struct _Arrays_type_support_data_t
{
  void * data[2];
} _Arrays_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Arrays)();
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, Arrays)();
#ifdef __cplusplus
}
#endif

static _Arrays_type_support_data_t _Arrays_service_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, srv, Arrays),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, srv, Arrays),
  }
};
#else
static _Arrays_type_support_data_t _Arrays_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Arrays_service_typesupport_map = {
  2,
  "test_msgs",
  &_Arrays_service_typesupport_ids.typesupport_identifier[0],
  &_Arrays_service_typesupport_symbol_names.symbol_name[0],
  &_Arrays_service_typesupport_data.data[0],
};

static rosidl_service_type_support_t Arrays_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Arrays_service_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, srv, Arrays)() {
  if (!::test_msgs::srv::rosidl_typesupport_c::Arrays_service_type_support_handle.typesupport_identifier) {
    ::test_msgs::srv::rosidl_typesupport_c::Arrays_service_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }
          
  return &::test_msgs::srv::rosidl_typesupport_c::Arrays_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
