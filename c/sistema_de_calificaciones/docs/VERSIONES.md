---

# Proyecto v0.1

Esta es la primera versión del proyecto. Aunque todavía es pequeña, representa un gran avance para mí porque ya comencé a definir la estructura que seguirá el sistema.

En esta versión comprendí mejor cómo utilizar los ciclos `for` junto con arreglos (`arrays`) para almacenar la información ingresada por el usuario, como nombres y calificaciones, en lugar de depender de muchas variables individuales.

---

# Proyecto v0.1.1

En esta versión comencé a separar la lógica en funciones para mantener el código más organizado y facilitar su mantenimiento.

Mi siguiente paso será dividir el proyecto en varios archivos (`.c` y `.h`), ya que considero que tener todas las funciones en un solo archivo no es una buena práctica cuando el proyecto empieza a crecer.

Aunque el avance todavía es pequeño, siento que estoy aprendiendo mucho sobre C y la forma de estructurar programas de una manera más limpia.

----

# Proyecto v0.1.2

En esta versión reestructuré el proyecto para seguir una organización más profesional:

- **CMake**: Se agregó un `CMakeLists.txt` para compilar el proyecto con CMake, permitiendo una gestión más robusta del proceso de compilación.
- **Carpeta `src/`**: Todos los archivos fuente (`.c` y `.h`) se movieron a una carpeta `src/` separada del directorio raíz, siguiendo la convención estándar de proyectos en C.
- **Módulos**: Se consolidaron los módulos `alumnos`, `estadisticas` y `entradas` dentro de `src/`.

Esta reorganización facilita el mantenimiento y la escalabilidad del proyecto a medida que se agreguen más funcionalidades.

---

# Proyecto v0.2

En esta versión completé la migración de C++ a C puro:

- **Directorio `cpp/` → `c/`**: Todo el proyecto fue reubicado para reflejar el cambio de lenguaje.
- **Archivos `.cpp` → `.c`**: Se crearon `main.c`, `estadisticas.c` y `alumnos.c`.
- **Headers actualizados**: `estadisticas.h` ahora usa include guards (`#ifndef`/`#define`/`#endif`) y la función `determinarPromedio` fue migrada a C con parámetros `float nota[]` e `int num`.
- **CMakeLists.txt**: Configurado para compilar archivos `.c` con el estándar C11.
- **`alumnos.c`**: Nuevo módulo que encapsula la carga de datos de estudiantes usando `printf`/`scanf`.

---

# Proyecto v0.2.1

Limpieza de archivos obsoletos y mejora en la organización del repositorio:

- **Eliminación de `main.cpp`**: Se borró el archivo `main.cpp` ya que el proyecto fue migrado completamente a C.
- **Eliminación de `entradas.h`**: Se removió este header que ya no formaba parte del proyecto.
- **`.gitignore` raíz**: Se agregó un archivo `.gitignore` en la raíz del repositorio para excluir archivos compilados, directorios de build (`build/`, `.cache/`), archivos temporales y configuraciones de IDEs.
- **Documentación actualizada**: Se corrigió la estructura del proyecto en el README eliminando referencias a archivos que ya no existen.
