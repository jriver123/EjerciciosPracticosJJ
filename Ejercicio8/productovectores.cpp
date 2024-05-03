#include <iostream>
using namespace std;

void productoVector();

int main(int argc, char const *argv[])
{
    productoVector();
    return 0;
}

void productoVector()
{
    int n;
    int vector1[n];
    int vector2[n];
    int productopunto = 0;
    
    cout << "Digite la longitud de los vectores: ";
    cin >> n;

for (int i = 0; i < n; i++){
    cout << "Digite el valor del primer vector en la posicion "<< i + 1 << ":";
    cin >> vector1[i];
}

for (int i = 0; i < n; i++){
    cout << "Digite el valor del segundo vector en la posicion "<< i + 1 << ":";
    cin >> vector2[i];
}

for (int i = 0; i < n; i++) {
        productopunto += vector1[i] * vector2[i];
}
cout << "El producto punto de los vectores es: " << productopunto << endl;

}