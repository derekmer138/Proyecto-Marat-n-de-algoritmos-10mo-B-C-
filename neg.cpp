#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, prom;
    cout << "Ingrese tres notas: ";
    cin >> n1 >> n2 >> n3;

    prom = (n1 + n2 + n3) / 3;

    cout << "Promedio: " << prom << endl;
    if (prom >= 7)
        cout << "Aprobado." << endl;
    else
        cout << "Reprobado." << endl;

    return 0;
}
