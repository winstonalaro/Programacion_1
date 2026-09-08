// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 08/09/2026
// Numero de ejercicio: 10

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
    int n;
    int sumaPares = 0;
    int sumaImpares = 0, contadorImpares = 0;
    int mayorPrimo = -1;

    cout<<"Ingrese la cantidad de numeros aleatorios (N): "; cin>>n;

    cout<<"\nNumeros generados:"<<endl;
    for(int i = 0; i < n; i++){
        int num = 1 + rand() % 1000;
        cout<<num<<" ";

        // a. Sumatoria de pares
        if(num % 2 == 0){
            sumaPares += num;
        } else { // b. Promedio de impares
            sumaImpares += num;
            contadorImpares++;
        }

        // c. Mayor numero primo
        if(esPrimo(num)){
            if(num > mayorPrimo){
                mayorPrimo = num;
            }
        }
    }

    cout<<"\n\n--- RESULTADOS ---"<<endl;
    cout<<"a. Sumatoria de numeros pares: "<<sumaPares<<endl;
    
    if(contadorImpares > 0){
        cout<<"b. Promedio de numeros impares: "<<(float)sumaImpares / contadorImpares<<endl;
    } else {
        cout<<"b. Promedio de numeros impares: No se generaron impares."<<endl;
    }

    if(mayorPrimo != -1){
        cout<<"c. Mayor numero primo generado: "<<mayorPrimo<<endl;
    } else {
        cout<<"c. Mayor numero primo generado: Ninguno fue primo."<<endl;
    }

    cout<<"\n\n";
    system("pause");
    return 0;
}