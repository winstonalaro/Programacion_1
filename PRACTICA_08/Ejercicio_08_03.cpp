// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 3

#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

bool verificarTarjeta (string tarjeta) {
    if(tarjeta.length() != 16){
        return false;
    }

    vector<int> digitos(16);
    vector<string> d(16);

    int suma = 0;
    for(int i = 0; i < 16; i++){
        d[i] = tarjeta[i];
        digitos[i] = stoi(d[i]);

        if(i % 2 == 0) {
            digitos[i] = digitos[i] * 2;
            if(digitos[i] > 9){
                digitos[i] -= 9;
            }
        }

        suma += digitos[i];
    }

    if(suma % 10 == 0){
        return true;
    } else {
        return false;
    }
}

int main () {
    string tarjeta;
    cout << "Ingrese el numero de su tarjeta" << endl;
    cin >> tarjeta;

    if(verificarTarjeta(tarjeta)) {
        cout << "Es una tarjeta Valida" << endl;
    } else {
        cout << "No es una tarjeta Valida" << endl;
    }
}