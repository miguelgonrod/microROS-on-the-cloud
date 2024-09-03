// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from test_msgs:msg/Nested.idl
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
#include "test_msgs/msg/detail/nested__struct.h"
#include "test_msgs/msg/detail/nested__functions.h"

bool test_msgs__msg__basic_types__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * test_msgs__msg__basic_types__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool test_msgs__msg__nested__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[29];
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
    assert(strncmp("test_msgs.msg._nested.Nested", full_classname_dest, 28) == 0);
  }
  test_msgs__msg__Nested * ros_message = _ros_message;
  {  // basic_types_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "basic_types_value");
    if (!field) {
      return false;
    }
    if (!test_msgs__msg__basic_types__convert_from_py(field, &ros_message->basic_types_value)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * test_msgs__msg__nested__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Nested */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("test_msgs.msg._nested");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Nested");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  test_msgs__msg__Nested * ros_message = (test_msgs__msg__Nested *)raw_ros_message;
  {  // basic_types_value
    PyObject * field = NULL;
    field = test_msgs__msg__basic_types__convert_to_py(&ros_message->basic_types_value);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "basic_types_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
