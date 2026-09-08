#include<iostream>

using namespace std;

int main(){
    int n, aux, invertido = 0, digito = 0;

    cout<<"Digite un numero entero positivo: "; cin>>n;

    aux = n;

    while(aux > 0){
        invertido = (invertido * 10) + (aux % 10);
        aux /= 10;
    }

    while(invertido > 0){
        digito = invertido % 10;
        
        cout<<"\nCuadricula de "<<digito<<"x"<<digito<<":"<<endl;
        
        int i = 0;
        while(i < digito){
            int j = 0;
            while(j < digito){
                cout<<"* ";
                j++;
            }
            cout<<endl;
            i++;
        }

        invertido /= 10;
    }

    return 0;
}