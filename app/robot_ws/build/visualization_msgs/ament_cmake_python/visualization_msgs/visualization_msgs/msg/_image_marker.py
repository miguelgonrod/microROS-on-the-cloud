# generated from rosidl_generator_py/resource/_idl.py.em
# with input from visualization_msgs:msg/ImageMarker.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ImageMarker(type):
    """Metaclass of message 'ImageMarker'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CIRCLE': 0,
        'LINE_STRIP': 1,
        'LINE_LIST': 2,
        'POLYGON': 3,
        'POINTS': 4,
        'ADD': 0,
        'REMOVE': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('visualization_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'visualization_msgs.msg.ImageMarker')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__image_marker
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__image_marker
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__image_marker
            cls._TYPE_SUPPORT = module.type_support_msg__msg__image_marker
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__image_marker

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from std_msgs.msg import ColorRGBA
            if ColorRGBA.__class__._TYPE_SUPPORT is None:
                ColorRGBA.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CIRCLE': cls.__constants['CIRCLE'],
            'LINE_STRIP': cls.__constants['LINE_STRIP'],
            'LINE_LIST': cls.__constants['LINE_LIST'],
            'POLYGON': cls.__constants['POLYGON'],
            'POINTS': cls.__constants['POINTS'],
            'ADD': cls.__constants['ADD'],
            'REMOVE': cls.__constants['REMOVE'],
        }

    @property
    def CIRCLE(self):
        """Message constant 'CIRCLE'."""
        return Metaclass_ImageMarker.__constants['CIRCLE']

    @property
    def LINE_STRIP(self):
        """Message constant 'LINE_STRIP'."""
        return Metaclass_ImageMarker.__constants['LINE_STRIP']

    @property
    def LINE_LIST(self):
        """Message constant 'LINE_LIST'."""
        return Metaclass_ImageMarker.__constants['LINE_LIST']

    @property
    def POLYGON(self):
        """Message constant 'POLYGON'."""
        return Metaclass_ImageMarker.__constants['POLYGON']

    @property
    def POINTS(self):
        """Message constant 'POINTS'."""
        return Metaclass_ImageMarker.__constants['POINTS']

    @property
    def ADD(self):
        """Message constant 'ADD'."""
        return Metaclass_ImageMarker.__constants['ADD']

    @property
    def REMOVE(self):
        """Message constant 'REMOVE'."""
        return Metaclass_ImageMarker.__constants['REMOVE']


class ImageMarker(metaclass=Metaclass_ImageMarker):
    """
    Message class 'ImageMarker'.

    Constants:
      CIRCLE
      LINE_STRIP
      LINE_LIST
      POLYGON
      POINTS
      ADD
      REMOVE
    """

    __slots__ = [
        '_header',
        '_ns',
        '_id',
        '_type',
        '_action',
        '_position',
        '_scale',
        '_outline_color',
        '_filled',
        '_fill_color',
        '_lifetime',
        '_points',
        '_outline_colors',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ns': 'string',
        'id': 'int32',
        'type': 'int32',
        'action': 'int32',
        'position': 'geometry_msgs/Point',
        'scale': 'float',
        'outline_color': 'std_msgs/ColorRGBA',
        'filled': 'uint8',
        'fill_color': 'std_msgs/ColorRGBA',
        'lifetime': 'builtin_interfaces/Duration',
        'points': 'sequence<geometry_msgs/Point>',
        'outline_colors': 'sequence<std_msgs/ColorRGBA>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.ns = kwargs.get('ns', str())
        self.id = kwargs.get('id', int())
        self.type = kwargs.get('type', int())
        self.action = kwargs.get('action', int())
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        self.scale = kwargs.get('scale', float())
        from std_msgs.msg import ColorRGBA
        self.outline_color = kwargs.get('outline_color', ColorRGBA())
        self.filled = kwargs.get('filled', int())
        from std_msgs.msg import ColorRGBA
        self.fill_color = kwargs.get('fill_color', ColorRGBA())
        from builtin_interfaces.msg import Duration
        self.lifetime = kwargs.get('lifetime', Duration())
        self.points = kwargs.get('points', [])
        self.outline_colors = kwargs.get('outline_colors', [])

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
        if self.ns != other.ns:
            return False
        if self.id != other.id:
            return False
        if self.type != other.type:
            return False
        if self.action != other.action:
            return False
        if self.position != other.position:
            return False
        if self.scale != other.scale:
            return False
        if self.outline_color != other.outline_color:
            return False
        if self.filled != other.filled:
            return False
        if self.fill_color != other.fill_color:
            return False
        if self.lifetime != other.lifetime:
            return False
        if self.points != other.points:
            return False
        if self.outline_colors != other.outline_colors:
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
    def ns(self):
        """Message field 'ns'."""
        return self._ns

    @ns.setter
    def ns(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ns' field must be of type 'str'"
        self._ns = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'type' field must be an integer in [-2147483648, 2147483647]"
        self._type = value

    @builtins.property
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'action' field must be an integer in [-2147483648, 2147483647]"
        self._action = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position' field must be a sub message of type 'Point'"
        self._position = value

    @builtins.property
    def scale(self):
        """Message field 'scale'."""
        return self._scale

    @scale.setter
    def scale(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scale' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scale' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scale = value

    @builtins.property
    def outline_color(self):
        """Message field 'outline_color'."""
        return self._outline_color

    @outline_color.setter
    def outline_color(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
            assert \
                isinstance(value, ColorRGBA), \
                "The 'outline_color' field must be a sub message of type 'ColorRGBA'"
        self._outline_color = value

    @builtins.property
    def filled(self):
        """Message field 'filled'."""
        return self._filled

    @filled.setter
    def filled(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'filled' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'filled' field must be an unsigned integer in [0, 255]"
        self._filled = value

    @builtins.property
    def fill_color(self):
        """Message field 'fill_color'."""
        return self._fill_color

    @fill_color.setter
    def fill_color(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
            assert \
                isinstance(value, ColorRGBA), \
                "The 'fill_color' field must be a sub message of type 'ColorRGBA'"
        self._fill_color = value

    @builtins.property
    def lifetime(self):
        """Message field 'lifetime'."""
        return self._lifetime

    @lifetime.setter
    def lifetime(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'lifetime' field must be a sub message of type 'Duration'"
        self._lifetime = value

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'points' field must be a set or sequence and each value of type 'Point'"
        self._points = value

    @builtins.property
    def outline_colors(self):
        """Message field 'outline_colors'."""
        return self._outline_colors

    @outline_colors.setter
    def outline_colors(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
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
                 all(isinstance(v, ColorRGBA) for v in value) and
                 True), \
                "The 'outline_colors' field must be a set or sequence and each value of type 'ColorRGBA'"
        self._outline_colors = value
