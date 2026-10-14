// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 3

#include <iostream>
#include <vector>

using namespace std;

void leerCalificaciones(vector<double> &calificaciones, int n);
double calcularSuma(vector<double> calificaciones, int n);
double calcularPromedio(double suma, int n);
void calcularDesviaciones(vector<double> calificaciones,vector<double> &desviaciones,double promedio,int n);
void mostrarDatos(vector<double> calificaciones,vector<double> desviaciones,int n);
double calcularVarianza(vector<double> desviaciones, int n);

int main()
{
    int n;

    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> n;

    vector<double> calificaciones(n);
    vector<double> desviaciones(n);

    leerCalificaciones(calificaciones, n);

    double suma = calcularSuma(calificaciones, n);

    double promedio = calcularPromedio(suma, n);

    calcularDesviaciones(calificaciones, desviaciones, promedio, n);

    double varianza = calcularVarianza(desviaciones, n);

    cout << endl;

    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Varianza: " << varianza << endl;

    cout << endl;

    mostrarDatos(calificaciones, desviaciones, n);

    return 0;
}

void leerCalificaciones(vector<double> &calificaciones, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese calificacion " << i + 1 << ": ";
        cin >> calificaciones[i];
    }
}

double calcularSuma(vector<double> calificaciones, int n)
{
    double suma = 0;

    for (int i = 0; i < n; i++)
    {
        suma = suma + calificaciones[i];
    }

    return suma;
}

double calcularPromedio(double suma, int n)
{
    double promedio;

    promedio = suma / n;

    return promedio;
}

void calcularDesviaciones(vector<double> calificaciones,
                          vector<double> &desviaciones,
                          double promedio,
                          int n)
{
    for (int i = 0; i < n; i++)
    {
        desviaciones[i] = calificaciones[i] - promedio;
    }
}

void mostrarDatos(vector<double> calificaciones,
                  vector<double> desviaciones,
                  int n)
{
    cout << "CALIFICACION - DESVIACION" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << calificaciones[i]
             << " - "
             << desviaciones[i]
             << endl;
    }
}

double calcularVarianza(vector<double> desviaciones, int n)
{
    double suma = 0;

    for (int i = 0; i < n; i++)
    {
        suma = suma + desviaciones[i] * desviaciones[i];
    }

    return suma / n;
}