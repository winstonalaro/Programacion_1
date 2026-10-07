// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 9

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void buscarContactos (string busqueda, vector<string> contactos) {

    vector<string> prefijos(contactos.size());

    int pr = busqueda.length();

    for(int i = 0; i < contactos.size(); i++){
        string aux = "";
        for(int j = 0; j < pr; j++){
            aux += contactos[i][j];
        }
        prefijos[i] = aux;
    }

    for(int i = 0; i < prefijos.size(); i++){
        if(prefijos[i] == busqueda){
            cout << contactos[i] << " " << endl;
        }
    }
}

int main () {
    vector<string> contactos = {"Maria", "Marco", "Marcelo", "Juan", "Leonel", "Leonardo"};
    string busqueda;
    cout << "Ingrese el prefijo de busqueda: " << endl;
    cin >> busqueda;
    buscarContactos(busqueda, contactos);
} 