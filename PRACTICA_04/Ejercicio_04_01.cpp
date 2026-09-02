// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Carrera del estudiante: Ingenieria de sistemas
// Fecha creacion: 28/08/2026

#include<iostream>
#include<stdlib.h>

using namespace std;

float calcularAreaTriangulo(float base, float altura){
    return (base * altura) / 2.0;
}

int main(){
    float b, h;

    cout<<"Digite la base del triangulo: "; cin>>b;
    cout<<"Digite la altura del triangulo: "; cin>>h;

    cout<<"\nEl area del triangulo es: "<<calcularAreaTriangulo(b, h)<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}