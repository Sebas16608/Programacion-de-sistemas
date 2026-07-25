cmake_minimum_required(VERSION 3.16)

project(sistema_de_calificaciones C)

set(CMAKE_C_STANDARD 11)

add_executable(sistema_de_calificaciones
  src/main.c
  src/estadisticas.c
  src/alumnos.c
)
