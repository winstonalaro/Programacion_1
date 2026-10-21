// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 14/10/2026
// Numero de ejercicio: 1

#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

void generarNombres(vector<string> nombres, vector<string> apellidos, int n)
{
    int posNombre;
    int posApellido;

    for (int i = 0; i < n; i++)
    {
        posNombre = rand() % 10;
        posApellido = rand() % 10;

        cout << nombres[posNombre] << " "
             << apellidos[posApellido] << endl;
    }
}

int main()
{
    vector<string> nombres = {
        "Juan", "Maria", "Pedro", "Laura", "Carlos",
        "Ana", "Luis", "Sofia", "Diego", "Daniela"
    };

    vector<string> apellidos = {
        "Perez", "Mamani", "Flores", "Rojas", "Lopez",
        "Quispe", "Vargas", "Torrez", "Rivera", "Condori"
    };

    int n;

    srand(time(0));

    cout << "Ingrese N: ";
    cin >> n;

    generarNombres(nombres, apellidos, n);

    return 0;
}