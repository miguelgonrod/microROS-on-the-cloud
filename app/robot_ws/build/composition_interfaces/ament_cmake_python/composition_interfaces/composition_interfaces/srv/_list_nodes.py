# generated from rosidl_generator_py/resource/_idl.py.em
# with input from composition_interfaces:srv/ListNodes.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ListNodes_Request(type):
    """Metaclass of message 'ListNodes_Request'."""

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
            module = import_type_support('composition_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'composition_interfaces.srv.ListNodes_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__list_nodes__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__list_nodes__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__list_nodes__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__list_nodes__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__list_nodes__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ListNodes_Request(metaclass=Metaclass_ListNodes_Request):
    """Message class 'ListNodes_Request'."""

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

# Member 'unique_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_ListNodes_Response(type):
    """Metaclass of message 'ListNodes_Response'."""

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
            module = import_type_support('composition_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'composition_interfaces.srv.ListNodes_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__list_nodes__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__list_nodes__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__list_nodes__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__list_nodes__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__list_nodes__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ListNodes_Response(metaclass=Metaclass_ListNodes_Response):
    """Message class 'ListNodes_Response'."""

    __slots__ = [
        '_full_node_names',
        '_unique_ids',
    ]

    _fields_and_field_types = {
        'full_node_names': 'sequence<string>',
        'unique_ids': 'sequence<uint64>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.full_node_names = kwargs.get('full_node_names', [])
        self.unique_ids = array.array('Q', kwargs.get('unique_ids', []))

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
        if self.full_node_names != other.full_node_names:
            return False
        if self.unique_ids != other.unique_ids:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def full_node_names(self):
        """Message field 'full_node_names'."""
        return self._full_node_names

    @full_node_names.setter
    def full_node_names(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'full_node_names' field must be a set or sequence and each value of type 'str'"
        self._full_node_names = value

    @builtins.property
    def unique_ids(self):
        """Message field 'unique_ids'."""
        return self._unique_ids

    @unique_ids.setter
    def unique_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'unique_ids' array.array() must have the type code of 'Q'"
            self._unique_ids = value
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
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'unique_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._unique_ids = array.array('Q', value)


class Metaclass_ListNodes(type):
    """Metaclass of service 'ListNodes'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('composition_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'composition_interfaces.srv.ListNodes')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__list_nodes

            from composition_interfaces.srv import _list_nodes
            if _list_nodes.Metaclass_ListNodes_Request._TYPE_SUPPORT is None:
                _list_nodes.Metaclass_ListNodes_Request.__import_type_support__()
            if _list_nodes.Metaclass_ListNodes_Response._TYPE_SUPPORT is None:
                _list_nodes.Metaclass_ListNodes_Response.__import_type_support__()


class ListNodes(metaclass=Metaclass_ListNodes):
    from composition_interfaces.srv._list_nodes import ListNodes_Request as Request
    from composition_interfaces.srv._list_nodes import ListNodes_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
