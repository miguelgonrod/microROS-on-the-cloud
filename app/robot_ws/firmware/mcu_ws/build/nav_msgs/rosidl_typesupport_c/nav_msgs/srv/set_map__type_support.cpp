// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from nav_msgs:srv/SetMap.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "nav_msgs/srv/detail/set_map__struct.h"
#include "nav_msgs/srv/detail/set_map__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace nav_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetMap_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetMap_Request_type_support_ids_t;

static const _SetMap_Request_type_support_ids_t _SetMap_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _SetMap_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetMap_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetMap_Request_type_support_symbol_names_t _SetMap_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, srv, SetMap_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, SetMap_Request)),
  }
};

typedef struct _SetMap_Request_type_support_data_t
{
  void * data[2];
} _SetMap_Request_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, srv, SetMap_Request)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, SetMap_Request)();
#ifdef __cplusplus
}
#endif

static _SetMap_Request_type_support_data_t _SetMap_Request_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, srv, SetMap_Request),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, SetMap_Request),
  }
};
#else
static _SetMap_Request_type_support_data_t _SetMap_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _SetMap_Request_message_typesupport_map = {
  2,
  "nav_msgs",
  &_SetMap_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetMap_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetMap_Request_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t SetMap_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetMap_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace nav_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, nav_msgs, srv, SetMap_Request)() {
  if (!::nav_msgs::srv::rosidl_typesupport_c::SetMap_Request_message_type_support_handle.typesupport_identifier) {
    ::nav_msgs::srv::rosidl_typesupport_c::SetMap_Request_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::nav_msgs::srv::rosidl_typesupport_c::SetMap_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "nav_msgs/srv/detail/set_map__struct.h"
// already included above
// #include "nav_msgs/srv/detail/set_map__type_support.h"
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

namespace nav_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetMap_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetMap_Response_type_support_ids_t;

static const _SetMap_Response_type_support_ids_t _SetMap_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _SetMap_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetMap_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetMap_Response_type_support_symbol_names_t _SetMap_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, srv, SetMap_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, SetMap_Response)),
  }
};

typedef struct _SetMap_Response_type_support_data_t
{
  void * data[2];
} _SetMap_Response_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, srv, SetMap_Response)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, SetMap_Response)();
#ifdef __cplusplus
}
#endif

static _SetMap_Response_type_support_data_t _SetMap_Response_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, srv, SetMap_Response),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, SetMap_Response),
  }
};
#else
static _SetMap_Response_type_support_data_t _SetMap_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _SetMap_Response_message_typesupport_map = {
  2,
  "nav_msgs",
  &_SetMap_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetMap_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetMap_Response_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t SetMap_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetMap_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace nav_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, nav_msgs, srv, SetMap_Response)() {
  if (!::nav_msgs::srv::rosidl_typesupport_c::SetMap_Response_message_type_support_handle.typesupport_identifier) {
    ::nav_msgs::srv::rosidl_typesupport_c::SetMap_Response_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::nav_msgs::srv::rosidl_typesupport_c::SetMap_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "nav_msgs/srv/detail/set_map__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace nav_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetMap_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetMap_type_support_ids_t;

static const _SetMap_type_support_ids_t _SetMap_service_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _SetMap_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetMap_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetMap_type_support_symbol_names_t _SetMap_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, srv, SetMap)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, SetMap)),
  }
};

typedef struct _SetMap_type_support_data_t
{
  void * data[2];
} _SetMap_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, srv, SetMap)();
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, SetMap)();
#ifdef __cplusplus
}
#endif

static _SetMap_type_support_data_t _SetMap_service_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, srv, SetMap),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, SetMap),
  }
};
#else
static _SetMap_type_support_data_t _SetMap_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _SetMap_service_typesupport_map = {
  2,
  "nav_msgs",
  &_SetMap_service_typesupport_ids.typesupport_identifier[0],
  &_SetMap_service_typesupport_symbol_names.symbol_name[0],
  &_SetMap_service_typesupport_data.data[0],
};

static rosidl_service_type_support_t SetMap_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetMap_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace nav_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, nav_msgs, srv, SetMap)() {
  if (!::nav_msgs::srv::rosidl_typesupport_c::SetMap_service_type_support_handle.typesupport_identifier) {
    ::nav_msgs::srv::rosidl_typesupport_c::SetMap_service_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }
          
  return &::nav_msgs::srv::rosidl_typesupport_c::SetMap_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
