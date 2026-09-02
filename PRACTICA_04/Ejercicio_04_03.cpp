#include<iostream>
#include<stdlib.h>

using namespace std;

const float PI = 3.141592;

float calcularVolumenCilindro(float radio, float altura){
    return PI * radio * radio * altura;
}

int main(){
    float r, h;

    cout<<"Digite el radio del cilindro: "; cin>>r;
    cout<<"Digite la altura del cilindro: "; cin>>h;

    cout<<"\nEl volumen del cilindro es: "<<calcularVolumenCilindro(r, h)<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}