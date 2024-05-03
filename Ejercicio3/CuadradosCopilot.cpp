/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.*/

#include <iostream>
using namespace std;

int calcularSumaCuadrados(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }
    return suma;
}
int main() {
    int n = 100;
    int resultado = calcularSumaCuadrados(n);
    cout << "La suma de los cuadrados de los numeros entre 1 y " << n << " es: " << resultado << endl;
    return 0;
}