// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 8

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void separarPalabras(string texto, vector<string> &palabras)
{
    string palabra = "";

    for (int i = 0; i <= texto.size(); i++)
    {
        if (i < texto.size() && texto[i] != ' ')
        {
            palabra = palabra + texto[i];
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

bool compararOraciones(string oracionA, string oracionB)
{
    vector<string> palabrasA;
    vector<string> palabrasB;

    int contador = 0;

    separarPalabras(oracionA, palabrasA);
    separarPalabras(oracionB, palabrasB);

    for (int i = 0; i < palabrasA.size(); i++)
    {
        for (int j = 0; j < palabrasB.size(); j++)
        {
            if (palabrasA[i] == palabrasB[j])
            {
                contador++;
                break;
            }
        }
    }

    if (contador > 3)
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

    cout << "Ingrese la oracion A: ";
    getline(cin, oracionA);

    cout << "Ingrese la oracion B: ";
    getline(cin, oracionB);

    if (compararOraciones(oracionA, oracionB))
    {
        cout << "Alerta de plagio: Verdadero" << endl;
    }
    else
    {
        cout << "Alerta de plagio: Falso" << endl;
    }

    return 0;
}