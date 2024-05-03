/*Desarrolla un programa que solicite al usuario ingresar dos vectores de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> sumarVectores(vector<int>& v1, vector<int>& v2) {
    if (v1.size() != v2.size()) {
        cerr << "Error: Los vectores deben tener la misma longitud." << endl;
        exit(1);
    }

    vector<int> suma(v1.size());

    for (int i = 0; i < v1.size(); i++) {
        suma[i] = v1[i] + v2[i];
    }
    return suma;
}

int main() {
    int n;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

    vector<int> v1(n), v2(n), suma(n);

    cout << "Ingrese los elementos del vector 1:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    cout << "Ingrese los elementos del vector 2:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    vector<int> resultado = sumarVectores(v1, v2);

    cout << "La suma de los vectores es:" << endl;
    for (int i = 0; i < n; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    return 0;
}