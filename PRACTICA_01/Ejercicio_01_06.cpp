
#include<iostream>

using namespace std;

int main(){
    int numero;

    cout<<"Digite un numero entero: "; cin>>numero;

    if(numero % 2 == 0){
        cout<<"\nEl numero es par"<<endl;
    }
    else{
        cout<<"\nEl numero es impar"<<endl;
    }

    return 0;
}