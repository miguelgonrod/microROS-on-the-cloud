// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from std_msgs:msg/MultiArrayLayout.idl
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
#include "std_msgs/msg/detail/multi_array_layout__struct.h"
#include "std_msgs/msg/detail/multi_array_layout__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "std_msgs/msg/detail/multi_array_dimension__functions.h"
// end nested array functions include
bool std_msgs__msg__multi_array_dimension__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * std_msgs__msg__multi_array_dimension__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool std_msgs__msg__multi_array_layout__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("std_msgs.msg._multi_array_layout.MultiArrayLayout", full_classname_dest, 49) == 0);
  }
  std_msgs__msg__MultiArrayLayout * ros_message = _ros_message;
  {  // dim
    PyObject * field = PyObject_GetAttrString(_pymsg, "dim");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'dim'");
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
    if (!std_msgs__msg__MultiArrayDimension__Sequence__init(&(ros_message->dim), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create std_msgs__msg__MultiArrayDimension__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    std_msgs__msg__MultiArrayDimension * dest = ros_message->dim.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!std_msgs__msg__multi_array_dimension__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // data_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "data_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data_offset = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * std_msgs__msg__multi_array_layout__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MultiArrayLayout */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("std_msgs.msg._multi_array_layout");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MultiArrayLayout");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  std_msgs__msg__MultiArrayLayout * ros_message = (std_msgs__msg__MultiArrayLayout *)raw_ros_message;
  {  // dim
    PyObject * field = NULL;
    size_t size = ros_message->dim.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    std_msgs__msg__MultiArrayDimension * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->dim.data[i]);
      PyObject * pyitem = std_msgs__msg__multi_array_dimension__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "dim", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data_offset
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->data_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
