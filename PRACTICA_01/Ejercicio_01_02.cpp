#include<iostream>

using namespace std;

int main(){
    float precio, precioFinal = 0, iva = 0.13;

    cout<<"Digite el precio del producto: "; cin>>precio;

    precioFinal = precio + (precio * iva);

    cout<<"\nEl precio del producto con IVA es: "<<precioFinal<<endl;

    return 0;
}