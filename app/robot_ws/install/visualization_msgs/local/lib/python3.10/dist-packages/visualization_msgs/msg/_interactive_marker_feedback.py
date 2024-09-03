# generated from rosidl_generator_py/resource/_idl.py.em
# with input from visualization_msgs:msg/InteractiveMarkerFeedback.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InteractiveMarkerFeedback(type):
    """Metaclass of message 'InteractiveMarkerFeedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'KEEP_ALIVE': 0,
        'POSE_UPDATE': 1,
        'MENU_SELECT': 2,
        'BUTTON_CLICK': 3,
        'MOUSE_DOWN': 4,
        'MOUSE_UP': 5,
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
                'visualization_msgs.msg.InteractiveMarkerFeedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__interactive_marker_feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__interactive_marker_feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__interactive_marker_feedback
            cls._TYPE_SUPPORT = module.type_support_msg__msg__interactive_marker_feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__interactive_marker_feedback

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'KEEP_ALIVE': cls.__constants['KEEP_ALIVE'],
            'POSE_UPDATE': cls.__constants['POSE_UPDATE'],
            'MENU_SELECT': cls.__constants['MENU_SELECT'],
            'BUTTON_CLICK': cls.__constants['BUTTON_CLICK'],
            'MOUSE_DOWN': cls.__constants['MOUSE_DOWN'],
            'MOUSE_UP': cls.__constants['MOUSE_UP'],
        }

    @property
    def KEEP_ALIVE(self):
        """Message constant 'KEEP_ALIVE'."""
        return Metaclass_InteractiveMarkerFeedback.__constants['KEEP_ALIVE']

    @property
    def POSE_UPDATE(self):
        """Message constant 'POSE_UPDATE'."""
        return Metaclass_InteractiveMarkerFeedback.__constants['POSE_UPDATE']

    @property
    def MENU_SELECT(self):
        """Message constant 'MENU_SELECT'."""
        return Metaclass_InteractiveMarkerFeedback.__constants['MENU_SELECT']

    @property
    def BUTTON_CLICK(self):
        """Message constant 'BUTTON_CLICK'."""
        return Metaclass_InteractiveMarkerFeedback.__constants['BUTTON_CLICK']

    @property
    def MOUSE_DOWN(self):
        """Message constant 'MOUSE_DOWN'."""
        return Metaclass_InteractiveMarkerFeedback.__constants['MOUSE_DOWN']

    @property
    def MOUSE_UP(self):
        """Message constant 'MOUSE_UP'."""
        return Metaclass_InteractiveMarkerFeedback.__constants['MOUSE_UP']


class InteractiveMarkerFeedback(metaclass=Metaclass_InteractiveMarkerFeedback):
    """
    Message class 'InteractiveMarkerFeedback'.

    Constants:
      KEEP_ALIVE
      POSE_UPDATE
      MENU_SELECT
      BUTTON_CLICK
      MOUSE_DOWN
      MOUSE_UP
    """

    __slots__ = [
        '_header',
        '_client_id',
        '_marker_name',
        '_control_name',
        '_event_type',
        '_pose',
        '_menu_entry_id',
        '_mouse_point',
        '_mouse_point_valid',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'client_id': 'string',
        'marker_name': 'string',
        'control_name': 'string',
        'event_type': 'uint8',
        'pose': 'geometry_msgs/Pose',
        'menu_entry_id': 'uint32',
        'mouse_point': 'geometry_msgs/Point',
        'mouse_point_valid': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.client_id = kwargs.get('client_id', str())
        self.marker_name = kwargs.get('marker_name', str())
        self.control_name = kwargs.get('control_name', str())
        self.event_type = kwargs.get('event_type', int())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        self.menu_entry_id = kwargs.get('menu_entry_id', int())
        from geometry_msgs.msg import Point
        self.mouse_point = kwargs.get('mouse_point', Point())
        self.mouse_point_valid = kwargs.get('mouse_point_valid', bool())

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
        if self.client_id != other.client_id:
            return False
        if self.marker_name != other.marker_name:
            return False
        if self.control_name != other.control_name:
            return False
        if self.event_type != other.event_type:
            return False
        if self.pose != other.pose:
            return False
        if self.menu_entry_id != other.menu_entry_id:
            return False
        if self.mouse_point != other.mouse_point:
            return False
        if self.mouse_point_valid != other.mouse_point_valid:
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
    def client_id(self):
        """Message field 'client_id'."""
        return self._client_id

    @client_id.setter
    def client_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'client_id' field must be of type 'str'"
        self._client_id = value

    @builtins.property
    def marker_name(self):
        """Message field 'marker_name'."""
        return self._marker_name

    @marker_name.setter
    def marker_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'marker_name' field must be of type 'str'"
        self._marker_name = value

    @builtins.property
    def control_name(self):
        """Message field 'control_name'."""
        return self._control_name

    @control_name.setter
    def control_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'control_name' field must be of type 'str'"
        self._control_name = value

    @builtins.property
    def event_type(self):
        """Message field 'event_type'."""
        return self._event_type

    @event_type.setter
    def event_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'event_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'event_type' field must be an unsigned integer in [0, 255]"
        self._event_type = value

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
    def menu_entry_id(self):
        """Message field 'menu_entry_id'."""
        return self._menu_entry_id

    @menu_entry_id.setter
    def menu_entry_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'menu_entry_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'menu_entry_id' field must be an unsigned integer in [0, 4294967295]"
        self._menu_entry_id = value

    @builtins.property
    def mouse_point(self):
        """Message field 'mouse_point'."""
        return self._mouse_point

    @mouse_point.setter
    def mouse_point(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'mouse_point' field must be a sub message of type 'Point'"
        self._mouse_point = value

    @builtins.property
    def mouse_point_valid(self):
        """Message field 'mouse_point_valid'."""
        return self._mouse_point_valid

    @mouse_point_valid.setter
    def mouse_point_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mouse_point_valid' field must be of type 'bool'"
        self._mouse_point_valid = value
