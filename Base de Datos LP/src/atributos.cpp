#include "Atributos.h"
#include <iostream>
#include <limits>
#include <string>
#include <filesystem>
using std::string;
namespace fs = std::filesystem;
using namespace std;

Atributos::Atributos(){
    int op;

    do{
        cout << endl << endl << "\t1.- Nuevo atributo" << endl;
        cout << "\t2.- Consultar atributo" <<endl;
        cout << "\t3.- Eliminar atributo" <<endl;
        cout << "\t4.- Modificar atributo" <<endl;
        cout << "\t5.- Salir al menu anterior" <<endl;
        cout << "Seleccione una opcion: ";
        if(!(cin >> op)){
            if(cin.eof())
                return;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            op = 0;
        }

        switch (op)
        {
        case 1:
            nuevo();
            break;
        case 2:
            consultar();
            break;
        case 3:
            eliminar();
            break;
        case 4:
            modificar();
            break;
        case 5:
            cout << endl << "Volviendo al menu anterior" << endl;
            break;
        default:
            cout << endl << "Opcion invalida" << endl;
            break;
        }
    }while(op != 5);
    return;
}

void Atributos::nuevo(){
    cout << endl << "Ingrese el nombre del atributo: ";
    cin >> nombre;
    if(verificar(nombre))
        cout << endl << "El atributo ya existe" << endl;
    else
        cout << endl << "Atributo " << nombre << " creado" << endl;
}

void Atributos::consultar(){
    cout << endl << "Ingrese el nombre del atributo: ";
    cin >> nombre;
    if(verificar(nombre))
        cout << endl << "Atributo: " << nombre << endl;
    else
        cout << endl << "El atributo no existe" << endl;
}

void Atributos::eliminar(){
    cout << endl << "Ingrese el nombre del atributo: ";
    cin >> nombre;
    if(verificar(nombre))
        cout << endl << "Atributo " << nombre << " eliminado" << endl;
    else
        cout << endl << "El atributo no existe" << endl;
}

void Atributos::modificar(){
    string nuevoNombre;
    cout << endl << "Ingrese el nombre del atributo: ";
    cin >> nombre;
    if(!verificar(nombre)){
        cout << endl << "El atributo no existe" << endl;
        return;
    }
    cout << "Ingrese el nuevo nombre: ";
    cin >> nuevoNombre;
    nombre = nuevoNombre;
    cout << endl << "Atributo modificado" << endl;
}

bool Atributos::verificar(string& n){
    char val;
    cout << endl << "Existe el atributo? (y/n) ";
    cin >> val;
    if(val == 'y' || val == 'Y')
        return true;
    
    return false;
}