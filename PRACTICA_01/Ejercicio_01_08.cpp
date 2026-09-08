#include<iostream>

using namespace std;

int main(){
    float nota;

    cout<<"Digite una nota [0 a 100]: "; cin>>nota;

    while(nota < 0 || nota > 100){
        cout<<"Nota invalida. Digite una nota [0 a 100]: "; cin>>nota;
    }

    cout<<"\nNota registrada correctamente"<<endl;

    return 0;
}