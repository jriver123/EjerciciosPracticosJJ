/*Hacer un programa que sume los números pares comprendidos entre 100 y 200.*/

#include <iostream>
using namespace std;

int sumarPares()
{
    int suma = 0;
    for (int i = 100; i <= 200; i++)
    {
        if (i % 2 == 0)
        {
            suma += i;
        }
    }
    return suma;
}

int main()
{
    int resultado = sumarPares();
    cout << "La suma de los numeros pares entre 100 y 200 es: " << resultado << endl;
    return 0;
}