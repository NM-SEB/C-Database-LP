#pragma once
#include <string>

class Persona {
private:
    std::string nombre;
    int edad;
    float estatura;
    double peso;
    char sexo;
    long id;
public:
    Persona();
    Persona(std::string nombre, int edad, float estatura, double peso, char sexo, long id);

    void setNombre(std::string newNombre);
    void setEdad(int newEdad);
    void setId(int newId);
    void setPeso(float newPeso);
    void setSexo(char newSexo);

    std::string getNombre();
    int getEdad();
    int getId();
    float getPeso();
    char getSexo();

    void imprimir();
};