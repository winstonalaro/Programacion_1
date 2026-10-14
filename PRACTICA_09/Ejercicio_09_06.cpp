// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 14/10/2026
// Numero de ejercicio: 6

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void generarTemperaturas(int temperaturas[4][7]);
void mostrarTemperaturas(int temperaturas[4][7]);
void temperaturaMayor(int temperaturas[4][7]);
void promedioSemanas(int temperaturas[4][7]);
int contarMayores30(int temperaturas[4][7]);

int main()
{
    int temperaturas[4][7];

    srand(time(0));

    generarTemperaturas(temperaturas);

    cout << "TEMPERATURAS:" << endl;
    mostrarTemperaturas(temperaturas);

    cout << endl;
    temperaturaMayor(temperaturas);

    cout << endl;
    promedioSemanas(temperaturas);

    cout << endl;
    cout << "Dias mayores a 30 grados: "
         << contarMayores30(temperaturas)
         << endl;

    return 0;
}

void generarTemperaturas(int temperaturas[4][7])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            temperaturas[i][j] = 5 + rand() % 31;
        }
    }
}

void mostrarTemperaturas(int temperaturas[4][7])
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Semana " << i + 1 << ": ";

        for (int j = 0; j < 7; j++)
        {
            cout << temperaturas[i][j] << "\t";
        }

        cout << endl;
    }
}

void temperaturaMayor(int temperaturas[4][7])
{
    int mayor = temperaturas[0][0];
    int semana = 0;
    int dia = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (temperaturas[i][j] > mayor)
            {
                mayor = temperaturas[i][j];
                semana = i;
                dia = j;
            }
        }
    }

    cout << "Temperatura mas alta: " << mayor << endl;
    cout << "Semana: " << semana + 1 << endl;
    cout << "Dia: " << dia + 1 << endl;
}

void promedioSemanas(int temperaturas[4][7])
{
    for (int i = 0; i < 4; i++)
    {
        int suma = 0;

        for (int j = 0; j < 7; j++)
        {
            suma = suma + temperaturas[i][j];
        }

        double promedio = suma / 7.0;

        cout << "Promedio semana " << i + 1 << ": " << promedio << endl;
    }
}

int contarMayores30(int temperaturas[4][7])
{
    int contador = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (temperaturas[i][j] > 30)
            {
                contador++;
            }
        }
    }

    return contador;
}