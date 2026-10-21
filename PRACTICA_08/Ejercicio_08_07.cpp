// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 7

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void obtenerHashtags(string texto, vector<string> &hashtags)
{
    string palabra = "";

    for (int i = 0; i <= texto.length(); i++)
    {
        if (i < texto.length() && texto[i] != ' ')
        {
            palabra = palabra + texto[i];
        }
        else
        {
            if (palabra.length() > 0)
            {
                if (palabra[0] == '#')
                {
                    hashtags.push_back(palabra);
                }
            }

            palabra = "";
        }
    }
}

void mostrarHashtags(vector<string> hashtags)
{
    cout << "Lista de hashtags: ";

    for (int i = 0; i < hashtags.size(); i++)
    {
        cout << hashtags[i] << " ";
    }

    cout << endl;
}

int main()
{
    string texto;
    vector<string> hashtags;

    cout << "Ingrese publicacion: ";
    getline(cin, texto);

    obtenerHashtags(texto, hashtags);

    mostrarHashtags(hashtags);

    return 0;
}