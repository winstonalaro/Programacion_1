#include<iostream>
#include<stdlib.h>

using namespace std;

int obtenerMayor(int n1, int n2, int n3){
    int mayor = n1;
    if(n2 > mayor){
        mayor = n2;
    }
    if(n3 > mayor){
        mayor = n3;
    }
    return mayor;
}

int main(){
    int a, b, c;

    cout<<"Digite el primer numero: "; cin>>a;
    cout<<"Digite el segundo numero: "; cin>>b;
    cout<<"Digite el tercer numero: "; cin>>c;

    cout<<"\nEl numero mayor es: "<<obtenerMayor(a, b, c)<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}