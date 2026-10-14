// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 14/10/2026
// Numero de ejercicio: 2

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void generarMatriz(int matriz[20][20], int n, int a, int b);
void mostrarMatriz(int matriz[20][20], int n);
int sumaUltimaColumna(int matriz[20][20], int n);
int productoUltimaFila(int matriz[20][20], int n);
void mayorValor(int matriz[20][20], int n);
double promedioMatriz(int matriz[20][20], int n);

int main()
{
    int n, a, b;
    int matriz[20][20];

    srand(time(0));

    cout << "Ingrese N: ";
    cin >> n;

    cout << "Ingrese A: ";
    cin >> a;

    cout << "Ingrese B: ";
    cin >> b;

    generarMatriz(matriz, n, a, b);

    cout << endl;
    cout << "Matriz:" << endl;
    mostrarMatriz(matriz, n);

    cout << endl;
    cout << "Suma ultima columna: " << sumaUltimaColumna(matriz, n) << endl;
    cout << "Producto ultima fila: " << productoUltimaFila(matriz, n) << endl;

    mayorValor(matriz, n);

    cout << "Promedio: " << promedioMatriz(matriz, n) << endl;

    return 0;
}

void generarMatriz(int matriz[20][20], int n, int a, int b)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = a + rand() % (b - a + 1);
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

int sumaUltimaColumna(int matriz[20][20], int n)
{
    int suma = 0;

    for (int i = 0; i < n; i++)
    {
        suma = suma + matriz[i][n - 1];
    }

    return suma;
}

int productoUltimaFila(int matriz[20][20], int n)
{
    int producto = 1;

    for (int j = 0; j < n; j++)
    {
        producto = producto * matriz[n - 1][j];
    }

    return producto;
}

void mayorValor(int matriz[20][20], int n)
{
    int mayor = matriz[0][0];
    int fila = 0;
    int columna = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] > mayor)
            {
                mayor = matriz[i][j];
                fila = i;
                columna = j;
            }
        }
    }

    cout << "Mayor valor: " << mayor << endl;
    cout << "Posicion: [" << fila << "][" << columna << "]" << endl;
}

double promedioMatriz(int matriz[20][20], int n)
{
    int suma = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            suma = suma + matriz[i][j];
        }
    }

    return (double)suma / (n * n);
}