cmake_minimum_required(VERSION 3.10)
project("Base de Datos LP")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(programa
    src/main.cpp
    src/carpeta.cpp
    src/diccionario.cpp
    src/entidad.cpp
    src/atributos.cpp
    src/datos.cpp
)

target_include_directories(programa PRIVATE include)