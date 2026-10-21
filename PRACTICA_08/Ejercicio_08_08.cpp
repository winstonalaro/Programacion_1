// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 8

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void separar(string oracion, vector<string> &palabras)
{
    string palabra = "";

    for (int i = 0; i <= oracion.length(); i++)
    {
        if (i < oracion.length() && oracion[i] != ' ')
        {
            palabra = palabra + oracion[i];
        }
        else
        {
            if (palabra != "")
            {
                palabras.push_back(palabra);
            }

            palabra = "";
        }
    }
}

bool comprobarPlagio(string oracionA, string oracionB)
{
    vector<string> palabrasA;
    vector<string> palabrasB;

    int iguales = 0;

    separar(oracionA, palabrasA);
    separar(oracionB, palabrasB);

    for (int i = 0; i < palabrasA.size(); i++)
    {
        for (int j = 0; j < palabrasB.size(); j++)
        {
            if (palabrasA[i] == palabrasB[j])
            {
                iguales++;
                break;
            }
        }
    }

    if (iguales > 3)
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
    string oracionA;
    string oracionB;

    cout << "Ingrese oracion A: ";
    getline(cin, oracionA);

    cout << "Ingrese oracion B: ";
    getline(cin, oracionB);

    if (comprobarPlagio(oracionA, oracionB))
    {
        cout << "Alerta de plagio: Verdadero" << endl;
    }
    else
    {
        cout << "Alerta de plagio: Falso" << endl;
    }

    return 0;
}