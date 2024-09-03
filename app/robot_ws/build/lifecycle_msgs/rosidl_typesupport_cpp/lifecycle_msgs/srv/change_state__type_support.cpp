// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from lifecycle_msgs:srv/ChangeState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "lifecycle_msgs/srv/detail/change_state__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace lifecycle_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ChangeState_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _ChangeState_Request_type_support_ids_t;

static const _ChangeState_Request_type_support_ids_t _ChangeState_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _ChangeState_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _ChangeState_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChangeState_Request_type_support_symbol_names_t _ChangeState_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lifecycle_msgs, srv, ChangeState_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lifecycle_msgs, srv, ChangeState_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, lifecycle_msgs, srv, ChangeState_Request)),
  }
};

typedef struct _ChangeState_Request_type_support_data_t
{
  void * data[3];
} _ChangeState_Request_type_support_data_t;

static _ChangeState_Request_type_support_data_t _ChangeState_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChangeState_Request_message_typesupport_map = {
  3,
  "lifecycle_msgs",
  &_ChangeState_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ChangeState_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ChangeState_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChangeState_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChangeState_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace lifecycle_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lifecycle_msgs::srv::ChangeState_Request>()
{
  return &::lifecycle_msgs::srv::rosidl_typesupport_cpp::ChangeState_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, lifecycle_msgs, srv, ChangeState_Request)() {
  return get_message_type_support_handle<lifecycle_msgs::srv::ChangeState_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/change_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lifecycle_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ChangeState_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _ChangeState_Response_type_support_ids_t;

static const _ChangeState_Response_type_support_ids_t _ChangeState_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _ChangeState_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _ChangeState_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChangeState_Response_type_support_symbol_names_t _ChangeState_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lifecycle_msgs, srv, ChangeState_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lifecycle_msgs, srv, ChangeState_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, lifecycle_msgs, srv, ChangeState_Response)),
  }
};

typedef struct _ChangeState_Response_type_support_data_t
{
  void * data[3];
} _ChangeState_Response_type_support_data_t;

static _ChangeState_Response_type_support_data_t _ChangeState_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChangeState_Response_message_typesupport_map = {
  3,
  "lifecycle_msgs",
  &_ChangeState_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ChangeState_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ChangeState_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ChangeState_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChangeState_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace lifecycle_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lifecycle_msgs::srv::ChangeState_Response>()
{
  return &::lifecycle_msgs::srv::rosidl_typesupport_cpp::ChangeState_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, lifecycle_msgs, srv, ChangeState_Response)() {
  return get_message_type_support_handle<lifecycle_msgs::srv::ChangeState_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/change_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lifecycle_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ChangeState_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _ChangeState_type_support_ids_t;

static const _ChangeState_type_support_ids_t _ChangeState_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_cpp",  // ::rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  }
};

typedef struct _ChangeState_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _ChangeState_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ChangeState_type_support_symbol_names_t _ChangeState_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lifecycle_msgs, srv, ChangeState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lifecycle_msgs, srv, ChangeState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, lifecycle_msgs, srv, ChangeState)),
  }
};

typedef struct _ChangeState_type_support_data_t
{
  void * data[3];
} _ChangeState_type_support_data_t;

static _ChangeState_type_support_data_t _ChangeState_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ChangeState_service_typesupport_map = {
  3,
  "lifecycle_msgs",
  &_ChangeState_service_typesupport_ids.typesupport_identifier[0],
  &_ChangeState_service_typesupport_symbol_names.symbol_name[0],
  &_ChangeState_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ChangeState_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ChangeState_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace lifecycle_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<lifecycle_msgs::srv::ChangeState>()
{
  return &::lifecycle_msgs::srv::rosidl_typesupport_cpp::ChangeState_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
