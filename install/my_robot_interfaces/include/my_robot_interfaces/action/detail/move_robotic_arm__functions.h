// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_robot_interfaces:action/MoveRoboticArm.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__ACTION__DETAIL__MOVE_ROBOTIC_ARM__FUNCTIONS_H_
#define MY_ROBOT_INTERFACES__ACTION__DETAIL__MOVE_ROBOTIC_ARM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_robot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "my_robot_interfaces/action/detail/move_robotic_arm__struct.h"

/// Initialize action/MoveRoboticArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_robot_interfaces__action__MoveRoboticArm_Goal
 * )) before or use
 * my_robot_interfaces__action__MoveRoboticArm_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__action__MoveRoboticArm_Goal__init(my_robot_interfaces__action__MoveRoboticArm_Goal * msg);

/// Finalize action/MoveRoboticArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_Goal__fini(my_robot_interfaces__action__MoveRoboticArm_Goal * msg);

/// Create action/MoveRoboticArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_robot_interfaces__action__MoveRoboticArm_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__action__MoveRoboticArm_Goal *
my_robot_interfaces__action__MoveRoboticArm_Goal__create();

/// Destroy action/MoveRoboticArm message.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_Goal__destroy(my_robot_interfaces__action__MoveRoboticArm_Goal * msg);


/// Initialize array of action/MoveRoboticArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_robot_interfaces__action__MoveRoboticArm_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__action__MoveRoboticArm_Goal__Sequence__init(my_robot_interfaces__action__MoveRoboticArm_Goal__Sequence * array, size_t size);

/// Finalize array of action/MoveRoboticArm messages.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_Goal__Sequence__fini(my_robot_interfaces__action__MoveRoboticArm_Goal__Sequence * array);

