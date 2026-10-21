// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 14/10/2026
// Numero de ejercicio: 7

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void leerDatos(vector<string> &nombres, int notas[5][3])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Nombre del alumno " << i + 1 << ": ";
        cin >> nombres[i];

        for (int j = 0; j < 3; j++)
        {
            cout << "Nota " << j + 1 << ": ";
            cin >> notas[i][j];
        }
    }
}

void calcularPromedios(int notas[5][3], vector<float> &promedios)
{
    int suma;

    for (int i = 0; i < 5; i++)
    {
        suma = 0;

        for (int j = 0; j < 3; j++)
        {
            suma = suma + notas[i][j];
        }

        promedios[i] = suma / 3.0;
    }
}

void ordenarDatos(vector<string> &nombres, int notas[5][3],
                  vector<float> &promedios)
{
    string auxNombre;
    int auxNota;
    float auxPromedio;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (nombres[j] > nombres[j + 1])
            {
                auxNombre = nombres[j];
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = auxNombre;

                for (int k = 0; k < 3; k++)
                {
                    auxNota = notas[j][k];
                    notas[j][k] = notas[j + 1][k];
                    notas[j + 1][k] = auxNota;
                }

                auxPromedio = promedios[j];
                promedios[j] = promedios[j + 1];
                promedios[j + 1] = auxPromedio;
            }
        }
    }
}

void mostrarBoletin(vector<string> nombres, int notas[5][3],
                    vector<float> promedios)
{
    cout << endl;
    cout << "Nombre\tNota1\tNota2\tNota3\tPromedio" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << nombres[i] << "\t";

        for (int j = 0; j < 3; j++)
        {
            cout << notas[i][j] << "\t";
        }

        cout << promedios[i] << endl;
    }
}

int main()
{
    vector<string> nombres(5);
    int notas[5][3];
    vector<float> promedios(5);

    leerDatos(nombres, notas);

    calcularPromedios(notas, promedios);

    ordenarDatos(nombres, notas, promedios);

    mostrarBoletin(nombres, notas, promedios);

    return 0;
}