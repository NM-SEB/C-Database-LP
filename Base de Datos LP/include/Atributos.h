#pragma once
#include <string>

class Atributos{
    private:
        std::string nombre;

    public:
        Atributos();
        bool nuevo();
        void consultar();
        bool eliminar();
        bool modificar();

};