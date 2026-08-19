// Materia: Programacion I, Paralelo 4
// Autor: [Adhemar Winston Alaro ]
// Carrera: [Ingenieria de Sistemas]
// Fecha de Creacion: 10/08/2026

#include<iostream>

using namespace std;

int main(){
    float precio, precioFinal = 0, iva = 0.21;

    cout<<"Digite el precio del producto: "; cin>>precio;

    precioFinal = precio + (precio * iva);

    cout<<"\nEl precio del producto con IVA es: "<<precioFinal<<endl;

    return 0;
}