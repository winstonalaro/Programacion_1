#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numero, suma_divisores = 0;

    cout<<"Digite un numero: "; cin>>numero;

    for(int i = 1; i < numero; i++){
        if(numero % i == 0){
            suma_divisores += i;
        }
    }

    if(suma_divisores == numero){
        cout<<"\nEl numero "<<numero<<" es perfecto."<<endl;
    } else {
        cout<<"\nEl numero "<<numero<<" NO es perfecto ."<<endl;
    }

    cout<<"\n\n";
    system("pause");
    return 0;
}