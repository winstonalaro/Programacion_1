// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 14/10/2026
// Numero de ejercicio: 4

#include <iostream>
#include <vector>

using namespace std;

void leerPrecios(vector<double> &precios, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Precio " << i + 1 << ": ";
        cin >> precios[i];
    }
}

void ordenarSeleccion(vector<double> &precios, int n)
{
    int posMenor;
    double aux;

    for (int i = 0; i < n - 1; i++)
    {
        posMenor = i;

        for (int j = i + 1; j < n; j++)
        {
            if (precios[j] < precios[posMenor])
            {
                posMenor = j;
            }
        }

        aux = precios[i];
        precios[i] = precios[posMenor];
        precios[posMenor] = aux;
    }
}

void mostrarPrecios(vector<double> precios, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << precios[i] << " ";
    }

    cout << endl;
}

void mostrarBarato(vector<double> precios)
{
    cout << "Producto mas barato: " << precios[0] << endl;
}

void mostrarCaro(vector<double> precios, int n)
{
    cout << "Producto mas caro: " << precios[n - 1] << endl;
}

void mostrarMediana(vector<double> precios, int n)
{
    double mediana;

    if (n % 2 != 0)
    {
        mediana = precios[n / 2];
    }
    else
    {
        mediana = (precios[n / 2 - 1] + precios[n / 2]) / 2;
    }

    cout << "Mediana: " << mediana << endl;
}

int main()
{
    int n;

    cout << "Cantidad de productos: ";
    cin >> n;

    vector<double> precios(n);

    leerPrecios(precios, n);

    ordenarSeleccion(precios, n);

    cout << "Precios ordenados:" << endl;
    mostrarPrecios(precios, n);

    mostrarBarato(precios);
    mostrarCaro(precios, n);
    mostrarMediana(precios, n);

    return 0;
}