// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 2

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool verificarLongitud (string contrasenia) {
    int n = contrasenia.length();

    if(n >= 8) {
        return true;
    } else {
        return false;
    }
}

bool verificarMayuscula (string contrasenia) {
    int n = contrasenia.length();

    int mayusculas = 0;
    for(int i = 0; i < n; i++){
        if(contrasenia[i] >= 'A' || contrasenia[i] <= 'Z'){
            mayusculas++;
        }
    }

    if(mayusculas > 0){
        return true;
    } else {
        return false;
    }
}

bool verificarMinusculas (string contrasenia ) {
    int n = contrasenia.length();

    int mayusculas = 0;
    for(int i = 0; i < n; i++){
        if(contrasenia[i] >= 'a' || contrasenia[i] <= 'z'){
            mayusculas++;
        }
    }

    if(mayusculas > 0){
        return true;
    } else {
        return false;
    }
}

bool verificarNumeros (string contrasenia ) {
    int n = contrasenia.length();

    int mayusculas = 0;
    for(int i = 0; i < n; i++){
        if(contrasenia[i] >= '0' || contrasenia[i] <= '9'){
            mayusculas++;
        }
    }

    if(mayusculas > 0){
        return true;
    } else {
        return false;
    }
}

bool verificarCaracterEspecial (string contrasenia) {
    int n = contrasenia.length();

    vector<char> caracteres = {'!', '?', '.', ',', ';', ':', '(', ')'};

    int caracter = 0;
    for(int i = 0; i < n; i++){
        for(char c : caracteres){
            if(contrasenia[i] == c){
                caracter++;
            }
        }
    }

    if(caracter > 0) {
        return true;
    } else {
        return false;
    }
}

int main () {

    string contrasenia;
    cout << "Ingrese su contrasenia: " << endl;
    cin >> contrasenia;

    if(verificarLongitud(contrasenia) && verificarMayuscula(contrasenia) && verificarMinusculas(contrasenia) && verificarNumeros(contrasenia) && verificarCaracterEspecial(contrasenia)){
        cout << "Contrasenia Valida" << endl;
    } else {
        cout << "Contrasenia no valida" << endl;
    }

}