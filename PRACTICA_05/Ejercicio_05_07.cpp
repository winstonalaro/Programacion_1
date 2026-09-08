// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 08/09/2026
// Numero de ejercicio: 7

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void simularMoneda(int n, int &caras, int &cruces){
    caras = 0;
    cruces = 0;
    for(int i = 0; i < n; i++){
        int resultado = rand() % 2; // 0 para Cara, 1 para Cruz
        if(resultado == 0){
            caras++;
        } else {
            cruces++;
        }
    }
}

int main(){
    srand(time(NULL));
    int n, caras, cruces;

    cout<<"Ingrese la cantidad de lanzamientos (N): "; cin>>n;

    simularMoneda(n, caras, cruces);

    cout<<"\n--- RESULTADOS DEL LANZAMIENTO ---"<<endl;
    cout<<"Cantidad de Caras: "<<caras<<" ("<<(caras * 100.0) / n<<"%)"<<endl;
    cout<<"Cantidad de Cruces: "<<cruces<<" ("<<(cruces * 100.0) / n<<"%)"<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}