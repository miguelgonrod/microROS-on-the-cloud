# generated from rosidl_generator_py/resource/_idl.py.em
# with input from visualization_msgs:msg/InteractiveMarker.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InteractiveMarker(type):
    """Metaclass of message 'InteractiveMarker'."""

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
                'visualization_msgs.msg.InteractiveMarker')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__interactive_marker
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__interactive_marker
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__interactive_marker
            cls._TYPE_SUPPORT = module.type_support_msg__msg__interactive_marker
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__interactive_marker

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from visualization_msgs.msg import InteractiveMarkerControl
            if InteractiveMarkerControl.__class__._TYPE_SUPPORT is None:
                InteractiveMarkerControl.__class__.__import_type_support__()

            from visualization_msgs.msg import MenuEntry
            if MenuEntry.__class__._TYPE_SUPPORT is None:
                MenuEntry.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InteractiveMarker(metaclass=Metaclass_InteractiveMarker):
    """Message class 'InteractiveMarker'."""

    __slots__ = [
        '_header',
        '_pose',
        '_name',
        '_description',
        '_scale',
        '_menu_entries',
        '_controls',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'pose': 'geometry_msgs/Pose',
        'name': 'string',
        'description': 'string',
        'scale': 'float',
        'menu_entries': 'sequence<visualization_msgs/MenuEntry>',
        'controls': 'sequence<visualization_msgs/InteractiveMarkerControl>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['visualization_msgs', 'msg'], 'MenuEntry')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['visualization_msgs', 'msg'], 'InteractiveMarkerControl')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        self.name = kwargs.get('name', str())
        self.description = kwargs.get('description', str())
        self.scale = kwargs.get('scale', float())
        self.menu_entries = kwargs.get('menu_entries', [])
        self.controls = kwargs.get('controls', [])

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
        if self.pose != other.pose:
            return False
        if self.name != other.name:
            return False
        if self.description != other.description:
            return False
        if self.scale != other.scale:
            return False
        if self.menu_entries != other.menu_entries:
            return False
        if self.controls != other.controls:
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
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'description' field must be of type 'str'"
        self._description = value

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
    def menu_entries(self):
        """Message field 'menu_entries'."""
        return self._menu_entries

    @menu_entries.setter
    def menu_entries(self, value):
        if __debug__:
            from visualization_msgs.msg import MenuEntry
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
                 all(isinstance(v, MenuEntry) for v in value) and
                 True), \
                "The 'menu_entries' field must be a set or sequence and each value of type 'MenuEntry'"
        self._menu_entries = value

    @builtins.property
    def controls(self):
        """Message field 'controls'."""
        return self._controls

    @controls.setter
    def controls(self, value):
        if __debug__:
            from visualization_msgs.msg import InteractiveMarkerControl
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
                 all(isinstance(v, InteractiveMarkerControl) for v in value) and
                 True), \
                "The 'controls' field must be a set or sequence and each value of type 'InteractiveMarkerControl'"
        self._controls = value
