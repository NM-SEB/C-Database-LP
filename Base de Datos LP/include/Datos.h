#pragma once
#include <string>

class Datos{
    private:
        std::string nombre;

    public:
        Datos();
        void nuevo();
        void consultar();
        void eliminar();
        void modificar();
        bool verificar(std::string& n);
};
