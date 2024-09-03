# generated from rosidl_generator_py/resource/_idl.py.em
# with input from diagnostic_msgs:srv/SelfTest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SelfTest_Request(type):
    """Metaclass of message 'SelfTest_Request'."""

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
            module = import_type_support('diagnostic_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'diagnostic_msgs.srv.SelfTest_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__self_test__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__self_test__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__self_test__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__self_test__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__self_test__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SelfTest_Request(metaclass=Metaclass_SelfTest_Request):
    """Message class 'SelfTest_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_SelfTest_Response(type):
    """Metaclass of message 'SelfTest_Response'."""

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
            module = import_type_support('diagnostic_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'diagnostic_msgs.srv.SelfTest_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__self_test__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__self_test__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__self_test__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__self_test__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__self_test__response

            from diagnostic_msgs.msg import DiagnosticStatus
            if DiagnosticStatus.__class__._TYPE_SUPPORT is None:
                DiagnosticStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SelfTest_Response(metaclass=Metaclass_SelfTest_Response):
    """Message class 'SelfTest_Response'."""

    __slots__ = [
        '_id',
        '_passed',
        '_status',
    ]

    _fields_and_field_types = {
        'id': 'string',
        'passed': 'octet',
        'status': 'sequence<diagnostic_msgs/DiagnosticStatus>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('octet'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['diagnostic_msgs', 'msg'], 'DiagnosticStatus')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', str())
        self.passed = kwargs.get('passed', bytes([0]))
        self.status = kwargs.get('status', [])

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
        if self.passed != other.passed:
            return False
        if self.status != other.status:
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
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def passed(self):
        """Message field 'passed'."""
        return self._passed

    @passed.setter
    def passed(self, value):
        if __debug__:
            from collections.abc import ByteString
            assert \
                (isinstance(value, (bytes, ByteString)) and
                 len(value) == 1), \
                "The 'passed' field must be of type 'bytes' or 'ByteString' with length 1"
        self._passed = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from diagnostic_msgs.msg import DiagnosticStatus
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
                 all(isinstance(v, DiagnosticStatus) for v in value) and
                 True), \
                "The 'status' field must be a set or sequence and each value of type 'DiagnosticStatus'"
        self._status = value


class Metaclass_SelfTest(type):
    """Metaclass of service 'SelfTest'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('diagnostic_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'diagnostic_msgs.srv.SelfTest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__self_test

            from diagnostic_msgs.srv import _self_test
            if _self_test.Metaclass_SelfTest_Request._TYPE_SUPPORT is None:
                _self_test.Metaclass_SelfTest_Request.__import_type_support__()
            if _self_test.Metaclass_SelfTest_Response._TYPE_SUPPORT is None:
                _self_test.Metaclass_SelfTest_Response.__import_type_support__()


class SelfTest(metaclass=Metaclass_SelfTest):
    from diagnostic_msgs.srv._self_test import SelfTest_Request as Request
    from diagnostic_msgs.srv._self_test import SelfTest_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
