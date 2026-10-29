#include "Persona.h"
#include <iostream>

Persona::Persona(){
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

Persona::Persona(std::string nombre, int edad, float estatura, double peso, char sexo, long id){
    this->nombre = nombre;
    this->edad = edad;
    this->estatura = estatura;
    this->peso = peso;
    this->sexo = sexo;
    this->id = id;
}

void Persona::setNombre(std::string newNombre){
    this->nombre = newNombre;
}

void Persona::setEdad(int newEdad){
    this->edad = newEdad;
}

void Persona::setId(int newId){
    this->id = newId;
}

void Persona::setPeso(float newPeso){
    this->peso = newPeso;
}

void Persona::setSexo(char newSexo) {
    this->sexo = newSexo;
}


std::string Persona::getNombre(){
    return nombre;
}

int Persona::getEdad(){
    return edad;
}

int Persona::getId(){
    return id;
}

float Persona::getPeso(){
    return peso;
}

char Persona::getSexo(){
    return sexo;
}


void Persona::imprimir(){
    std::cout << "\nNombre: " << this->nombre << " \nEdad: " 
    << this->edad << "\nID: " << this->id << "\nPeso: " 
    << this->peso << "\nSexo: " << this->sexo << std::endl;
}