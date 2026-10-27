#include "Entidad.h"
#include <iostream>

Entidad::Entidad(){
    this->nombre = "Dummy";
    this->edad = -1;
    this->estatura = 0;
    this->peso = -1;
    this->sexo = 'N';
    this->id = -1;
}

/*
    Orden de los datos:
    nombre
    edad
    estatura
    peso
    sexo
    identificador
*/

Entidad::Entidad(std::string nombre, int edad, float estatura, double peso, char sexo, long id){
    this->nombre = nombre;
    this->edad = edad;
    this->estatura = estatura;
    this->peso = peso;
    this->sexo = sexo;
    this->id = id;
}

void Entidad::setNombre(std::string newNombre){
    this->nombre = newNombre;
}

void Entidad::setEdad(int newEdad){
    this->edad = newEdad;
}

void Entidad::setId(int newId){
    this->id = newId;
}

void Entidad::setPeso(float newPeso){
    this->peso = newPeso;
}

void Entidad::setSexo(char newSexo) {
    this->sexo = newSexo;
}


std::string Entidad::getNombre(){
    return nombre;
}

int Entidad::getEdad(){
    return edad;
}

int Entidad::getId(){
    return id;
}

float Entidad::getPeso(){
    return peso;
}

char Entidad::getSexo(){
    return sexo;
}


void Entidad::imprimir(){
    std::cout << "\nNombre: " << this->nombre << " \nEdad: " 
    << this->edad << "\nID: " << this->id << "\nPeso: " 
    << this->peso << "\nSexo: " << this->sexo << std::endl;
}