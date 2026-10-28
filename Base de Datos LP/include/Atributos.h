#pragma once
#include <string>

class Atributos{
    private:
        std::string nombre;

    public:
        Atributos();
        void nuevo();
        void consultar();
        void eliminar();
        void modificar();
        bool verificar(std::string& n);
};