// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 08/09/2026
// Numero de ejercicio: 3

#include<iostream>
#include<stdlib.h>

using namespace std;

// Parametro con valor predeterminado del 13% (0.13)
double CalcularPrecioTotal(double precioBase, double impuesto = 0.13){
    return precioBase + (precioBase * impuesto);
}

int main(){
    double precio;

    cout<<"Ingrese el precio base del producto: "; cin>>precio;

    // Caso 1: Se aplica el 13% por defecto
    cout<<"\nPrecio Total con IVA automatico (13%): "<<CalcularPrecioTotal(precio)<<" Bs."<<endl;

    // Caso 2: Pasando un impuesto personalizado (ejemplo 10%)
    cout<<"Precio Total con impuesto personalizado (10%): "<<CalcularPrecioTotal(precio, 0.10)<<" Bs."<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}