// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 14/10/2026
// Numero de ejercicio: 3

#include <iostream>

using namespace std;

void generarMatriz(int matriz[20][20], int n);
void mostrarMatriz(int matriz[20][20], int n);

int main()
{
    int n;
    int matriz[20][20];

    cout << "Ingrese N: ";
    cin >> n;

    generarMatriz(matriz, n);

    cout << endl;
    mostrarMatriz(matriz, n);

    return 0;
}

void generarMatriz(int matriz[20][20], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = 1 + (i * 2) + j;
        }
    }
}

void mostrarMatriz(int matriz[20][20], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matriz[i][j] << "\t";
        }

        cout << endl;
    }
}