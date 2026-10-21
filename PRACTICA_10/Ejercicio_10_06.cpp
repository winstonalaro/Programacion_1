// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 14/10/2026
// Numero de ejercicio: 6

#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

void llenarEstudiantes(vector<string> &estudiantes, vector<string> nombres,
                       vector<string> apellidos, int n)
{
    int posNombre;
    int posApellido;

    for (int i = 0; i < n; i++)
    {
        posNombre = rand() % 10;
        posApellido = rand() % 10;

        estudiantes[i] = nombres[posNombre] + " " + apellidos[posApellido];
    }
}

void mostrarEstudiantes(vector<string> estudiantes, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << estudiantes[i] << endl;
    }
}

void ordenarNombres(vector<string> &estudiantes, int n)
{
    string aux;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (estudiantes[j] > estudiantes[j + 1])
            {
                aux = estudiantes[j];
                estudiantes[j] = estudiantes[j + 1];
                estudiantes[j + 1] = aux;
            }
        }
    }
}

int main()
{
    int n;

    vector<string> nombres = {
        "Juan", "Maria", "Pedro", "Laura", "Carlos",
        "Ana", "Luis", "Sofia", "Diego", "Daniela"
    };

    vector<string> apellidos = {
        "Perez", "Mamani", "Flores", "Rojas", "Lopez",
        "Quispe", "Vargas", "Torrez", "Rivera", "Condori"
    };

    cout << "Cantidad de estudiantes: ";
    cin >> n;

    vector<string> estudiantes(n);

    srand(time(0));

    llenarEstudiantes(estudiantes, nombres, apellidos, n);

    cout << "Antes de ordenar:" << endl;
    mostrarEstudiantes(estudiantes, n);

    ordenarNombres(estudiantes, n);

    cout << endl;
    cout << "Despues de ordenar:" << endl;
    mostrarEstudiantes(estudiantes, n);

    return 0;
}