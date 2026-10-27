#pragma once
#include <string>
#include <filesystem>

class diccionario{
    public:
        diccionario(const std::string& dir);
        bool crear_diccionario() const;
        bool verificar_diccionario(std::string& n) const;
        
        void menu_entidad();
};