# generated from rosidl_generator_py/resource/_idl.py.em
# with input from visualization_msgs:msg/MenuEntry.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MenuEntry(type):
    """Metaclass of message 'MenuEntry'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FEEDBACK': 0,
        'ROSRUN': 1,
        'ROSLAUNCH': 2,
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
                'visualization_msgs.msg.MenuEntry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__menu_entry
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__menu_entry
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__menu_entry
            cls._TYPE_SUPPORT = module.type_support_msg__msg__menu_entry
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__menu_entry

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FEEDBACK': cls.__constants['FEEDBACK'],
            'ROSRUN': cls.__constants['ROSRUN'],
            'ROSLAUNCH': cls.__constants['ROSLAUNCH'],
        }

    @property
    def FEEDBACK(self):
        """Message constant 'FEEDBACK'."""
        return Metaclass_MenuEntry.__constants['FEEDBACK']

    @property
    def ROSRUN(self):
        """Message constant 'ROSRUN'."""
        return Metaclass_MenuEntry.__constants['ROSRUN']

    @property
    def ROSLAUNCH(self):
        """Message constant 'ROSLAUNCH'."""
        return Metaclass_MenuEntry.__constants['ROSLAUNCH']


class MenuEntry(metaclass=Metaclass_MenuEntry):
    """
    Message class 'MenuEntry'.

    Constants:
      FEEDBACK
      ROSRUN
      ROSLAUNCH
    """

    __slots__ = [
        '_id',
        '_parent_id',
        '_title',
        '_command',
        '_command_type',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
        'parent_id': 'uint32',
        'title': 'string',
        'command': 'string',
        'command_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.parent_id = kwargs.get('parent_id', int())
        self.title = kwargs.get('title', str())
        self.command = kwargs.get('command', str())
        self.command_type = kwargs.get('command_type', int())

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
        if self.id != other.id:
            return False
        if self.parent_id != other.parent_id:
            return False
        if self.title != other.title:
            return False
        if self.command != other.command:
            return False
        if self.command_type != other.command_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @builtins.property
    def parent_id(self):
        """Message field 'parent_id'."""
        return self._parent_id

    @parent_id.setter
    def parent_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parent_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'parent_id' field must be an unsigned integer in [0, 4294967295]"
        self._parent_id = value

    @builtins.property
    def title(self):
        """Message field 'title'."""
        return self._title

    @title.setter
    def title(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'title' field must be of type 'str'"
        self._title = value

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'command' field must be of type 'str'"
        self._command = value

    @builtins.property
    def command_type(self):
        """Message field 'command_type'."""
        return self._command_type

    @command_type.setter
    def command_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command_type' field must be an unsigned integer in [0, 255]"
        self._command_type = value
