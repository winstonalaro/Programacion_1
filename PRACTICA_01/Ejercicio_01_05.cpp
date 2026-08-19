#include<iostream>

using namespace std;

int main(){
    int opcion;

    cout<<"Digite un numero entre 1 y 7: "; cin>>opcion;

    switch(opcion){
        case 1:
            cout<<"\nLunes"<<endl;
            break;
        case 2:
            cout<<"\nMartes"<<endl;
            break;
        case 3:
            cout<<"\nMiercoles"<<endl;
            break;
        case 4:
            cout<<"\nJueves"<<endl;
            break;
        case 5:
            cout<<"\nViernes"<<endl;
            break;
        case 6:
            cout<<"\nSabado"<<endl;
            break;
        case 7:
            cout<<"\nDomingo"<<endl;
            break;
        default:
            cout<<"\nError tu numero fuera de rango v: ... "<<endl;
            break;
    }

    return 0;
}