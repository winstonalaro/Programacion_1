// Materia: Programacion I, Paralelo 4
// Autor:Adhemar Winston Alaro
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creacion: 21/08/2026

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numero;

    do{
        cout<<"Digite un numero (1 a 10): "; cin>>numero;
    }while((numero < 1) || (numero > 10));

    for(int i = 1; i <= 10; i++){
        cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
    }

    cout<<"\n\n";
    system("pause");
    return 0;
}