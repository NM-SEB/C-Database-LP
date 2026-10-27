#include "MenuAbrirDiccionario.h"
#include "MenuEntidades.h"
#include <iostream>

void menuAbrirDiccionario::iniciarMenu(){
    std::cout << "Abriendo diccionario. . ." << "(Nombre del diccionario)" << std::endl;

    std::cout << "Caso encontrado: abrir diccionario e iniciar el menu de entidades" << std::endl;
    menuEntidades menuEntidades;
    menuEntidades.iniciarMenu();

    std::cout << "Caso no encontrado: imprimir no encontrado y regresar al menu principal" << std::endl;

}