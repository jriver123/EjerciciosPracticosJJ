#include <iostream>
using namespace std;
int notas[8];
int alumnosAprobados = 0;
int alumnosReprobados = 0;
int sumaTotal = 0;

void promedio();

int main(int argc, char const *argv[])
{
    promedio();
    return 0;
}

void promedio(){
for (int i = 0; i <8; i++)
{
    cout << "Digite las notas del estudiante" << endl;
    cin >> notas[i];
    sumaTotal = sumaTotal + notas[i];

    if (notas[i] >= 70)
    {
       alumnosAprobados ++;
    }
    else
    {
        alumnosReprobados ++;
    }
}
    cout << "Promedio general es: " << sumaTotal / 8 << endl;
    cout << "La cantidad de lumnos aprobados: " << alumnosAprobados << endl;
    cout << "La cantidad de alumnos reprobados: " << alumnosReprobados << endl;
}