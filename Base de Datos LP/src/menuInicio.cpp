#include "MenuInicio.h"
#include "MenuNuevoDiccionario.h"
#include <iostream>

void menuInicio::iniciarMenu(){
    int res;

    do{
        std::cout << "\nMenu de inicio. . ." << std::endl;
        std::cout << "\nSelecciona una opcion:" << "\n1.- Nuevo Diccionario (ingresa 1)" <<
        "\n2.- Abrir Diccionario (ingresa 2)" << "\n3.- Salir del programa (ingresa 3)" << std::endl;


        std::cin >> res;

        if(res == 1){
            menuNuevoDiccionario menuNuevoDiccionario;
            menuNuevoDiccionario.iniciarMenu();
        }

        if(res != 1 && res != 2 && res != 3){
            std::cout << "\nSeleccion invalida!" << std::endl;
        }

    }while(res != 3);
}