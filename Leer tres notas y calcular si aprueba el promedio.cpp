#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, prom;
    cout << "Ingrese tres notas: ";
    cin >> n1 >> n2 >> n3;

    prom = (n1 + n2 + n3) / 3;

    if (prom >= 7)
        cout << "Aprobado con promedio " << prom;
    else
        cout << "Reprobado con promedio " << prom;
    return 0;
}
