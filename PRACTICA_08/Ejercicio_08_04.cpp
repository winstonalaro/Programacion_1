// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 4

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void censurar(string &mensaje, vector<string> prohibidas)
{
    int posicion;

    for (int i = 0; i < prohibidas.size(); i++)
    {
        posicion = mensaje.find(prohibidas[i]);

        while (posicion != string::npos)
        {
            mensaje.replace(posicion, prohibidas[i].length(), "***");

            posicion = mensaje.find(prohibidas[i]);
        }
    }
}

int main()
{
    string mensaje;

    vector<string> prohibidas = {
        "manco", "tonto", "noob"
    };

    cout << "Ingrese un mensaje: ";
    getline(cin, mensaje);

    censurar(mensaje, prohibidas);

    cout << "Mensaje: " << mensaje << endl;

    return 0;
}