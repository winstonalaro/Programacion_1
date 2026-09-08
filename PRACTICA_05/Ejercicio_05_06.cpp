// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 08/09/2026
// Numero de ejercicio: 6

#include<iostream>
#include<stdlib.h>

using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota){
    sumaTotal += nuevaNota;
    cantidadNotas++;
}

int main(){
    int n;
    double sumaTotal = 0;
    int cantidadNotas = 0;
    double nota;

    cout<<"Ingrese la cantidad de notas (N): "; cin>>n;

    for(int i = 1; i <= n; i++){
        cout<<"Ingrese la nota "<<i<<": "; cin>>nota;
        agregarNota(sumaTotal, cantidadNotas, nota);
    }

    cout<<"\n--- RESUMEN ---"<<endl;
    cout<<"Cantidad de notas ingresadas: "<<cantidadNotas<<endl;
    cout<<"Suma acumulada de notas: "<<sumaTotal<<endl;
    if(cantidadNotas > 0){
        cout<<"Promedio: "<<sumaTotal / cantidadNotas<<endl;
    }

    cout<<"\n\n";
    system("pause");
    return 0;
}