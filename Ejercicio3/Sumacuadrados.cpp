#include <iostream>
using namespace std;

int sumaCuadra(int num);

int main(int argc, char const *argv[])
{
int num = 100;
int total = sumaCuadra(num);
cout << "La suma de los numeros cuadrados del 1 al " << num << " es: " << total << endl;
return 0;
}

int sumaCuadra(int num) {
    int suma = 0;
    for (int i = 1; i <= num; i++) {
        suma += i * i;
    }
    return suma;
}