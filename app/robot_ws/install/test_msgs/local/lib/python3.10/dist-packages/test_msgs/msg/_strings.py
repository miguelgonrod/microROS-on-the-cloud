# generated from rosidl_generator_py/resource/_idl.py.em
# with input from test_msgs:msg/Strings.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Strings(type):
    """Metaclass of message 'Strings'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STRING_CONST': 'Hello world!',
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
                'test_msgs.msg.Strings')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__strings
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__strings
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__strings
            cls._TYPE_SUPPORT = module.type_support_msg__msg__strings
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__strings

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STRING_CONST': cls.__constants['STRING_CONST'],
            'STRING_VALUE_DEFAULT1__DEFAULT': 'Hello world!',
            'STRING_VALUE_DEFAULT2__DEFAULT': "Hello'world!",
            'STRING_VALUE_DEFAULT3__DEFAULT': 'Hello"world!',
            'STRING_VALUE_DEFAULT4__DEFAULT': "Hello'world!",
            'STRING_VALUE_DEFAULT5__DEFAULT': 'Hello"world!',
            'BOUNDED_STRING_VALUE_DEFAULT1__DEFAULT': 'Hello world!',
            'BOUNDED_STRING_VALUE_DEFAULT2__DEFAULT': "Hello'world!",
            'BOUNDED_STRING_VALUE_DEFAULT3__DEFAULT': 'Hello"world!',
            'BOUNDED_STRING_VALUE_DEFAULT4__DEFAULT': "Hello'world!",
            'BOUNDED_STRING_VALUE_DEFAULT5__DEFAULT': 'Hello"world!',
        }

    @property
    def STRING_CONST(self):
        """Message constant 'STRING_CONST'."""
        return Metaclass_Strings.__constants['STRING_CONST']

    @property
    def STRING_VALUE_DEFAULT1__DEFAULT(cls):
        """Return default value for message field 'string_value_default1'."""
        return 'Hello world!'

    @property
    def STRING_VALUE_DEFAULT2__DEFAULT(cls):
        """Return default value for message field 'string_value_default2'."""
        return "Hello'world!"

    @property
    def STRING_VALUE_DEFAULT3__DEFAULT(cls):
        """Return default value for message field 'string_value_default3'."""
        return 'Hello"world!'

    @property
    def STRING_VALUE_DEFAULT4__DEFAULT(cls):
        """Return default value for message field 'string_value_default4'."""
        return "Hello'world!"

    @property
    def STRING_VALUE_DEFAULT5__DEFAULT(cls):
        """Return default value for message field 'string_value_default5'."""
        return 'Hello"world!'

    @property
    def BOUNDED_STRING_VALUE_DEFAULT1__DEFAULT(cls):
        """Return default value for message field 'bounded_string_value_default1'."""
        return 'Hello world!'

    @property
    def BOUNDED_STRING_VALUE_DEFAULT2__DEFAULT(cls):
        """Return default value for message field 'bounded_string_value_default2'."""
        return "Hello'world!"

    @property
    def BOUNDED_STRING_VALUE_DEFAULT3__DEFAULT(cls):
        """Return default value for message field 'bounded_string_value_default3'."""
        return 'Hello"world!'

    @property
    def BOUNDED_STRING_VALUE_DEFAULT4__DEFAULT(cls):
        """Return default value for message field 'bounded_string_value_default4'."""
        return "Hello'world!"

    @property
    def BOUNDED_STRING_VALUE_DEFAULT5__DEFAULT(cls):
        """Return default value for message field 'bounded_string_value_default5'."""
        return 'Hello"world!'


class Strings(metaclass=Metaclass_Strings):
    """
    Message class 'Strings'.

    Constants:
      STRING_CONST
    """

    __slots__ = [
        '_string_value',
        '_string_value_default1',
        '_string_value_default2',
        '_string_value_default3',
        '_string_value_default4',
        '_string_value_default5',
        '_bounded_string_value',
        '_bounded_string_value_default1',
        '_bounded_string_value_default2',
        '_bounded_string_value_default3',
        '_bounded_string_value_default4',
        '_bounded_string_value_default5',
    ]

    _fields_and_field_types = {
        'string_value': 'string',
        'string_value_default1': 'string',
        'string_value_default2': 'string',
        'string_value_default3': 'string',
        'string_value_default4': 'string',
        'string_value_default5': 'string',
        'bounded_string_value': 'string<22>',
        'bounded_string_value_default1': 'string<22>',
        'bounded_string_value_default2': 'string<22>',
        'bounded_string_value_default3': 'string<22>',
        'bounded_string_value_default4': 'string<22>',
        'bounded_string_value_default5': 'string<22>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BoundedString(22),  # noqa: E501
        rosidl_parser.definition.BoundedString(22),  # noqa: E501
        rosidl_parser.definition.BoundedString(22),  # noqa: E501
        rosidl_parser.definition.BoundedString(22),  # noqa: E501
        rosidl_parser.definition.BoundedString(22),  # noqa: E501
        rosidl_parser.definition.BoundedString(22),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.string_value = kwargs.get('string_value', str())
        self.string_value_default1 = kwargs.get(
            'string_value_default1', Strings.STRING_VALUE_DEFAULT1__DEFAULT)
        self.string_value_default2 = kwargs.get(
            'string_value_default2', Strings.STRING_VALUE_DEFAULT2__DEFAULT)
        self.string_value_default3 = kwargs.get(
            'string_value_default3', Strings.STRING_VALUE_DEFAULT3__DEFAULT)
        self.string_value_default4 = kwargs.get(
            'string_value_default4', Strings.STRING_VALUE_DEFAULT4__DEFAULT)
        self.string_value_default5 = kwargs.get(
            'string_value_default5', Strings.STRING_VALUE_DEFAULT5__DEFAULT)
        self.bounded_string_value = kwargs.get('bounded_string_value', str())
        self.bounded_string_value_default1 = kwargs.get(
            'bounded_string_value_default1', Strings.BOUNDED_STRING_VALUE_DEFAULT1__DEFAULT)
        self.bounded_string_value_default2 = kwargs.get(
            'bounded_string_value_default2', Strings.BOUNDED_STRING_VALUE_DEFAULT2__DEFAULT)
        self.bounded_string_value_default3 = kwargs.get(
            'bounded_string_value_default3', Strings.BOUNDED_STRING_VALUE_DEFAULT3__DEFAULT)
        self.bounded_string_value_default4 = kwargs.get(
            'bounded_string_value_default4', Strings.BOUNDED_STRING_VALUE_DEFAULT4__DEFAULT)
        self.bounded_string_value_default5 = kwargs.get(
            'bounded_string_value_default5', Strings.BOUNDED_STRING_VALUE_DEFAULT5__DEFAULT)

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
        if self.string_value != other.string_value:
            return False
        if self.string_value_default1 != other.string_value_default1:
            return False
        if self.string_value_default2 != other.string_value_default2:
            return False
        if self.string_value_default3 != other.string_value_default3:
            return False
        if self.string_value_default4 != other.string_value_default4:
            return False
        if self.string_value_default5 != other.string_value_default5:
            return False
        if self.bounded_string_value != other.bounded_string_value:
            return False
        if self.bounded_string_value_default1 != other.bounded_string_value_default1:
            return False
        if self.bounded_string_value_default2 != other.bounded_string_value_default2:
            return False
        if self.bounded_string_value_default3 != other.bounded_string_value_default3:
            return False
        if self.bounded_string_value_default4 != other.bounded_string_value_default4:
            return False
        if self.bounded_string_value_default5 != other.bounded_string_value_default5:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def string_value(self):
        """Message field 'string_value'."""
        return self._string_value

    @string_value.setter
    def string_value(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'string_value' field must be of type 'str'"
        self._string_value = value

    @builtins.property
    def string_value_default1(self):
        """Message field 'string_value_default1'."""
        return self._string_value_default1

    @string_value_default1.setter
    def string_value_default1(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'string_value_default1' field must be of type 'str'"
        self._string_value_default1 = value

    @builtins.property
    def string_value_default2(self):
        """Message field 'string_value_default2'."""
        return self._string_value_default2

    @string_value_default2.setter
    def string_value_default2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'string_value_default2' field must be of type 'str'"
        self._string_value_default2 = value

    @builtins.property
    def string_value_default3(self):
        """Message field 'string_value_default3'."""
        return self._string_value_default3

    @string_value_default3.setter
    def string_value_default3(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'string_value_default3' field must be of type 'str'"
        self._string_value_default3 = value

    @builtins.property
    def string_value_default4(self):
        """Message field 'string_value_default4'."""
        return self._string_value_default4

    @string_value_default4.setter
    def string_value_default4(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'string_value_default4' field must be of type 'str'"
        self._string_value_default4 = value

    @builtins.property
    def string_value_default5(self):
        """Message field 'string_value_default5'."""
        return self._string_value_default5

    @string_value_default5.setter
    def string_value_default5(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'string_value_default5' field must be of type 'str'"
        self._string_value_default5 = value

    @builtins.property
    def bounded_string_value(self):
        """Message field 'bounded_string_value'."""
        return self._bounded_string_value

    @bounded_string_value.setter
    def bounded_string_value(self, value):
        if __debug__:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 22), \
                "The 'bounded_string_value' field must be string value " \
                'not longer than 22'
        self._bounded_string_value = value

    @builtins.property
    def bounded_string_value_default1(self):
        """Message field 'bounded_string_value_default1'."""
        return self._bounded_string_value_default1

    @bounded_string_value_default1.setter
    def bounded_string_value_default1(self, value):
        if __debug__:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 22), \
                "The 'bounded_string_value_default1' field must be string value " \
                'not longer than 22'
        self._bounded_string_value_default1 = value

    @builtins.property
    def bounded_string_value_default2(self):
        """Message field 'bounded_string_value_default2'."""
        return self._bounded_string_value_default2

    @bounded_string_value_default2.setter
    def bounded_string_value_default2(self, value):
        if __debug__:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 22), \
                "The 'bounded_string_value_default2' field must be string value " \
                'not longer than 22'
        self._bounded_string_value_default2 = value

    @builtins.property
    def bounded_string_value_default3(self):
        """Message field 'bounded_string_value_default3'."""
        return self._bounded_string_value_default3

    @bounded_string_value_default3.setter
    def bounded_string_value_default3(self, value):
        if __debug__:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 22), \
                "The 'bounded_string_value_default3' field must be string value " \
                'not longer than 22'
        self._bounded_string_value_default3 = value

    @builtins.property
    def bounded_string_value_default4(self):
        """Message field 'bounded_string_value_default4'."""
        return self._bounded_string_value_default4

    @bounded_string_value_default4.setter
    def bounded_string_value_default4(self, value):
        if __debug__:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 22), \
                "The 'bounded_string_value_default4' field must be string value " \
                'not longer than 22'
        self._bounded_string_value_default4 = value

    @builtins.property
    def bounded_string_value_default5(self):
        """Message field 'bounded_string_value_default5'."""
        return self._bounded_string_value_default5

    @bounded_string_value_default5.setter
    def bounded_string_value_default5(self, value):
        if __debug__:
            from collections import UserString
            assert \
                (isinstance(value, (str, UserString)) and
                 len(value) <= 22), \
                "The 'bounded_string_value_default5' field must be string value " \
                'not longer than 22'
        self._bounded_string_value_default5 = value
