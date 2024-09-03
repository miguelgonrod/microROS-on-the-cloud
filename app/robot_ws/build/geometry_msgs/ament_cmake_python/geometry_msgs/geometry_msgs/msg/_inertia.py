# generated from rosidl_generator_py/resource/_idl.py.em
# with input from geometry_msgs:msg/Inertia.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Inertia(type):
    """Metaclass of message 'Inertia'."""

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
            module = import_type_support('geometry_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'geometry_msgs.msg.Inertia')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__inertia
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__inertia
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__inertia
            cls._TYPE_SUPPORT = module.type_support_msg__msg__inertia
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__inertia

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Inertia(metaclass=Metaclass_Inertia):
    """Message class 'Inertia'."""

    __slots__ = [
        '_m',
        '_com',
        '_ixx',
        '_ixy',
        '_ixz',
        '_iyy',
        '_iyz',
        '_izz',
    ]

    _fields_and_field_types = {
        'm': 'double',
        'com': 'geometry_msgs/Vector3',
        'ixx': 'double',
        'ixy': 'double',
        'ixz': 'double',
        'iyy': 'double',
        'iyz': 'double',
        'izz': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.m = kwargs.get('m', float())
        from geometry_msgs.msg import Vector3
        self.com = kwargs.get('com', Vector3())
        self.ixx = kwargs.get('ixx', float())
        self.ixy = kwargs.get('ixy', float())
        self.ixz = kwargs.get('ixz', float())
        self.iyy = kwargs.get('iyy', float())
        self.iyz = kwargs.get('iyz', float())
        self.izz = kwargs.get('izz', float())

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
        if self.m != other.m:
            return False
        if self.com != other.com:
            return False
        if self.ixx != other.ixx:
            return False
        if self.ixy != other.ixy:
            return False
        if self.ixz != other.ixz:
            return False
        if self.iyy != other.iyy:
            return False
        if self.iyz != other.iyz:
            return False
        if self.izz != other.izz:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def m(self):
        """Message field 'm'."""
        return self._m

    @m.setter
    def m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'm' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'm' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._m = value

    @builtins.property
    def com(self):
        """Message field 'com'."""
        return self._com

    @com.setter
    def com(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'com' field must be a sub message of type 'Vector3'"
        self._com = value

    @builtins.property
    def ixx(self):
        """Message field 'ixx'."""
        return self._ixx

    @ixx.setter
    def ixx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ixx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ixx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ixx = value

    @builtins.property
    def ixy(self):
        """Message field 'ixy'."""
        return self._ixy

    @ixy.setter
    def ixy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ixy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ixy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ixy = value

    @builtins.property
    def ixz(self):
        """Message field 'ixz'."""
        return self._ixz

    @ixz.setter
    def ixz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ixz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ixz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ixz = value

    @builtins.property
    def iyy(self):
        """Message field 'iyy'."""
        return self._iyy

    @iyy.setter
    def iyy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'iyy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'iyy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._iyy = value

    @builtins.property
    def iyz(self):
        """Message field 'iyz'."""
        return self._iyz

    @iyz.setter
    def iyz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'iyz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'iyz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._iyz = value

    @builtins.property
    def izz(self):
        """Message field 'izz'."""
        return self._izz

    @izz.setter
    def izz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'izz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'izz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._izz = value
