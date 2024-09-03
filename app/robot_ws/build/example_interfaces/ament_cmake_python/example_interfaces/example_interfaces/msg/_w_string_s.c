// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from example_interfaces:msg/WString.idl
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
#include "example_interfaces/msg/detail/w_string__struct.h"
#include "example_interfaces/msg/detail/w_string__functions.h"

#include "rosidl_runtime_c/u16string.h"
#include "rosidl_runtime_c/u16string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool example_interfaces__msg__w_string__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("example_interfaces.msg._w_string.WString", full_classname_dest, 40) == 0);
  }
  example_interfaces__msg__WString * ros_message = _ros_message;
  {  // data
    PyObject * field = PyObject_GetAttrString(_pymsg, "data");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    // the returned string starts with a BOM mark and uses native byte order
    PyObject * encoded_field = PyUnicode_AsUTF16String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    char * buffer;
    Py_ssize_t length;
    int rc = PyBytes_AsStringAndSize(encoded_field, &buffer, &length);
    if (rc) {
      Py_DECREF(encoded_field);
      Py_DECREF(field);
      return false;
    }
    // use offset of 2 to skip BOM mark
    {
      bool succeeded = rosidl_runtime_c__U16String__assignn_from_char(&ros_message->data, buffer + 2, length - 2);
      Py_DECREF(encoded_field);
      if (!succeeded) {
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * example_interfaces__msg__w_string__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WString */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("example_interfaces.msg._w_string");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WString");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  example_interfaces__msg__WString * ros_message = (example_interfaces__msg__WString *)raw_ros_message;
  {  // data
    PyObject * field = NULL;
    int byteorder = 0;
    field = PyUnicode_DecodeUTF16(
      (const char *)ros_message->data.data,
      ros_message->data.size * sizeof(uint16_t),
      NULL, &byteorder);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
