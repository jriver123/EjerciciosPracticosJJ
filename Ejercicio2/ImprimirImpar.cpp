#include <iostream>
using namespace std;

void numImpar(int num);
int main(int argc, char const *argv[])
{
    int num = 100;
    cout << "Numeros impares del 1 al " << num << " en orden descendente:" << endl;
    numImpar(num);
    return 0;
    return 0;
}
 void numImpar(int num){
    for (int i = num; i >= 1; i--) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
}