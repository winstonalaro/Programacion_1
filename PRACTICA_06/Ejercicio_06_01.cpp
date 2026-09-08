// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Carrera: Ingenieria de Sistemas
// Fecha de Creacion: 08/09/2026

#include <iostream>
using namespace std;

void cambio(int valorDolares, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno);

int main() {
    int dolares;
    int cien, cincuenta, veinte, diez, cinco, uno;

    cout << "Ingrese la cantidad en dolares: ";
    cin >> dolares;


    cambio(dolares, cien, cincuenta, veinte, diez, cinco, uno);

    cout << "\n--- Descomposicion en Billetes ---" << endl;
    cout << "Billetes de 100: " << cien << endl;
    cout << "Billetes de 50:  " << cincuenta << endl;
    cout << "Billetes de 20:  " << veinte << endl;
    cout << "Billetes de 10:  " << diez << endl;
    cout << "Billetes de 5:   " << cinco << endl;
    cout << "Billetes de 1:   " << uno << endl;

    return 0;
}

void cambio(int valorDolares, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno) {
    cien = valorDolares / 100;
    valorDolares = valorDolares % 100;

    cincuenta = valorDolares / 50;
    valorDolares = valorDolares % 50;

    veinte = valorDolares / 20;
    valorDolares = valorDolares % 20;

    diez = valorDolares / 10;
    valorDolares = valorDolares % 10;

    cinco = valorDolares / 5;
    valorDolares = valorDolares % 5;

    uno = valorDolares;
}