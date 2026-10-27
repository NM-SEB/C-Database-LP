#include "MenuNuevoDiccionario.h"
#include "MenuEntidades.h"
#include <iostream>

void menuNuevoDiccionario::iniciarMenu(){
    bool creado = false;

    do{
        std::cout << "Menu de creacion de diccionario. . ." << std::endl;
        std::cout << "Capturando nombre. . ." << std::endl;
        std::cout << "Nombre no existe! creando archivo con wb+. . ." << std::endl;
        std::cout << "Llamando y escribiendo entidades. . ." << std::endl;
        std::cout << "Iniciando menu de entidades. . ." << std::endl;
        menuEntidades menuEntidades;
        menuEntidades.iniciarMenu();

        std::cout << "Quieres seguir creando? (salir del menu) (s/n)" << std::endl;

        char res;
        std::cin >> res;
        
        if(res == 'n'){
            creado = true;
        }

    }while(creado == false);
}
