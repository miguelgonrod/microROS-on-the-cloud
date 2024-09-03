# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sensor_msgs:msg/RegionOfInterest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RegionOfInterest(type):
    """Metaclass of message 'RegionOfInterest'."""

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
                'sensor_msgs.msg.RegionOfInterest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__region_of_interest
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__region_of_interest
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__region_of_interest
            cls._TYPE_SUPPORT = module.type_support_msg__msg__region_of_interest
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__region_of_interest

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegionOfInterest(metaclass=Metaclass_RegionOfInterest):
    """Message class 'RegionOfInterest'."""

    __slots__ = [
        '_x_offset',
        '_y_offset',
        '_height',
        '_width',
        '_do_rectify',
    ]

    _fields_and_field_types = {
        'x_offset': 'uint32',
        'y_offset': 'uint32',
        'height': 'uint32',
        'width': 'uint32',
        'do_rectify': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_offset = kwargs.get('x_offset', int())
        self.y_offset = kwargs.get('y_offset', int())
        self.height = kwargs.get('height', int())
        self.width = kwargs.get('width', int())
        self.do_rectify = kwargs.get('do_rectify', bool())

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
        if self.x_offset != other.x_offset:
            return False
        if self.y_offset != other.y_offset:
            return False
        if self.height != other.height:
            return False
        if self.width != other.width:
            return False
        if self.do_rectify != other.do_rectify:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x_offset(self):
        """Message field 'x_offset'."""
        return self._x_offset

    @x_offset.setter
    def x_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x_offset' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'x_offset' field must be an unsigned integer in [0, 4294967295]"
        self._x_offset = value

    @builtins.property
    def y_offset(self):
        """Message field 'y_offset'."""
        return self._y_offset

    @y_offset.setter
    def y_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y_offset' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'y_offset' field must be an unsigned integer in [0, 4294967295]"
        self._y_offset = value

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
    def do_rectify(self):
        """Message field 'do_rectify'."""
        return self._do_rectify

    @do_rectify.setter
    def do_rectify(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'do_rectify' field must be of type 'bool'"
        self._do_rectify = value
