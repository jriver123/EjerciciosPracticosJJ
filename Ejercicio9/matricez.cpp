#include <iostream>
using namespace std;

void multMatriz(int matriz1[][10], int matriz2[][10], int producto[][10], int filas1, int columnas1, int filas2, int columnas2);

int main(int argc, char const *argv[])
{
    int matriz1[10][10], matriz2[10][10], resultado[10][10];
    int filas1, columnas1, filas2, columnas2;

    cout << "Ingrese el numero de filas y columnas de la primer matriz: ";
    cin >> filas1 >> columnas1;

    cout << "Ingrese el numero de filas y columnas de la segunda matriz: ";
    cin >> filas2 >> columnas2;

    cout << "Ingrese los elementos de la primera matriz" << endl;
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

    multMatriz(matriz1, matriz2, resultado, filas1, columnas1, filas2, columnas2);
    return 0;
}

void multMatriz(int matriz1[][10], int matriz2[][10], int producto[][10], int filas1, int columnas1, int filas2, int columnas2)
{
    if (columnas1 != filas2) {
        cout << "Debe asegurarse de que las matrices sean compatibles...Intentar denuevo" << endl;
        return;
    }

    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            producto[i][j] = 0;
            for (int k = 0; k < columnas1; k++) {
                producto[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "La matriz resultante es:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            cout << producto[i][j] << " ";
        }
        cout << endl;
    }
}