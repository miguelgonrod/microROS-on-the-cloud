# generated from rosidl_generator_py/resource/_idl.py.em
# with input from visualization_msgs:msg/InteractiveMarkerControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InteractiveMarkerControl(type):
    """Metaclass of message 'InteractiveMarkerControl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'INHERIT': 0,
        'FIXED': 1,
        'VIEW_FACING': 2,
        'NONE': 0,
        'MENU': 1,
        'BUTTON': 2,
        'MOVE_AXIS': 3,
        'MOVE_PLANE': 4,
        'ROTATE_AXIS': 5,
        'MOVE_ROTATE': 6,
        'MOVE_3D': 7,
        'ROTATE_3D': 8,
        'MOVE_ROTATE_3D': 9,
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
                'visualization_msgs.msg.InteractiveMarkerControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__interactive_marker_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__interactive_marker_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__interactive_marker_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__interactive_marker_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__interactive_marker_control

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from visualization_msgs.msg import Marker
            if Marker.__class__._TYPE_SUPPORT is None:
                Marker.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INHERIT': cls.__constants['INHERIT'],
            'FIXED': cls.__constants['FIXED'],
            'VIEW_FACING': cls.__constants['VIEW_FACING'],
            'NONE': cls.__constants['NONE'],
            'MENU': cls.__constants['MENU'],
            'BUTTON': cls.__constants['BUTTON'],
            'MOVE_AXIS': cls.__constants['MOVE_AXIS'],
            'MOVE_PLANE': cls.__constants['MOVE_PLANE'],
            'ROTATE_AXIS': cls.__constants['ROTATE_AXIS'],
            'MOVE_ROTATE': cls.__constants['MOVE_ROTATE'],
            'MOVE_3D': cls.__constants['MOVE_3D'],
            'ROTATE_3D': cls.__constants['ROTATE_3D'],
            'MOVE_ROTATE_3D': cls.__constants['MOVE_ROTATE_3D'],
        }

    @property
    def INHERIT(self):
        """Message constant 'INHERIT'."""
        return Metaclass_InteractiveMarkerControl.__constants['INHERIT']

    @property
    def FIXED(self):
        """Message constant 'FIXED'."""
        return Metaclass_InteractiveMarkerControl.__constants['FIXED']

    @property
    def VIEW_FACING(self):
        """Message constant 'VIEW_FACING'."""
        return Metaclass_InteractiveMarkerControl.__constants['VIEW_FACING']

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_InteractiveMarkerControl.__constants['NONE']

    @property
    def MENU(self):
        """Message constant 'MENU'."""
        return Metaclass_InteractiveMarkerControl.__constants['MENU']

    @property
    def BUTTON(self):
        """Message constant 'BUTTON'."""
        return Metaclass_InteractiveMarkerControl.__constants['BUTTON']

    @property
    def MOVE_AXIS(self):
        """Message constant 'MOVE_AXIS'."""
        return Metaclass_InteractiveMarkerControl.__constants['MOVE_AXIS']

    @property
    def MOVE_PLANE(self):
        """Message constant 'MOVE_PLANE'."""
        return Metaclass_InteractiveMarkerControl.__constants['MOVE_PLANE']

    @property
    def ROTATE_AXIS(self):
        """Message constant 'ROTATE_AXIS'."""
        return Metaclass_InteractiveMarkerControl.__constants['ROTATE_AXIS']

    @property
    def MOVE_ROTATE(self):
        """Message constant 'MOVE_ROTATE'."""
        return Metaclass_InteractiveMarkerControl.__constants['MOVE_ROTATE']

    @property
    def MOVE_3D(self):
        """Message constant 'MOVE_3D'."""
        return Metaclass_InteractiveMarkerControl.__constants['MOVE_3D']

    @property
    def ROTATE_3D(self):
        """Message constant 'ROTATE_3D'."""
        return Metaclass_InteractiveMarkerControl.__constants['ROTATE_3D']

    @property
    def MOVE_ROTATE_3D(self):
        """Message constant 'MOVE_ROTATE_3D'."""
        return Metaclass_InteractiveMarkerControl.__constants['MOVE_ROTATE_3D']


class InteractiveMarkerControl(metaclass=Metaclass_InteractiveMarkerControl):
    """
    Message class 'InteractiveMarkerControl'.

    Constants:
      INHERIT
      FIXED
      VIEW_FACING
      NONE
      MENU
      BUTTON
      MOVE_AXIS
      MOVE_PLANE
      ROTATE_AXIS
      MOVE_ROTATE
      MOVE_3D
      ROTATE_3D
      MOVE_ROTATE_3D
    """

    __slots__ = [
        '_name',
        '_orientation',
        '_orientation_mode',
        '_interaction_mode',
        '_always_visible',
        '_markers',
        '_independent_marker_orientation',
        '_description',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'orientation': 'geometry_msgs/Quaternion',
        'orientation_mode': 'uint8',
        'interaction_mode': 'uint8',
        'always_visible': 'boolean',
        'markers': 'sequence<visualization_msgs/Marker>',
        'independent_marker_orientation': 'boolean',
        'description': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['visualization_msgs', 'msg'], 'Marker')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        from geometry_msgs.msg import Quaternion
        self.orientation = kwargs.get('orientation', Quaternion())
        self.orientation_mode = kwargs.get('orientation_mode', int())
        self.interaction_mode = kwargs.get('interaction_mode', int())
        self.always_visible = kwargs.get('always_visible', bool())
        self.markers = kwargs.get('markers', [])
        self.independent_marker_orientation = kwargs.get('independent_marker_orientation', bool())
        self.description = kwargs.get('description', str())

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
        if self.name != other.name:
            return False
        if self.orientation != other.orientation:
            return False
        if self.orientation_mode != other.orientation_mode:
            return False
        if self.interaction_mode != other.interaction_mode:
            return False
        if self.always_visible != other.always_visible:
            return False
        if self.markers != other.markers:
            return False
        if self.independent_marker_orientation != other.independent_marker_orientation:
            return False
        if self.description != other.description:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'orientation' field must be a sub message of type 'Quaternion'"
        self._orientation = value

    @builtins.property
    def orientation_mode(self):
        """Message field 'orientation_mode'."""
        return self._orientation_mode

    @orientation_mode.setter
    def orientation_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'orientation_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'orientation_mode' field must be an unsigned integer in [0, 255]"
        self._orientation_mode = value

    @builtins.property
    def interaction_mode(self):
        """Message field 'interaction_mode'."""
        return self._interaction_mode

    @interaction_mode.setter
    def interaction_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'interaction_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'interaction_mode' field must be an unsigned integer in [0, 255]"
        self._interaction_mode = value

    @builtins.property
    def always_visible(self):
        """Message field 'always_visible'."""
        return self._always_visible

    @always_visible.setter
    def always_visible(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'always_visible' field must be of type 'bool'"
        self._always_visible = value

    @builtins.property
    def markers(self):
        """Message field 'markers'."""
        return self._markers

    @markers.setter
    def markers(self, value):
        if __debug__:
            from visualization_msgs.msg import Marker
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
                 all(isinstance(v, Marker) for v in value) and
                 True), \
                "The 'markers' field must be a set or sequence and each value of type 'Marker'"
        self._markers = value

    @builtins.property
    def independent_marker_orientation(self):
        """Message field 'independent_marker_orientation'."""
        return self._independent_marker_orientation

    @independent_marker_orientation.setter
    def independent_marker_orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'independent_marker_orientation' field must be of type 'bool'"
        self._independent_marker_orientation = value

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
