// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 14/10/2026
// Numero de ejercicio: 2

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

void llenarPuntuaciones(vector<int> &puntos, int n)
{
    for (int i = 0; i < n; i++)
    {
        puntos[i] = 1 + rand() % 100;
    }
}

void mostrarVector(vector<int> puntos, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << puntos[i] << " ";
    }

    cout << endl;
}

void ordenarBurbuja(vector<int> &puntos, int n)
{
    int aux;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (puntos[j] < puntos[j + 1])
            {
                aux = puntos[j];
                puntos[j] = puntos[j + 1];
                puntos[j + 1] = aux;
            }
        }
    }
}

void mostrarPodio(vector<int> puntos, int n)
{
    cout << "PODIO" << endl;

    if (n >= 1)
        cout << "1er lugar: " << puntos[0] << endl;

    if (n >= 2)
        cout << "2do lugar: " << puntos[1] << endl;

    if (n >= 3)
        cout << "3er lugar: " << puntos[2] << endl;
}

int main()
{
    int n;

    cout << "Cantidad de jugadores: ";
    cin >> n;

    vector<int> puntos(n);

    srand(time(0));

    llenarPuntuaciones(puntos, n);

    cout << "Antes de ordenar:" << endl;
    mostrarVector(puntos, n);

    ordenarBurbuja(puntos, n);

    cout << "Despues de ordenar:" << endl;
    mostrarVector(puntos, n);

    mostrarPodio(puntos, n);

    return 0;
}