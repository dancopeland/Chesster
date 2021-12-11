// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from chesster_interfaces:action/MoveChessterArm.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "chesster_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace chesster_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveChessterArm_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveChessterArm_Goal_type_support_ids_t;

static const _MoveChessterArm_Goal_type_support_ids_t _MoveChessterArm_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveChessterArm_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveChessterArm_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveChessterArm_Goal_type_support_symbol_names_t _MoveChessterArm_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesster_interfaces, action, MoveChessterArm_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_Goal)),
  }
};

typedef struct _MoveChessterArm_Goal_type_support_data_t
{
  void * data[2];
} _MoveChessterArm_Goal_type_support_data_t;

static _MoveChessterArm_Goal_type_support_data_t _MoveChessterArm_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveChessterArm_Goal_message_typesupport_map = {
  2,
  "chesster_interfaces",
  &_MoveChessterArm_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MoveChessterArm_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MoveChessterArm_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveChessterArm_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveChessterArm_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace chesster_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_chesster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, chesster_interfaces, action, MoveChessterArm_Goal)() {
  return &::chesster_interfaces::action::rosidl_typesupport_c::MoveChessterArm_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"
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

namespace chesster_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveChessterArm_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveChessterArm_Result_type_support_ids_t;

static const _MoveChessterArm_Result_type_support_ids_t _MoveChessterArm_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveChessterArm_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveChessterArm_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveChessterArm_Result_type_support_symbol_names_t _MoveChessterArm_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesster_interfaces, action, MoveChessterArm_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_Result)),
  }
};

typedef struct _MoveChessterArm_Result_type_support_data_t
{
  void * data[2];
} _MoveChessterArm_Result_type_support_data_t;

static _MoveChessterArm_Result_type_support_data_t _MoveChessterArm_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveChessterArm_Result_message_typesupport_map = {
  2,
  "chesster_interfaces",
  &_MoveChessterArm_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MoveChessterArm_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MoveChessterArm_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveChessterArm_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveChessterArm_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace chesster_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_chesster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, chesster_interfaces, action, MoveChessterArm_Result)() {
  return &::chesster_interfaces::action::rosidl_typesupport_c::MoveChessterArm_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"
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

namespace chesster_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveChessterArm_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveChessterArm_Feedback_type_support_ids_t;

static const _MoveChessterArm_Feedback_type_support_ids_t _MoveChessterArm_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveChessterArm_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveChessterArm_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveChessterArm_Feedback_type_support_symbol_names_t _MoveChessterArm_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesster_interfaces, action, MoveChessterArm_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_Feedback)),
  }
};

typedef struct _MoveChessterArm_Feedback_type_support_data_t
{
  void * data[2];
} _MoveChessterArm_Feedback_type_support_data_t;

static _MoveChessterArm_Feedback_type_support_data_t _MoveChessterArm_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveChessterArm_Feedback_message_typesupport_map = {
  2,
  "chesster_interfaces",
  &_MoveChessterArm_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MoveChessterArm_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MoveChessterArm_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveChessterArm_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveChessterArm_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace chesster_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_chesster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, chesster_interfaces, action, MoveChessterArm_Feedback)() {
  return &::chesster_interfaces::action::rosidl_typesupport_c::MoveChessterArm_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"
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

namespace chesster_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveChessterArm_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveChessterArm_SendGoal_Request_type_support_ids_t;

static const _MoveChessterArm_SendGoal_Request_type_support_ids_t _MoveChessterArm_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveChessterArm_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveChessterArm_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveChessterArm_SendGoal_Request_type_support_symbol_names_t _MoveChessterArm_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesster_interfaces, action, MoveChessterArm_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_SendGoal_Request)),
  }
};

typedef struct _MoveChessterArm_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MoveChessterArm_SendGoal_Request_type_support_data_t;

