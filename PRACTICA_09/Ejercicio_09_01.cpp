// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 14/10/2026
// Numero de ejercicio: 1

#include <iostream>

using namespace std;

void leerMatriz(int matriz[20][20], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Ingrese [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
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

void cambiarFilas(int matriz[20][20], int n)
{
    int aux;

    for (int j = 0; j < n; j++)
    {
        aux = matriz[0][j];
        matriz[0][j] = matriz[n - 1][j];
        matriz[n - 1][j] = aux;
    }
}

int main()
{
    int n;
    int matriz[20][20];

    cout << "Ingrese N: ";
    cin >> n;

    leerMatriz(matriz, n);

    cout << endl;
    cout << "Matriz original:" << endl;
    mostrarMatriz(matriz, n);

    cambiarFilas(matriz, n);

    cout << endl;
    cout << "Matriz modificada:" << endl;
    mostrarMatriz(matriz, n);

    return 0;
}