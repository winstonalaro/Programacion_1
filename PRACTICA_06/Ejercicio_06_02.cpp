// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Carrera: Ingenieria de Sistemas
// Fecha de Creacion: 08/09/2026

#include <iostream>
using namespace std;

void calc_anios(int totalDias, int &anio, int &mes, int &dia);

int main() {
    int totalDias;
    int anio, mes, dia;

    cout << "Digite el numero total de dias transcurridos desde 1/1/2000: ";
    cin >> totalDias;

   
    calc_anios(totalDias, anio, mes, dia);

    cout << "\n--- Fecha Actual Calculada ---" << endl;
    cout << "Dia:  " << dia << endl;
    cout << "Mes:  " << mes << endl;
    cout << "Ano:  " << anio << endl;

    return 0;
}

void calc_anios(int totalDias, int &anio, int &mes, int &dia) {
    
    anio = 2000 + (totalDias / 365);
    totalDias = totalDias % 365;

    mes = 1 + (totalDias / 30);
    dia = 1 + (totalDias % 30);
}