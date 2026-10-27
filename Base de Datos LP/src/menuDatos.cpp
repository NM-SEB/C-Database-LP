#include "MenuDatos.h"
#include <iostream>

void menuDatos::iniciarMenu(){
    int res;

        do{
        std::cout << "Menu de registros. . ." << std::endl;
        std::cout << "\nSelecciona una opcion:" << "\n1.- Nuevo registro (ingresa 1)" <<
        "\n2.- Consultar registro (ingresa 2)" << "\n3.= Elimina registro (ingresa 3)" <<
        "\n4.-Modificar registro (ingresa 4)" << "\n5.- Regresar al menu anterior (ingresa 5)" <<
        std::endl;

        std::cin >> res;

        switch(res){
            case 1:
                std::cout << "\nCreando registro. . . (preguntar datos de registro)" << std::endl;
                break;
            case 2:
                std::cout << "\nConsultando registro. . . (imprimir datos de registro)" << std::endl;
                break;
            case 3:
                std::cout << "\nEliminando registro. . . (eliminando registro)" << std::endl;
                break;
            case 4:
                std::cout << "\nModificando registro. . . (modificar registro)" << std::endl;
                break;

            default:
                break;
        }

        if(res != 1 && res != 2 && res != 3 && res != 4 && res != 5){
            std::cout << "\nSeleccion invalida!" << std::endl;
        }

    }while(res != 5);
}