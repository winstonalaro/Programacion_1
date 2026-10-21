// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 14/10/2026
// Numero de ejercicio: 3

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

void llenarTiempos(vector<float> &tiempos, int n)
{
    for (int i = 0; i < n; i++)
    {
        tiempos[i] = 10 + rand() % 11;
    }
}

void mostrarTiempos(vector<float> tiempos, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << tiempos[i] << " ";
    }

    cout << endl;
}

void ordenarInsercion(vector<float> &tiempos, int n)
{
    float aux;
    int j;

    for (int i = 1; i < n; i++)
    {
        aux = tiempos[i];
        j = i - 1;

        while (j >= 0 && tiempos[j] > aux)
        {
            tiempos[j + 1] = tiempos[j];
            j--;
        }

        tiempos[j + 1] = aux;
    }
}

int main()
{
    int n;

    cout << "Cantidad de corredores: ";
    cin >> n;

    vector<float> tiempos(n);

    srand(time(0));

    llenarTiempos(tiempos, n);

    cout << "Antes de ordenar:" << endl;
    mostrarTiempos(tiempos, n);

    ordenarInsercion(tiempos, n);

    cout << "Despues de ordenar:" << endl;
    mostrarTiempos(tiempos, n);

    return 0;
}