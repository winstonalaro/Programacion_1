// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 30/09/2026
// Numero de ejercicio: 6

#include <iostream>
#include <vector>

using namespace std;

void leerVector(vector<int> &vector);
void sumarVectores(vector<int> vector1,vector<int> vector2,vector<int> &vector3);
void mostrarVector(vector<int> vector);

int main()
{
    vector<int> vector1(5);
    vector<int> vector2(5);
    vector<int> vector3(5);

    cout << "VECTOR 1" << endl;

    leerVector(vector1);

    cout << endl;

    cout << "VECTOR 2" << endl;

    leerVector(vector2);

    sumarVectores(vector1, vector2, vector3);

    cout << endl;

    cout << "VECTOR 3:" << endl;

    mostrarVector(vector3);

    return 0;
}

void leerVector(vector<int> &vector)
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese elemento " << i + 1 << ": ";
        cin >> vector[i];
    }
}

void sumarVectores(vector<int> vector1,vector<int> vector2,vector<int> &vector3)
{
    for (int i = 0; i < 5; i++)
    {
        vector3[i] = vector1[i] + vector2[i];
    }
}

void mostrarVector(vector<int> vector)
{
    for (int i = 0; i < 5; i++)
    {
        cout << vector[i] << " ";
    }

    cout << endl;
}