#include<iostream>
#include<cmath>

using namespace std;

int main(){
    float cateto1, cateto2, hipotenusa = 0;

    cout<<"Digite el primer cateto: "; cin>>cateto1;
    cout<<"Digite el segundo cateto: "; cin>>cateto2;

    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));

    cout.precision(2);
    cout<<"\nLa hipotenusa del triangulo es: "<<hipotenusa<<endl;

    return 0;
}