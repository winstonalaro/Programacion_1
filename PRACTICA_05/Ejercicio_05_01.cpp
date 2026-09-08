// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 08/09/2026
// Numero de ejercicio: 1

#include<iostream>
#include<stdlib.h>

using namespace std;

void IntercambiarValores(int &a, int &b){
    int aux = a;
    a = b;
    b = aux;
}

int main(){
    int x, y;

    cout<<"Ingrese el primer valor (x): "; cin>>x;
    cout<<"Ingrese el segundo valor (y): "; cin>>y;

    cout<<"\n--- Antes del intercambio ---"<<endl;
    cout<<"x = "<<x<<", y = "<<y<<endl;

    IntercambiarValores(x, y);

    cout<<"\n--- Despues del intercambio ---"<<endl;
    cout<<"x = "<<x<<", y = "<<y<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}