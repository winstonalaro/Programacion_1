// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 6

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separarPalabras (string frase) {
    vector<string> palabras;
    string p = "";

    for(int i = 0; i < frase.length(); i++){
        if(frase[i] == ' '){
            if(p.length() > 0){
                palabras.push_back(p);
                p = "";
            }
        } else {
            p += frase[i];
        }
    }

    return palabras;
}

int main () {
    string frase;
    cout << "Ingrese una frase: " << endl;
    getline(cin, frase);

    vector<string> palabras = separarPalabras(frase);

    for(string p : palabras) {
        cout << p << " ";
    }

    cout << endl;
}