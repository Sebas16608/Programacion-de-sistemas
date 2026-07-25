cmake_minimum_required(VERSION 3.16)

project(sistema_de_calificaciones)

set(CMAKE_CXX_STANDARD 17)

add_executable(sistema_de_calificaciones
  src/main.cpp
  src/estadisticas.cpp
  src/alumnos.cpp
)
