#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int x, y, elevacion = 1;

    cout<<"Digite el valor de x (base): "; cin>>x;
    cout<<"Digite el valor de y (exponente): "; cin>>y;

    for(int i = 1; i <= y; i++){
        elevacion *= x;
    }

    cout<<"\nEl resultado de "<<x<<"^"<<y<<" es: "<<elevacion<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}