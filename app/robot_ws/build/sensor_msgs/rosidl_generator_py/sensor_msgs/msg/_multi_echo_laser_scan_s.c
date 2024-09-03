// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sensor_msgs:msg/MultiEchoLaserScan.idl
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
#include "sensor_msgs/msg/detail/multi_echo_laser_scan__struct.h"
#include "sensor_msgs/msg/detail/multi_echo_laser_scan__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "sensor_msgs/msg/detail/laser_echo__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool sensor_msgs__msg__laser_echo__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * sensor_msgs__msg__laser_echo__convert_to_py(void * raw_ros_message);
bool sensor_msgs__msg__laser_echo__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * sensor_msgs__msg__laser_echo__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sensor_msgs__msg__multi_echo_laser_scan__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("sensor_msgs.msg._multi_echo_laser_scan.MultiEchoLaserScan", full_classname_dest, 57) == 0);
  }
  sensor_msgs__msg__MultiEchoLaserScan * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // angle_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_increment
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_increment");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_increment = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_increment
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_increment");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_increment = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // scan_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scan_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // range_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "range_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // range_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "range_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ranges
    PyObject * field = PyObject_GetAttrString(_pymsg, "ranges");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ranges'");
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
    if (!sensor_msgs__msg__LaserEcho__Sequence__init(&(ros_message->ranges), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create sensor_msgs__msg__LaserEcho__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    sensor_msgs__msg__LaserEcho * dest = ros_message->ranges.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!sensor_msgs__msg__laser_echo__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // intensities
    PyObject * field = PyObject_GetAttrString(_pymsg, "intensities");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'intensities'");
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
    if (!sensor_msgs__msg__LaserEcho__Sequence__init(&(ros_message->intensities), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create sensor_msgs__msg__LaserEcho__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    sensor_msgs__msg__LaserEcho * dest = ros_message->intensities.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!sensor_msgs__msg__laser_echo__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * sensor_msgs__msg__multi_echo_laser_scan__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MultiEchoLaserScan */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sensor_msgs.msg._multi_echo_laser_scan");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MultiEchoLaserScan");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sensor_msgs__msg__MultiEchoLaserScan * ros_message = (sensor_msgs__msg__MultiEchoLaserScan *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_increment
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_increment);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_increment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_increment
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_increment);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_increment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scan_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scan_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scan_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ranges
    PyObject * field = NULL;
    size_t size = ros_message->ranges.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    sensor_msgs__msg__LaserEcho * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ranges.data[i]);
      PyObject * pyitem = sensor_msgs__msg__laser_echo__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "ranges", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // intensities
    PyObject * field = NULL;
    size_t size = ros_message->intensities.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    sensor_msgs__msg__LaserEcho * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->intensities.data[i]);
      PyObject * pyitem = sensor_msgs__msg__laser_echo__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "intensities", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
