#include <iostream>
using namespace std;

int main() {
    float consumo, total;
    cout << "Ingrese consumo en kWh: ";
    cin >> consumo;

    if (consumo <= 100)
        total = consumo * 0.10;
    else if (consumo <= 300)
        total = 100 * 0.10 + (consumo - 100) * 0.15;
    else
        total = 100 * 0.10 + 200 * 0.15 + (consumo - 300) * 0.20;

    cout << "Total a pagar: $" << total;
    return 0;
}
