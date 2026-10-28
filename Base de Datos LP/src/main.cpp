#include "Carpeta.h"
#include <iostream>

int main(){
    Carpeta diccionarios;

    try {
        diccionarios.crear_carpeta();
        diccionarios.obtener_carpeta();
    } catch (const std::filesystem::filesystem_error& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }

    return 0;
}