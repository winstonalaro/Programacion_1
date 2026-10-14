// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 4

#include <iostream>
#include <vector>

using namespace std;

void leerVector(vector<int> &vector, int n);
void multiplicarVectores(vector<int> vector1,vector<int> vector2,vector<int> &resultado,int n);
void mostrarVector(vector<int> vector, int n);
int main()
{
    int n;

    cout << "Ingrese la dimension de los vectores: ";
    cin >> n;

    vector<int> vector1(n);
    vector<int> vector2(n);
    vector<int> resultado(n);

    cout << endl;
    cout << "VECTOR 1" << endl;

    leerVector(vector1, n);

    cout << endl;
    cout << "VECTOR 2" << endl;

    leerVector(vector2, n);

    multiplicarVectores(vector1, vector2, resultado, n);

    cout << endl;
    cout << "RESULTADO:" << endl;

    mostrarVector(resultado, n);

    return 0;
}

void leerVector(vector<int> &vector, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese elemento " << i + 1 << ": ";
        cin >> vector[i];
    }
}

void multiplicarVectores(vector<int> vector1,vector<int> vector2,vector<int> &resultado,int n)
{
    for (int i = 0; i < n; i++)
    {
        resultado[i] = vector1[i] * vector2[i];
    }
}

void mostrarVector(vector<int> vector, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << vector[i] << " ";
    }

    cout << endl;
}