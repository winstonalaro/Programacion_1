// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 14/10/2026
// Numero de ejercicio: 5

#include <iostream>
#include <string>

using namespace std;

void ordenarPalabra(string &palabra)
{
    char aux;

    for (int i = 0; i < palabra.length() - 1; i++)
    {
        for (int j = 0; j < palabra.length() - 1; j++)
        {
            if (palabra[j] > palabra[j + 1])
            {
                aux = palabra[j];
                palabra[j] = palabra[j + 1];
                palabra[j + 1] = aux;
            }
        }
    }
}

int main()
{
    string palabra;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    ordenarPalabra(palabra);

    cout << "Palabra ordenada: " << palabra << endl;

    return 0;
}