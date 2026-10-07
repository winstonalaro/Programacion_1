// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 4

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void censurarMensaje(string &mensaje, vector<string> prohibidas)
{
    int posicion;

    for (int i = 0; i < prohibidas.size(); i++)
    {
        posicion = mensaje.find(prohibidas[i]);

        while (posicion != string::npos)
        {
            mensaje.replace(posicion, prohibidas[i].size(), "***");

            posicion = mensaje.find(prohibidas[i]);
        }
    }
}

int main()
{
    string mensaje;

    vector<string> prohibidas = {"manco", "tonto", "noob"};

    cout << "Ingrese el mensaje: ";
    getline(cin, mensaje);

    censurarMensaje(mensaje, prohibidas);

    cout << "Mensaje: " << mensaje << endl;

    return 0;
}