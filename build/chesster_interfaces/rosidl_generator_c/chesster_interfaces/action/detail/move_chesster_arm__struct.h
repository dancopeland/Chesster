// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chesster_interfaces:action/MoveChessterArm.idl
// generated code does not contain a copyright notice

#ifndef CHESSTER_INTERFACES__ACTION__DETAIL__MOVE_CHESSTER_ARM__STRUCT_H_
#define CHESSTER_INTERFACES__ACTION__DETAIL__MOVE_CHESSTER_ARM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/MoveChessterArm in the package chesster_interfaces.
typedef struct chesster_interfaces__action__MoveChessterArm_Goal
{
  bool request;
} chesster_interfaces__action__MoveChessterArm_Goal;

// Struct for a sequence of chesster_interfaces__action__MoveChessterArm_Goal.
typedef struct chesster_interfaces__action__MoveChessterArm_Goal__Sequence
{
  chesster_interfaces__action__MoveChessterArm_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesster_interfaces__action__MoveChessterArm_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/MoveChessterArm in the package chesster_interfaces.
typedef struct chesster_interfaces__action__MoveChessterArm_Result
{
  rosidl_runtime_c__String result;
  int32_t final_servo_0_angle;
  int32_t final_servo_1_angle;
  int32_t final_servo_2_angle;
  int32_t final_servo_3_angle;
  int32_t final_servo_4_angle;
  int32_t final_servo_5_angle;
} chesster_interfaces__action__MoveChessterArm_Result;

// Struct for a sequence of chesster_interfaces__action__MoveChessterArm_Result.
typedef struct chesster_interfaces__action__MoveChessterArm_Result__Sequence
{
  chesster_interfaces__action__MoveChessterArm_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesster_interfaces__action__MoveChessterArm_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in action/MoveChessterArm in the package chesster_interfaces.
typedef struct chesster_interfaces__action__MoveChessterArm_Feedback
{
  rosidl_runtime_c__String status;
  int32_t servo_0_angle;
  int32_t servo_1_angle;
  int32_t servo_2_angle;
  int32_t servo_3_angle;
  int32_t servo_4_angle;
  int32_t servo_5_angle;
} chesster_interfaces__action__MoveChessterArm_Feedback;

// Struct for a sequence of chesster_interfaces__action__MoveChessterArm_Feedback.
typedef struct chesster_interfaces__action__MoveChessterArm_Feedback__Sequence
{
  chesster_interfaces__action__MoveChessterArm_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesster_interfaces__action__MoveChessterArm_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"

// Struct defined in action/MoveChessterArm in the package chesster_interfaces.
typedef struct chesster_interfaces__action__MoveChessterArm_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  chesster_interfaces__action__MoveChessterArm_Goal goal;
} chesster_interfaces__action__MoveChessterArm_SendGoal_Request;

// Struct for a sequence of chesster_interfaces__action__MoveChessterArm_SendGoal_Request.
typedef struct chesster_interfaces__action__MoveChessterArm_SendGoal_Request__Sequence
{
  chesster_interfaces__action__MoveChessterArm_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesster_interfaces__action__MoveChessterArm_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/MoveChessterArm in the package chesster_interfaces.
typedef struct chesster_interfaces__action__MoveChessterArm_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} chesster_interfaces__action__MoveChessterArm_SendGoal_Response;

// Struct for a sequence of chesster_interfaces__action__MoveChessterArm_SendGoal_Response.
typedef struct chesster_interfaces__action__MoveChessterArm_SendGoal_Response__Sequence
{
  chesster_interfaces__action__MoveChessterArm_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesster_interfaces__action__MoveChessterArm_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/MoveChessterArm in the package chesster_interfaces.
typedef struct chesster_interfaces__action__MoveChessterArm_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} chesster_interfaces__action__MoveChessterArm_GetResult_Request;

// Struct for a sequence of chesster_interfaces__action__MoveChessterArm_GetResult_Request.
typedef struct chesster_interfaces__action__MoveChessterArm_GetResult_Request__Sequence
{
  chesster_interfaces__action__MoveChessterArm_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesster_interfaces__action__MoveChessterArm_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"

// Struct defined in action/MoveChessterArm in the package chesster_interfaces.
typedef struct chesster_interfaces__action__MoveChessterArm_GetResult_Response
{
  int8_t status;
  chesster_interfaces__action__MoveChessterArm_Result result;
} chesster_interfaces__action__MoveChessterArm_GetResult_Response;

// Struct for a sequence of chesster_interfaces__action__MoveChessterArm_GetResult_Response.
typedef struct chesster_interfaces__action__MoveChessterArm_GetResult_Response__Sequence
{
  chesster_interfaces__action__MoveChessterArm_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesster_interfaces__action__MoveChessterArm_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"

// Struct defined in action/MoveChessterArm in the package chesster_interfaces.
typedef struct chesster_interfaces__action__MoveChessterArm_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  chesster_interfaces__action__MoveChessterArm_Feedback feedback;
} chesster_interfaces__action__MoveChessterArm_FeedbackMessage;

// Struct for a sequence of chesster_interfaces__action__MoveChessterArm_FeedbackMessage.
typedef struct chesster_interfaces__action__MoveChessterArm_FeedbackMessage__Sequence
{
  chesster_interfaces__action__MoveChessterArm_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chesster_interfaces__action__MoveChessterArm_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHESSTER_INTERFACES__ACTION__DETAIL__MOVE_CHESSTER_ARM__STRUCT_H_
