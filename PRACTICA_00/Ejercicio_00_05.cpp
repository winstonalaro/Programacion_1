#include<iostream>

using namespace std;

int main(){
    float nota1, nota2, nota3, nota4, notaMedia = 0;

    cout<<"Digite la nota del primer alumno: "; cin>>nota1;
    cout<<"Digite la nota del segundo alumno: "; cin>>nota2;
    cout<<"Digite la nota del tercer alumno: "; cin>>nota3;
    cout<<"Digite la nota del cuarto alumno: "; cin>>nota4;

    notaMedia = (nota1 + nota2 + nota3 + nota4) / 4;

    cout.precision(2);
    cout<<"\nLa nota media de los cuatro alumnos es: "<<notaMedia<<endl;

    return 0;
}