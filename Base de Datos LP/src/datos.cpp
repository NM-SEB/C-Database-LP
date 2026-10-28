#include "Datos.h"
#include <iostream>
#include <string>
using std::string;
using namespace std;

Datos::Datos(){
    int op;

    do{
        cout << endl << endl << "\t1.- Nuevo dato" << endl;
        cout << "\t2.- Consultar dato" << endl;
        cout << "\t3.- Eliminar dato" << endl;
        cout << "\t4.- Modificar dato" << endl;
        cout << "\t5.- Salir al menu anterior" << endl;
        cout << "Seleccione una opcion: ";
        cin >> op;

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

void Datos::nuevo(){
    cout << endl << "Ingrese el dato: ";
    cin >> nombre;
    if(verificar(nombre))
        cout << endl << "El dato ya existe" << endl;
    else
        cout << endl << "Dato " << nombre << " creado" << endl;
}

void Datos::consultar(){
    cout << endl << "Ingrese el dato: ";
    cin >> nombre;
    if(verificar(nombre))
        cout << endl << "Dato: " << nombre << endl;
    else
        cout << endl << "El dato no existe" << endl;
}

void Datos::eliminar(){
    cout << endl << "Ingrese el dato: ";
    cin >> nombre;
    if(verificar(nombre))
        cout << endl << "Dato " << nombre << " eliminado" << endl;
    else
        cout << endl << "El dato no existe" << endl;
}

void Datos::modificar(){
    string nuevoNombre;
    cout << endl << "Ingrese el dato: ";
    cin >> nombre;
    if(!verificar(nombre)){
        cout << endl << "El dato no existe" << endl;
        return;
    }
    cout << "Ingrese el nuevo valor: ";
    cin >> nuevoNombre;
    nombre = nuevoNombre;
    cout << endl << "Dato modificado" << endl;
}

bool Datos::verificar(string& n){
    char val;
    cout << endl << "Existe el dato? (y/n) ";
    cin >> val;
    return val == 'y' || val == 'Y';
}
