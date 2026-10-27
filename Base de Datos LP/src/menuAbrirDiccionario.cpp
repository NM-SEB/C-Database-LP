#include "MenuAbrirDiccionario.h"
#include "MenuEntidades.h"
#include <iostream>

void menuAbrirDiccionario::iniciarMenu(){
    int encontrado;

    std::cout << "modo encontrado (1), modo no encontrado (2)" << std::endl;

    do{
        std::cin >> encontrado;
    }while(encontrado != 1 && encontrado != 2);

    std::cout << "Abriendo diccionario. . ." << "(Nombre del diccionario)" << std::endl;

    if(encontrado == 1){
        std::cout << "Caso encontrado: abrir diccionario e iniciar el menu de entidades" << std::endl;
        menuEntidades menuEntidades;
        menuEntidades.iniciarMenu();
    } else {
        std::cout << "Caso no encontrado: imprimir no encontrado y regresar al menu principal" << std::endl;
    }
}