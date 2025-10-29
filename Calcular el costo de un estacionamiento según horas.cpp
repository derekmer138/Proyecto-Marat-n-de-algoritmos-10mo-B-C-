#include <iostream>
using namespace std;

int main() {
    int horas;
    cout << "Ingrese las horas de estacionamiento: ";
    cin >> horas;

    float total;
    if (horas <= 2)
        total = horas * 1.5;
    else if (horas <= 5)
        total = 3 + (horas - 2) * 1;
    else
        total = 6 + (horas - 5) * 0.75;

    cout << "Costo total: $" << total;
    return 0;
}
