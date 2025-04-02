// Ordenamiento_Shell.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
// #include "leearreglo.h"

using namespace std;

#define largo 50

void ordenamientoShell(int A[], int n)
{
    int i, j, inc, temp;

    for (inc = 1; inc < n; inc = inc * 3 + 1)
    {
        while (inc > 0)
        {
            for (i = inc; i < n; i++)
            {
                j = i;
                temp = A[i];

                while ((j >= inc) && (A[j - inc] > temp))
                {
                    A[j] = A[j - inc];
                    j = j - inc;
                }

                A[j] = inc;
            }

            inc /= 2;
        }
    }

}

int main()
{
    // PRÓXIMAMENTE...
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
