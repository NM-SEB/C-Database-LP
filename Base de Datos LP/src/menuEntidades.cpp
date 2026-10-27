#include "MenuEntidades.h"
#include "MenuAtributos.h"
#include "MenuDatos.h"
#include <iostream>

void menuEntidades::iniciarMenu(){
    int res;

    do{
        std::cout << "Menu de entidades. . ." << std::endl;
        std::cout << "\nSelecciona una opcion:" << "\n1.- Nueva entidad (ingresa 1)" <<
        "\n2.- Consultar entidad (ingresa 2)" << "\n3.= Elimina entidad (ingresa 3)" <<
        "\n4.-Modificar entidad (ingresa 4)" << "\n5.- Menu atributos (ingresa 5)" <<
        "\n6.- Menu Datos (ingresa 6)" << "\n7.- Salir del menu de entidades (ingresa 7)" <<
        std::endl;

        std::cin >> res;

        switch(res){
            case 1:
                std::cout << "\nCreando entidad. . . (preguntar datos de entidad)" << std::endl;
                break;
            case 2:
                std::cout << "\nConsultando entidad. . . (imprimir datos de entidad)" << std::endl;
                break;
            case 3:
                std::cout << "\nEliminando entidad. . . (eliminando entidad)" << std::endl;
                break;
            case 4:
                std::cout << "\nModificando entidad. . . (modificar entidad)" << std::endl;
                break;
            case 5:
                std::cout << "\nAbriendo menu de atributos. . ." << std::endl;
                menuAtributos menuAtributos;
                menuAtributos.iniciarMenu();
                break;
            case 6:
                std::cout << "\nAbriendo menu de datos. . ." << std::endl;
                menuDatos menuDatos;
                menuDatos.iniciarMenu();
                break;

            default:
                std::cout << "\nSeleccion invalida!" << std::endl;
                break;
        }

    }while(res != 7);
}
