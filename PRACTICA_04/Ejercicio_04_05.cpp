#include<iostream>
#include<stdlib.h>

using namespace std;

bool esPar(int numero){
    if(numero % 2 == 0){
        return true;
    } else {
        return false;
    }
}

int main(){
    int n;

    cout<<"Digite un numero entero: "; cin>>n;

    if(esPar(n)){
        cout<<"\nEl numero es PAR (true)"<<endl;
    } else {
        cout<<"\nEl numero es IMPAR (false)"<<endl;
    }

    cout<<"\n\n";
    system("pause");
    return 0;
}