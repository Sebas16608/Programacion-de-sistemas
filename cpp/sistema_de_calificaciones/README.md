# Proyecto 1 – Sistema de Registro de Calificaciones (C)

## Objetivo: desarrollar un programa en C para registrar y analizar las calificaciones de 10
estudiantes usando únicamente conceptos básicos.

### Requisitos
- Solicitar nombre y nota (0-100) de 10 estudiantes.
- Guardar la información.
- Mostrar un reporte con todos los estudiantes y sus notas.

### Estadísticas
- Promedio.
- Mayor nota y estudiante.
- Menor nota y estudiante.
- Cantidad de aprobados (>=61).
- Cantidad de reprobados.

### Restricciones
No usar punteros a funciones, `malloc`/`free` dinámico, `struct` con punteros complejos, ni librerías externas.
Sí podés usar
`stdio.h`, `stdlib.h`, `string.h`, variables, arreglos, funciones, `if`, `switch`, `for`, `while` y `do-while`.

### Bonus
1. Validar notas entre 0 y 100.
2. Agregar menú.
3. Buscar estudiante por nombre.
4. (Opcional) Editar la nota de un estudiante.

---

## Estructura del proyecto

```
sistema_de_calificaciones/
├── CMakeLists.txt
├── README.md
├── docs/
│   └── VERSIONES.md
└── src/
    ├── main.c
    ├── alumnos.c
    ├── alumnos.h
    ├── estadisticas.c
    ├── estadisticas.h
    └── entradas.h
```

## Compilación

```bash
mkdir build && cd build
cmake ..
make
./sistema_de_calificaciones
```
