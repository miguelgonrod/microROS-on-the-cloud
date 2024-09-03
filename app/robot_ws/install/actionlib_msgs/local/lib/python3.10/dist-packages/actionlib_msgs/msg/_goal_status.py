# generated from rosidl_generator_py/resource/_idl.py.em
# with input from actionlib_msgs:msg/GoalStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GoalStatus(type):
    """Metaclass of message 'GoalStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PENDING': 0,
        'ACTIVE': 1,
        'PREEMPTED': 2,
        'SUCCEEDED': 3,
        'ABORTED': 4,
        'REJECTED': 5,
        'PREEMPTING': 6,
        'RECALLING': 7,
        'RECALLED': 8,
        'LOST': 9,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('actionlib_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'actionlib_msgs.msg.GoalStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__goal_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__goal_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__goal_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__goal_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__goal_status

            from actionlib_msgs.msg import GoalID
            if GoalID.__class__._TYPE_SUPPORT is None:
                GoalID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PENDING': cls.__constants['PENDING'],
            'ACTIVE': cls.__constants['ACTIVE'],
            'PREEMPTED': cls.__constants['PREEMPTED'],
            'SUCCEEDED': cls.__constants['SUCCEEDED'],
            'ABORTED': cls.__constants['ABORTED'],
            'REJECTED': cls.__constants['REJECTED'],
            'PREEMPTING': cls.__constants['PREEMPTING'],
            'RECALLING': cls.__constants['RECALLING'],
            'RECALLED': cls.__constants['RECALLED'],
            'LOST': cls.__constants['LOST'],
        }

    @property
    def PENDING(self):
        """Message constant 'PENDING'."""
        return Metaclass_GoalStatus.__constants['PENDING']

    @property
    def ACTIVE(self):
        """Message constant 'ACTIVE'."""
        return Metaclass_GoalStatus.__constants['ACTIVE']

    @property
    def PREEMPTED(self):
        """Message constant 'PREEMPTED'."""
        return Metaclass_GoalStatus.__constants['PREEMPTED']

    @property
    def SUCCEEDED(self):
        """Message constant 'SUCCEEDED'."""
        return Metaclass_GoalStatus.__constants['SUCCEEDED']

    @property
    def ABORTED(self):
        """Message constant 'ABORTED'."""
        return Metaclass_GoalStatus.__constants['ABORTED']

    @property
    def REJECTED(self):
        """Message constant 'REJECTED'."""
        return Metaclass_GoalStatus.__constants['REJECTED']

    @property
    def PREEMPTING(self):
        """Message constant 'PREEMPTING'."""
        return Metaclass_GoalStatus.__constants['PREEMPTING']

    @property
    def RECALLING(self):
        """Message constant 'RECALLING'."""
        return Metaclass_GoalStatus.__constants['RECALLING']

    @property
    def RECALLED(self):
        """Message constant 'RECALLED'."""
        return Metaclass_GoalStatus.__constants['RECALLED']

    @property
    def LOST(self):
        """Message constant 'LOST'."""
        return Metaclass_GoalStatus.__constants['LOST']


class GoalStatus(metaclass=Metaclass_GoalStatus):
    """
    Message class 'GoalStatus'.

    Constants:
      PENDING
      ACTIVE
      PREEMPTED
      SUCCEEDED
      ABORTED
      REJECTED
      PREEMPTING
      RECALLING
      RECALLED
      LOST
    """

    __slots__ = [
        '_goal_id',
        '_status',
        '_text',
    ]

    _fields_and_field_types = {
        'goal_id': 'actionlib_msgs/GoalID',
        'status': 'uint8',
        'text': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['actionlib_msgs', 'msg'], 'GoalID'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from actionlib_msgs.msg import GoalID
        self.goal_id = kwargs.get('goal_id', GoalID())
        self.status = kwargs.get('status', int())
        self.text = kwargs.get('text', str())

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
        if self.goal_id != other.goal_id:
            return False
        if self.status != other.status:
            return False
        if self.text != other.text:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from actionlib_msgs.msg import GoalID
            assert \
                isinstance(value, GoalID), \
                "The 'goal_id' field must be a sub message of type 'GoalID'"
        self._goal_id = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property
    def text(self):
        """Message field 'text'."""
        return self._text

    @text.setter
    def text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'text' field must be of type 'str'"
        self._text = value
