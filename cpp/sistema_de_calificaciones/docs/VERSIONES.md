# Proyecto v0.1

Esta es la primera versión del proyecto. Aunque todavía es pequeña, representa un gran avance para mí porque ya comencé a definir la estructura que seguirá el sistema.

En esta versión comprendí mejor cómo utilizar los ciclos `for` junto con arreglos (`arrays`) para almacenar la información ingresada por el usuario, como nombres y calificaciones, en lugar de depender de muchas variables individuales.

---

# Proyecto v0.1.1

En esta versión comencé a separar la lógica en funciones para mantener el código más organizado y facilitar su mantenimiento.

Mi siguiente paso será dividir el proyecto en varios archivos (`.cpp` y `.h`), ya que considero que tener todas las funciones en un solo archivo no es una buena práctica cuando el proyecto empieza a crecer.

Aunque el avance todavía es pequeño, siento que estoy aprendiendo mucho sobre C++ y la forma de estructurar programas de una manera más limpia.

----

# Proyecto v0.1.2

En esta versión reestructuré el proyecto para seguir una organización más profesional:

- **CMake**: Se agregó un `CMakeLists.txt` para compilar el proyecto con CMake, permitiendo una gestión más robusta del proceso de compilación.
- **Carpeta `src/`**: Todos los archivos fuente (`.cpp` y `.h`) se movieron a una carpeta `src/` separada del directorio raíz, siguiendo la convención estándar de proyectos en C++.
- **Módulos**: Se consolidaron los módulos `alumnos`, `estadisticas` y `entradas` dentro de `src/`.

Esta reorganización facilita el mantenimiento y la escalabilidad del proyecto a medida que se agreguen más funcionalidades.
