#include "MenuAtributos.h"
#include <iostream>

void menuAtributos::iniciarMenu(){
    int res;

    do{
        std::cout << "Menu de atributos. . ." << std::endl;
        std::cout << "\nSelecciona una opcion:" << "\n1.- Nuevo atributo (ingresa 1)" <<
        "\n2.- Consultar atributo (ingresa 2)" << "\n3.= Elimina atributo (ingresa 3)" <<
        "\n4.-Modificar atributo (ingresa 4)" << "\n5.- Regresar al menu anterior (ingresa 5)" <<
        std::endl;

        std::cin >> res;

        switch(res){
            case 1:
                std::cout << "\nCreando atributo. . . (preguntar datos de atributo)" << std::endl;
                break;
            case 2:
                std::cout << "\nConsultando atributo. . . (imprimir datos de atributo)" << std::endl;
                break;
            case 3:
                std::cout << "\nEliminando atributo. . . (eliminando atributo)" << std::endl;
                break;
            case 4:
                std::cout << "\nModificando atributo. . . (modificar atributo)" << std::endl;
                break;

            default:
                break;
        }

        if(res != 1 && res != 2 && res != 3 && res != 4 && res != 5){
            std::cout << "\nSeleccion invalida!" << std::endl;
        }

    }while(res != 5);
}