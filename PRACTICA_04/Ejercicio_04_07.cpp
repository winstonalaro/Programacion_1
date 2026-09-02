#include<iostream>
#include<stdlib.h>

using namespace std;

float calcularDistancia(float velocidad, float tiempo){
    return velocidad * tiempo;
}

int main(){
    float v, t;

    cout<<"Digite la velocidad constante (v): "; cin>>v;
    cout<<"Digite el tiempo (t): "; cin>>t;

    cout<<"\nLa distancia recorrida es: "<<calcularDistancia(v, t)<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}