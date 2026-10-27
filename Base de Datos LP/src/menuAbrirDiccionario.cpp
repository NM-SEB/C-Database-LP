#include "MenuAbrirDiccionario.h"
#include "MenuEntidades.h"
#include <iostream>
#include <fstream>

void menuAbrirDiccionario::iniciarMenu(){
    bool encontrado = false;
    std::string fName;

    std::cout << "Por favor ingrese el nombre del diccionario que se va a abrir a continuacion. . ." << std::endl;
    std::cin >> fName;

    std::cout << "Abriendo diccionario " << fName << ". . ."<< std::endl;

    std::ifstream checkFile("../../../data/" + fName);
        if (checkFile.is_open()) {
            encontrado = true;
        }

        checkFile.close(); //<- Cambiar en el codigo final, solamente vemos si el archivo se abre para demostrar el funcionamiento del metodo

    if(encontrado == true){
        std::cout << "Abriendo diccionario e iniciando el menu de entidades. . ." << std::endl;
        menuEntidades menuEntidades;
        menuEntidades.iniciarMenu();
    } else {
        std::cout << "Diccionario no encontrado! Regresando al menu principal. . ." << std::endl;
    }
}