#pragma once
#include <filesystem>
#include <string>
#include <system_error>

class Carpeta{
    public:
        Carpeta();
        bool crear_carpeta() const;
        std::string obtener_carpeta() const;

    private:
        std::string nombre_carpeta;
};