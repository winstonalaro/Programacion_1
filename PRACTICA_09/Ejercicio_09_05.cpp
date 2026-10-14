// Materia: Programacion I, Paralelo 4
// Autor: Adhemar Winston Alaro Anconi
// Fecha creacion: 14/10/2026
// Numero de ejercicio: 5

#include <iostream>

using namespace std;

void iniciarSala(int sala[5][5]);
void mostrarSala(int sala[5][5]);
void comprarEntrada(int sala[5][5]);
void estadisticas(int sala[5][5]);

int main()
{
    int sala[5][5];
    int opcion;

    iniciarSala(sala);

    do
    {
        cout << endl;
        cout << "1. Mostrar sala" << endl;
        cout << "2. Comprar entrada" << endl;
        cout << "3. Estadisticas" << endl;
        cout << "4. Salir" << endl;

        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1)
        {
            mostrarSala(sala);
        }
        else if (opcion == 2)
        {
            comprarEntrada(sala);
        }
        else if (opcion == 3)
        {
            estadisticas(sala);
        }

    } while (opcion != 4);

    return 0;
}

void iniciarSala(int sala[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sala[i][j] = 0;
        }
    }
}

void mostrarSala(int sala[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (sala[i][j] == 0)
            {
                cout << "L\t";
            }
            else
            {
                cout << "O\t";
            }
        }

        cout << endl;
    }
}

void comprarEntrada(int sala[5][5])
{
    int fila, asiento;

    cout << "Ingrese fila (1-5): ";
    cin >> fila;

    cout << "Ingrese asiento (1-5): ";
    cin >> asiento;

    fila = fila - 1;
    asiento = asiento - 1;

    if (sala[fila][asiento] == 0)
    {
        sala[fila][asiento] = 1;
        cout << "Reserva exitosa" << endl;
    }
    else
    {
        cout << "Asiento no disponible" << endl;
    }
}

void estadisticas(int sala[5][5])
{
    int libres = 0;
    int ocupados = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (sala[i][j] == 0)
            {
                libres++;
            }
            else
            {
                ocupados++;
            }
        }
    }

    double porcentajeLibres = libres * 100.0 / 25;
    double porcentajeOcupados = ocupados * 100.0 / 25;

    cout << "Asientos libres: " << libres << endl;
    cout << "Asientos ocupados: " << ocupados << endl;
    cout << "Porcentaje libres: " << porcentajeLibres << "%" << endl;
    cout << "Porcentaje ocupados: " << porcentajeOcupados << "%" << endl;
}