#include "MenuNuevoDiccionario.h"
#include "MenuEntidades.h"
#include <iostream>
#include <fstream>

void menuNuevoDiccionario::iniciarMenu(){
    bool creado = false;
    std::string fName;

    do{
        std::cout << "Menu de creacion de diccionario. . ." << std::endl;
        std::cout << "Capturando nombre. . ." << std::endl;
        std::cin >> fName;

        std::cout << "El nombre seleccionado es: " << fName << std::endl;

        std::ifstream checkFile("../../../data/" + fName);
    
        if (checkFile.is_open()) {
            std::cout << "Error: Ya existe un archivo " << fName << "!" << std::endl;
            checkFile.close();
            return;
        }

        checkFile.close();

        std::fstream file("../../../data/" + fName, std::ios::out | std::ios::in | std::ios::trunc | std::ios::binary);
        if (file.is_open()) {
            std::cout << "El archivo fue creado con exito (abrir con wb+). . ." << std::endl;
            std::cout << "LLamando a escribeCabEntidades para apuntarlo a -1 (null)" << std::endl;
        } else {
            std::cout << "El archivo no fue creado!" << std::endl;
        }

        file.close(); //<- cambiar su funcionamiento en el codigo final, solo funciona de momento para demostracion del metodo.

        std::cout << "Llamando y escribiendo entidades. . ." << std::endl;
        std::cout << "Iniciando menu de entidades. . ." << std::endl;
        menuEntidades menuEntidades;
        menuEntidades.iniciarMenu();

        std::cout << "Quieres seguir creando diccionarios? (salir del menu) (s/n)" << std::endl;

        char res;
        std::cin >> res;
        
        if(res == 'n'){
            creado = true;
        }

    }while(creado == false);
}
