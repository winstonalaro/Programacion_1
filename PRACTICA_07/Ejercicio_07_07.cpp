// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 7

#include <iostream>
#include <vector>

using namespace std;

int llenarVector(vector<int> &numeros);
void mostrarVector(vector<int> numeros, int cantidad);

int main()
{
    vector<int> numeros(100);

    int cantidad;

    cantidad = llenarVector(numeros);

    cout << endl;
    cout << "NUMEROS INTRODUCIDOS:" << endl;

    mostrarVector(numeros, cantidad);

    return 0;
}

int llenarVector(vector<int> &numeros)
{
    int numero;
    int cantidad = 0;

    while (cantidad < 100)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero < 0)
        {
            break;
        }

        numeros[cantidad] = numero;

        cantidad++;
    }

    return cantidad;
}

void mostrarVector(vector<int> numeros, int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        cout << numeros[i] << " ";
    }

    cout << endl;
}