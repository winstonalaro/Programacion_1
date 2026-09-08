// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 08/09/2026
// Numero de ejercicio: 5

#include<iostream>
#include<stdlib.h>

using namespace std;

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos){
    horas = totalSegundos / 3600;
    totalSegundos = totalSegundos % 3600;
    minutos = totalSegundos / 60;
    segundos = totalSegundos % 60;
}

int main(){
    int totalSeg, h, m, s;

    cout<<"Ingrese la cantidad total de segundos: "; cin>>totalSeg;

    calcularTiempo(totalSeg, h, m, s);

    cout<<"\nTiempo calculado:"<<endl;
    cout<<"Horas: "<<h<<endl;
    cout<<"Minutos: "<<m<<endl;
    cout<<"Segundos: "<<s<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}