// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from statistics_msgs:msg/MetricsMessage.idl
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
#include "statistics_msgs/msg/detail/metrics_message__struct.h"
#include "statistics_msgs/msg/detail/metrics_message__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "statistics_msgs/msg/detail/statistic_data_point__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool statistics_msgs__msg__statistic_data_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * statistics_msgs__msg__statistic_data_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool statistics_msgs__msg__metrics_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("statistics_msgs.msg._metrics_message.MetricsMessage", full_classname_dest, 51) == 0);
  }
  statistics_msgs__msg__MetricsMessage * ros_message = _ros_message;
  {  // measurement_source_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "measurement_source_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->measurement_source_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // metrics_source
    PyObject * field = PyObject_GetAttrString(_pymsg, "metrics_source");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->metrics_source, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // unit
    PyObject * field = PyObject_GetAttrString(_pymsg, "unit");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->unit, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // window_start
    PyObject * field = PyObject_GetAttrString(_pymsg, "window_start");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->window_start)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // window_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "window_stop");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->window_stop)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // statistics
    PyObject * field = PyObject_GetAttrString(_pymsg, "statistics");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'statistics'");
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
    if (!statistics_msgs__msg__StatisticDataPoint__Sequence__init(&(ros_message->statistics), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create statistics_msgs__msg__StatisticDataPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    statistics_msgs__msg__StatisticDataPoint * dest = ros_message->statistics.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!statistics_msgs__msg__statistic_data_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * statistics_msgs__msg__metrics_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MetricsMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("statistics_msgs.msg._metrics_message");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MetricsMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  statistics_msgs__msg__MetricsMessage * ros_message = (statistics_msgs__msg__MetricsMessage *)raw_ros_message;
  {  // measurement_source_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->measurement_source_name.data,
      strlen(ros_message->measurement_source_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "measurement_source_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // metrics_source
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->metrics_source.data,
      strlen(ros_message->metrics_source.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "metrics_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unit
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->unit.data,
      strlen(ros_message->unit.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "unit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // window_start
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->window_start);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "window_start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // window_stop
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->window_stop);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "window_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // statistics
    PyObject * field = NULL;
    size_t size = ros_message->statistics.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    statistics_msgs__msg__StatisticDataPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->statistics.data[i]);
      PyObject * pyitem = statistics_msgs__msg__statistic_data_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "statistics", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
