#include<iostream>
#include<stdlib.h>

using namespace std;

int calcularSumatoria(int n){
    int suma = 0;
    for(int i = 1; i <= n; i++){
        suma += i;
    }
    return suma;
}

int main(){
    int n;

    do{
        cout<<"Digite un numero entero positivo: "; cin>>n;
    }while(n <= 0);

    cout<<"\nLa suma desde 1 hasta "<<n<<" es: "<<calcularSumatoria(n)<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}