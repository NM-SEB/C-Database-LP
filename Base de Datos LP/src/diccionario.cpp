#include "Diccionario.h"
#include <iostream>
#include <cstring>

CDiccionario::CDiccionario(){
    this->f = nullptr;
    this->activa = {};
    this->posentact = -1;
    this->Natributos = 0;
    this->tambloque = 0;
}

CDiccionario::~CDiccionario(){ //destructor
    cerrarDiccionario();
}

bool CDiccionario::nuevoDiccionario(std::string fName){
    cerrarDiccionario();

    this->f = fopen(("../../../data/" + fName).c_str(), "wb+");
    if(this->f == nullptr){
        std::cout << "El archivo " << fName << " no pudo ser creado!" << std::endl;
        return false;
    }

    escribeCabEntidades(-1);
    return true;
}

bool CDiccionario::abrirDiccionario(std::string fName){
    cerrarDiccionario();

    this->f = fopen(("../../../data/" + fName).c_str(), "rb+");
    if(this->f == nullptr){
        std::cout << "El archivo " << fName << " no pudo ser abierto!" << std::endl;
        return false;
    }

    return true;
}

void CDiccionario::cerrarDiccionario(){
    if(this->f != nullptr){
        fclose(this->f);
        this->f = nullptr;
    }
}

long CDiccionario::getCabeceraEntidades(){
    long cab = -1;
    fseek(this->f, 0, SEEK_SET);
    fread(&cab, sizeof(long), 1, this->f);
    return cab;
}

void CDiccionario::escribeCabEntidades(long cab){
    fseek(this->f, 0, SEEK_SET);
    fwrite(&cab, sizeof(long), 1, this->f);
    fflush(this->f);
}

Entidad CDiccionario::capturaEntidad(){
    Entidad ent = {};
    std::string nombre;

    std::cout << "Nombre de la entidad: ";
    std::cin >> nombre;

    strncpy(ent.nombre, nombre.c_str(), sizeof(cadena) - 1);
    ent.nombre[sizeof(cadena) - 1] = '\0';
    ent.sig = -1;
    ent.data = -1;
    ent.atr = -1;

    return ent;
}

long CDiccionario::buscaEntidad(const char* name){
    long cab = getCabeceraEntidades();
    Entidad ent;

    while(cab != -1){
        ent = leeEntidad(cab);
        if(strcmp(ent.nombre, name) == 0){
            return cab;
        }
        cab = ent.sig;
    }

    return -1;
}

Entidad CDiccionario::leeEntidad(long dir){
    Entidad ent = {};
    fseek(this->f, dir, SEEK_SET);
    fread(&ent, sizeof(Entidad), 1, this->f);
    return ent;
}

long CDiccionario::escribeEntidad(Entidad nueva){
    fseek(this->f, 0, SEEK_END);
    long dir = ftell(this->f);
    fwrite(&nueva, sizeof(Entidad), 1, this->f);
    fflush(this->f);
    return dir;
}

void CDiccionario::reescribeEntidad(long dir, Entidad nueva){
    fseek(this->f, dir, SEEK_SET);
    fwrite(&nueva, sizeof(Entidad), 1, this->f);
    fflush(this->f); //checalo para ver si si funciona cuando se cierra el archivo
}

void CDiccionario::insertaEntidad(Entidad nueva, long dirNueva){
    Entidad auxEnt, anterior;
    long cab, ant;

    cab = getCabeceraEntidades();

    if(cab == -1){
        cab = dirNueva;
        escribeCabEntidades(cab);
    } else {
        auxEnt = leeEntidad(cab);

        if(strcmp(auxEnt.nombre, nueva.nombre) > 0){
            nueva.sig = cab;
            reescribeEntidad(dirNueva, nueva);
            cab = dirNueva;
            escribeCabEntidades(cab);
        } else {
            while(cab != -1 && strcmp(nueva.nombre, auxEnt.nombre) > 0){
                ant = cab;
                anterior = auxEnt;
                cab = auxEnt.sig;
                if(cab != -1){
                    auxEnt = leeEntidad(cab);
                }
            }

            anterior.sig = dirNueva;
            reescribeEntidad(ant, anterior);

            if(cab != -1){
                nueva.sig = cab;
                reescribeEntidad(dirNueva, nueva);
            }
        }
    }
}

void CDiccionario::altaEntidad(){
    if(this->f == nullptr){
        std::cout << "No hay ningun diccionario abierto!" << std::endl;
        return;
    }

    Entidad nueva;
    long dirNueva;

    nueva = capturaEntidad();

    if(buscaEntidad(nueva.nombre) == -1){
        dirNueva = escribeEntidad(nueva);
        insertaEntidad(nueva, dirNueva);
        std::cout << "La entidad " << nueva.nombre << " fue creada con exito!" << std::endl;
    } else {
        std::cout << "Error: La entidad " << nueva.nombre << " ya existe!" << std::endl;
    }
}

void CDiccionario::consultaEntidades(){
    if(this->f == nullptr){
        std::cout << "No hay ningun diccionario abierto!" << std::endl;
        return;
    }

    long cab = getCabeceraEntidades();

    if(cab == -1){
        std::cout << "El diccionario no tiene entidades!" << std::endl;
        return;
    }

    std::cout << "\nDireccion\tNombre\t\tSiguiente\tAtributos\tDatos" << std::endl;

    while(cab != -1){
        Entidad actual = leeEntidad(cab);
        std::cout << cab << "\t\t";
        std::cout << actual.nombre << "\t\t";
        std::cout << actual.sig << "\t\t";
        std::cout << actual.atr << "\t\t";
        std::cout << actual.data << std::endl;
        cab = actual.sig;
    }
}

void CDiccionario::demostracion(){
    char res;

    std::cout << "\nDemostracion del diccionario (se crea data/demo.dic). . ." << std::endl;

    if(!nuevoDiccionario("demo.dic")){
        return;
    }

    do{
        altaEntidad();
        consultaEntidades();

        std::cout << "\nQuieres agregar otra entidad? (s/n)" << std::endl;
        std::cin >> res;
    }while(res != 'n');

    cerrarDiccionario();
}
