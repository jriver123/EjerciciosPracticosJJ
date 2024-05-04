/*Crea un programa que permita al usuario ingresar dos vectores de la misma longitud y 
luego calcule su producto punto. Muestra el resultado al finalizar el cálculo.*/

#include <iostream>
using namespace std;

int main() {
    int v1[10], v2[10], producto_punto = 0, n;

    cout << "Ingrese la longitud de los vectores (maximo 10): ";
    cin >> n;

    cout << "Ingrese los valores del vector v1:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    cout << "Ingrese los valores del vector v2:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    for (int i = 0; i < n; i++) {
        producto_punto += v1[i] * v2[i];
    }

    cout << "El producto punto de los dos vectores es: " << producto_punto << endl;

    return 0;
}