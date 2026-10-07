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

void mostrarAleatorios(vector<string> nombres, vector<string> apellidos, vector<int> edades, int n)
{
    int posNombre, posApellido, posEdad;

    for (int i = 0; i < n; i++)
    {
        posNombre = rand() % 10;
        posApellido = rand() % 10;
        posEdad = rand() % 10;

        cout << nombres[posNombre] << " "
             << apellidos[posApellido] << " - "
             << edades[posEdad] << " anios" << endl;
    }
}

int main()
{
    srand(time(0));

    vector<string> nombres = {"Juan", "Maria", "Carlos", "Ana", "Luis",
                              "Pedro", "Sofia", "Diego", "Laura", "Jose"};

    vector<string> apellidos = {"Perez", "Gomez", "Flores", "Rojas", "Lopez",
                                "Mamani", "Vargas", "Torrez", "Quispe", "Rivera"};

    vector<int> edades = {18, 20, 22, 19, 25, 21, 23, 24, 26, 27};

    int n;

    cout << "Cuantas veces desea generar: ";
    cin >> n;

    mostrarAleatorios(nombres, apellidos, edades, n);

    return 0;
}