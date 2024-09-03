// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from action_msgs:srv/CancelGoal.idl
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
#include "action_msgs/srv/detail/cancel_goal__struct.h"
#include "action_msgs/srv/detail/cancel_goal__functions.h"

bool action_msgs__msg__goal_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * action_msgs__msg__goal_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool action_msgs__srv__cancel_goal__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("action_msgs.srv._cancel_goal.CancelGoal_Request", full_classname_dest, 47) == 0);
  }
  action_msgs__srv__CancelGoal_Request * ros_message = _ros_message;
  {  // goal_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "goal_info");
    if (!field) {
      return false;
    }
    if (!action_msgs__msg__goal_info__convert_from_py(field, &ros_message->goal_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * action_msgs__srv__cancel_goal__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CancelGoal_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("action_msgs.srv._cancel_goal");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CancelGoal_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  action_msgs__srv__CancelGoal_Request * ros_message = (action_msgs__srv__CancelGoal_Request *)raw_ros_message;
  {  // goal_info
    PyObject * field = NULL;
    field = action_msgs__msg__goal_info__convert_to_py(&ros_message->goal_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "goal_info", field);
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
// #include "action_msgs/srv/detail/cancel_goal__struct.h"
// already included above
// #include "action_msgs/srv/detail/cancel_goal__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "action_msgs/msg/detail/goal_info__functions.h"
// end nested array functions include
bool action_msgs__msg__goal_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * action_msgs__msg__goal_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool action_msgs__srv__cancel_goal__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("action_msgs.srv._cancel_goal.CancelGoal_Response", full_classname_dest, 48) == 0);
  }
  action_msgs__srv__CancelGoal_Response * ros_message = _ros_message;
  {  // return_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "return_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->return_code = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // goals_canceling
    PyObject * field = PyObject_GetAttrString(_pymsg, "goals_canceling");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'goals_canceling'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!action_msgs__msg__GoalInfo__Sequence__init(&(ros_message->goals_canceling), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create action_msgs__msg__GoalInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    action_msgs__msg__GoalInfo * dest = ros_message->goals_canceling.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!action_msgs__msg__goal_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * action_msgs__srv__cancel_goal__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CancelGoal_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("action_msgs.srv._cancel_goal");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CancelGoal_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  action_msgs__srv__CancelGoal_Response * ros_message = (action_msgs__srv__CancelGoal_Response *)raw_ros_message;
  {  // return_code
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->return_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "return_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // goals_canceling
    PyObject * field = NULL;
    size_t size = ros_message->goals_canceling.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    action_msgs__msg__GoalInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->goals_canceling.data[i]);
      PyObject * pyitem = action_msgs__msg__goal_info__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "goals_canceling", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
