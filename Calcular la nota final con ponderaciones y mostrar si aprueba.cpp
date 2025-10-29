#include <iostream>
using namespace std;

int main() {
    float p1, p2, examen, notaFinal;
    cout << "Ingrese dos parciales y examen final: ";
    cin >> p1 >> p2 >> examen;

    notaFinal = (p1 * 0.3) + (p2 * 0.3) + (examen * 0.4);

    if (notaFinal >= 7)
        cout << "Aprobado con " << notaFinal;
    else
        cout << "Reprobado con " << notaFinal;
    return 0;
}
