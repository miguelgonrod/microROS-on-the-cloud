# generated from rosidl_generator_py/resource/_idl.py.em
# with input from visualization_msgs:msg/Marker.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Marker(type):
    """Metaclass of message 'Marker'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ARROW': 0,
        'CUBE': 1,
        'SPHERE': 2,
        'CYLINDER': 3,
        'LINE_STRIP': 4,
        'LINE_LIST': 5,
        'CUBE_LIST': 6,
        'SPHERE_LIST': 7,
        'POINTS': 8,
        'TEXT_VIEW_FACING': 9,
        'MESH_RESOURCE': 10,
        'TRIANGLE_LIST': 11,
        'ADD': 0,
        'MODIFY': 0,
        'DELETE': 2,
        'DELETEALL': 3,
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
                'visualization_msgs.msg.Marker')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__marker
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__marker
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__marker
            cls._TYPE_SUPPORT = module.type_support_msg__msg__marker
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__marker

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from sensor_msgs.msg import CompressedImage
            if CompressedImage.__class__._TYPE_SUPPORT is None:
                CompressedImage.__class__.__import_type_support__()

            from std_msgs.msg import ColorRGBA
            if ColorRGBA.__class__._TYPE_SUPPORT is None:
                ColorRGBA.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from visualization_msgs.msg import MeshFile
            if MeshFile.__class__._TYPE_SUPPORT is None:
                MeshFile.__class__.__import_type_support__()

            from visualization_msgs.msg import UVCoordinate
            if UVCoordinate.__class__._TYPE_SUPPORT is None:
                UVCoordinate.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ARROW': cls.__constants['ARROW'],
            'CUBE': cls.__constants['CUBE'],
            'SPHERE': cls.__constants['SPHERE'],
            'CYLINDER': cls.__constants['CYLINDER'],
            'LINE_STRIP': cls.__constants['LINE_STRIP'],
            'LINE_LIST': cls.__constants['LINE_LIST'],
            'CUBE_LIST': cls.__constants['CUBE_LIST'],
            'SPHERE_LIST': cls.__constants['SPHERE_LIST'],
            'POINTS': cls.__constants['POINTS'],
            'TEXT_VIEW_FACING': cls.__constants['TEXT_VIEW_FACING'],
            'MESH_RESOURCE': cls.__constants['MESH_RESOURCE'],
            'TRIANGLE_LIST': cls.__constants['TRIANGLE_LIST'],
            'ADD': cls.__constants['ADD'],
            'MODIFY': cls.__constants['MODIFY'],
            'DELETE': cls.__constants['DELETE'],
            'DELETEALL': cls.__constants['DELETEALL'],
        }

    @property
    def ARROW(self):
        """Message constant 'ARROW'."""
        return Metaclass_Marker.__constants['ARROW']

    @property
    def CUBE(self):
        """Message constant 'CUBE'."""
        return Metaclass_Marker.__constants['CUBE']

    @property
    def SPHERE(self):
        """Message constant 'SPHERE'."""
        return Metaclass_Marker.__constants['SPHERE']

    @property
    def CYLINDER(self):
        """Message constant 'CYLINDER'."""
        return Metaclass_Marker.__constants['CYLINDER']

    @property
    def LINE_STRIP(self):
        """Message constant 'LINE_STRIP'."""
        return Metaclass_Marker.__constants['LINE_STRIP']

    @property
    def LINE_LIST(self):
        """Message constant 'LINE_LIST'."""
        return Metaclass_Marker.__constants['LINE_LIST']

    @property
    def CUBE_LIST(self):
        """Message constant 'CUBE_LIST'."""
        return Metaclass_Marker.__constants['CUBE_LIST']

    @property
    def SPHERE_LIST(self):
        """Message constant 'SPHERE_LIST'."""
        return Metaclass_Marker.__constants['SPHERE_LIST']

    @property
    def POINTS(self):
        """Message constant 'POINTS'."""
        return Metaclass_Marker.__constants['POINTS']

    @property
    def TEXT_VIEW_FACING(self):
        """Message constant 'TEXT_VIEW_FACING'."""
        return Metaclass_Marker.__constants['TEXT_VIEW_FACING']

    @property
    def MESH_RESOURCE(self):
        """Message constant 'MESH_RESOURCE'."""
        return Metaclass_Marker.__constants['MESH_RESOURCE']

    @property
    def TRIANGLE_LIST(self):
        """Message constant 'TRIANGLE_LIST'."""
        return Metaclass_Marker.__constants['TRIANGLE_LIST']

    @property
    def ADD(self):
        """Message constant 'ADD'."""
        return Metaclass_Marker.__constants['ADD']

    @property
    def MODIFY(self):
        """Message constant 'MODIFY'."""
        return Metaclass_Marker.__constants['MODIFY']

    @property
    def DELETE(self):
        """Message constant 'DELETE'."""
        return Metaclass_Marker.__constants['DELETE']

    @property
    def DELETEALL(self):
        """Message constant 'DELETEALL'."""
        return Metaclass_Marker.__constants['DELETEALL']


class Marker(metaclass=Metaclass_Marker):
    """
    Message class 'Marker'.

    Constants:
      ARROW
      CUBE
      SPHERE
      CYLINDER
      LINE_STRIP
      LINE_LIST
      CUBE_LIST
      SPHERE_LIST
      POINTS
      TEXT_VIEW_FACING
      MESH_RESOURCE
      TRIANGLE_LIST
      ADD
      MODIFY
      DELETE
      DELETEALL
    """

    __slots__ = [
        '_header',
        '_ns',
        '_id',
        '_type',
        '_action',
        '_pose',
        '_scale',
        '_color',
        '_lifetime',
        '_frame_locked',
        '_points',
        '_colors',
        '_texture_resource',
        '_texture',
        '_uv_coordinates',
        '_text',
        '_mesh_resource',
        '_mesh_file',
        '_mesh_use_embedded_materials',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'ns': 'string',
        'id': 'int32',
        'type': 'int32',
        'action': 'int32',
        'pose': 'geometry_msgs/Pose',
        'scale': 'geometry_msgs/Vector3',
        'color': 'std_msgs/ColorRGBA',
        'lifetime': 'builtin_interfaces/Duration',
        'frame_locked': 'boolean',
        'points': 'sequence<geometry_msgs/Point>',
        'colors': 'sequence<std_msgs/ColorRGBA>',
        'texture_resource': 'string',
        'texture': 'sensor_msgs/CompressedImage',
        'uv_coordinates': 'sequence<visualization_msgs/UVCoordinate>',
        'text': 'string',
        'mesh_resource': 'string',
        'mesh_file': 'visualization_msgs/MeshFile',
        'mesh_use_embedded_materials': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'CompressedImage'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['visualization_msgs', 'msg'], 'UVCoordinate')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['visualization_msgs', 'msg'], 'MeshFile'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.ns = kwargs.get('ns', str())
        self.id = kwargs.get('id', int())
        self.type = kwargs.get('type', int())
        self.action = kwargs.get('action', int())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from geometry_msgs.msg import Vector3
        self.scale = kwargs.get('scale', Vector3())
        from std_msgs.msg import ColorRGBA
        self.color = kwargs.get('color', ColorRGBA())
        from builtin_interfaces.msg import Duration
        self.lifetime = kwargs.get('lifetime', Duration())
        self.frame_locked = kwargs.get('frame_locked', bool())
        self.points = kwargs.get('points', [])
        self.colors = kwargs.get('colors', [])
        self.texture_resource = kwargs.get('texture_resource', str())
        from sensor_msgs.msg import CompressedImage
        self.texture = kwargs.get('texture', CompressedImage())
        self.uv_coordinates = kwargs.get('uv_coordinates', [])
        self.text = kwargs.get('text', str())
        self.mesh_resource = kwargs.get('mesh_resource', str())
        from visualization_msgs.msg import MeshFile
        self.mesh_file = kwargs.get('mesh_file', MeshFile())
        self.mesh_use_embedded_materials = kwargs.get('mesh_use_embedded_materials', bool())

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
        if self.ns != other.ns:
            return False
        if self.id != other.id:
            return False
        if self.type != other.type:
            return False
        if self.action != other.action:
            return False
        if self.pose != other.pose:
            return False
        if self.scale != other.scale:
            return False
        if self.color != other.color:
            return False
        if self.lifetime != other.lifetime:
            return False
        if self.frame_locked != other.frame_locked:
            return False
        if self.points != other.points:
            return False
        if self.colors != other.colors:
            return False
        if self.texture_resource != other.texture_resource:
            return False
        if self.texture != other.texture:
            return False
        if self.uv_coordinates != other.uv_coordinates:
            return False
        if self.text != other.text:
            return False
        if self.mesh_resource != other.mesh_resource:
            return False
        if self.mesh_file != other.mesh_file:
            return False
        if self.mesh_use_embedded_materials != other.mesh_use_embedded_materials:
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
    def ns(self):
        """Message field 'ns'."""
        return self._ns

    @ns.setter
    def ns(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ns' field must be of type 'str'"
        self._ns = value

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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'type' field must be an integer in [-2147483648, 2147483647]"
        self._type = value

    @builtins.property
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'action' field must be an integer in [-2147483648, 2147483647]"
        self._action = value

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
    def scale(self):
        """Message field 'scale'."""
        return self._scale

    @scale.setter
    def scale(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'scale' field must be a sub message of type 'Vector3'"
        self._scale = value

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
            assert \
                isinstance(value, ColorRGBA), \
                "The 'color' field must be a sub message of type 'ColorRGBA'"
        self._color = value

    @builtins.property
    def lifetime(self):
        """Message field 'lifetime'."""
        return self._lifetime

    @lifetime.setter
    def lifetime(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'lifetime' field must be a sub message of type 'Duration'"
        self._lifetime = value

    @builtins.property
    def frame_locked(self):
        """Message field 'frame_locked'."""
        return self._frame_locked

    @frame_locked.setter
    def frame_locked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'frame_locked' field must be of type 'bool'"
        self._frame_locked = value

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'points' field must be a set or sequence and each value of type 'Point'"
        self._points = value

    @builtins.property
    def colors(self):
        """Message field 'colors'."""
        return self._colors

    @colors.setter
    def colors(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
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
                 all(isinstance(v, ColorRGBA) for v in value) and
                 True), \
                "The 'colors' field must be a set or sequence and each value of type 'ColorRGBA'"
        self._colors = value

    @builtins.property
    def texture_resource(self):
        """Message field 'texture_resource'."""
        return self._texture_resource

    @texture_resource.setter
    def texture_resource(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'texture_resource' field must be of type 'str'"
        self._texture_resource = value

    @builtins.property
    def texture(self):
        """Message field 'texture'."""
        return self._texture

    @texture.setter
    def texture(self, value):
        if __debug__:
            from sensor_msgs.msg import CompressedImage
            assert \
                isinstance(value, CompressedImage), \
                "The 'texture' field must be a sub message of type 'CompressedImage'"
        self._texture = value

    @builtins.property
    def uv_coordinates(self):
        """Message field 'uv_coordinates'."""
        return self._uv_coordinates

    @uv_coordinates.setter
    def uv_coordinates(self, value):
        if __debug__:
            from visualization_msgs.msg import UVCoordinate
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
                 all(isinstance(v, UVCoordinate) for v in value) and
                 True), \
                "The 'uv_coordinates' field must be a set or sequence and each value of type 'UVCoordinate'"
        self._uv_coordinates = value

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

    @builtins.property
    def mesh_resource(self):
        """Message field 'mesh_resource'."""
        return self._mesh_resource

    @mesh_resource.setter
    def mesh_resource(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mesh_resource' field must be of type 'str'"
        self._mesh_resource = value

    @builtins.property
    def mesh_file(self):
        """Message field 'mesh_file'."""
        return self._mesh_file

    @mesh_file.setter
    def mesh_file(self, value):
        if __debug__:
            from visualization_msgs.msg import MeshFile
            assert \
                isinstance(value, MeshFile), \
                "The 'mesh_file' field must be a sub message of type 'MeshFile'"
        self._mesh_file = value

    @builtins.property
    def mesh_use_embedded_materials(self):
        """Message field 'mesh_use_embedded_materials'."""
        return self._mesh_use_embedded_materials

    @mesh_use_embedded_materials.setter
    def mesh_use_embedded_materials(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mesh_use_embedded_materials' field must be of type 'bool'"
        self._mesh_use_embedded_materials = value
