// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 5

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

vector<string> separador (string url) {
    string protocoloYDominio = "://";
    char dominioYRuta = '/';

    vector<string> separado (3);
    int posicion = 0;
    for(int i = 0; i < url.length(); i++){
        if(url[i] == protocoloYDominio[0]){
            i+=3;
            posicion = i;
            i = url.length();
        } else {
            separado[0] += url[i];
            
        }
    }
    for(int i = posicion; i < url.length(); i++) {
        if(url[i] == dominioYRuta){
            for(int j = i; j < url.length(); j++){
                separado[2] += url[j];
            }
            i = url.length();
        } else {
            separado[1] += url[i];
        }
    }

    return separado;
}

int main () {
    string url;
    cout << "Ingrese la URL" << endl;
    cin >> url;

    vector<string> separado = separador(url);

    cout << "Protocolo: " << separado[0] << endl;
    cout << "Dominio: " << separado[1] << endl;
    cout << "Ruta: " << separado[2] << endl;
}