// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from test_msgs:action/NestedMessage.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "test_msgs/action/detail/nested_message__struct.h"
#include "test_msgs/action/detail/nested_message__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace test_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NestedMessage_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NestedMessage_Goal_type_support_ids_t;

static const _NestedMessage_Goal_type_support_ids_t _NestedMessage_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _NestedMessage_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NestedMessage_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NestedMessage_Goal_type_support_symbol_names_t _NestedMessage_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Goal)),
  }
};

typedef struct _NestedMessage_Goal_type_support_data_t
{
  void * data[2];
} _NestedMessage_Goal_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_Goal)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Goal)();
#ifdef __cplusplus
}
#endif

static _NestedMessage_Goal_type_support_data_t _NestedMessage_Goal_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_Goal),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Goal),
  }
};
#else
static _NestedMessage_Goal_type_support_data_t _NestedMessage_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _NestedMessage_Goal_message_typesupport_map = {
  2,
  "test_msgs",
  &_NestedMessage_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_NestedMessage_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_NestedMessage_Goal_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t NestedMessage_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NestedMessage_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, NestedMessage_Goal)() {
  if (!::test_msgs::action::rosidl_typesupport_c::NestedMessage_Goal_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::NestedMessage_Goal_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::NestedMessage_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NestedMessage_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NestedMessage_Result_type_support_ids_t;

static const _NestedMessage_Result_type_support_ids_t _NestedMessage_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _NestedMessage_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NestedMessage_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NestedMessage_Result_type_support_symbol_names_t _NestedMessage_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Result)),
  }
};

typedef struct _NestedMessage_Result_type_support_data_t
{
  void * data[2];
} _NestedMessage_Result_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_Result)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Result)();
#ifdef __cplusplus
}
#endif

static _NestedMessage_Result_type_support_data_t _NestedMessage_Result_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_Result),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Result),
  }
};
#else
static _NestedMessage_Result_type_support_data_t _NestedMessage_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _NestedMessage_Result_message_typesupport_map = {
  2,
  "test_msgs",
  &_NestedMessage_Result_message_typesupport_ids.typesupport_identifier[0],
  &_NestedMessage_Result_message_typesupport_symbol_names.symbol_name[0],
  &_NestedMessage_Result_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t NestedMessage_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NestedMessage_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, NestedMessage_Result)() {
  if (!::test_msgs::action::rosidl_typesupport_c::NestedMessage_Result_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::NestedMessage_Result_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::NestedMessage_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NestedMessage_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NestedMessage_Feedback_type_support_ids_t;

static const _NestedMessage_Feedback_type_support_ids_t _NestedMessage_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _NestedMessage_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NestedMessage_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NestedMessage_Feedback_type_support_symbol_names_t _NestedMessage_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Feedback)),
  }
};

typedef struct _NestedMessage_Feedback_type_support_data_t
{
  void * data[2];
} _NestedMessage_Feedback_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_Feedback)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Feedback)();
#ifdef __cplusplus
}
#endif

static _NestedMessage_Feedback_type_support_data_t _NestedMessage_Feedback_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_Feedback),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_Feedback),
  }
};
#else
static _NestedMessage_Feedback_type_support_data_t _NestedMessage_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _NestedMessage_Feedback_message_typesupport_map = {
  2,
  "test_msgs",
  &_NestedMessage_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_NestedMessage_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_NestedMessage_Feedback_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t NestedMessage_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NestedMessage_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, NestedMessage_Feedback)() {
  if (!::test_msgs::action::rosidl_typesupport_c::NestedMessage_Feedback_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::NestedMessage_Feedback_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::NestedMessage_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NestedMessage_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NestedMessage_SendGoal_Request_type_support_ids_t;

static const _NestedMessage_SendGoal_Request_type_support_ids_t _NestedMessage_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _NestedMessage_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NestedMessage_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NestedMessage_SendGoal_Request_type_support_symbol_names_t _NestedMessage_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_SendGoal_Request)),
  }
};

typedef struct _NestedMessage_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _NestedMessage_SendGoal_Request_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_SendGoal_Request)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_SendGoal_Request)();
#ifdef __cplusplus
}
#endif

