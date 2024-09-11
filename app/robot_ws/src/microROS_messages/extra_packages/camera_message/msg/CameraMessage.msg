# MyCompressedImage.msg
std_msgs/Header header  # Cabecera estándar
uint32 width            # Ancho de la imagen
uint32 height           # Altura de la imagen
string encoding         # Codificación de la imagen (ej: "jpeg")
uint8[] data            # Datos comprimidos de la imagen
