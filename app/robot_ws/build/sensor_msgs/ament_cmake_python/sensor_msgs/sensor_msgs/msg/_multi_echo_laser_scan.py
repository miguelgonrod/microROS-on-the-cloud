# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sensor_msgs:msg/MultiEchoLaserScan.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MultiEchoLaserScan(type):
    """Metaclass of message 'MultiEchoLaserScan'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sensor_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sensor_msgs.msg.MultiEchoLaserScan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__multi_echo_laser_scan
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__multi_echo_laser_scan
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__multi_echo_laser_scan
            cls._TYPE_SUPPORT = module.type_support_msg__msg__multi_echo_laser_scan
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__multi_echo_laser_scan

            from sensor_msgs.msg import LaserEcho
            if LaserEcho.__class__._TYPE_SUPPORT is None:
                LaserEcho.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MultiEchoLaserScan(metaclass=Metaclass_MultiEchoLaserScan):
    """Message class 'MultiEchoLaserScan'."""

    __slots__ = [
        '_header',
        '_angle_min',
        '_angle_max',
        '_angle_increment',
        '_time_increment',
        '_scan_time',
        '_range_min',
        '_range_max',
        '_ranges',
        '_intensities',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'angle_min': 'float',
        'angle_max': 'float',
        'angle_increment': 'float',
        'time_increment': 'float',
        'scan_time': 'float',
        'range_min': 'float',
        'range_max': 'float',
        'ranges': 'sequence<sensor_msgs/LaserEcho>',
        'intensities': 'sequence<sensor_msgs/LaserEcho>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'LaserEcho')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'LaserEcho')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.angle_min = kwargs.get('angle_min', float())
        self.angle_max = kwargs.get('angle_max', float())
        self.angle_increment = kwargs.get('angle_increment', float())
        self.time_increment = kwargs.get('time_increment', float())
        self.scan_time = kwargs.get('scan_time', float())
        self.range_min = kwargs.get('range_min', float())
        self.range_max = kwargs.get('range_max', float())
        self.ranges = kwargs.get('ranges', [])
        self.intensities = kwargs.get('intensities', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.angle_min != other.angle_min:
            return False
        if self.angle_max != other.angle_max:
            return False
        if self.angle_increment != other.angle_increment:
            return False
        if self.time_increment != other.time_increment:
            return False
        if self.scan_time != other.scan_time:
            return False
        if self.range_min != other.range_min:
            return False
        if self.range_max != other.range_max:
            return False
        if self.ranges != other.ranges:
            return False
        if self.intensities != other.intensities:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def angle_min(self):
        """Message field 'angle_min'."""
        return self._angle_min

    @angle_min.setter
    def angle_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle_min = value

    @builtins.property
    def angle_max(self):
        """Message field 'angle_max'."""
        return self._angle_max

    @angle_max.setter
    def angle_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle_max = value

    @builtins.property
    def angle_increment(self):
        """Message field 'angle_increment'."""
        return self._angle_increment

    @angle_increment.setter
    def angle_increment(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_increment' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle_increment' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle_increment = value

    @builtins.property
    def time_increment(self):
        """Message field 'time_increment'."""
        return self._time_increment

    @time_increment.setter
    def time_increment(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_increment' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_increment' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_increment = value

    @builtins.property
    def scan_time(self):
        """Message field 'scan_time'."""
        return self._scan_time

    @scan_time.setter
    def scan_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scan_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scan_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scan_time = value

    @builtins.property
    def range_min(self):
        """Message field 'range_min'."""
        return self._range_min

    @range_min.setter
    def range_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'range_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._range_min = value

    @builtins.property
    def range_max(self):
        """Message field 'range_max'."""
        return self._range_max

    @range_max.setter
    def range_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'range_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._range_max = value

    @builtins.property
    def ranges(self):
        """Message field 'ranges'."""
        return self._ranges

    @ranges.setter
    def ranges(self, value):
        if __debug__:
            from sensor_msgs.msg import LaserEcho
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, LaserEcho) for v in value) and
                 True), \
                "The 'ranges' field must be a set or sequence and each value of type 'LaserEcho'"
        self._ranges = value

    @builtins.property
    def intensities(self):
        """Message field 'intensities'."""
        return self._intensities

    @intensities.setter
    def intensities(self, value):
        if __debug__:
            from sensor_msgs.msg import LaserEcho
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, LaserEcho) for v in value) and
                 True), \
                "The 'intensities' field must be a set or sequence and each value of type 'LaserEcho'"
        self._intensities = value
