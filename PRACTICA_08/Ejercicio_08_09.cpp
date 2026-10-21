// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 9

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string pasarMinuscula(string texto)
{
    for (int i = 0; i < texto.length(); i++)
    {
        if (texto[i] >= 'A' && texto[i] <= 'Z')
        {
            texto[i] = texto[i] + 32;
        }
    }

    return texto;
}

void buscarContactos(vector<string> contactos, string prefijo)
{
    string contacto;
    string inicio;

    prefijo = pasarMinuscula(prefijo);

    cout << "Resultados:" << endl;

    for (int i = 0; i < contactos.size(); i++)
    {
        contacto = pasarMinuscula(contactos[i]);

        inicio = contacto.substr(0, 3);

        if (inicio == prefijo)
        {
            cout << contactos[i] << endl;
        }
    }
}

int main()
{
    vector<string> contactos = {
        "Marcelo",
        "Maria",
        "Martin",
        "Juan",
        "Marcos",
        "Pedro"
    };

    string prefijo;

    cout << "Ingrese prefijo de 3 letras: ";
    cin >> prefijo;

    buscarContactos(contactos, prefijo);

    return 0;
}