#include <iostream>
using namespace std;

int main() {
    int p1, p2, p3;
    cout << "Ingrese puntajes de tres pruebas: ";
    cin >> p1 >> p2 >> p3;

    float total = p1*0.3 + p2*0.3 + p3*0.4;

    if (total >= 7)
        cout << "Aprobado con " << total;
    else
        cout << "Reprobado con " << total;
    return 0;
}
