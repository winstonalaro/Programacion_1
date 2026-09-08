// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 08/09/2026
// Numero de ejercicio: 9

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

bool esPrimo(int numero){
    if(numero <= 1){
        return false;
    }
    for(int i = 2; i * i <= numero; i++){
        if(numero % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    srand(time(NULL));
    int n, contadorPrimos = 0;

    cout<<"Ingrese la cantidad de numeros aleatorios (N): "; cin>>n;

    cout<<"\nNumeros generados:"<<endl;
    for(int i = 0; i < n; i++){
        int num = 1 + rand() % 10000;
        cout<<num<<" ";

        if(esPrimo(num)){
            contadorPrimos++;
        }
    }

    cout<<"\n\nTotal de numeros primos encontrados: "<<contadorPrimos<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}