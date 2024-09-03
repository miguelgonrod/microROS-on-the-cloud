// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lifecycle_msgs:srv/GetAvailableTransitions.idl
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
#include "lifecycle_msgs/srv/detail/get_available_transitions__struct.h"
#include "lifecycle_msgs/srv/detail/get_available_transitions__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool lifecycle_msgs__srv__get_available_transitions__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("lifecycle_msgs.srv._get_available_transitions.GetAvailableTransitions_Request", full_classname_dest, 77) == 0);
  }
  lifecycle_msgs__srv__GetAvailableTransitions_Request * ros_message = _ros_message;
  ros_message->structure_needs_at_least_one_member = 0;

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lifecycle_msgs__srv__get_available_transitions__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetAvailableTransitions_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lifecycle_msgs.srv._get_available_transitions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetAvailableTransitions_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  (void)raw_ros_message;

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
// #include "lifecycle_msgs/srv/detail/get_available_transitions__struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_available_transitions__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "lifecycle_msgs/msg/detail/transition_description__functions.h"
// end nested array functions include
bool lifecycle_msgs__msg__transition_description__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * lifecycle_msgs__msg__transition_description__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool lifecycle_msgs__srv__get_available_transitions__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("lifecycle_msgs.srv._get_available_transitions.GetAvailableTransitions_Response", full_classname_dest, 78) == 0);
  }
  lifecycle_msgs__srv__GetAvailableTransitions_Response * ros_message = _ros_message;
  {  // available_transitions
    PyObject * field = PyObject_GetAttrString(_pymsg, "available_transitions");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'available_transitions'");
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
    if (!lifecycle_msgs__msg__TransitionDescription__Sequence__init(&(ros_message->available_transitions), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create lifecycle_msgs__msg__TransitionDescription__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    lifecycle_msgs__msg__TransitionDescription * dest = ros_message->available_transitions.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!lifecycle_msgs__msg__transition_description__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * lifecycle_msgs__srv__get_available_transitions__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetAvailableTransitions_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lifecycle_msgs.srv._get_available_transitions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetAvailableTransitions_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lifecycle_msgs__srv__GetAvailableTransitions_Response * ros_message = (lifecycle_msgs__srv__GetAvailableTransitions_Response *)raw_ros_message;
  {  // available_transitions
    PyObject * field = NULL;
    size_t size = ros_message->available_transitions.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    lifecycle_msgs__msg__TransitionDescription * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->available_transitions.data[i]);
      PyObject * pyitem = lifecycle_msgs__msg__transition_description__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "available_transitions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
