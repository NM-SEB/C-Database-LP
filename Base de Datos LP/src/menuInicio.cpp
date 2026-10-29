#include "MenuInicio.h"
#include "MenuNuevoDiccionario.h"
#include "MenuAbrirDiccionario.h"
#include "Diccionario.h"
#include <iostream>

void menuInicio::iniciarMenu(){
    int res;

    do{
        std::cout << "\nMenu de inicio. . ." << std::endl;
        std::cout << "\nSelecciona una opcion:" << "\n1.- Nuevo Diccionario (ingresa 1)" <<
        "\n2.- Abrir Diccionario (ingresa 2)" << "\n3.- Salir del programa (ingresa 3)" << "\n4.- Probar diccionario (ingresa 4)" << std::endl;


        std::cin >> res;

        if(res == 1){
            menuNuevoDiccionario menuNuevoDiccionario;
            menuNuevoDiccionario.iniciarMenu();
        } else if(res == 2){
            menuAbrirDiccionario menuAbrirDiccionario;
            menuAbrirDiccionario.iniciarMenu();
        }  else if(res == 4){
            CDiccionario demostracion;
            demostracion.demostracion();
        }

        if(res != 1 && res != 2 && res != 3){
            std::cout << "\nSeleccion invalida!" << std::endl;
            res = 0;
        }

    }while(res != 3);
}