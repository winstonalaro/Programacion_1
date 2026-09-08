// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 08/09/2026
// Numero de ejercicio: 8

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

long long calcularFactorial(int n){
    long long fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    srand(time(NULL));

    // Aleatorio entre 1 y 10
    int num = 1 + rand() % 10;

    cout<<"Numero aleatorio generado: "<<num<<endl;
    cout<<"El factorial de "<<num<<"! es: "<<calcularFactorial(num)<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}