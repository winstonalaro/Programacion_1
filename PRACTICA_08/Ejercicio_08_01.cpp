// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 1

#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

void generarPersonas(vector<string> nombres, vector<string> apellidos,
                     vector<int> edades, int n)
{
    int posNombre;
    int posApellido;
    int posEdad;

    for (int i = 0; i < n; i++)
    {
        posNombre = rand() % 10;
        posApellido = rand() % 10;
        posEdad = rand() % 10;

        cout << "Persona " << i + 1 << ": ";
        cout << nombres[posNombre] << " ";
        cout << apellidos[posApellido] << " ";
        cout << edades[posEdad] << " anios" << endl;
    }
}

int main()
{
    vector<string> nombres = {
        "Jorge", "Juanita", "Israel", "Kevin", "Williams",
        "Ana", "Luis", "Sofia", "Diego", "Daniela"
    };

    vector<string> apellidos = {
        "Perez", "Mamani", "Flores", "Rojas", "Lopez",
        "Quispe", "Vargas", "Torrez", "Rivera", "Condori"
    };

    vector<int> edades = {
        18, 19, 20, 21, 22,
        23, 24, 25, 26, 27
    };

    int n;

    srand(time(0));

    cout << "Ingrese N: ";
    cin >> n;

    generarPersonas(nombres, apellidos, edades, n);

    return 0;
}