// Materia: Programación I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 10/08/2026

#include<iostream>

using namespace std;

int main(){
    int anio;

    cout<<"Digite un anio (4 digitos): "; cin>>anio;

    if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){
        cout<<"\nEl anio es bisiesto"<<endl;
    }
    else{
        cout<<"\nEl anio no es bisiesto"<<endl;
    }

    return 0;
}