#include <carpeta.h>
#include <system_error>

carpeta::carpeta() : nombre_carpeta("Diccionarios") {}

bool carpeta::crear_carpeta() const {
    std::error_code error;
    const bool creada = std::filesystem::create_directories(nombre_carpeta, error);

    if (error) {
        throw std::filesystem::filesystem_error("No se pudo crear la carpeta de diccionarios", nombre_carpeta, error);
    }

    return creada;
}

std::string carpeta::obtener_carpeta() const {
    return nombre_carpeta;
}