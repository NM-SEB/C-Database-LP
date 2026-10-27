#pragma once
#include <string>

class Persona {
    private:
        std::string nombre;
        int edad;

    public:
        Persona(std::string nombre, int edad);
        std::string getNombre();
        int getEdad();

        void setNombre(std::string nombre);
        void setEdad(int edad);
        void saludar();
};