#pragma once
#include <string>

class Entidad{
    private:
        std::string nombre;
        long cab;
        long data;
        long atr;

    public:
        Entidad();
        bool agregar();
        void consultar();
        bool eliminar();
        bool modificar();
        
};