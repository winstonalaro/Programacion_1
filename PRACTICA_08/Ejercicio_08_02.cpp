// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 2

#include <iostream>
#include <string>

using namespace std;

bool esSegura(string clave)
{
    bool mayuscula = false;
    bool minuscula = false;
    bool numero = false;
    bool especial = false;

    if (clave.length() < 8)
    {
        return false;
    }

    for (int i = 0; i < clave.length(); i++)
    {
        if (clave[i] >= 'A' && clave[i] <= 'Z')
        {
            mayuscula = true;
        }
        else if (clave[i] >= 'a' && clave[i] <= 'z')
        {
            minuscula = true;
        }
        else if (clave[i] >= '0' && clave[i] <= '9')
        {
            numero = true;
        }
        else
        {
            especial = true;
        }
    }

    if (mayuscula && minuscula && numero && especial)
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
    string clave;

    cout << "Ingrese una contrasenia: ";
    cin >> clave;

    if (esSegura(clave))
    {
        cout << "Contrasenia segura" << endl;
    }
    else
    {
        cout << "Contrasenia vulnerable" << endl;
    }
    return 0;
}