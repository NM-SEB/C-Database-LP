#include <string>
using std::string;
#include "Diccionario.h"
#include "Entidad.h"
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;
using namespace std;

Diccionario::Diccionario(const std::string& dir){
    int op = -1;

    do{
        cout << endl << endl << "\t1.- Nuevo diccionario" << endl;
        cout << "\t2.- Abrir diccionario" << endl;
        cout << "\t-1.- Salir" << endl;
        cout << "Escoja una opcion" << endl;

        switch (op){
        case 1:
            cout << "Ingrese el nombre del diccionario: ";
            cin >> nombre;
            crear(nombre);
            break;
        case 2:
            cout << "Ingrese el nombre del diccionario: ";
            cin >> nombre;
            abrir(nombre);
            break;
        case -1:
            cout << "Saliendo al menu anterior . . .";
            break;
        default:
            cout << "Opcion incorrecta";
            break;
        }
    }while(op != -1); 
    
    return;
}

void Diccionario::crear(string& n){
    if(!verificar(n)){
        cout << endl << "Creando archivo: ", n;
        cout << endl << "Archivo creado" << endl;
    }else
        cout << endl << "El archivo ya existe" << endl;
    return;
}

bool Diccionario::verificar(string &n){
    char val;
    cout << endl << "Existe el archivo? (y/n)";
    cin >> val;
    if(val == 'y' || val == 'Y')
        return true;
    
    return false;
}

void Diccionario::abrir(string& n){
    if(verificar(n)){
        cout << endl << "Entrando al diccionario . . .";
        Entidad(n);
    }else    
        cout << endl << "El archivo no existe";
    return;
}