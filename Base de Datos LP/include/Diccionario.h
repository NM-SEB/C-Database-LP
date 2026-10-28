#pragma once
#include <string>
#include <filesystem>

class Diccionario{
    private:
        std::string dir;
        std::string nombre;
    public:
        Diccionario(const std::string& dir);
        void crear(std::string& n);
        bool verificar(std::string& n);
        void abrir(std::string &n);
};