#pragma once
#include <cstdio>
#include <string>

typedef char cadena[30];

/*
    Estructura de la entidad:
    nombre      cadena[30]
    sig         long    (direccion de la siguiente entidad)
    data        long    (direccion del primer registro)
    atr         long    (direccion del primer atributo)
*/

struct Entidad {
    cadena nombre;
    long sig;
    long data;
    long atr;
};

/*
    Estructura del atributo:
    nombre      cadena[30]
    tipo        char    ('C' cadena, 'I' entero, 'F' flotante, 'L' long)
    tam         int     (tamaño en bytes)
    sig         long    (direccion del siguiente atributo, -1 = NULL)
*/

struct Atributo {
    cadena nombre;
    char tipo;
    int tam;
    long sig;
};

class CDiccionario {
    private:
        FILE* f;
        Entidad activa;
        long posentact;
        int Natributos;
        Atributo arrAtributos[50];
        long tambloque;

    public:
        CDiccionario();
        ~CDiccionario();

        bool nuevoDiccionario(std::string fName);
        bool abrirDiccionario(std::string fName);
        void cerrarDiccionario();

        long getCabeceraEntidades();
        void escribeCabEntidades(long cab);

        Entidad capturaEntidad();
        long buscaEntidad(const char* name);
        Entidad leeEntidad(long dir);
        long escribeEntidad(Entidad nueva);
        void reescribeEntidad(long dir, Entidad nueva);
        void insertaEntidad(Entidad nueva, long dirNueva);

        void altaEntidad();
        void consultaEntidades();

        void demostracion();
};
