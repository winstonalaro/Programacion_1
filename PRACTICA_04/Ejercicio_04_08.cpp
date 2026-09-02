#include<iostream>
#include<stdlib.h>

using namespace std;

int contarDigitos(int numero){
    int contador = 0;
    if(numero == 0){
        return 1;
    }
    while(numero > 0){
        numero /= 10;
        contador++;
    }
    return contador;
}

int main(){
    int n;

    do{
        cout<<"Digite un numero entero positivo: "; cin>>n;
    }while(n < 0);

    cout<<"\nEl numero tiene "<<contarDigitos(n)<<" digitos."<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}