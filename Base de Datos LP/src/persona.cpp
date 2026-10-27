#include "Persona.h"
#include <iostream>

Persona::Persona(std::string nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
}

std::string Persona::getNombre() {
    return nombre;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

void Persona::saludar() {
    std::cout << "Hola, mi nombre es " << nombre << " y tengo " << edad << " años." << std::endl;
}
