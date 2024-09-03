# generated from rosidl_generator_py/resource/_idl.py.em
# with input from stereo_msgs:msg/DisparityImage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DisparityImage(type):
    """Metaclass of message 'DisparityImage'."""

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
            module = import_type_support('stereo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'stereo_msgs.msg.DisparityImage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__disparity_image
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__disparity_image
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__disparity_image
            cls._TYPE_SUPPORT = module.type_support_msg__msg__disparity_image
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__disparity_image

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

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


class DisparityImage(metaclass=Metaclass_DisparityImage):
    """Message class 'DisparityImage'."""

    __slots__ = [
        '_header',
        '_image',
        '_f',
        '_t',
        '_valid_window',
        '_min_disparity',
        '_max_disparity',
        '_delta_d',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'image': 'sensor_msgs/Image',
        'f': 'float',
        't': 'float',
        'valid_window': 'sensor_msgs/RegionOfInterest',
        'min_disparity': 'float',
        'max_disparity': 'float',
        'delta_d': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'RegionOfInterest'),  # noqa: E501
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
        from sensor_msgs.msg import Image
        self.image = kwargs.get('image', Image())
        self.f = kwargs.get('f', float())
        self.t = kwargs.get('t', float())
        from sensor_msgs.msg import RegionOfInterest
        self.valid_window = kwargs.get('valid_window', RegionOfInterest())
        self.min_disparity = kwargs.get('min_disparity', float())
        self.max_disparity = kwargs.get('max_disparity', float())
        self.delta_d = kwargs.get('delta_d', float())

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
        if self.image != other.image:
            return False
        if self.f != other.f:
            return False
        if self.t != other.t:
            return False
        if self.valid_window != other.valid_window:
            return False
        if self.min_disparity != other.min_disparity:
            return False
        if self.max_disparity != other.max_disparity:
            return False
        if self.delta_d != other.delta_d:
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
    def image(self):
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'image' field must be a sub message of type 'Image'"
        self._image = value

    @builtins.property
    def f(self):
        """Message field 'f'."""
        return self._f

    @f.setter
    def f(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'f' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._f = value

    @builtins.property
    def t(self):
        """Message field 't'."""
        return self._t

    @t.setter
    def t(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 't' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._t = value

    @builtins.property
    def valid_window(self):
        """Message field 'valid_window'."""
        return self._valid_window

    @valid_window.setter
    def valid_window(self, value):
        if __debug__:
            from sensor_msgs.msg import RegionOfInterest
            assert \
                isinstance(value, RegionOfInterest), \
                "The 'valid_window' field must be a sub message of type 'RegionOfInterest'"
        self._valid_window = value

    @builtins.property
    def min_disparity(self):
        """Message field 'min_disparity'."""
        return self._min_disparity

    @min_disparity.setter
    def min_disparity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_disparity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'min_disparity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._min_disparity = value

    @builtins.property
    def max_disparity(self):
        """Message field 'max_disparity'."""
        return self._max_disparity

    @max_disparity.setter
    def max_disparity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_disparity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_disparity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_disparity = value

    @builtins.property
    def delta_d(self):
        """Message field 'delta_d'."""
        return self._delta_d

    @delta_d.setter
    def delta_d(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_d' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'delta_d' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._delta_d = value
