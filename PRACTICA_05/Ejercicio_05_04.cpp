// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 08/09/2026
// Numero de ejercicio: 4

#include<iostream>
#include<stdlib.h>

using namespace std;

// Sobrecarga 1: Cuadrado
double calcularArea(double lado){
    return lado * lado;
}

// Sobrecarga 2: Rectangulo
double calcularArea(double base, double altura){
    return base * altura;
}

// Sobrecarga 3: Circulo
float calcularArea(float radio, float pi){
    return pi * radio * radio;
}

int main(){
    double lado, base, altura;
    float radio;
    const float PI = 3.141592;

    cout<<"-- CUADRADO --"<<endl;
    cout<<"Ingrese el lado: "; cin>>lado;
    cout<<"Area del cuadrado: "<<calcularArea(lado)<<endl;

    cout<<"\n-- RECTANGULO --"<<endl;
    cout<<"Ingrese base: "; cin>>base;
    cout<<"Ingrese altura: "; cin>>altura;
    cout<<"Area del rectangulo: "<<calcularArea(base, altura)<<endl;

    cout<<"\n-- CIRCULO --"<<endl;
    cout<<"Ingrese radio: "; cin>>radio;
    cout<<"Area del circulo: "<<calcularArea(radio, PI)<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}