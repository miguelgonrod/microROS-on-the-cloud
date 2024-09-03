# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sensor_msgs:msg/PointCloud2.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PointCloud2(type):
    """Metaclass of message 'PointCloud2'."""

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
                'sensor_msgs.msg.PointCloud2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__point_cloud2
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__point_cloud2
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__point_cloud2
            cls._TYPE_SUPPORT = module.type_support_msg__msg__point_cloud2
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__point_cloud2

            from sensor_msgs.msg import PointField
            if PointField.__class__._TYPE_SUPPORT is None:
                PointField.__class__.__import_type_support__()

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


class PointCloud2(metaclass=Metaclass_PointCloud2):
    """Message class 'PointCloud2'."""

    __slots__ = [
        '_header',
        '_height',
        '_width',
        '_fields',
        '_is_bigendian',
        '_point_step',
        '_row_step',
        '_data',
        '_is_dense',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'height': 'uint32',
        'width': 'uint32',
        'fields': 'sequence<sensor_msgs/PointField>',
        'is_bigendian': 'boolean',
        'point_step': 'uint32',
        'row_step': 'uint32',
        'data': 'sequence<uint8>',
        'is_dense': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointField')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.height = kwargs.get('height', int())
        self.width = kwargs.get('width', int())
        self.fields = kwargs.get('fields', [])
        self.is_bigendian = kwargs.get('is_bigendian', bool())
        self.point_step = kwargs.get('point_step', int())
        self.row_step = kwargs.get('row_step', int())
        self.data = array.array('B', kwargs.get('data', []))
        self.is_dense = kwargs.get('is_dense', bool())

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
        if self.fields != other.fields:
            return False
        if self.is_bigendian != other.is_bigendian:
            return False
        if self.point_step != other.point_step:
            return False
        if self.row_step != other.row_step:
            return False
        if self.data != other.data:
            return False
        if self.is_dense != other.is_dense:
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
    def fields(self):
        """Message field 'fields'."""
        return self._fields

    @fields.setter
    def fields(self, value):
        if __debug__:
            from sensor_msgs.msg import PointField
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
                 all(isinstance(v, PointField) for v in value) and
                 True), \
                "The 'fields' field must be a set or sequence and each value of type 'PointField'"
        self._fields = value

    @builtins.property
    def is_bigendian(self):
        """Message field 'is_bigendian'."""
        return self._is_bigendian

    @is_bigendian.setter
    def is_bigendian(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_bigendian' field must be of type 'bool'"
        self._is_bigendian = value

    @builtins.property
    def point_step(self):
        """Message field 'point_step'."""
        return self._point_step

    @point_step.setter
    def point_step(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'point_step' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'point_step' field must be an unsigned integer in [0, 4294967295]"
        self._point_step = value

    @builtins.property
    def row_step(self):
        """Message field 'row_step'."""
        return self._row_step

    @row_step.setter
    def row_step(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'row_step' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'row_step' field must be an unsigned integer in [0, 4294967295]"
        self._row_step = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'data' array.array() must have the type code of 'B'"
            self._data = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = array.array('B', value)

    @builtins.property
    def is_dense(self):
        """Message field 'is_dense'."""
        return self._is_dense

    @is_dense.setter
    def is_dense(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_dense' field must be of type 'bool'"
        self._is_dense = value
