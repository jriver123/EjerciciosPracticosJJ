/*Realice un programa que permita calcular y dar como salida el promedio general de una sección, tomando en cuenta que está compuesta por 
10 estudiantes y que se tiene la nota de cada uno de
ellos. */

#include <iostream>
using namespace std;

int main()
{
    float notas[100], suma = 0, promedio;

    cout << "Digite las notas de 10 estudiantes ";
    for (int i = 0; i < 10; i++)
    {
        cin >> notas[i];
        suma += notas[i];
    }

    promedio = suma / 10;
    cout << "El promedio de la seccion es de: " << promedio;

    return 0;
}