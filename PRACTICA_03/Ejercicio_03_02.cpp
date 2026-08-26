#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    srand(time(NULL));

    int n, numero;
    int suma_total = 0, suma_pares = 0, suma_impares = 0, suma_primos = 0;

    cout<<"Digite la cantidad de numeros aleatorios (N): "; cin>>n;

    cout<<"\nNumeros generados: ";
    for(int i = 1; i <= n; i++){
        numero = 1 + rand() % 100;
        cout<<numero<<" ";

        suma_total += numero;

        if(numero % 2 == 0){
            suma_pares += numero;
        } else {
            suma_impares += numero;
        }

        // Verificacion de numero primo
        int divisores = 0;
        for(int j = 1; j <= numero; j++){
            if(numero % j == 0){
                divisores++;
            }
        }
        if(divisores == 2){
            suma_primos += numero;
        }
    }

    cout<<"\n\n--- RESULTADOS ---"<<endl;
    cout<<"Suma de todos los numeros: "<<suma_total<<endl;
    cout<<"Suma de numeros pares: "<<suma_pares<<endl;
    cout<<"Suma de numeros impares: "<<suma_impares<<endl;
    cout<<"Suma de numeros primos: "<<suma_primos<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}