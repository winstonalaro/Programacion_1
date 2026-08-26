#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int n, factorial = 1, suma = 0;

    cout<<"Digite el numero de elementos: "; cin>>n;

    for(int i = 1; i <= n; i++){
        factorial *= i;
        suma += factorial;
    }

    cout<<"\nLa suma de factoriales es: "<<suma<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}