static _MoveChessterArm_SendGoal_Request_type_support_data_t _MoveChessterArm_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveChessterArm_SendGoal_Request_message_typesupport_map = {
  2,
  "chesster_interfaces",
  &_MoveChessterArm_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveChessterArm_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveChessterArm_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveChessterArm_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveChessterArm_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace chesster_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_chesster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, chesster_interfaces, action, MoveChessterArm_SendGoal_Request)() {
  return &::chesster_interfaces::action::rosidl_typesupport_c::MoveChessterArm_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"
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

namespace chesster_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveChessterArm_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveChessterArm_SendGoal_Response_type_support_ids_t;

static const _MoveChessterArm_SendGoal_Response_type_support_ids_t _MoveChessterArm_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveChessterArm_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveChessterArm_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveChessterArm_SendGoal_Response_type_support_symbol_names_t _MoveChessterArm_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesster_interfaces, action, MoveChessterArm_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_SendGoal_Response)),
  }
};

typedef struct _MoveChessterArm_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MoveChessterArm_SendGoal_Response_type_support_data_t;

static _MoveChessterArm_SendGoal_Response_type_support_data_t _MoveChessterArm_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveChessterArm_SendGoal_Response_message_typesupport_map = {
  2,
  "chesster_interfaces",
  &_MoveChessterArm_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveChessterArm_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveChessterArm_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveChessterArm_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveChessterArm_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace chesster_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_chesster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, chesster_interfaces, action, MoveChessterArm_SendGoal_Response)() {
  return &::chesster_interfaces::action::rosidl_typesupport_c::MoveChessterArm_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace chesster_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveChessterArm_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveChessterArm_SendGoal_type_support_ids_t;

static const _MoveChessterArm_SendGoal_type_support_ids_t _MoveChessterArm_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveChessterArm_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveChessterArm_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveChessterArm_SendGoal_type_support_symbol_names_t _MoveChessterArm_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesster_interfaces, action, MoveChessterArm_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_SendGoal)),
  }
};

typedef struct _MoveChessterArm_SendGoal_type_support_data_t
{
  void * data[2];
} _MoveChessterArm_SendGoal_type_support_data_t;

static _MoveChessterArm_SendGoal_type_support_data_t _MoveChessterArm_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveChessterArm_SendGoal_service_typesupport_map = {
  2,
  "chesster_interfaces",
  &_MoveChessterArm_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MoveChessterArm_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MoveChessterArm_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveChessterArm_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveChessterArm_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace chesster_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_chesster_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, chesster_interfaces, action, MoveChessterArm_SendGoal)() {
  return &::chesster_interfaces::action::rosidl_typesupport_c::MoveChessterArm_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"
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

namespace chesster_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveChessterArm_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveChessterArm_GetResult_Request_type_support_ids_t;

static const _MoveChessterArm_GetResult_Request_type_support_ids_t _MoveChessterArm_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveChessterArm_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveChessterArm_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveChessterArm_GetResult_Request_type_support_symbol_names_t _MoveChessterArm_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesster_interfaces, action, MoveChessterArm_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_GetResult_Request)),
  }
};

typedef struct _MoveChessterArm_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MoveChessterArm_GetResult_Request_type_support_data_t;

static _MoveChessterArm_GetResult_Request_type_support_data_t _MoveChessterArm_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveChessterArm_GetResult_Request_message_typesupport_map = {
  2,
  "chesster_interfaces",
  &_MoveChessterArm_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveChessterArm_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveChessterArm_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveChessterArm_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveChessterArm_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace chesster_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_chesster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, chesster_interfaces, action, MoveChessterArm_GetResult_Request)() {
  return &::chesster_interfaces::action::rosidl_typesupport_c::MoveChessterArm_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"
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

namespace chesster_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveChessterArm_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveChessterArm_GetResult_Response_type_support_ids_t;

static const _MoveChessterArm_GetResult_Response_type_support_ids_t _MoveChessterArm_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveChessterArm_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveChessterArm_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveChessterArm_GetResult_Response_type_support_symbol_names_t _MoveChessterArm_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesster_interfaces, action, MoveChessterArm_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_GetResult_Response)),
  }
};

