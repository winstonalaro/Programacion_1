// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 6

#include <iostream>
#include <string>

using namespace std;

string limpiarEspacios(string texto)
{
    string resultado = "";
    bool espacio = true;

    for (int i = 0; i < texto.length(); i++)
    {
        if (texto[i] != ' ')
        {
            resultado = resultado + texto[i];
            espacio = false;
        }
        else
        {
            if (espacio == false)
            {
                resultado = resultado + ' ';
                espacio = true;
            }
        }
    }

    if (resultado.length() > 0)
    {
        if (resultado[resultado.length() - 1] == ' ')
        {
            resultado.erase(resultado.length() - 1, 1);
        }
    }

    return resultado;
}

int main()
{
    string texto;

    cout << "Ingrese texto: ";
    getline(cin, texto);

    cout << "Resultado: " << limpiarEspacios(texto) << endl;

    return 0;
}