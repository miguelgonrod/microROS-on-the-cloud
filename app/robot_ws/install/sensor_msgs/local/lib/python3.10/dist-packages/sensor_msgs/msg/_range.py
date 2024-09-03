# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sensor_msgs:msg/Range.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Range(type):
    """Metaclass of message 'Range'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ULTRASOUND': 0,
        'INFRARED': 1,
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
                'sensor_msgs.msg.Range')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__range
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__range
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__range
            cls._TYPE_SUPPORT = module.type_support_msg__msg__range
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__range

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ULTRASOUND': cls.__constants['ULTRASOUND'],
            'INFRARED': cls.__constants['INFRARED'],
        }

    @property
    def ULTRASOUND(self):
        """Message constant 'ULTRASOUND'."""
        return Metaclass_Range.__constants['ULTRASOUND']

    @property
    def INFRARED(self):
        """Message constant 'INFRARED'."""
        return Metaclass_Range.__constants['INFRARED']


class Range(metaclass=Metaclass_Range):
    """
    Message class 'Range'.

    Constants:
      ULTRASOUND
      INFRARED
    """

    __slots__ = [
        '_header',
        '_radiation_type',
        '_field_of_view',
        '_min_range',
        '_max_range',
        '_range',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'radiation_type': 'uint8',
        'field_of_view': 'float',
        'min_range': 'float',
        'max_range': 'float',
        'range': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.radiation_type = kwargs.get('radiation_type', int())
        self.field_of_view = kwargs.get('field_of_view', float())
        self.min_range = kwargs.get('min_range', float())
        self.max_range = kwargs.get('max_range', float())
        self.range = kwargs.get('range', float())

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
        if self.radiation_type != other.radiation_type:
            return False
        if self.field_of_view != other.field_of_view:
            return False
        if self.min_range != other.min_range:
            return False
        if self.max_range != other.max_range:
            return False
        if self.range != other.range:
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
    def radiation_type(self):
        """Message field 'radiation_type'."""
        return self._radiation_type

    @radiation_type.setter
    def radiation_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'radiation_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'radiation_type' field must be an unsigned integer in [0, 255]"
        self._radiation_type = value

    @builtins.property
    def field_of_view(self):
        """Message field 'field_of_view'."""
        return self._field_of_view

    @field_of_view.setter
    def field_of_view(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'field_of_view' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'field_of_view' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._field_of_view = value

    @builtins.property
    def min_range(self):
        """Message field 'min_range'."""
        return self._min_range

    @min_range.setter
    def min_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'min_range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._min_range = value

    @builtins.property
    def max_range(self):
        """Message field 'max_range'."""
        return self._max_range

    @max_range.setter
    def max_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_range = value

    @builtins.property  # noqa: A003
    def range(self):  # noqa: A003
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._range = value
