#include "Carpeta.h"
#include "Diccionario.h"
#include <iostream>

int main(){
    Carpeta diccionarios;

    try {
        diccionarios.crear_carpeta();
        Diccionario diccionario(diccionarios.obtener_carpeta());
    } catch (const std::filesystem::filesystem_error& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }

    return 0;
}