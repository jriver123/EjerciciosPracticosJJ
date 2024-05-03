/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70 */

#include <iostream>
using namespace std;

int main() {
    int passed = 0, failed = 0, total = 0, score;
    const int MIN_PASS = 70;

    // Input scores for each student
    for (int i = 0; i < 8; i++) {
        cout << "Enter student score: ";
        cin >> score;

        // Calculate passed, failed, and total
        if (score >= MIN_PASS) {
            passed++;
        } else {
            failed++;
        }
        total += score;
    }

    // Calculate average
    double average = static_cast<double>(total) / 8;

    // Print results
    cout << "Number of students passed: " << passed << endl;
    cout << "Number of students failed: " << failed << endl;
    cout << "Average score: " << average << endl;

    return 0;
}