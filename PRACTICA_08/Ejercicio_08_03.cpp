// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 3

#include <iostream>
#include <string>

using namespace std;

bool validarTarjeta(string tarjeta)
{
    int suma = 0;
    int numero;

    if (tarjeta.length() != 16)
    {
        return false;
    }

    for (int i = 0; i < 16; i++)
    {
        if (tarjeta[i] < '0' || tarjeta[i] > '9')
        {
            return false;
        }

        numero = tarjeta[i] - '0';

        if (i % 2 == 0)
        {
            numero = numero * 2;

            if (numero > 9)
            {
                numero = numero - 9;
            }
        }

        suma = suma + numero;
    }

    if (suma % 10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string tarjeta;

    cout << "Ingrese los 16 digitos: ";
    cin >> tarjeta;

    if (validarTarjeta(tarjeta))
    {
        cout << "Tarjeta valida" << endl;
    }
    else
    {
        cout << "Tarjeta no valida" << endl;
    }

    return 0;
}