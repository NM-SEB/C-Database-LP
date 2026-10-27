#pragma once
#include <filesystem>
#include <string>

class carpeta{
    public:
        carpeta();
        bool crear_carpeta() const;
        std::string obtener_carpeta() const;

    private:
        std::string nombre_carpeta;
};