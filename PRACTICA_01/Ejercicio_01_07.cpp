
#include<iostream>

using namespace std;

int main(){
    int n, a, digitos = 0, suma = 0;

    cout<<"Digite un numero entero positivo: "; cin>>n;

    a = n;

    while(a > 0){
        suma += a % 10;
        digitos++;
        a /= 10;
    }

    cout<<"\nCantidad de digitos: "<<digitos<<endl;
    cout<<"Suma de sus digitos: "<<suma<<endl;

    return 0;
}