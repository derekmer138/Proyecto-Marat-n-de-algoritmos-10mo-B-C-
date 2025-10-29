#include <iostream>
using namespace std;

int main() {
    int horas;
    cout << "Ingrese horas de estacionamiento: ";
    cin >> horas;

    float costo = 0;
    if (horas <= 2)
        costo = horas * 1.5;
    else if (horas <= 5)
        costo = 3 + (horas - 2) * 1.2;
    else
        costo = 6.6 + (horas - 5) * 1.0;

    cout << "Costo total: $" << costo;
    return 0;
}
