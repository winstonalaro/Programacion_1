#include<iostream>
#include<stdlib.h>

using namespace std;

float leerNotaValida(string mensaje){
    float nota;
    do{
        cout<<mensaje; cin>>nota;
    }while(nota < 0 || nota > 100);
    return nota;
}

int main(){
    int n;
    int aprobados = 0, reprobados = 0;
    float sumaNotasFinales = 0;

    cout<<"Digite la cantidad de estudiantes (N): "; cin>>n;

    for(int i = 1; i <= n; i++){
        cout<<"\n--- ESTUDIANTE "<<i<<" ---"<<endl;
        float p1 = leerNotaValida("Digite Nota Parcial 1 (0-100): ");
        float p2 = leerNotaValida("Digite Nota Parcial 2 (0-100): ");
        float p3 = leerNotaValida("Digite Nota Parcial 3 (0-100): ");
        
        float ef = 0;
        float notaFinal = 0;
        bool puedeDarFinal = true;

        if(p1 < 60 || p2 < 60 || p3 < 60){
            puedeDarFinal = false;
        }

        if(puedeDarFinal){
            ef = leerNotaValida("Digite Nota Examen Final (0-100): ");
            float promedioParciales = (p1 + p2 + p3) / 3.0;
            notaFinal = (promedioParciales * 0.5) + (ef * 0.5);
        } else {
            float promedioParciales = (p1 + p2 + p3) / 3.0;
            notaFinal = promedioParciales * 0.5; // Sin el examen final
        }

        cout<<"\nResultados Estudiante "<<i<<":"<<endl;
        cout<<"Parcial 1: "<<p1<<" | Parcial 2: "<<p2<<" | Parcial 3: "<<p3<<endl;
        
        if(puedeDarFinal){
            cout<<"Examen Final: "<<ef<<endl;
        } else {
            cout<<"Examen Final: No habilitado (Parciales menores a 60)"<<endl;
        }

        cout<<"Nota Final: "<<notaFinal<<endl;

        if(puedeDarFinal && notaFinal >= 51){
            cout<<"Estado: APROBADO"<<endl;
            aprobados++;
        } else {
            cout<<"Estado: REPROBADO"<<endl;
            reprobados++;
        }

        sumaNotasFinales += notaFinal;
    }

    cout<<"\n================ RESUMEN ACADEMICO UCB ================"<<endl;
    cout<<"Porcentaje de Aprobados: "<<(aprobados * 100.0) / n<<"%"<<endl;
    cout<<"Porcentaje de Reprobados: "<<(reprobados * 100.0) / n<<"%"<<endl;
    cout<<"Promedio de Notas Finales: "<<sumaNotasFinales / n<<endl;

    cout<<"\n\n";
    system("pause");
    return 0;
}