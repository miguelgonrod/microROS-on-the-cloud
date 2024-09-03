// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from complex_msgs:msg/NestedMsgTest.idl
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
#include "complex_msgs/msg/detail/nested_msg_test__struct.h"
#include "complex_msgs/msg/detail/nested_msg_test__functions.h"

bool complex_msgs__msg__multi_string_test__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * complex_msgs__msg__multi_string_test__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool complex_msgs__msg__nested_msg_test__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("complex_msgs.msg._nested_msg_test.NestedMsgTest", full_classname_dest, 47) == 0);
  }
  complex_msgs__msg__NestedMsgTest * ros_message = _ros_message;
  {  // data1
    PyObject * field = PyObject_GetAttrString(_pymsg, "data1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->data1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // data2
    PyObject * field = PyObject_GetAttrString(_pymsg, "data2");
    if (!field) {
      return false;
    }
    assert(PyBytes_Check(field));
    ros_message->data2 = PyBytes_AS_STRING(field)[0];
    Py_DECREF(field);
  }
  {  // data3
    PyObject * field = PyObject_GetAttrString(_pymsg, "data3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // data4
    PyObject * field = PyObject_GetAttrString(_pymsg, "data4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->data4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // data5
    PyObject * field = PyObject_GetAttrString(_pymsg, "data5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->data5 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // data6
    PyObject * field = PyObject_GetAttrString(_pymsg, "data6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data6 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // data7
    PyObject * field = PyObject_GetAttrString(_pymsg, "data7");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data7 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // data8
    PyObject * field = PyObject_GetAttrString(_pymsg, "data8");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data8 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // data9
    PyObject * field = PyObject_GetAttrString(_pymsg, "data9");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data9 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // data10
    PyObject * field = PyObject_GetAttrString(_pymsg, "data10");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data10 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // data11
    PyObject * field = PyObject_GetAttrString(_pymsg, "data11");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data11 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // data12
    PyObject * field = PyObject_GetAttrString(_pymsg, "data12");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data12 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // data13
    PyObject * field = PyObject_GetAttrString(_pymsg, "data13");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data13 = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // data14
    PyObject * field = PyObject_GetAttrString(_pymsg, "data14");
    if (!field) {
      return false;
    }
    if (!complex_msgs__msg__multi_string_test__convert_from_py(field, &ros_message->data14)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * complex_msgs__msg__nested_msg_test__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NestedMsgTest */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("complex_msgs.msg._nested_msg_test");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NestedMsgTest");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  complex_msgs__msg__NestedMsgTest * ros_message = (complex_msgs__msg__NestedMsgTest *)raw_ros_message;
  {  // data1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->data1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data2
    PyObject * field = NULL;
    field = PyBytes_FromStringAndSize((const char *)&ros_message->data2, 1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "data2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->data3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->data4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->data5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data6
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->data6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data7
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->data7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data8
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->data8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data9
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->data9);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data9", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data10
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->data10);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data10", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data11
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->data11);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data11", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data12
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->data12);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data12", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data13
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->data13);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data13", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data14
    PyObject * field = NULL;
    field = complex_msgs__msg__multi_string_test__convert_to_py(&ros_message->data14);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "data14", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