typedef struct _MoveChessterArm_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MoveChessterArm_GetResult_Response_type_support_data_t;

static _MoveChessterArm_GetResult_Response_type_support_data_t _MoveChessterArm_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveChessterArm_GetResult_Response_message_typesupport_map = {
  2,
  "chesster_interfaces",
  &_MoveChessterArm_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveChessterArm_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveChessterArm_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveChessterArm_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveChessterArm_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace chesster_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_chesster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, chesster_interfaces, action, MoveChessterArm_GetResult_Response)() {
  return &::chesster_interfaces::action::rosidl_typesupport_c::MoveChessterArm_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace chesster_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveChessterArm_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveChessterArm_GetResult_type_support_ids_t;

static const _MoveChessterArm_GetResult_type_support_ids_t _MoveChessterArm_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveChessterArm_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveChessterArm_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveChessterArm_GetResult_type_support_symbol_names_t _MoveChessterArm_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesster_interfaces, action, MoveChessterArm_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_GetResult)),
  }
};

typedef struct _MoveChessterArm_GetResult_type_support_data_t
{
  void * data[2];
} _MoveChessterArm_GetResult_type_support_data_t;

static _MoveChessterArm_GetResult_type_support_data_t _MoveChessterArm_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveChessterArm_GetResult_service_typesupport_map = {
  2,
  "chesster_interfaces",
  &_MoveChessterArm_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MoveChessterArm_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MoveChessterArm_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveChessterArm_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveChessterArm_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace chesster_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_chesster_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, chesster_interfaces, action, MoveChessterArm_GetResult)() {
  return &::chesster_interfaces::action::rosidl_typesupport_c::MoveChessterArm_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"
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

namespace chesster_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveChessterArm_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveChessterArm_FeedbackMessage_type_support_ids_t;

static const _MoveChessterArm_FeedbackMessage_type_support_ids_t _MoveChessterArm_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveChessterArm_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveChessterArm_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveChessterArm_FeedbackMessage_type_support_symbol_names_t _MoveChessterArm_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, chesster_interfaces, action, MoveChessterArm_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_FeedbackMessage)),
  }
};

typedef struct _MoveChessterArm_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MoveChessterArm_FeedbackMessage_type_support_data_t;

static _MoveChessterArm_FeedbackMessage_type_support_data_t _MoveChessterArm_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveChessterArm_FeedbackMessage_message_typesupport_map = {
  2,
  "chesster_interfaces",
  &_MoveChessterArm_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MoveChessterArm_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MoveChessterArm_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveChessterArm_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveChessterArm_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace chesster_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_chesster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, chesster_interfaces, action, MoveChessterArm_FeedbackMessage)() {
  return &::chesster_interfaces::action::rosidl_typesupport_c::MoveChessterArm_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "chesster_interfaces/action/move_chesster_arm.h"
#include "chesster_interfaces/action/detail/move_chesster_arm__type_support.h"

static rosidl_action_type_support_t _chesster_interfaces__action__MoveChessterArm__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_chesster_interfaces
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, chesster_interfaces, action, MoveChessterArm)()
{
  // Thread-safe by always writing the same values to the static struct
  _chesster_interfaces__action__MoveChessterArm__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, chesster_interfaces, action, MoveChessterArm_SendGoal)();
  _chesster_interfaces__action__MoveChessterArm__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, chesster_interfaces, action, MoveChessterArm_GetResult)();
  _chesster_interfaces__action__MoveChessterArm__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _chesster_interfaces__action__MoveChessterArm__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, chesster_interfaces, action, MoveChessterArm_FeedbackMessage)();
  _chesster_interfaces__action__MoveChessterArm__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_chesster_interfaces__action__MoveChessterArm__typesupport_c;
}

#ifdef __cplusplus
}
#endif
