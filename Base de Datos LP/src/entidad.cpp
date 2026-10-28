#include "Entidad.h"
#include "Atributos.h"
#include "Datos.h"
#include <iostream>
#include <string>
using std::string;
#include <filesystem>
namespace fs = std::filesystem;
using namespace std;

Entidad::Entidad(string arch){
    this->arch = arch;
    cab = data = atr = -1;
    int op = -1;
    do{
        cout << endl << endl << "\t1.- Nueva entidad" << endl;
        cout << "\t2.- Consultar entidad" << endl;
        cout << "\t3.- Eliminar entidad" << endl;
        cout << "\t4.- Modificar entidad" << endl;
        cout << "\t5.- Menu Atributos" << endl;
        cout << "\t6.- Menu Datos" << endl;
        cout << "\t7.- Salir al menu anterior" << endl;
        cout << "Seleccione una opcion: ";
        cin >> op;

        switch (op)
        {
        case 1:
            agregar();
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
            Atributos atr();
            break;
        case 6:
            Datos dat();
            break;
        case 7:
            cout << endl << "Saliendo al menu anterior . . ." << endl;
            break;
        default:
            break;
        }
    }while(op != 7);
    return;
}

bool Entidad::verificar(string& n){
    char val;
    cout << endl << "Existe la entidad? (y/n) ";
    cin >> val;
    return val == 'y' || val == 'Y';
}

bool Entidad::agregar(){
    cout << endl << "Ingrese el nombre de la entidad: ";
    cin >> nombre;
    if(verificar(nombre)){
        cout << endl << "La entidad ya existe" << endl;
        return false;
    }
    cout << endl << "Entidad " << nombre << " creada" << endl;
    return true;
}

void Entidad::consultar(){
    cout << endl << "Ingrese el nombre de la entidad: ";
    cin >> nombre;
    if(verificar(nombre))
        cout << endl << "Entidad: " << nombre << endl;
    else
        cout << endl << "La entidad no existe" << endl;
}

bool Entidad::eliminar(){
    cout << endl << "Ingrese el nombre de la entidad: ";
    cin >> nombre;
    if(!verificar(nombre)){
        cout << endl << "La entidad no existe" << endl;
        return false;
    }
    cout << endl << "Entidad " << nombre << " eliminada" << endl;
    return true;
}

bool Entidad::modificar(){
    string nuevo;
    cout << endl << "Ingrese el nombre de la entidad: ";
    cin >> nombre;
    if(!verificar(nombre)){
        cout << endl << "La entidad no existe" << endl;
        return false;
    }
    cout << "Ingrese el nuevo nombre: ";
    cin >> nuevo;
    nombre = nuevo;
    cout << endl << "Entidad modificada" << endl;
    return true;
}