static _NestedMessage_SendGoal_Request_type_support_data_t _NestedMessage_SendGoal_Request_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_SendGoal_Request),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_SendGoal_Request),
  }
};
#else
static _NestedMessage_SendGoal_Request_type_support_data_t _NestedMessage_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _NestedMessage_SendGoal_Request_message_typesupport_map = {
  2,
  "test_msgs",
  &_NestedMessage_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_NestedMessage_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_NestedMessage_SendGoal_Request_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t NestedMessage_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NestedMessage_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, NestedMessage_SendGoal_Request)() {
  if (!::test_msgs::action::rosidl_typesupport_c::NestedMessage_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::NestedMessage_SendGoal_Request_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::NestedMessage_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NestedMessage_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NestedMessage_SendGoal_Response_type_support_ids_t;

static const _NestedMessage_SendGoal_Response_type_support_ids_t _NestedMessage_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _NestedMessage_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NestedMessage_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NestedMessage_SendGoal_Response_type_support_symbol_names_t _NestedMessage_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_SendGoal_Response)),
  }
};

typedef struct _NestedMessage_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _NestedMessage_SendGoal_Response_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_SendGoal_Response)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_SendGoal_Response)();
#ifdef __cplusplus
}
#endif

static _NestedMessage_SendGoal_Response_type_support_data_t _NestedMessage_SendGoal_Response_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_SendGoal_Response),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_SendGoal_Response),
  }
};
#else
static _NestedMessage_SendGoal_Response_type_support_data_t _NestedMessage_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _NestedMessage_SendGoal_Response_message_typesupport_map = {
  2,
  "test_msgs",
  &_NestedMessage_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_NestedMessage_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_NestedMessage_SendGoal_Response_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t NestedMessage_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NestedMessage_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, NestedMessage_SendGoal_Response)() {
  if (!::test_msgs::action::rosidl_typesupport_c::NestedMessage_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::NestedMessage_SendGoal_Response_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::NestedMessage_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace test_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NestedMessage_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NestedMessage_SendGoal_type_support_ids_t;

static const _NestedMessage_SendGoal_type_support_ids_t _NestedMessage_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _NestedMessage_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NestedMessage_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NestedMessage_SendGoal_type_support_symbol_names_t _NestedMessage_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_SendGoal)),
  }
};

typedef struct _NestedMessage_SendGoal_type_support_data_t
{
  void * data[2];
} _NestedMessage_SendGoal_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_SendGoal)();
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_SendGoal)();
#ifdef __cplusplus
}
#endif

static _NestedMessage_SendGoal_type_support_data_t _NestedMessage_SendGoal_service_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_SendGoal),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_SendGoal),
  }
};
#else
static _NestedMessage_SendGoal_type_support_data_t _NestedMessage_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _NestedMessage_SendGoal_service_typesupport_map = {
  2,
  "test_msgs",
  &_NestedMessage_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_NestedMessage_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_NestedMessage_SendGoal_service_typesupport_data.data[0],
};

static rosidl_service_type_support_t NestedMessage_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NestedMessage_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, NestedMessage_SendGoal)() {
  if (!::test_msgs::action::rosidl_typesupport_c::NestedMessage_SendGoal_service_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::NestedMessage_SendGoal_service_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }
          
  return &::test_msgs::action::rosidl_typesupport_c::NestedMessage_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NestedMessage_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NestedMessage_GetResult_Request_type_support_ids_t;

static const _NestedMessage_GetResult_Request_type_support_ids_t _NestedMessage_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _NestedMessage_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NestedMessage_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NestedMessage_GetResult_Request_type_support_symbol_names_t _NestedMessage_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_GetResult_Request)),
  }
};

typedef struct _NestedMessage_GetResult_Request_type_support_data_t
{
  void * data[2];
} _NestedMessage_GetResult_Request_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_GetResult_Request)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_GetResult_Request)();
#ifdef __cplusplus
}
#endif

static _NestedMessage_GetResult_Request_type_support_data_t _NestedMessage_GetResult_Request_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_GetResult_Request),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_GetResult_Request),
  }
};
#else
static _NestedMessage_GetResult_Request_type_support_data_t _NestedMessage_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _NestedMessage_GetResult_Request_message_typesupport_map = {
  2,
  "test_msgs",
  &_NestedMessage_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_NestedMessage_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_NestedMessage_GetResult_Request_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t NestedMessage_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NestedMessage_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, NestedMessage_GetResult_Request)() {
  if (!::test_msgs::action::rosidl_typesupport_c::NestedMessage_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::NestedMessage_GetResult_Request_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::NestedMessage_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NestedMessage_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NestedMessage_GetResult_Response_type_support_ids_t;

static const _NestedMessage_GetResult_Response_type_support_ids_t _NestedMessage_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _NestedMessage_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NestedMessage_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NestedMessage_GetResult_Response_type_support_symbol_names_t _NestedMessage_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_GetResult_Response)),
  }
};

