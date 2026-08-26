// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro
// Carrera del estudiante: Ingenieria de Sistemas 
// Fecha creacion: 17/08/2026

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numero, conteo = 0;

    do{
        cout<<"Digite un numero: "; cin>>numero;

        if(numero > 0){
            conteo++;
        }
    }while(numero != 0);

    cout<<"\nEl numero de valores mayores que cero leidos es: "<<conteo<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}