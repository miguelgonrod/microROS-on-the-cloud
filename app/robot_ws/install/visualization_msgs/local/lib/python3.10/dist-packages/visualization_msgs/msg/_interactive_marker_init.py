# generated from rosidl_generator_py/resource/_idl.py.em
# with input from visualization_msgs:msg/InteractiveMarkerInit.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InteractiveMarkerInit(type):
    """Metaclass of message 'InteractiveMarkerInit'."""

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
            module = import_type_support('visualization_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'visualization_msgs.msg.InteractiveMarkerInit')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__interactive_marker_init
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__interactive_marker_init
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__interactive_marker_init
            cls._TYPE_SUPPORT = module.type_support_msg__msg__interactive_marker_init
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__interactive_marker_init

            from visualization_msgs.msg import InteractiveMarker
            if InteractiveMarker.__class__._TYPE_SUPPORT is None:
                InteractiveMarker.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InteractiveMarkerInit(metaclass=Metaclass_InteractiveMarkerInit):
    """Message class 'InteractiveMarkerInit'."""

    __slots__ = [
        '_server_id',
        '_seq_num',
        '_markers',
    ]

    _fields_and_field_types = {
        'server_id': 'string',
        'seq_num': 'uint64',
        'markers': 'sequence<visualization_msgs/InteractiveMarker>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['visualization_msgs', 'msg'], 'InteractiveMarker')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.server_id = kwargs.get('server_id', str())
        self.seq_num = kwargs.get('seq_num', int())
        self.markers = kwargs.get('markers', [])

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
        if self.server_id != other.server_id:
            return False
        if self.seq_num != other.seq_num:
            return False
        if self.markers != other.markers:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def server_id(self):
        """Message field 'server_id'."""
        return self._server_id

    @server_id.setter
    def server_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'server_id' field must be of type 'str'"
        self._server_id = value

    @builtins.property
    def seq_num(self):
        """Message field 'seq_num'."""
        return self._seq_num

    @seq_num.setter
    def seq_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seq_num' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'seq_num' field must be an unsigned integer in [0, 18446744073709551615]"
        self._seq_num = value

    @builtins.property
    def markers(self):
        """Message field 'markers'."""
        return self._markers

    @markers.setter
    def markers(self, value):
        if __debug__:
            from visualization_msgs.msg import InteractiveMarker
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
                 all(isinstance(v, InteractiveMarker) for v in value) and
                 True), \
                "The 'markers' field must be a set or sequence and each value of type 'InteractiveMarker'"
        self._markers = value