typedef struct _NestedMessage_GetResult_Response_type_support_data_t
{
  void * data[2];
} _NestedMessage_GetResult_Response_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_GetResult_Response)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_GetResult_Response)();
#ifdef __cplusplus
}
#endif

static _NestedMessage_GetResult_Response_type_support_data_t _NestedMessage_GetResult_Response_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_GetResult_Response),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_GetResult_Response),
  }
};
#else
static _NestedMessage_GetResult_Response_type_support_data_t _NestedMessage_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _NestedMessage_GetResult_Response_message_typesupport_map = {
  2,
  "test_msgs",
  &_NestedMessage_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_NestedMessage_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_NestedMessage_GetResult_Response_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t NestedMessage_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NestedMessage_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, NestedMessage_GetResult_Response)() {
  if (!::test_msgs::action::rosidl_typesupport_c::NestedMessage_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::NestedMessage_GetResult_Response_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::NestedMessage_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace test_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NestedMessage_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NestedMessage_GetResult_type_support_ids_t;

static const _NestedMessage_GetResult_type_support_ids_t _NestedMessage_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _NestedMessage_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NestedMessage_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NestedMessage_GetResult_type_support_symbol_names_t _NestedMessage_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_GetResult)),
  }
};

typedef struct _NestedMessage_GetResult_type_support_data_t
{
  void * data[2];
} _NestedMessage_GetResult_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_GetResult)();
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_GetResult)();
#ifdef __cplusplus
}
#endif

static _NestedMessage_GetResult_type_support_data_t _NestedMessage_GetResult_service_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_GetResult),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_GetResult),
  }
};
#else
static _NestedMessage_GetResult_type_support_data_t _NestedMessage_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _NestedMessage_GetResult_service_typesupport_map = {
  2,
  "test_msgs",
  &_NestedMessage_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_NestedMessage_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_NestedMessage_GetResult_service_typesupport_data.data[0],
};

static rosidl_service_type_support_t NestedMessage_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NestedMessage_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, NestedMessage_GetResult)() {
  if (!::test_msgs::action::rosidl_typesupport_c::NestedMessage_GetResult_service_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::NestedMessage_GetResult_service_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }
          
  return &::test_msgs::action::rosidl_typesupport_c::NestedMessage_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__struct.h"
// already included above
// #include "test_msgs/action/detail/nested_message__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _NestedMessage_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NestedMessage_FeedbackMessage_type_support_ids_t;

static const _NestedMessage_FeedbackMessage_type_support_ids_t _NestedMessage_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _NestedMessage_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NestedMessage_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NestedMessage_FeedbackMessage_type_support_symbol_names_t _NestedMessage_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_FeedbackMessage)),
  }
};

typedef struct _NestedMessage_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _NestedMessage_FeedbackMessage_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_FeedbackMessage)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_FeedbackMessage)();
#ifdef __cplusplus
}
#endif

static _NestedMessage_FeedbackMessage_type_support_data_t _NestedMessage_FeedbackMessage_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, NestedMessage_FeedbackMessage),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, NestedMessage_FeedbackMessage),
  }
};
#else
static _NestedMessage_FeedbackMessage_type_support_data_t _NestedMessage_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _NestedMessage_FeedbackMessage_message_typesupport_map = {
  2,
  "test_msgs",
  &_NestedMessage_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_NestedMessage_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_NestedMessage_FeedbackMessage_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t NestedMessage_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NestedMessage_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, NestedMessage_FeedbackMessage)() {
  if (!::test_msgs::action::rosidl_typesupport_c::NestedMessage_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::NestedMessage_FeedbackMessage_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::NestedMessage_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "test_msgs/action/nested_message.h"
// already included above
// #include "test_msgs/action/detail/nested_message__type_support.h"

static rosidl_action_type_support_t _test_msgs__action__NestedMessage__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, test_msgs, action, NestedMessage)()
{
  // Thread-safe by always writing the same values to the static struct
  _test_msgs__action__NestedMessage__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, test_msgs, action, NestedMessage_SendGoal)();
  _test_msgs__action__NestedMessage__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, test_msgs, action, NestedMessage_GetResult)();
  _test_msgs__action__NestedMessage__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _test_msgs__action__NestedMessage__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, test_msgs, action, NestedMessage_FeedbackMessage)();
  _test_msgs__action__NestedMessage__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_test_msgs__action__NestedMessage__typesupport_c;
}

#ifdef __cplusplus
}
#endif
