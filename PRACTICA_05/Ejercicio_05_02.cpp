// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 08/09/2026
// Numero de ejercicio: 2

#include<iostream>
#include<stdlib.h>

using namespace std;

void ModificarValores(int valor, int &referencia){
    valor = valor * 2;
    referencia = referencia + 10;
    cout<<"\nDentro de la funcion:"<<endl;
    cout<<"Valor (local) = "<<valor<<endl;
    cout<<"Referencia = "<<referencia<<endl;
}

int main(){
    int num1, num2;

    cout<<"Ingrese el valor pasado por VALOR: "; cin>>num1;
    cout<<"Ingrese el valor pasado por REFERENCIA: "; cin>>num2;

    cout<<"\n--- Antes de la funcion ---"<<endl;
    cout<<"num1 = "<<num1<<" | num2 = "<<num2<<endl;

    ModificarValores(num1, num2);

    cout<<"\n--- Despues de la funcion en el main ---"<<endl;
    cout<<"num1 (sin cambio afuera) = "<<num1<<endl;
    cout<<"num2 (modificado) = "<<num2<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}