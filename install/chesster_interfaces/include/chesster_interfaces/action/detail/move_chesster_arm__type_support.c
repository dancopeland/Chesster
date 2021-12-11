// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from chesster_interfaces:action/MoveChessterArm.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "chesster_interfaces/action/detail/move_chesster_arm__rosidl_typesupport_introspection_c.h"
#include "chesster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"
#include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MoveChessterArm_Goal__rosidl_typesupport_introspection_c__MoveChessterArm_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chesster_interfaces__action__MoveChessterArm_Goal__init(message_memory);
}

void MoveChessterArm_Goal__rosidl_typesupport_introspection_c__MoveChessterArm_Goal_fini_function(void * message_memory)
{
  chesster_interfaces__action__MoveChessterArm_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveChessterArm_Goal__rosidl_typesupport_introspection_c__MoveChessterArm_Goal_message_member_array[1] = {
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_Goal, request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveChessterArm_Goal__rosidl_typesupport_introspection_c__MoveChessterArm_Goal_message_members = {
  "chesster_interfaces__action",  // message namespace
  "MoveChessterArm_Goal",  // message name
  1,  // number of fields
  sizeof(chesster_interfaces__action__MoveChessterArm_Goal),
  MoveChessterArm_Goal__rosidl_typesupport_introspection_c__MoveChessterArm_Goal_message_member_array,  // message members
  MoveChessterArm_Goal__rosidl_typesupport_introspection_c__MoveChessterArm_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveChessterArm_Goal__rosidl_typesupport_introspection_c__MoveChessterArm_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveChessterArm_Goal__rosidl_typesupport_introspection_c__MoveChessterArm_Goal_message_type_support_handle = {
  0,
  &MoveChessterArm_Goal__rosidl_typesupport_introspection_c__MoveChessterArm_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chesster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_Goal)() {
  if (!MoveChessterArm_Goal__rosidl_typesupport_introspection_c__MoveChessterArm_Goal_message_type_support_handle.typesupport_identifier) {
    MoveChessterArm_Goal__rosidl_typesupport_introspection_c__MoveChessterArm_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveChessterArm_Goal__rosidl_typesupport_introspection_c__MoveChessterArm_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveChessterArm_Result__rosidl_typesupport_introspection_c__MoveChessterArm_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chesster_interfaces__action__MoveChessterArm_Result__init(message_memory);
}

void MoveChessterArm_Result__rosidl_typesupport_introspection_c__MoveChessterArm_Result_fini_function(void * message_memory)
{
  chesster_interfaces__action__MoveChessterArm_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveChessterArm_Result__rosidl_typesupport_introspection_c__MoveChessterArm_Result_message_member_array[7] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_servo_0_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_Result, final_servo_0_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_servo_1_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_Result, final_servo_1_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_servo_2_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_Result, final_servo_2_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_servo_3_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_Result, final_servo_3_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_servo_4_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_Result, final_servo_4_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_servo_5_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_Result, final_servo_5_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveChessterArm_Result__rosidl_typesupport_introspection_c__MoveChessterArm_Result_message_members = {
  "chesster_interfaces__action",  // message namespace
  "MoveChessterArm_Result",  // message name
  7,  // number of fields
  sizeof(chesster_interfaces__action__MoveChessterArm_Result),
  MoveChessterArm_Result__rosidl_typesupport_introspection_c__MoveChessterArm_Result_message_member_array,  // message members
  MoveChessterArm_Result__rosidl_typesupport_introspection_c__MoveChessterArm_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveChessterArm_Result__rosidl_typesupport_introspection_c__MoveChessterArm_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveChessterArm_Result__rosidl_typesupport_introspection_c__MoveChessterArm_Result_message_type_support_handle = {
  0,
  &MoveChessterArm_Result__rosidl_typesupport_introspection_c__MoveChessterArm_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chesster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_Result)() {
  if (!MoveChessterArm_Result__rosidl_typesupport_introspection_c__MoveChessterArm_Result_message_type_support_handle.typesupport_identifier) {
    MoveChessterArm_Result__rosidl_typesupport_introspection_c__MoveChessterArm_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveChessterArm_Result__rosidl_typesupport_introspection_c__MoveChessterArm_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"


// Include directives for member types
// Member `status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveChessterArm_Feedback__rosidl_typesupport_introspection_c__MoveChessterArm_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chesster_interfaces__action__MoveChessterArm_Feedback__init(message_memory);
}

void MoveChessterArm_Feedback__rosidl_typesupport_introspection_c__MoveChessterArm_Feedback_fini_function(void * message_memory)
{
  chesster_interfaces__action__MoveChessterArm_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveChessterArm_Feedback__rosidl_typesupport_introspection_c__MoveChessterArm_Feedback_message_member_array[7] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_Feedback, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servo_0_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_Feedback, servo_0_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servo_1_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_Feedback, servo_1_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servo_2_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_Feedback, servo_2_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servo_3_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_Feedback, servo_3_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servo_4_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_Feedback, servo_4_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servo_5_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_Feedback, servo_5_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveChessterArm_Feedback__rosidl_typesupport_introspection_c__MoveChessterArm_Feedback_message_members = {
  "chesster_interfaces__action",  // message namespace
  "MoveChessterArm_Feedback",  // message name
  7,  // number of fields
  sizeof(chesster_interfaces__action__MoveChessterArm_Feedback),
  MoveChessterArm_Feedback__rosidl_typesupport_introspection_c__MoveChessterArm_Feedback_message_member_array,  // message members
  MoveChessterArm_Feedback__rosidl_typesupport_introspection_c__MoveChessterArm_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveChessterArm_Feedback__rosidl_typesupport_introspection_c__MoveChessterArm_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveChessterArm_Feedback__rosidl_typesupport_introspection_c__MoveChessterArm_Feedback_message_type_support_handle = {
  0,
  &MoveChessterArm_Feedback__rosidl_typesupport_introspection_c__MoveChessterArm_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chesster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_Feedback)() {
  if (!MoveChessterArm_Feedback__rosidl_typesupport_introspection_c__MoveChessterArm_Feedback_message_type_support_handle.typesupport_identifier) {
    MoveChessterArm_Feedback__rosidl_typesupport_introspection_c__MoveChessterArm_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveChessterArm_Feedback__rosidl_typesupport_introspection_c__MoveChessterArm_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "chesster_interfaces/action/move_chesster_arm.h"
// Member `goal`
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveChessterArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chesster_interfaces__action__MoveChessterArm_SendGoal_Request__init(message_memory);
}

void MoveChessterArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Request_fini_function(void * message_memory)
{
  chesster_interfaces__action__MoveChessterArm_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveChessterArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveChessterArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Request_message_members = {
  "chesster_interfaces__action",  // message namespace
  "MoveChessterArm_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(chesster_interfaces__action__MoveChessterArm_SendGoal_Request),
  MoveChessterArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Request_message_member_array,  // message members
  MoveChessterArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveChessterArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveChessterArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Request_message_type_support_handle = {
  0,
  &MoveChessterArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chesster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_SendGoal_Request)() {
  MoveChessterArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveChessterArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_Goal)();
  if (!MoveChessterArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    MoveChessterArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveChessterArm_SendGoal_Request__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveChessterArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chesster_interfaces__action__MoveChessterArm_SendGoal_Response__init(message_memory);
}

void MoveChessterArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Response_fini_function(void * message_memory)
{
  chesster_interfaces__action__MoveChessterArm_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveChessterArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveChessterArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Response_message_members = {
  "chesster_interfaces__action",  // message namespace
  "MoveChessterArm_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(chesster_interfaces__action__MoveChessterArm_SendGoal_Response),
  MoveChessterArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Response_message_member_array,  // message members
  MoveChessterArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveChessterArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveChessterArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Response_message_type_support_handle = {
  0,
  &MoveChessterArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chesster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_SendGoal_Response)() {
  MoveChessterArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!MoveChessterArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    MoveChessterArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveChessterArm_SendGoal_Response__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_service_members = {
  "chesster_interfaces__action",  // service namespace
  "MoveChessterArm_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_service_type_support_handle = {
  0,
  &chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chesster_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_SendGoal)() {
  if (!chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_service_type_support_handle.typesupport_identifier) {
    chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_SendGoal_Response)()->data;
  }

  return &chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveChessterArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chesster_interfaces__action__MoveChessterArm_GetResult_Request__init(message_memory);
}

void MoveChessterArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Request_fini_function(void * message_memory)
{
  chesster_interfaces__action__MoveChessterArm_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveChessterArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveChessterArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Request_message_members = {
  "chesster_interfaces__action",  // message namespace
  "MoveChessterArm_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(chesster_interfaces__action__MoveChessterArm_GetResult_Request),
  MoveChessterArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Request_message_member_array,  // message members
  MoveChessterArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveChessterArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveChessterArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Request_message_type_support_handle = {
  0,
  &MoveChessterArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chesster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_GetResult_Request)() {
  MoveChessterArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!MoveChessterArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    MoveChessterArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveChessterArm_GetResult_Request__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "chesster_interfaces/action/move_chesster_arm.h"
// Member `result`
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveChessterArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chesster_interfaces__action__MoveChessterArm_GetResult_Response__init(message_memory);
}

void MoveChessterArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Response_fini_function(void * message_memory)
{
  chesster_interfaces__action__MoveChessterArm_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveChessterArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveChessterArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Response_message_members = {
  "chesster_interfaces__action",  // message namespace
  "MoveChessterArm_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(chesster_interfaces__action__MoveChessterArm_GetResult_Response),
  MoveChessterArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Response_message_member_array,  // message members
  MoveChessterArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveChessterArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveChessterArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Response_message_type_support_handle = {
  0,
  &MoveChessterArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chesster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_GetResult_Response)() {
  MoveChessterArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_Result)();
  if (!MoveChessterArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    MoveChessterArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveChessterArm_GetResult_Response__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_service_members = {
  "chesster_interfaces__action",  // service namespace
  "MoveChessterArm_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_service_type_support_handle = {
  0,
  &chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chesster_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_GetResult)() {
  if (!chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_service_type_support_handle.typesupport_identifier) {
    chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_GetResult_Response)()->data;
  }

  return &chesster_interfaces__action__detail__move_chesster_arm__rosidl_typesupport_introspection_c__MoveChessterArm_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__rosidl_typesupport_introspection_c.h"
// already included above
// #include "chesster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "chesster_interfaces/action/move_chesster_arm.h"
// Member `feedback`
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveChessterArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveChessterArm_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  chesster_interfaces__action__MoveChessterArm_FeedbackMessage__init(message_memory);
}

void MoveChessterArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveChessterArm_FeedbackMessage_fini_function(void * message_memory)
{
  chesster_interfaces__action__MoveChessterArm_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveChessterArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveChessterArm_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(chesster_interfaces__action__MoveChessterArm_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveChessterArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveChessterArm_FeedbackMessage_message_members = {
  "chesster_interfaces__action",  // message namespace
  "MoveChessterArm_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(chesster_interfaces__action__MoveChessterArm_FeedbackMessage),
  MoveChessterArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveChessterArm_FeedbackMessage_message_member_array,  // message members
  MoveChessterArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveChessterArm_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveChessterArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveChessterArm_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveChessterArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveChessterArm_FeedbackMessage_message_type_support_handle = {
  0,
  &MoveChessterArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveChessterArm_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_chesster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_FeedbackMessage)() {
  MoveChessterArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveChessterArm_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveChessterArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveChessterArm_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, chesster_interfaces, action, MoveChessterArm_Feedback)();
  if (!MoveChessterArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveChessterArm_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    MoveChessterArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveChessterArm_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveChessterArm_FeedbackMessage__rosidl_typesupport_introspection_c__MoveChessterArm_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
