// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 1

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

void generarVoltajes(vector<double> &voltajes);
void generarTemperaturas(vector<double> &temperaturas);
void generarCaracteres(vector<char> &caracteres);
void generarAnios(vector<int> &anios);
void generarVelocidades(vector<double> &velocidades);
void generarDistancias(vector<double> &distancias);

int main()
{
    srand(time(0));

    vector<double> voltajes(100);
    vector<double> temperaturas(50);
    vector<char> caracteres(30);
    vector<int> anios(100);
    vector<double> velocidades(32);
    vector<double> distancias(1000);

    generarVoltajes(voltajes);
    generarTemperaturas(temperaturas);
    generarCaracteres(caracteres);
    generarAnios(anios);
    generarVelocidades(velocidades);
    generarDistancias(distancias);

    return 0;
}

void generarVoltajes(vector<double> &voltajes)
{
    cout << "VOLTAJES:" << endl;

    for (int i = 0; i < 100; i++)
    {
        voltajes[i] = 20 + rand() % 201;

        cout << voltajes[i] << " ";
    }

    cout << endl << endl;
}

void generarTemperaturas(vector<double> &temperaturas)
{
    cout << "TEMPERATURAS:" << endl;

    for (int i = 0; i < 50; i++)
    {
        temperaturas[i] = rand() % 101;

        cout << temperaturas[i] << " ";
    }

    cout << endl << endl;
}

void generarCaracteres(vector<char> &caracteres)
{
    cout << "CARACTERES:" << endl;

    for (int i = 0; i < 30; i++)
    {
        int numero = rand() % 36;

        if (numero < 10)
        {
            caracteres[i] = '0' + numero;
        }
        else
        {
            caracteres[i] = 'A' + (numero - 10);
        }

        cout << caracteres[i] << " ";
    }

    cout << endl << endl;
}

void generarAnios(vector<int> &anios)
{
    cout << "ANIOS:" << endl;

    for (int i = 0; i < 100; i++)
    {
        anios[i] = 1990 + rand() % 36;

        cout << anios[i] << " ";
    }

    cout << endl << endl;
}

void generarVelocidades(vector<double> &velocidades)
{
    cout << "VELOCIDADES:" << endl;

    for (int i = 0; i < 32; i++)
    {
        velocidades[i] = 10 + rand() % 291;

        cout << velocidades[i] << " ";
    }

    cout << endl << endl;
}

void generarDistancias(vector<double> &distancias)
{
    cout << "DISTANCIAS:" << endl;

    for (int i = 0; i < 1000; i++)
    {
        distancias[i] = 1 + rand() % 1000;

        cout << distancias[i] << " ";
    }

    cout << endl;
}