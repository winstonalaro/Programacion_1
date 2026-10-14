// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 14/10/2026
// Numero de ejercicio: 4

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void generarMatriz(int matriz[20][20], int n, int m);
void mostrarMatriz(int matriz[20][20], int n, int m);
void buscarPuntoSilla(int matriz[20][20], int n, int m);

int main()
{
    int n, m;
    int matriz[20][20];

    srand(time(0));

    cout << "Ingrese filas: ";
    cin >> n;

    cout << "Ingrese columnas: ";
    cin >> m;

    generarMatriz(matriz, n, m);

    cout << endl;
    cout << "Matriz:" << endl;
    mostrarMatriz(matriz, n, m);

    cout << endl;
    buscarPuntoSilla(matriz, n, m);

    return 0;
}

void generarMatriz(int matriz[20][20], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matriz[i][j] = 1 + rand() % 10;
        }
    }
}

void mostrarMatriz(int matriz[20][20], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matriz[i][j] << "\t";
        }

        cout << endl;
    }
}

void buscarPuntoSilla(int matriz[20][20], int n, int m)
{
    bool encontrado = false;

    for (int i = 0; i < n; i++)
    {
        int menor = matriz[i][0];
        int columna = 0;

        for (int j = 0; j < m; j++)
        {
            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                columna = j;
            }
        }

        bool mayor = true;

        for (int k = 0; k < n; k++)
        {
            if (matriz[k][columna] > menor)
            {
                mayor = false;
            }
        }

        if (mayor == true)
        {
            cout << "Punto de silla: " << menor << endl;
            cout << "Posicion: [" << i << "][" << columna << "]" << endl;

            encontrado = true;
        }
    }

    if (encontrado == false)
    {
        cout << "No se encontro punto de silla" << endl;
    }
}