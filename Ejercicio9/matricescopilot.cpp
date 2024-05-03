/*Diseña un programa que solicite al usuario ingresar dos matrices y luego realice la multiplicación de matrices. Asegúrate de que las dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/
#include <iostream>
using namespace std;

void multiplicarMatrices(int matriz1[][10], int matriz2[][10], int resultado[][10], int filas1, int columnas1, int filas2, int columnas2) {
    if (columnas1 != filas2) {
        cout << "Error: Las matrices no son compatibles para la multiplicación." << endl;
        return;
    }

    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < columnas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "La matriz resultante es:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz1[10][10], matriz2[10][10], resultado[10][10];
    int filas1, columnas1, filas2, columnas2;

    cout << "Ingrese el número de filas y columnas de la primera matriz: ";
    cin >> filas1 >> columnas1;

    cout << "Ingrese el número de filas y columnas de la segunda matriz: ";
    cin >> filas2 >> columnas2;

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas1; j++) {
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas2; i++) {
        for (int j = 0; j < columnas2; j++) {
            cin >> matriz2[i][j];
        }
    }

    multiplicarMatrices(matriz1, matriz2, resultado, filas1, columnas1, filas2, columnas2);

    return 0;
}