#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int n1, n2;

    do{
        cout<<"Digite el primer numero: "; cin>>n1;
        cout<<"Digite el segundo numero (distinto): "; cin>>n2;
    }while(n1 == n2);

    cout<<"\nSerie generada: ";
    if(n1 > n2){
        for(int i = n1; i >= n2; i--){
            cout<<i<<" ";
        }
    } else {
        for(int i = n1; i <= n2; i++){
            cout<<i<<" ";
        }
    }

    cout<<"\n\n";
    system("pause");
    return 0;
}