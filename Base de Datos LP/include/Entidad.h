#pragma once
#include <string>

class Entidad{
    private:
        std::string arch;
        std::string nombre;
        long cab;
        long data;
        long atr;

    public:
        Entidad(std::string arch);
        bool verificar(std::string& n);
        bool agregar();
        void consultar();
        bool eliminar();
        bool modificar();
        
};