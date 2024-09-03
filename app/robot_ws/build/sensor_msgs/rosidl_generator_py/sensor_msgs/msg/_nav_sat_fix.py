# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sensor_msgs:msg/NavSatFix.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'position_covariance'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavSatFix(type):
    """Metaclass of message 'NavSatFix'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'COVARIANCE_TYPE_UNKNOWN': 0,
        'COVARIANCE_TYPE_APPROXIMATED': 1,
        'COVARIANCE_TYPE_DIAGONAL_KNOWN': 2,
        'COVARIANCE_TYPE_KNOWN': 3,
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
                'sensor_msgs.msg.NavSatFix')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__nav_sat_fix
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__nav_sat_fix
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__nav_sat_fix
            cls._TYPE_SUPPORT = module.type_support_msg__msg__nav_sat_fix
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__nav_sat_fix

            from sensor_msgs.msg import NavSatStatus
            if NavSatStatus.__class__._TYPE_SUPPORT is None:
                NavSatStatus.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'COVARIANCE_TYPE_UNKNOWN': cls.__constants['COVARIANCE_TYPE_UNKNOWN'],
            'COVARIANCE_TYPE_APPROXIMATED': cls.__constants['COVARIANCE_TYPE_APPROXIMATED'],
            'COVARIANCE_TYPE_DIAGONAL_KNOWN': cls.__constants['COVARIANCE_TYPE_DIAGONAL_KNOWN'],
            'COVARIANCE_TYPE_KNOWN': cls.__constants['COVARIANCE_TYPE_KNOWN'],
        }

    @property
    def COVARIANCE_TYPE_UNKNOWN(self):
        """Message constant 'COVARIANCE_TYPE_UNKNOWN'."""
        return Metaclass_NavSatFix.__constants['COVARIANCE_TYPE_UNKNOWN']

    @property
    def COVARIANCE_TYPE_APPROXIMATED(self):
        """Message constant 'COVARIANCE_TYPE_APPROXIMATED'."""
        return Metaclass_NavSatFix.__constants['COVARIANCE_TYPE_APPROXIMATED']

    @property
    def COVARIANCE_TYPE_DIAGONAL_KNOWN(self):
        """Message constant 'COVARIANCE_TYPE_DIAGONAL_KNOWN'."""
        return Metaclass_NavSatFix.__constants['COVARIANCE_TYPE_DIAGONAL_KNOWN']

    @property
    def COVARIANCE_TYPE_KNOWN(self):
        """Message constant 'COVARIANCE_TYPE_KNOWN'."""
        return Metaclass_NavSatFix.__constants['COVARIANCE_TYPE_KNOWN']


class NavSatFix(metaclass=Metaclass_NavSatFix):
    """
    Message class 'NavSatFix'.

    Constants:
      COVARIANCE_TYPE_UNKNOWN
      COVARIANCE_TYPE_APPROXIMATED
      COVARIANCE_TYPE_DIAGONAL_KNOWN
      COVARIANCE_TYPE_KNOWN
    """

    __slots__ = [
        '_header',
        '_status',
        '_latitude',
        '_longitude',
        '_altitude',
        '_position_covariance',
        '_position_covariance_type',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'status': 'sensor_msgs/NavSatStatus',
        'latitude': 'double',
        'longitude': 'double',
        'altitude': 'double',
        'position_covariance': 'double[9]',
        'position_covariance_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'NavSatStatus'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 9),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from sensor_msgs.msg import NavSatStatus
        self.status = kwargs.get('status', NavSatStatus())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.altitude = kwargs.get('altitude', float())
        if 'position_covariance' not in kwargs:
            self.position_covariance = numpy.zeros(9, dtype=numpy.float64)
        else:
            self.position_covariance = numpy.array(kwargs.get('position_covariance'), dtype=numpy.float64)
            assert self.position_covariance.shape == (9, )
        self.position_covariance_type = kwargs.get('position_covariance_type', int())

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
        if self.status != other.status:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.altitude != other.altitude:
            return False
        if all(self.position_covariance != other.position_covariance):
            return False
        if self.position_covariance_type != other.position_covariance_type:
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
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from sensor_msgs.msg import NavSatStatus
            assert \
                isinstance(value, NavSatStatus), \
                "The 'status' field must be a sub message of type 'NavSatStatus'"
        self._status = value

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude = value

    @builtins.property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'altitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._altitude = value

    @builtins.property
    def position_covariance(self):
        """Message field 'position_covariance'."""
        return self._position_covariance

    @position_covariance.setter
    def position_covariance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'position_covariance' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 9, \
                "The 'position_covariance' numpy.ndarray() must have a size of 9"
            self._position_covariance = value
            return
        if __debug__:
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
                 len(value) == 9 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'position_covariance' field must be a set or sequence with length 9 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._position_covariance = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def position_covariance_type(self):
        """Message field 'position_covariance_type'."""
        return self._position_covariance_type

    @position_covariance_type.setter
    def position_covariance_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'position_covariance_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'position_covariance_type' field must be an unsigned integer in [0, 255]"
        self._position_covariance_type = value
