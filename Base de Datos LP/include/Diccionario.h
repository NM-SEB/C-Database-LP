#pragma once
#include <string>
#include <filesystem>

class Diccionario{
    private:
        std::string dir;
    public:
        Diccionario(const std::string& dir);
        bool crear_diccionario() const;
        bool verificar_diccionario(std::string& n) const;
};