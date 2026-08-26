#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    float temperatura, suma_total = 0, temperatura_media = 0;
    float mayor = -999, menor = 999;

    for(int i = 0; i < 24; i += 4){
        cout<<"Digite la temperatura de la hora "<<i<<": "; cin>>temperatura;

        suma_total += temperatura;

        if(temperatura > mayor){
            mayor = temperatura;
        }
        if(temperatura < menor){
            menor = temperatura;
        }
    }

    temperatura_media = suma_total / 6;

    cout<<"\nLa temperatura media del dia es: "<<temperatura_media<<endl;
    cout<<"La temperatura mas alta es: "<<mayor<<endl;
    cout<<"La temperatura mas baja es: "<<menor<<endl;

    getch();
    return 0;
}