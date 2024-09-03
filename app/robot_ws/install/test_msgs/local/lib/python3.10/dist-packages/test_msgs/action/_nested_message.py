# generated from rosidl_generator_py/resource/_idl.py.em
# with input from test_msgs:action/NestedMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NestedMessage_Goal(type):
    """Metaclass of message 'NestedMessage_Goal'."""

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
            module = import_type_support('test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test_msgs.action.NestedMessage_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__nested_message__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__nested_message__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__nested_message__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__nested_message__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__nested_message__goal

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from test_msgs.msg import BasicTypes
            if BasicTypes.__class__._TYPE_SUPPORT is None:
                BasicTypes.__class__.__import_type_support__()

            from test_msgs.msg import Builtins
            if Builtins.__class__._TYPE_SUPPORT is None:
                Builtins.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NestedMessage_Goal(metaclass=Metaclass_NestedMessage_Goal):
    """Message class 'NestedMessage_Goal'."""

    __slots__ = [
        '_nested_field_no_pkg',
        '_nested_field',
        '_nested_different_pkg',
    ]

    _fields_and_field_types = {
        'nested_field_no_pkg': 'test_msgs/Builtins',
        'nested_field': 'test_msgs/BasicTypes',
        'nested_different_pkg': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['test_msgs', 'msg'], 'Builtins'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['test_msgs', 'msg'], 'BasicTypes'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from test_msgs.msg import Builtins
        self.nested_field_no_pkg = kwargs.get('nested_field_no_pkg', Builtins())
        from test_msgs.msg import BasicTypes
        self.nested_field = kwargs.get('nested_field', BasicTypes())
        from builtin_interfaces.msg import Time
        self.nested_different_pkg = kwargs.get('nested_different_pkg', Time())

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
        if self.nested_field_no_pkg != other.nested_field_no_pkg:
            return False
        if self.nested_field != other.nested_field:
            return False
        if self.nested_different_pkg != other.nested_different_pkg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def nested_field_no_pkg(self):
        """Message field 'nested_field_no_pkg'."""
        return self._nested_field_no_pkg

    @nested_field_no_pkg.setter
    def nested_field_no_pkg(self, value):
        if __debug__:
            from test_msgs.msg import Builtins
            assert \
                isinstance(value, Builtins), \
                "The 'nested_field_no_pkg' field must be a sub message of type 'Builtins'"
        self._nested_field_no_pkg = value

    @builtins.property
    def nested_field(self):
        """Message field 'nested_field'."""
        return self._nested_field

    @nested_field.setter
    def nested_field(self, value):
        if __debug__:
            from test_msgs.msg import BasicTypes
            assert \
                isinstance(value, BasicTypes), \
                "The 'nested_field' field must be a sub message of type 'BasicTypes'"
        self._nested_field = value

    @builtins.property
    def nested_different_pkg(self):
        """Message field 'nested_different_pkg'."""
        return self._nested_different_pkg

    @nested_different_pkg.setter
    def nested_different_pkg(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'nested_different_pkg' field must be a sub message of type 'Time'"
        self._nested_different_pkg = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NestedMessage_Result(type):
    """Metaclass of message 'NestedMessage_Result'."""

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
            module = import_type_support('test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test_msgs.action.NestedMessage_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__nested_message__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__nested_message__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__nested_message__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__nested_message__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__nested_message__result

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from test_msgs.msg import BasicTypes
            if BasicTypes.__class__._TYPE_SUPPORT is None:
                BasicTypes.__class__.__import_type_support__()

            from test_msgs.msg import Builtins
            if Builtins.__class__._TYPE_SUPPORT is None:
                Builtins.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NestedMessage_Result(metaclass=Metaclass_NestedMessage_Result):
    """Message class 'NestedMessage_Result'."""

    __slots__ = [
        '_nested_field_no_pkg',
        '_nested_field',
        '_nested_different_pkg',
    ]

    _fields_and_field_types = {
        'nested_field_no_pkg': 'test_msgs/Builtins',
        'nested_field': 'test_msgs/BasicTypes',
        'nested_different_pkg': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['test_msgs', 'msg'], 'Builtins'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['test_msgs', 'msg'], 'BasicTypes'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from test_msgs.msg import Builtins
        self.nested_field_no_pkg = kwargs.get('nested_field_no_pkg', Builtins())
        from test_msgs.msg import BasicTypes
        self.nested_field = kwargs.get('nested_field', BasicTypes())
        from builtin_interfaces.msg import Time
        self.nested_different_pkg = kwargs.get('nested_different_pkg', Time())

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
        if self.nested_field_no_pkg != other.nested_field_no_pkg:
            return False
        if self.nested_field != other.nested_field:
            return False
        if self.nested_different_pkg != other.nested_different_pkg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def nested_field_no_pkg(self):
        """Message field 'nested_field_no_pkg'."""
        return self._nested_field_no_pkg

    @nested_field_no_pkg.setter
    def nested_field_no_pkg(self, value):
        if __debug__:
            from test_msgs.msg import Builtins
            assert \
                isinstance(value, Builtins), \
                "The 'nested_field_no_pkg' field must be a sub message of type 'Builtins'"
        self._nested_field_no_pkg = value

    @builtins.property
    def nested_field(self):
        """Message field 'nested_field'."""
        return self._nested_field

    @nested_field.setter
    def nested_field(self, value):
        if __debug__:
            from test_msgs.msg import BasicTypes
            assert \
                isinstance(value, BasicTypes), \
                "The 'nested_field' field must be a sub message of type 'BasicTypes'"
        self._nested_field = value

    @builtins.property
    def nested_different_pkg(self):
        """Message field 'nested_different_pkg'."""
        return self._nested_different_pkg

    @nested_different_pkg.setter
    def nested_different_pkg(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'nested_different_pkg' field must be a sub message of type 'Time'"
        self._nested_different_pkg = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NestedMessage_Feedback(type):
    """Metaclass of message 'NestedMessage_Feedback'."""

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
            module = import_type_support('test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test_msgs.action.NestedMessage_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__nested_message__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__nested_message__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__nested_message__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__nested_message__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__nested_message__feedback

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from test_msgs.msg import BasicTypes
            if BasicTypes.__class__._TYPE_SUPPORT is None:
                BasicTypes.__class__.__import_type_support__()

            from test_msgs.msg import Builtins
            if Builtins.__class__._TYPE_SUPPORT is None:
                Builtins.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NestedMessage_Feedback(metaclass=Metaclass_NestedMessage_Feedback):
    """Message class 'NestedMessage_Feedback'."""

    __slots__ = [
        '_nested_field_no_pkg',
        '_nested_field',
        '_nested_different_pkg',
    ]

    _fields_and_field_types = {
        'nested_field_no_pkg': 'test_msgs/Builtins',
        'nested_field': 'test_msgs/BasicTypes',
        'nested_different_pkg': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['test_msgs', 'msg'], 'Builtins'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['test_msgs', 'msg'], 'BasicTypes'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from test_msgs.msg import Builtins
        self.nested_field_no_pkg = kwargs.get('nested_field_no_pkg', Builtins())
        from test_msgs.msg import BasicTypes
        self.nested_field = kwargs.get('nested_field', BasicTypes())
        from builtin_interfaces.msg import Time
        self.nested_different_pkg = kwargs.get('nested_different_pkg', Time())

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
        if self.nested_field_no_pkg != other.nested_field_no_pkg:
            return False
        if self.nested_field != other.nested_field:
            return False
        if self.nested_different_pkg != other.nested_different_pkg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def nested_field_no_pkg(self):
        """Message field 'nested_field_no_pkg'."""
        return self._nested_field_no_pkg

    @nested_field_no_pkg.setter
    def nested_field_no_pkg(self, value):
        if __debug__:
            from test_msgs.msg import Builtins
            assert \
                isinstance(value, Builtins), \
                "The 'nested_field_no_pkg' field must be a sub message of type 'Builtins'"
        self._nested_field_no_pkg = value

    @builtins.property
    def nested_field(self):
        """Message field 'nested_field'."""
        return self._nested_field

    @nested_field.setter
    def nested_field(self, value):
        if __debug__:
            from test_msgs.msg import BasicTypes
            assert \
                isinstance(value, BasicTypes), \
                "The 'nested_field' field must be a sub message of type 'BasicTypes'"
        self._nested_field = value

    @builtins.property
    def nested_different_pkg(self):
        """Message field 'nested_different_pkg'."""
        return self._nested_different_pkg

    @nested_different_pkg.setter
    def nested_different_pkg(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'nested_different_pkg' field must be a sub message of type 'Time'"
        self._nested_different_pkg = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NestedMessage_SendGoal_Request(type):
    """Metaclass of message 'NestedMessage_SendGoal_Request'."""

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
            module = import_type_support('test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test_msgs.action.NestedMessage_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__nested_message__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__nested_message__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__nested_message__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__nested_message__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__nested_message__send_goal__request

            from test_msgs.action import NestedMessage
            if NestedMessage.Goal.__class__._TYPE_SUPPORT is None:
                NestedMessage.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NestedMessage_SendGoal_Request(metaclass=Metaclass_NestedMessage_SendGoal_Request):
    """Message class 'NestedMessage_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'test_msgs/NestedMessage_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['test_msgs', 'action'], 'NestedMessage_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from test_msgs.action._nested_message import NestedMessage_Goal
        self.goal = kwargs.get('goal', NestedMessage_Goal())

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
        if self.goal != other.goal:
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
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from test_msgs.action._nested_message import NestedMessage_Goal
            assert \
                isinstance(value, NestedMessage_Goal), \
                "The 'goal' field must be a sub message of type 'NestedMessage_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NestedMessage_SendGoal_Response(type):
    """Metaclass of message 'NestedMessage_SendGoal_Response'."""

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
            module = import_type_support('test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test_msgs.action.NestedMessage_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__nested_message__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__nested_message__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__nested_message__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__nested_message__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__nested_message__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NestedMessage_SendGoal_Response(metaclass=Metaclass_NestedMessage_SendGoal_Response):
    """Message class 'NestedMessage_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_NestedMessage_SendGoal(type):
    """Metaclass of service 'NestedMessage_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test_msgs.action.NestedMessage_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__nested_message__send_goal

            from test_msgs.action import _nested_message
            if _nested_message.Metaclass_NestedMessage_SendGoal_Request._TYPE_SUPPORT is None:
                _nested_message.Metaclass_NestedMessage_SendGoal_Request.__import_type_support__()
            if _nested_message.Metaclass_NestedMessage_SendGoal_Response._TYPE_SUPPORT is None:
                _nested_message.Metaclass_NestedMessage_SendGoal_Response.__import_type_support__()


class NestedMessage_SendGoal(metaclass=Metaclass_NestedMessage_SendGoal):
    from test_msgs.action._nested_message import NestedMessage_SendGoal_Request as Request
    from test_msgs.action._nested_message import NestedMessage_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NestedMessage_GetResult_Request(type):
    """Metaclass of message 'NestedMessage_GetResult_Request'."""

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
            module = import_type_support('test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test_msgs.action.NestedMessage_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__nested_message__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__nested_message__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__nested_message__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__nested_message__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__nested_message__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NestedMessage_GetResult_Request(metaclass=Metaclass_NestedMessage_GetResult_Request):
    """Message class 'NestedMessage_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NestedMessage_GetResult_Response(type):
    """Metaclass of message 'NestedMessage_GetResult_Response'."""

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
            module = import_type_support('test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test_msgs.action.NestedMessage_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__nested_message__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__nested_message__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__nested_message__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__nested_message__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__nested_message__get_result__response

            from test_msgs.action import NestedMessage
            if NestedMessage.Result.__class__._TYPE_SUPPORT is None:
                NestedMessage.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NestedMessage_GetResult_Response(metaclass=Metaclass_NestedMessage_GetResult_Response):
    """Message class 'NestedMessage_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'test_msgs/NestedMessage_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['test_msgs', 'action'], 'NestedMessage_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from test_msgs.action._nested_message import NestedMessage_Result
        self.result = kwargs.get('result', NestedMessage_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from test_msgs.action._nested_message import NestedMessage_Result
            assert \
                isinstance(value, NestedMessage_Result), \
                "The 'result' field must be a sub message of type 'NestedMessage_Result'"
        self._result = value


class Metaclass_NestedMessage_GetResult(type):
    """Metaclass of service 'NestedMessage_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test_msgs.action.NestedMessage_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__nested_message__get_result

            from test_msgs.action import _nested_message
            if _nested_message.Metaclass_NestedMessage_GetResult_Request._TYPE_SUPPORT is None:
                _nested_message.Metaclass_NestedMessage_GetResult_Request.__import_type_support__()
            if _nested_message.Metaclass_NestedMessage_GetResult_Response._TYPE_SUPPORT is None:
                _nested_message.Metaclass_NestedMessage_GetResult_Response.__import_type_support__()


class NestedMessage_GetResult(metaclass=Metaclass_NestedMessage_GetResult):
    from test_msgs.action._nested_message import NestedMessage_GetResult_Request as Request
    from test_msgs.action._nested_message import NestedMessage_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NestedMessage_FeedbackMessage(type):
    """Metaclass of message 'NestedMessage_FeedbackMessage'."""

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
            module = import_type_support('test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test_msgs.action.NestedMessage_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__nested_message__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__nested_message__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__nested_message__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__nested_message__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__nested_message__feedback_message

            from test_msgs.action import NestedMessage
            if NestedMessage.Feedback.__class__._TYPE_SUPPORT is None:
                NestedMessage.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NestedMessage_FeedbackMessage(metaclass=Metaclass_NestedMessage_FeedbackMessage):
    """Message class 'NestedMessage_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'test_msgs/NestedMessage_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['test_msgs', 'action'], 'NestedMessage_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from test_msgs.action._nested_message import NestedMessage_Feedback
        self.feedback = kwargs.get('feedback', NestedMessage_Feedback())

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
        if self.feedback != other.feedback:
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
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from test_msgs.action._nested_message import NestedMessage_Feedback
            assert \
                isinstance(value, NestedMessage_Feedback), \
                "The 'feedback' field must be a sub message of type 'NestedMessage_Feedback'"
        self._feedback = value


class Metaclass_NestedMessage(type):
    """Metaclass of action 'NestedMessage'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test_msgs.action.NestedMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__nested_message

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from test_msgs.action import _nested_message
            if _nested_message.Metaclass_NestedMessage_SendGoal._TYPE_SUPPORT is None:
                _nested_message.Metaclass_NestedMessage_SendGoal.__import_type_support__()
            if _nested_message.Metaclass_NestedMessage_GetResult._TYPE_SUPPORT is None:
                _nested_message.Metaclass_NestedMessage_GetResult.__import_type_support__()
            if _nested_message.Metaclass_NestedMessage_FeedbackMessage._TYPE_SUPPORT is None:
                _nested_message.Metaclass_NestedMessage_FeedbackMessage.__import_type_support__()


class NestedMessage(metaclass=Metaclass_NestedMessage):

    # The goal message defined in the action definition.
    from test_msgs.action._nested_message import NestedMessage_Goal as Goal
    # The result message defined in the action definition.
    from test_msgs.action._nested_message import NestedMessage_Result as Result
    # The feedback message defined in the action definition.
    from test_msgs.action._nested_message import NestedMessage_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from test_msgs.action._nested_message import NestedMessage_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from test_msgs.action._nested_message import NestedMessage_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from test_msgs.action._nested_message import NestedMessage_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
