// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from lifecycle_msgs:srv/GetAvailableTransitions.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "lifecycle_msgs/srv/detail/get_available_transitions__struct.h"
#include "lifecycle_msgs/srv/detail/get_available_transitions__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace lifecycle_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetAvailableTransitions_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetAvailableTransitions_Request_type_support_ids_t;

static const _GetAvailableTransitions_Request_type_support_ids_t _GetAvailableTransitions_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetAvailableTransitions_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetAvailableTransitions_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetAvailableTransitions_Request_type_support_symbol_names_t _GetAvailableTransitions_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetAvailableTransitions_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetAvailableTransitions_Request)),
  }
};

typedef struct _GetAvailableTransitions_Request_type_support_data_t
{
  void * data[2];
} _GetAvailableTransitions_Request_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetAvailableTransitions_Request)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetAvailableTransitions_Request)();
#ifdef __cplusplus
}
#endif

static _GetAvailableTransitions_Request_type_support_data_t _GetAvailableTransitions_Request_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetAvailableTransitions_Request),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetAvailableTransitions_Request),
  }
};
#else
static _GetAvailableTransitions_Request_type_support_data_t _GetAvailableTransitions_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _GetAvailableTransitions_Request_message_typesupport_map = {
  2,
  "lifecycle_msgs",
  &_GetAvailableTransitions_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetAvailableTransitions_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetAvailableTransitions_Request_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t GetAvailableTransitions_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetAvailableTransitions_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace lifecycle_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, lifecycle_msgs, srv, GetAvailableTransitions_Request)() {
  if (!::lifecycle_msgs::srv::rosidl_typesupport_c::GetAvailableTransitions_Request_message_type_support_handle.typesupport_identifier) {
    ::lifecycle_msgs::srv::rosidl_typesupport_c::GetAvailableTransitions_Request_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::lifecycle_msgs::srv::rosidl_typesupport_c::GetAvailableTransitions_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_available_transitions__struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_available_transitions__type_support.h"
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

namespace lifecycle_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetAvailableTransitions_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetAvailableTransitions_Response_type_support_ids_t;

static const _GetAvailableTransitions_Response_type_support_ids_t _GetAvailableTransitions_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetAvailableTransitions_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetAvailableTransitions_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetAvailableTransitions_Response_type_support_symbol_names_t _GetAvailableTransitions_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetAvailableTransitions_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetAvailableTransitions_Response)),
  }
};

typedef struct _GetAvailableTransitions_Response_type_support_data_t
{
  void * data[2];
} _GetAvailableTransitions_Response_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetAvailableTransitions_Response)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetAvailableTransitions_Response)();
#ifdef __cplusplus
}
#endif

static _GetAvailableTransitions_Response_type_support_data_t _GetAvailableTransitions_Response_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetAvailableTransitions_Response),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetAvailableTransitions_Response),
  }
};
#else
static _GetAvailableTransitions_Response_type_support_data_t _GetAvailableTransitions_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _GetAvailableTransitions_Response_message_typesupport_map = {
  2,
  "lifecycle_msgs",
  &_GetAvailableTransitions_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetAvailableTransitions_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetAvailableTransitions_Response_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t GetAvailableTransitions_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetAvailableTransitions_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace lifecycle_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, lifecycle_msgs, srv, GetAvailableTransitions_Response)() {
  if (!::lifecycle_msgs::srv::rosidl_typesupport_c::GetAvailableTransitions_Response_message_type_support_handle.typesupport_identifier) {
    ::lifecycle_msgs::srv::rosidl_typesupport_c::GetAvailableTransitions_Response_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::lifecycle_msgs::srv::rosidl_typesupport_c::GetAvailableTransitions_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_available_transitions__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lifecycle_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetAvailableTransitions_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetAvailableTransitions_type_support_ids_t;

static const _GetAvailableTransitions_type_support_ids_t _GetAvailableTransitions_service_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetAvailableTransitions_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetAvailableTransitions_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetAvailableTransitions_type_support_symbol_names_t _GetAvailableTransitions_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetAvailableTransitions)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetAvailableTransitions)),
  }
};

typedef struct _GetAvailableTransitions_type_support_data_t
{
  void * data[2];
} _GetAvailableTransitions_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetAvailableTransitions)();
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetAvailableTransitions)();
#ifdef __cplusplus
}
#endif

static _GetAvailableTransitions_type_support_data_t _GetAvailableTransitions_service_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lifecycle_msgs, srv, GetAvailableTransitions),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetAvailableTransitions),
  }
};
#else
static _GetAvailableTransitions_type_support_data_t _GetAvailableTransitions_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _GetAvailableTransitions_service_typesupport_map = {
  2,
  "lifecycle_msgs",
  &_GetAvailableTransitions_service_typesupport_ids.typesupport_identifier[0],
  &_GetAvailableTransitions_service_typesupport_symbol_names.symbol_name[0],
  &_GetAvailableTransitions_service_typesupport_data.data[0],
};

static rosidl_service_type_support_t GetAvailableTransitions_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetAvailableTransitions_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace lifecycle_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, lifecycle_msgs, srv, GetAvailableTransitions)() {
  if (!::lifecycle_msgs::srv::rosidl_typesupport_c::GetAvailableTransitions_service_type_support_handle.typesupport_identifier) {
    ::lifecycle_msgs::srv::rosidl_typesupport_c::GetAvailableTransitions_service_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }
          
  return &::lifecycle_msgs::srv::rosidl_typesupport_c::GetAvailableTransitions_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
