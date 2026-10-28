#include "Carpeta.h"

Carpeta::Carpeta() : nombre_carpeta("Diccionarios") {}

bool Carpeta::crear_carpeta() const {
    std::error_code error;
    const bool creada = std::filesystem::create_directories(nombre_carpeta, error);

    if (error) {
        throw std::filesystem::filesystem_error("No se pudo crear la carpeta de diccionarios", nombre_carpeta, error);
    }

    return creada;
}

std::string Carpeta::obtener_carpeta() const {
    return nombre_carpeta;
}