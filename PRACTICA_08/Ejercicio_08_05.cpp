// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 5

#include <iostream>
#include <string>

using namespace std;

void separarURL(string url)
{
    int posProtocolo;
    int posRuta;

    string protocolo;
    string dominio;
    string ruta;

    posProtocolo = url.find("://");

    protocolo = url.substr(0, posProtocolo);

    posRuta = url.find("/", posProtocolo + 3);

    dominio = url.substr(posProtocolo + 3,
                         posRuta - (posProtocolo + 3));

    ruta = url.substr(posRuta);

    cout << "Protocolo: " << protocolo << endl;
    cout << "Dominio: " << dominio << endl;
    cout << "Ruta: " << ruta << endl;
}

int main()
{
    string url;

    cout << "Ingrese URL: ";
    cin >> url;

    separarURL(url);

    return 0;
}