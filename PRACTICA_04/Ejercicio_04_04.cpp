#include<iostream>
#include<stdlib.h>

using namespace std;

float convertirADolares(float bolivianos, float tipoCambio){
    return bolivianos / tipoCambio;
}

int main(){
    float montoBs, tcOficial, tcParalelo;

    cout<<"Digite el monto en bolivianos: "; cin>>montoBs;
    cout<<"Digite el tipo de cambio oficial: "; cin>>tcOficial;
    cout<<"Digite el tipo de cambio paralelo: "; cin>>tcParalelo;

    cout<<"\nMonto al tipo de cambio oficial: $USD "<<convertirADolares(montoBs, tcOficial)<<endl;
    cout<<"Monto al tipo de cambio paralelo: $USD "<<convertirADolares(montoBs, tcParalelo)<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}