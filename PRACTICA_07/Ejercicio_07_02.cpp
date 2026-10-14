// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 2

#include <iostream>
#include <vector>

using namespace std;

void mostrarVoltios(vector<double> voltios);

int main()
{
    vector<double> voltios = {
        11.95, 16.32, 12.15,
        8.22, 15.98, 26.22,
        13.54, 6.45, 17.59
    };

    mostrarVoltios(voltios);

    return 0;
}

void mostrarVoltios(vector<double> voltios)
{
    for (int i = 0; i < 9; i++)
    {
        cout << voltios[i] << " ";

        if ((i + 1) % 3 == 0)
        {
            cout << endl;
        }
    }
}