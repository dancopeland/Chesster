// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from chesster_interfaces:action/MoveChessterArm.idl
// generated code does not contain a copyright notice
#include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
chesster_interfaces__action__MoveChessterArm_Goal__init(chesster_interfaces__action__MoveChessterArm_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // request
  return true;
}

void
chesster_interfaces__action__MoveChessterArm_Goal__fini(chesster_interfaces__action__MoveChessterArm_Goal * msg)
{
  if (!msg) {
    return;
  }
  // request
}

chesster_interfaces__action__MoveChessterArm_Goal *
chesster_interfaces__action__MoveChessterArm_Goal__create()
{
  chesster_interfaces__action__MoveChessterArm_Goal * msg = (chesster_interfaces__action__MoveChessterArm_Goal *)malloc(sizeof(chesster_interfaces__action__MoveChessterArm_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chesster_interfaces__action__MoveChessterArm_Goal));
  bool success = chesster_interfaces__action__MoveChessterArm_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
chesster_interfaces__action__MoveChessterArm_Goal__destroy(chesster_interfaces__action__MoveChessterArm_Goal * msg)
{
  if (msg) {
    chesster_interfaces__action__MoveChessterArm_Goal__fini(msg);
  }
  free(msg);
}


bool
chesster_interfaces__action__MoveChessterArm_Goal__Sequence__init(chesster_interfaces__action__MoveChessterArm_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  chesster_interfaces__action__MoveChessterArm_Goal * data = NULL;
  if (size) {
    data = (chesster_interfaces__action__MoveChessterArm_Goal *)calloc(size, sizeof(chesster_interfaces__action__MoveChessterArm_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chesster_interfaces__action__MoveChessterArm_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chesster_interfaces__action__MoveChessterArm_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
chesster_interfaces__action__MoveChessterArm_Goal__Sequence__fini(chesster_interfaces__action__MoveChessterArm_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      chesster_interfaces__action__MoveChessterArm_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

chesster_interfaces__action__MoveChessterArm_Goal__Sequence *
chesster_interfaces__action__MoveChessterArm_Goal__Sequence__create(size_t size)
{
  chesster_interfaces__action__MoveChessterArm_Goal__Sequence * array = (chesster_interfaces__action__MoveChessterArm_Goal__Sequence *)malloc(sizeof(chesster_interfaces__action__MoveChessterArm_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = chesster_interfaces__action__MoveChessterArm_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
chesster_interfaces__action__MoveChessterArm_Goal__Sequence__destroy(chesster_interfaces__action__MoveChessterArm_Goal__Sequence * array)
{
  if (array) {
    chesster_interfaces__action__MoveChessterArm_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

bool
chesster_interfaces__action__MoveChessterArm_Result__init(chesster_interfaces__action__MoveChessterArm_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    chesster_interfaces__action__MoveChessterArm_Result__fini(msg);
    return false;
  }
  // final_servo_0_angle
  // final_servo_1_angle
  // final_servo_2_angle
  // final_servo_3_angle
  // final_servo_4_angle
  // final_servo_5_angle
  return true;
}

void
chesster_interfaces__action__MoveChessterArm_Result__fini(chesster_interfaces__action__MoveChessterArm_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
  rosidl_runtime_c__String__fini(&msg->result);
  // final_servo_0_angle
  // final_servo_1_angle
  // final_servo_2_angle
  // final_servo_3_angle
  // final_servo_4_angle
  // final_servo_5_angle
}

chesster_interfaces__action__MoveChessterArm_Result *
chesster_interfaces__action__MoveChessterArm_Result__create()
{
  chesster_interfaces__action__MoveChessterArm_Result * msg = (chesster_interfaces__action__MoveChessterArm_Result *)malloc(sizeof(chesster_interfaces__action__MoveChessterArm_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chesster_interfaces__action__MoveChessterArm_Result));
  bool success = chesster_interfaces__action__MoveChessterArm_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
chesster_interfaces__action__MoveChessterArm_Result__destroy(chesster_interfaces__action__MoveChessterArm_Result * msg)
{
  if (msg) {
    chesster_interfaces__action__MoveChessterArm_Result__fini(msg);
  }
  free(msg);
}


bool
chesster_interfaces__action__MoveChessterArm_Result__Sequence__init(chesster_interfaces__action__MoveChessterArm_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  chesster_interfaces__action__MoveChessterArm_Result * data = NULL;
  if (size) {
    data = (chesster_interfaces__action__MoveChessterArm_Result *)calloc(size, sizeof(chesster_interfaces__action__MoveChessterArm_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chesster_interfaces__action__MoveChessterArm_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chesster_interfaces__action__MoveChessterArm_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
chesster_interfaces__action__MoveChessterArm_Result__Sequence__fini(chesster_interfaces__action__MoveChessterArm_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      chesster_interfaces__action__MoveChessterArm_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

chesster_interfaces__action__MoveChessterArm_Result__Sequence *
chesster_interfaces__action__MoveChessterArm_Result__Sequence__create(size_t size)
{
  chesster_interfaces__action__MoveChessterArm_Result__Sequence * array = (chesster_interfaces__action__MoveChessterArm_Result__Sequence *)malloc(sizeof(chesster_interfaces__action__MoveChessterArm_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = chesster_interfaces__action__MoveChessterArm_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
chesster_interfaces__action__MoveChessterArm_Result__Sequence__destroy(chesster_interfaces__action__MoveChessterArm_Result__Sequence * array)
{
  if (array) {
    chesster_interfaces__action__MoveChessterArm_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
chesster_interfaces__action__MoveChessterArm_Feedback__init(chesster_interfaces__action__MoveChessterArm_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    chesster_interfaces__action__MoveChessterArm_Feedback__fini(msg);
    return false;
  }
  // servo_0_angle
  // servo_1_angle
  // servo_2_angle
  // servo_3_angle
  // servo_4_angle
  // servo_5_angle
  return true;
}

void
chesster_interfaces__action__MoveChessterArm_Feedback__fini(chesster_interfaces__action__MoveChessterArm_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // servo_0_angle
  // servo_1_angle
  // servo_2_angle
  // servo_3_angle
  // servo_4_angle
  // servo_5_angle
}

chesster_interfaces__action__MoveChessterArm_Feedback *
chesster_interfaces__action__MoveChessterArm_Feedback__create()
{
  chesster_interfaces__action__MoveChessterArm_Feedback * msg = (chesster_interfaces__action__MoveChessterArm_Feedback *)malloc(sizeof(chesster_interfaces__action__MoveChessterArm_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chesster_interfaces__action__MoveChessterArm_Feedback));
  bool success = chesster_interfaces__action__MoveChessterArm_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
chesster_interfaces__action__MoveChessterArm_Feedback__destroy(chesster_interfaces__action__MoveChessterArm_Feedback * msg)
{
  if (msg) {
    chesster_interfaces__action__MoveChessterArm_Feedback__fini(msg);
  }
  free(msg);
}


bool
chesster_interfaces__action__MoveChessterArm_Feedback__Sequence__init(chesster_interfaces__action__MoveChessterArm_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  chesster_interfaces__action__MoveChessterArm_Feedback * data = NULL;
  if (size) {
    data = (chesster_interfaces__action__MoveChessterArm_Feedback *)calloc(size, sizeof(chesster_interfaces__action__MoveChessterArm_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chesster_interfaces__action__MoveChessterArm_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chesster_interfaces__action__MoveChessterArm_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
chesster_interfaces__action__MoveChessterArm_Feedback__Sequence__fini(chesster_interfaces__action__MoveChessterArm_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      chesster_interfaces__action__MoveChessterArm_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

chesster_interfaces__action__MoveChessterArm_Feedback__Sequence *
chesster_interfaces__action__MoveChessterArm_Feedback__Sequence__create(size_t size)
{
  chesster_interfaces__action__MoveChessterArm_Feedback__Sequence * array = (chesster_interfaces__action__MoveChessterArm_Feedback__Sequence *)malloc(sizeof(chesster_interfaces__action__MoveChessterArm_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = chesster_interfaces__action__MoveChessterArm_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
chesster_interfaces__action__MoveChessterArm_Feedback__Sequence__destroy(chesster_interfaces__action__MoveChessterArm_Feedback__Sequence * array)
{
  if (array) {
    chesster_interfaces__action__MoveChessterArm_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"

bool
chesster_interfaces__action__MoveChessterArm_SendGoal_Request__init(chesster_interfaces__action__MoveChessterArm_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    chesster_interfaces__action__MoveChessterArm_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!chesster_interfaces__action__MoveChessterArm_Goal__init(&msg->goal)) {
    chesster_interfaces__action__MoveChessterArm_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
chesster_interfaces__action__MoveChessterArm_SendGoal_Request__fini(chesster_interfaces__action__MoveChessterArm_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  chesster_interfaces__action__MoveChessterArm_Goal__fini(&msg->goal);
}

chesster_interfaces__action__MoveChessterArm_SendGoal_Request *
chesster_interfaces__action__MoveChessterArm_SendGoal_Request__create()
{
  chesster_interfaces__action__MoveChessterArm_SendGoal_Request * msg = (chesster_interfaces__action__MoveChessterArm_SendGoal_Request *)malloc(sizeof(chesster_interfaces__action__MoveChessterArm_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chesster_interfaces__action__MoveChessterArm_SendGoal_Request));
  bool success = chesster_interfaces__action__MoveChessterArm_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
chesster_interfaces__action__MoveChessterArm_SendGoal_Request__destroy(chesster_interfaces__action__MoveChessterArm_SendGoal_Request * msg)
{
  if (msg) {
    chesster_interfaces__action__MoveChessterArm_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
chesster_interfaces__action__MoveChessterArm_SendGoal_Request__Sequence__init(chesster_interfaces__action__MoveChessterArm_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  chesster_interfaces__action__MoveChessterArm_SendGoal_Request * data = NULL;
  if (size) {
    data = (chesster_interfaces__action__MoveChessterArm_SendGoal_Request *)calloc(size, sizeof(chesster_interfaces__action__MoveChessterArm_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chesster_interfaces__action__MoveChessterArm_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chesster_interfaces__action__MoveChessterArm_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
chesster_interfaces__action__MoveChessterArm_SendGoal_Request__Sequence__fini(chesster_interfaces__action__MoveChessterArm_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      chesster_interfaces__action__MoveChessterArm_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

chesster_interfaces__action__MoveChessterArm_SendGoal_Request__Sequence *
chesster_interfaces__action__MoveChessterArm_SendGoal_Request__Sequence__create(size_t size)
{
  chesster_interfaces__action__MoveChessterArm_SendGoal_Request__Sequence * array = (chesster_interfaces__action__MoveChessterArm_SendGoal_Request__Sequence *)malloc(sizeof(chesster_interfaces__action__MoveChessterArm_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = chesster_interfaces__action__MoveChessterArm_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
chesster_interfaces__action__MoveChessterArm_SendGoal_Request__Sequence__destroy(chesster_interfaces__action__MoveChessterArm_SendGoal_Request__Sequence * array)
{
  if (array) {
    chesster_interfaces__action__MoveChessterArm_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
chesster_interfaces__action__MoveChessterArm_SendGoal_Response__init(chesster_interfaces__action__MoveChessterArm_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    chesster_interfaces__action__MoveChessterArm_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
chesster_interfaces__action__MoveChessterArm_SendGoal_Response__fini(chesster_interfaces__action__MoveChessterArm_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

chesster_interfaces__action__MoveChessterArm_SendGoal_Response *
chesster_interfaces__action__MoveChessterArm_SendGoal_Response__create()
{
  chesster_interfaces__action__MoveChessterArm_SendGoal_Response * msg = (chesster_interfaces__action__MoveChessterArm_SendGoal_Response *)malloc(sizeof(chesster_interfaces__action__MoveChessterArm_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chesster_interfaces__action__MoveChessterArm_SendGoal_Response));
  bool success = chesster_interfaces__action__MoveChessterArm_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
chesster_interfaces__action__MoveChessterArm_SendGoal_Response__destroy(chesster_interfaces__action__MoveChessterArm_SendGoal_Response * msg)
{
  if (msg) {
    chesster_interfaces__action__MoveChessterArm_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
chesster_interfaces__action__MoveChessterArm_SendGoal_Response__Sequence__init(chesster_interfaces__action__MoveChessterArm_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  chesster_interfaces__action__MoveChessterArm_SendGoal_Response * data = NULL;
  if (size) {
    data = (chesster_interfaces__action__MoveChessterArm_SendGoal_Response *)calloc(size, sizeof(chesster_interfaces__action__MoveChessterArm_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chesster_interfaces__action__MoveChessterArm_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chesster_interfaces__action__MoveChessterArm_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
chesster_interfaces__action__MoveChessterArm_SendGoal_Response__Sequence__fini(chesster_interfaces__action__MoveChessterArm_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      chesster_interfaces__action__MoveChessterArm_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

chesster_interfaces__action__MoveChessterArm_SendGoal_Response__Sequence *
chesster_interfaces__action__MoveChessterArm_SendGoal_Response__Sequence__create(size_t size)
{
  chesster_interfaces__action__MoveChessterArm_SendGoal_Response__Sequence * array = (chesster_interfaces__action__MoveChessterArm_SendGoal_Response__Sequence *)malloc(sizeof(chesster_interfaces__action__MoveChessterArm_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = chesster_interfaces__action__MoveChessterArm_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
chesster_interfaces__action__MoveChessterArm_SendGoal_Response__Sequence__destroy(chesster_interfaces__action__MoveChessterArm_SendGoal_Response__Sequence * array)
{
  if (array) {
    chesster_interfaces__action__MoveChessterArm_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
chesster_interfaces__action__MoveChessterArm_GetResult_Request__init(chesster_interfaces__action__MoveChessterArm_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    chesster_interfaces__action__MoveChessterArm_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
chesster_interfaces__action__MoveChessterArm_GetResult_Request__fini(chesster_interfaces__action__MoveChessterArm_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

chesster_interfaces__action__MoveChessterArm_GetResult_Request *
chesster_interfaces__action__MoveChessterArm_GetResult_Request__create()
{
  chesster_interfaces__action__MoveChessterArm_GetResult_Request * msg = (chesster_interfaces__action__MoveChessterArm_GetResult_Request *)malloc(sizeof(chesster_interfaces__action__MoveChessterArm_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chesster_interfaces__action__MoveChessterArm_GetResult_Request));
  bool success = chesster_interfaces__action__MoveChessterArm_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
chesster_interfaces__action__MoveChessterArm_GetResult_Request__destroy(chesster_interfaces__action__MoveChessterArm_GetResult_Request * msg)
{
  if (msg) {
    chesster_interfaces__action__MoveChessterArm_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
chesster_interfaces__action__MoveChessterArm_GetResult_Request__Sequence__init(chesster_interfaces__action__MoveChessterArm_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  chesster_interfaces__action__MoveChessterArm_GetResult_Request * data = NULL;
  if (size) {
    data = (chesster_interfaces__action__MoveChessterArm_GetResult_Request *)calloc(size, sizeof(chesster_interfaces__action__MoveChessterArm_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chesster_interfaces__action__MoveChessterArm_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chesster_interfaces__action__MoveChessterArm_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
chesster_interfaces__action__MoveChessterArm_GetResult_Request__Sequence__fini(chesster_interfaces__action__MoveChessterArm_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      chesster_interfaces__action__MoveChessterArm_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

chesster_interfaces__action__MoveChessterArm_GetResult_Request__Sequence *
chesster_interfaces__action__MoveChessterArm_GetResult_Request__Sequence__create(size_t size)
{
  chesster_interfaces__action__MoveChessterArm_GetResult_Request__Sequence * array = (chesster_interfaces__action__MoveChessterArm_GetResult_Request__Sequence *)malloc(sizeof(chesster_interfaces__action__MoveChessterArm_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = chesster_interfaces__action__MoveChessterArm_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
chesster_interfaces__action__MoveChessterArm_GetResult_Request__Sequence__destroy(chesster_interfaces__action__MoveChessterArm_GetResult_Request__Sequence * array)
{
  if (array) {
    chesster_interfaces__action__MoveChessterArm_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"

bool
chesster_interfaces__action__MoveChessterArm_GetResult_Response__init(chesster_interfaces__action__MoveChessterArm_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!chesster_interfaces__action__MoveChessterArm_Result__init(&msg->result)) {
    chesster_interfaces__action__MoveChessterArm_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
chesster_interfaces__action__MoveChessterArm_GetResult_Response__fini(chesster_interfaces__action__MoveChessterArm_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  chesster_interfaces__action__MoveChessterArm_Result__fini(&msg->result);
}

chesster_interfaces__action__MoveChessterArm_GetResult_Response *
chesster_interfaces__action__MoveChessterArm_GetResult_Response__create()
{
  chesster_interfaces__action__MoveChessterArm_GetResult_Response * msg = (chesster_interfaces__action__MoveChessterArm_GetResult_Response *)malloc(sizeof(chesster_interfaces__action__MoveChessterArm_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chesster_interfaces__action__MoveChessterArm_GetResult_Response));
  bool success = chesster_interfaces__action__MoveChessterArm_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
chesster_interfaces__action__MoveChessterArm_GetResult_Response__destroy(chesster_interfaces__action__MoveChessterArm_GetResult_Response * msg)
{
  if (msg) {
    chesster_interfaces__action__MoveChessterArm_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
chesster_interfaces__action__MoveChessterArm_GetResult_Response__Sequence__init(chesster_interfaces__action__MoveChessterArm_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  chesster_interfaces__action__MoveChessterArm_GetResult_Response * data = NULL;
  if (size) {
    data = (chesster_interfaces__action__MoveChessterArm_GetResult_Response *)calloc(size, sizeof(chesster_interfaces__action__MoveChessterArm_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chesster_interfaces__action__MoveChessterArm_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chesster_interfaces__action__MoveChessterArm_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
chesster_interfaces__action__MoveChessterArm_GetResult_Response__Sequence__fini(chesster_interfaces__action__MoveChessterArm_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      chesster_interfaces__action__MoveChessterArm_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

chesster_interfaces__action__MoveChessterArm_GetResult_Response__Sequence *
chesster_interfaces__action__MoveChessterArm_GetResult_Response__Sequence__create(size_t size)
{
  chesster_interfaces__action__MoveChessterArm_GetResult_Response__Sequence * array = (chesster_interfaces__action__MoveChessterArm_GetResult_Response__Sequence *)malloc(sizeof(chesster_interfaces__action__MoveChessterArm_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = chesster_interfaces__action__MoveChessterArm_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
chesster_interfaces__action__MoveChessterArm_GetResult_Response__Sequence__destroy(chesster_interfaces__action__MoveChessterArm_GetResult_Response__Sequence * array)
{
  if (array) {
    chesster_interfaces__action__MoveChessterArm_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"

bool
chesster_interfaces__action__MoveChessterArm_FeedbackMessage__init(chesster_interfaces__action__MoveChessterArm_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    chesster_interfaces__action__MoveChessterArm_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!chesster_interfaces__action__MoveChessterArm_Feedback__init(&msg->feedback)) {
    chesster_interfaces__action__MoveChessterArm_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
chesster_interfaces__action__MoveChessterArm_FeedbackMessage__fini(chesster_interfaces__action__MoveChessterArm_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  chesster_interfaces__action__MoveChessterArm_Feedback__fini(&msg->feedback);
}

chesster_interfaces__action__MoveChessterArm_FeedbackMessage *
chesster_interfaces__action__MoveChessterArm_FeedbackMessage__create()
{
  chesster_interfaces__action__MoveChessterArm_FeedbackMessage * msg = (chesster_interfaces__action__MoveChessterArm_FeedbackMessage *)malloc(sizeof(chesster_interfaces__action__MoveChessterArm_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(chesster_interfaces__action__MoveChessterArm_FeedbackMessage));
  bool success = chesster_interfaces__action__MoveChessterArm_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
chesster_interfaces__action__MoveChessterArm_FeedbackMessage__destroy(chesster_interfaces__action__MoveChessterArm_FeedbackMessage * msg)
{
  if (msg) {
    chesster_interfaces__action__MoveChessterArm_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
chesster_interfaces__action__MoveChessterArm_FeedbackMessage__Sequence__init(chesster_interfaces__action__MoveChessterArm_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  chesster_interfaces__action__MoveChessterArm_FeedbackMessage * data = NULL;
  if (size) {
    data = (chesster_interfaces__action__MoveChessterArm_FeedbackMessage *)calloc(size, sizeof(chesster_interfaces__action__MoveChessterArm_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = chesster_interfaces__action__MoveChessterArm_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        chesster_interfaces__action__MoveChessterArm_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
chesster_interfaces__action__MoveChessterArm_FeedbackMessage__Sequence__fini(chesster_interfaces__action__MoveChessterArm_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      chesster_interfaces__action__MoveChessterArm_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

chesster_interfaces__action__MoveChessterArm_FeedbackMessage__Sequence *
chesster_interfaces__action__MoveChessterArm_FeedbackMessage__Sequence__create(size_t size)
{
  chesster_interfaces__action__MoveChessterArm_FeedbackMessage__Sequence * array = (chesster_interfaces__action__MoveChessterArm_FeedbackMessage__Sequence *)malloc(sizeof(chesster_interfaces__action__MoveChessterArm_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = chesster_interfaces__action__MoveChessterArm_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
chesster_interfaces__action__MoveChessterArm_FeedbackMessage__Sequence__destroy(chesster_interfaces__action__MoveChessterArm_FeedbackMessage__Sequence * array)
{
  if (array) {
    chesster_interfaces__action__MoveChessterArm_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