/// Create array of action/MoveRoboticArm messages.
/**
 * It allocates the memory for the array and calls
 * my_robot_interfaces__action__MoveRoboticArm_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__action__MoveRoboticArm_Goal__Sequence *
my_robot_interfaces__action__MoveRoboticArm_Goal__Sequence__create(size_t size);

/// Destroy array of action/MoveRoboticArm messages.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_Goal__Sequence__destroy(my_robot_interfaces__action__MoveRoboticArm_Goal__Sequence * array);

/// Initialize action/MoveRoboticArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_robot_interfaces__action__MoveRoboticArm_Result
 * )) before or use
 * my_robot_interfaces__action__MoveRoboticArm_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__action__MoveRoboticArm_Result__init(my_robot_interfaces__action__MoveRoboticArm_Result * msg);

/// Finalize action/MoveRoboticArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_Result__fini(my_robot_interfaces__action__MoveRoboticArm_Result * msg);

/// Create action/MoveRoboticArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_robot_interfaces__action__MoveRoboticArm_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__action__MoveRoboticArm_Result *
my_robot_interfaces__action__MoveRoboticArm_Result__create();

/// Destroy action/MoveRoboticArm message.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_Result__destroy(my_robot_interfaces__action__MoveRoboticArm_Result * msg);


/// Initialize array of action/MoveRoboticArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_robot_interfaces__action__MoveRoboticArm_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__action__MoveRoboticArm_Result__Sequence__init(my_robot_interfaces__action__MoveRoboticArm_Result__Sequence * array, size_t size);

/// Finalize array of action/MoveRoboticArm messages.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_Result__Sequence__fini(my_robot_interfaces__action__MoveRoboticArm_Result__Sequence * array);

/// Create array of action/MoveRoboticArm messages.
/**
 * It allocates the memory for the array and calls
 * my_robot_interfaces__action__MoveRoboticArm_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__action__MoveRoboticArm_Result__Sequence *
my_robot_interfaces__action__MoveRoboticArm_Result__Sequence__create(size_t size);

/// Destroy array of action/MoveRoboticArm messages.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_Result__Sequence__destroy(my_robot_interfaces__action__MoveRoboticArm_Result__Sequence * array);

/// Initialize action/MoveRoboticArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_robot_interfaces__action__MoveRoboticArm_Feedback
 * )) before or use
 * my_robot_interfaces__action__MoveRoboticArm_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__action__MoveRoboticArm_Feedback__init(my_robot_interfaces__action__MoveRoboticArm_Feedback * msg);

/// Finalize action/MoveRoboticArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_Feedback__fini(my_robot_interfaces__action__MoveRoboticArm_Feedback * msg);

/// Create action/MoveRoboticArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_robot_interfaces__action__MoveRoboticArm_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__action__MoveRoboticArm_Feedback *
my_robot_interfaces__action__MoveRoboticArm_Feedback__create();

/// Destroy action/MoveRoboticArm message.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_Feedback__destroy(my_robot_interfaces__action__MoveRoboticArm_Feedback * msg);


/// Initialize array of action/MoveRoboticArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_robot_interfaces__action__MoveRoboticArm_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__action__MoveRoboticArm_Feedback__Sequence__init(my_robot_interfaces__action__MoveRoboticArm_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MoveRoboticArm messages.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_Feedback__Sequence__fini(my_robot_interfaces__action__MoveRoboticArm_Feedback__Sequence * array);

/// Create array of action/MoveRoboticArm messages.
/**
 * It allocates the memory for the array and calls
 * my_robot_interfaces__action__MoveRoboticArm_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__action__MoveRoboticArm_Feedback__Sequence *
my_robot_interfaces__action__MoveRoboticArm_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MoveRoboticArm messages.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_Feedback__Sequence__destroy(my_robot_interfaces__action__MoveRoboticArm_Feedback__Sequence * array);

/// Initialize action/MoveRoboticArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request
 * )) before or use
 * my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__init(my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request * msg);

/// Finalize action/MoveRoboticArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__fini(my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request * msg);

/// Create action/MoveRoboticArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request *
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__create();

/// Destroy action/MoveRoboticArm message.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__destroy(my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request * msg);


/// Initialize array of action/MoveRoboticArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__Sequence__init(my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveRoboticArm messages.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__Sequence__fini(my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__Sequence * array);

/// Create array of action/MoveRoboticArm messages.
/**
 * It allocates the memory for the array and calls
 * my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__Sequence *
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveRoboticArm messages.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__Sequence__destroy(my_robot_interfaces__action__MoveRoboticArm_SendGoal_Request__Sequence * array);

/// Initialize action/MoveRoboticArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response
 * )) before or use
 * my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__init(my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response * msg);

/// Finalize action/MoveRoboticArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__fini(my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response * msg);

/// Create action/MoveRoboticArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response *
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__create();

/// Destroy action/MoveRoboticArm message.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__destroy(my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response * msg);


/// Initialize array of action/MoveRoboticArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__Sequence__init(my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveRoboticArm messages.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__Sequence__fini(my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__Sequence * array);

/// Create array of action/MoveRoboticArm messages.
/**
 * It allocates the memory for the array and calls
 * my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__Sequence *
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveRoboticArm messages.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__Sequence__destroy(my_robot_interfaces__action__MoveRoboticArm_SendGoal_Response__Sequence * array);

/// Initialize action/MoveRoboticArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_robot_interfaces__action__MoveRoboticArm_GetResult_Request
 * )) before or use
 * my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__init(my_robot_interfaces__action__MoveRoboticArm_GetResult_Request * msg);

/// Finalize action/MoveRoboticArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__fini(my_robot_interfaces__action__MoveRoboticArm_GetResult_Request * msg);

/// Create action/MoveRoboticArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__action__MoveRoboticArm_GetResult_Request *
my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__create();

/// Destroy action/MoveRoboticArm message.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__destroy(my_robot_interfaces__action__MoveRoboticArm_GetResult_Request * msg);


/// Initialize array of action/MoveRoboticArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__Sequence__init(my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveRoboticArm messages.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__Sequence__fini(my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__Sequence * array);

/// Create array of action/MoveRoboticArm messages.
/**
 * It allocates the memory for the array and calls
 * my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__Sequence *
my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveRoboticArm messages.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__Sequence__destroy(my_robot_interfaces__action__MoveRoboticArm_GetResult_Request__Sequence * array);

/// Initialize action/MoveRoboticArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_robot_interfaces__action__MoveRoboticArm_GetResult_Response
 * )) before or use
 * my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__init(my_robot_interfaces__action__MoveRoboticArm_GetResult_Response * msg);

/// Finalize action/MoveRoboticArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__fini(my_robot_interfaces__action__MoveRoboticArm_GetResult_Response * msg);

/// Create action/MoveRoboticArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__action__MoveRoboticArm_GetResult_Response *
my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__create();

/// Destroy action/MoveRoboticArm message.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__destroy(my_robot_interfaces__action__MoveRoboticArm_GetResult_Response * msg);


/// Initialize array of action/MoveRoboticArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__Sequence__init(my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveRoboticArm messages.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__Sequence__fini(my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__Sequence * array);

/// Create array of action/MoveRoboticArm messages.
/**
 * It allocates the memory for the array and calls
 * my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__Sequence *
my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveRoboticArm messages.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__Sequence__destroy(my_robot_interfaces__action__MoveRoboticArm_GetResult_Response__Sequence * array);

/// Initialize action/MoveRoboticArm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage
 * )) before or use
 * my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__init(my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage * msg);

/// Finalize action/MoveRoboticArm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__fini(my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage * msg);

/// Create action/MoveRoboticArm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage *
my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__create();

/// Destroy action/MoveRoboticArm message.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__destroy(my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage * msg);


/// Initialize array of action/MoveRoboticArm messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
bool
my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__Sequence__init(my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MoveRoboticArm messages.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__Sequence__fini(my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__Sequence * array);

/// Create array of action/MoveRoboticArm messages.
/**
 * It allocates the memory for the array and calls
 * my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__Sequence *
my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MoveRoboticArm messages.
/**
 * It calls
 * my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
void
my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__Sequence__destroy(my_robot_interfaces__action__MoveRoboticArm_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__ACTION__DETAIL__MOVE_ROBOTIC_ARM__FUNCTIONS_H_
