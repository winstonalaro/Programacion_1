// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 08/09/2026
// Numero de ejercicio: 11

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int calcularPanales(int n1, int n2, int n3){
    return (n1 * 6) + (n2 * 3) + (n3 * 2);
}

int main(){
    srand(time(NULL));
    int n;

    cout<<"Ingrese la cantidad total de ninos (N): "; cin>>n;

    // Generacion aleatoria respetando que la suma no supere N
    int ninos1 = rand() % (n + 1);
    int ninos2 = rand() % (n - ninos1 + 1);
    int ninos3 = n - ninos1 - ninos2;

    int totalPanales = calcularPanales(ninos1, ninos2, ninos3);

    cout<<"\n--- DISTRIBUCION EN LA GUARDERIA ---"<<endl;
    cout<<"Ninos de 1 ano (6 panales/dia): "<<ninos1<<endl;
    cout<<"Ninos de 2 anos (3 panales/dia): "<<ninos2<<endl;
    cout<<"Ninos de 3 anos (2 panales/dia): "<<ninos3<<endl;
    cout<<"Total ninos: "<<ninos1 + ninos2 + ninos3<<endl;

    cout<<"\nConsumo total diario de panales: "<<totalPanales<<" PANALES"<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}