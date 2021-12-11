// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from chesster_interfaces:action/MoveChessterArm.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"
#include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool chesster_interfaces__action__move_chesster_arm__goal__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("chesster_interfaces.action._move_chesster_arm.MoveChessterArm_Goal", full_classname_dest, 66) == 0);
  }
  chesster_interfaces__action__MoveChessterArm_Goal * ros_message = _ros_message;
  {  // request
    PyObject * field = PyObject_GetAttrString(_pymsg, "request");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->request = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * chesster_interfaces__action__move_chesster_arm__goal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveChessterArm_Goal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("chesster_interfaces.action._move_chesster_arm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveChessterArm_Goal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  chesster_interfaces__action__MoveChessterArm_Goal * ros_message = (chesster_interfaces__action__MoveChessterArm_Goal *)raw_ros_message;
  {  // request
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->request ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool chesster_interfaces__action__move_chesster_arm__result__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("chesster_interfaces.action._move_chesster_arm.MoveChessterArm_Result", full_classname_dest, 68) == 0);
  }
  chesster_interfaces__action__MoveChessterArm_Result * ros_message = _ros_message;
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->result, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // final_servo_0_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "final_servo_0_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->final_servo_0_angle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // final_servo_1_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "final_servo_1_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->final_servo_1_angle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // final_servo_2_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "final_servo_2_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->final_servo_2_angle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // final_servo_3_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "final_servo_3_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->final_servo_3_angle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // final_servo_4_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "final_servo_4_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->final_servo_4_angle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // final_servo_5_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "final_servo_5_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->final_servo_5_angle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * chesster_interfaces__action__move_chesster_arm__result__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveChessterArm_Result */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("chesster_interfaces.action._move_chesster_arm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveChessterArm_Result");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  chesster_interfaces__action__MoveChessterArm_Result * ros_message = (chesster_interfaces__action__MoveChessterArm_Result *)raw_ros_message;
  {  // result
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->result.data,
      strlen(ros_message->result.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // final_servo_0_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->final_servo_0_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "final_servo_0_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // final_servo_1_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->final_servo_1_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "final_servo_1_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // final_servo_2_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->final_servo_2_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "final_servo_2_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // final_servo_3_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->final_servo_3_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "final_servo_3_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // final_servo_4_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->final_servo_4_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "final_servo_4_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // final_servo_5_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->final_servo_5_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "final_servo_5_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"

// already included above
// #include "rosidl_runtime_c/string.h"
// already included above
// #include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool chesster_interfaces__action__move_chesster_arm__feedback__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("chesster_interfaces.action._move_chesster_arm.MoveChessterArm_Feedback", full_classname_dest, 70) == 0);
  }
  chesster_interfaces__action__MoveChessterArm_Feedback * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // servo_0_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_0_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->servo_0_angle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // servo_1_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_1_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->servo_1_angle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // servo_2_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_2_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->servo_2_angle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // servo_3_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_3_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->servo_3_angle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // servo_4_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_4_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->servo_4_angle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // servo_5_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_5_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->servo_5_angle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * chesster_interfaces__action__move_chesster_arm__feedback__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveChessterArm_Feedback */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("chesster_interfaces.action._move_chesster_arm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveChessterArm_Feedback");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  chesster_interfaces__action__MoveChessterArm_Feedback * ros_message = (chesster_interfaces__action__MoveChessterArm_Feedback *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->status.data,
      strlen(ros_message->status.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servo_0_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->servo_0_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_0_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servo_1_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->servo_1_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_1_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servo_2_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->servo_2_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_2_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servo_3_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->servo_3_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_3_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servo_4_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->servo_4_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_4_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servo_5_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->servo_5_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_5_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);
bool chesster_interfaces__action__move_chesster_arm__goal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * chesster_interfaces__action__move_chesster_arm__goal__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool chesster_interfaces__action__move_chesster_arm__send_goal__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[79];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("chesster_interfaces.action._move_chesster_arm.MoveChessterArm_SendGoal_Request", full_classname_dest, 78) == 0);
  }
  chesster_interfaces__action__MoveChessterArm_SendGoal_Request * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal");
    if (!field) {
      return false;
    }
    if (!chesster_interfaces__action__move_chesster_arm__goal__convert_from_py(field, &ros_message->goal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * chesster_interfaces__action__move_chesster_arm__send_goal__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveChessterArm_SendGoal_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("chesster_interfaces.action._move_chesster_arm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveChessterArm_SendGoal_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  chesster_interfaces__action__MoveChessterArm_SendGoal_Request * ros_message = (chesster_interfaces__action__MoveChessterArm_SendGoal_Request *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goal
    PyObject * field = NULL;
    field = chesster_interfaces__action__move_chesster_arm__goal__convert_to_py(&ros_message->goal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool chesster_interfaces__action__move_chesster_arm__send_goal__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[80];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("chesster_interfaces.action._move_chesster_arm.MoveChessterArm_SendGoal_Response", full_classname_dest, 79) == 0);
  }
  chesster_interfaces__action__MoveChessterArm_SendGoal_Response * ros_message = _ros_message;
  {  // accepted
    PyObject * field = PyObject_GetAttrString(_pymsg, "accepted");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accepted = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * chesster_interfaces__action__move_chesster_arm__send_goal__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveChessterArm_SendGoal_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("chesster_interfaces.action._move_chesster_arm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveChessterArm_SendGoal_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  chesster_interfaces__action__MoveChessterArm_SendGoal_Response * ros_message = (chesster_interfaces__action__MoveChessterArm_SendGoal_Response *)raw_ros_message;
  {  // accepted
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accepted ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accepted", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool chesster_interfaces__action__move_chesster_arm__get_result__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[80];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("chesster_interfaces.action._move_chesster_arm.MoveChessterArm_GetResult_Request", full_classname_dest, 79) == 0);
  }
  chesster_interfaces__action__MoveChessterArm_GetResult_Request * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * chesster_interfaces__action__move_chesster_arm__get_result__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveChessterArm_GetResult_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("chesster_interfaces.action._move_chesster_arm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveChessterArm_GetResult_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  chesster_interfaces__action__MoveChessterArm_GetResult_Request * ros_message = (chesster_interfaces__action__MoveChessterArm_GetResult_Request *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"

bool chesster_interfaces__action__move_chesster_arm__result__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * chesster_interfaces__action__move_chesster_arm__result__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool chesster_interfaces__action__move_chesster_arm__get_result__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[81];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("chesster_interfaces.action._move_chesster_arm.MoveChessterArm_GetResult_Response", full_classname_dest, 80) == 0);
  }
  chesster_interfaces__action__MoveChessterArm_GetResult_Response * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    if (!chesster_interfaces__action__move_chesster_arm__result__convert_from_py(field, &ros_message->result)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * chesster_interfaces__action__move_chesster_arm__get_result__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveChessterArm_GetResult_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("chesster_interfaces.action._move_chesster_arm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveChessterArm_GetResult_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  chesster_interfaces__action__MoveChessterArm_GetResult_Response * ros_message = (chesster_interfaces__action__MoveChessterArm_GetResult_Response *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // result
    PyObject * field = NULL;
    field = chesster_interfaces__action__move_chesster_arm__result__convert_to_py(&ros_message->result);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.h"
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool unique_identifier_msgs__msg__uuid__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * unique_identifier_msgs__msg__uuid__convert_to_py(void * raw_ros_message);
bool chesster_interfaces__action__move_chesster_arm__feedback__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * chesster_interfaces__action__move_chesster_arm__feedback__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool chesster_interfaces__action__move_chesster_arm__feedback_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[78];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("chesster_interfaces.action._move_chesster_arm.MoveChessterArm_FeedbackMessage", full_classname_dest, 77) == 0);
  }
  chesster_interfaces__action__MoveChessterArm_FeedbackMessage * ros_message = _ros_message;
  {  // goal_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_id");
    if (!field) {
      return false;
    }
    if (!unique_identifier_msgs__msg__uuid__convert_from_py(field, &ros_message->goal_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "feedback");
    if (!field) {
      return false;
    }
    if (!chesster_interfaces__action__move_chesster_arm__feedback__convert_from_py(field, &ros_message->feedback)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * chesster_interfaces__action__move_chesster_arm__feedback_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MoveChessterArm_FeedbackMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("chesster_interfaces.action._move_chesster_arm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MoveChessterArm_FeedbackMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  chesster_interfaces__action__MoveChessterArm_FeedbackMessage * ros_message = (chesster_interfaces__action__MoveChessterArm_FeedbackMessage *)raw_ros_message;
  {  // goal_id
    PyObject * field = NULL;
    field = unique_identifier_msgs__msg__uuid__convert_to_py(&ros_message->goal_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feedback
    PyObject * field = NULL;
    field = chesster_interfaces__action__move_chesster_arm__feedback__convert_to_py(&ros_message->feedback);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
