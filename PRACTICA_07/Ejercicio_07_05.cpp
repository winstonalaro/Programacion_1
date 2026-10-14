// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 5

#include <iostream>
#include <vector>

using namespace std;

void leerVector(vector<int> &vector, int n);
void combinarVectores(vector<int> vector1,vector<int> vector2,vector<int> &vector3,int n);
void mostrarVector(vector<int> vector, int n);

int main()
{
    int n;

    cout << "Ingrese la dimension de los vectores: ";
    cin >> n;

    vector<int> vector1(n);
    vector<int> vector2(n);
    vector<int> vector3(n * 2);

    cout << endl;
    cout << "VECTOR 1" << endl;

    leerVector(vector1, n);

    cout << endl;
    cout << "VECTOR 2" << endl;

    leerVector(vector2, n);

    combinarVectores(vector1, vector2, vector3, n);

    cout << endl;
    cout << "VECTOR COMBINADO:" << endl;

    mostrarVector(vector3, n * 2);

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

void combinarVectores(vector<int> vector1,vector<int> vector2,vector<int> &vector3,int n)
{
    for (int i = 0; i < n; i++)
    {
        vector3[i] = vector1[i];
    }

    for (int i = 0; i < n; i++)
    {
        vector3[i + n] = vector2[i];
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