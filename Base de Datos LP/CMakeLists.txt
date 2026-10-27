cmake_minimum_required(VERSION 3.10)
project("Base de Datos LP")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(programa
    src/main.cpp
    src/persona.cpp
    src/entidad.cpp
    src/menuInicio.cpp
    src/menuNuevoDiccionario.cpp
    src/menuEntidades.cpp
    src/menuAtributos.cpp
    src/menuDatos.cpp
)

target_include_directories(programa PRIVATE include)