# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sensor_msgs:msg/CameraInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'd'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'k'
# Member 'r'
# Member 'p'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CameraInfo(type):
    """Metaclass of message 'CameraInfo'."""

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
                'sensor_msgs.msg.CameraInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__camera_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__camera_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__camera_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__camera_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__camera_info

            from sensor_msgs.msg import RegionOfInterest
            if RegionOfInterest.__class__._TYPE_SUPPORT is None:
                RegionOfInterest.__class__.__import_type_support__()

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


class CameraInfo(metaclass=Metaclass_CameraInfo):
    """Message class 'CameraInfo'."""

    __slots__ = [
        '_header',
        '_height',
        '_width',
        '_distortion_model',
        '_d',
        '_k',
        '_r',
        '_p',
        '_binning_x',
        '_binning_y',
        '_roi',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'height': 'uint32',
        'width': 'uint32',
        'distortion_model': 'string',
        'd': 'sequence<double>',
        'k': 'double[9]',
        'r': 'double[9]',
        'p': 'double[12]',
        'binning_x': 'uint32',
        'binning_y': 'uint32',
        'roi': 'sensor_msgs/RegionOfInterest',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 9),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 9),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 12),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'RegionOfInterest'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.height = kwargs.get('height', int())
        self.width = kwargs.get('width', int())
        self.distortion_model = kwargs.get('distortion_model', str())
        self.d = array.array('d', kwargs.get('d', []))
        if 'k' not in kwargs:
            self.k = numpy.zeros(9, dtype=numpy.float64)
        else:
            self.k = numpy.array(kwargs.get('k'), dtype=numpy.float64)
            assert self.k.shape == (9, )
        if 'r' not in kwargs:
            self.r = numpy.zeros(9, dtype=numpy.float64)
        else:
            self.r = numpy.array(kwargs.get('r'), dtype=numpy.float64)
            assert self.r.shape == (9, )
        if 'p' not in kwargs:
            self.p = numpy.zeros(12, dtype=numpy.float64)
        else:
            self.p = numpy.array(kwargs.get('p'), dtype=numpy.float64)
            assert self.p.shape == (12, )
        self.binning_x = kwargs.get('binning_x', int())
        self.binning_y = kwargs.get('binning_y', int())
        from sensor_msgs.msg import RegionOfInterest
        self.roi = kwargs.get('roi', RegionOfInterest())

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
        if self.height != other.height:
            return False
        if self.width != other.width:
            return False
        if self.distortion_model != other.distortion_model:
            return False
        if self.d != other.d:
            return False
        if all(self.k != other.k):
            return False
        if all(self.r != other.r):
            return False
        if all(self.p != other.p):
            return False
        if self.binning_x != other.binning_x:
            return False
        if self.binning_y != other.binning_y:
            return False
        if self.roi != other.roi:
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
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'height' field must be an unsigned integer in [0, 4294967295]"
        self._height = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'width' field must be an unsigned integer in [0, 4294967295]"
        self._width = value

    @builtins.property
    def distortion_model(self):
        """Message field 'distortion_model'."""
        return self._distortion_model

    @distortion_model.setter
    def distortion_model(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'distortion_model' field must be of type 'str'"
        self._distortion_model = value

    @builtins.property
    def d(self):
        """Message field 'd'."""
        return self._d

    @d.setter
    def d(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'd' array.array() must have the type code of 'd'"
            self._d = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'd' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._d = array.array('d', value)

    @builtins.property
    def k(self):
        """Message field 'k'."""
        return self._k

    @k.setter
    def k(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'k' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 9, \
                "The 'k' numpy.ndarray() must have a size of 9"
            self._k = value
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
                "The 'k' field must be a set or sequence with length 9 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._k = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def r(self):
        """Message field 'r'."""
        return self._r

    @r.setter
    def r(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'r' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 9, \
                "The 'r' numpy.ndarray() must have a size of 9"
            self._r = value
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
                "The 'r' field must be a set or sequence with length 9 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._r = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def p(self):
        """Message field 'p'."""
        return self._p

    @p.setter
    def p(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'p' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 12, \
                "The 'p' numpy.ndarray() must have a size of 12"
            self._p = value
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
                 len(value) == 12 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'p' field must be a set or sequence with length 12 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._p = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def binning_x(self):
        """Message field 'binning_x'."""
        return self._binning_x

    @binning_x.setter
    def binning_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'binning_x' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'binning_x' field must be an unsigned integer in [0, 4294967295]"
        self._binning_x = value

    @builtins.property
    def binning_y(self):
        """Message field 'binning_y'."""
        return self._binning_y

    @binning_y.setter
    def binning_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'binning_y' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'binning_y' field must be an unsigned integer in [0, 4294967295]"
        self._binning_y = value

    @builtins.property
    def roi(self):
        """Message field 'roi'."""
        return self._roi

    @roi.setter
    def roi(self, value):
        if __debug__:
            from sensor_msgs.msg import RegionOfInterest
            assert \
                isinstance(value, RegionOfInterest), \
                "The 'roi' field must be a sub message of type 'RegionOfInterest'"
        self._roi = value
