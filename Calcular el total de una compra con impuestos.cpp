#include <iostream>
using namespace std;

int main() {
    float compra, total;
    char region;
    cout << "Ingrese monto y region (A/B): ";
    cin >> compra >> region;

    if (region == 'A')
        total = compra * 1.10;
    else if (region == 'B')
        total = compra * 1.15;
    else {
        cout << "Region invalida.";
        return 0;
    }

    cout << "Total con impuestos: $" << total;
    return 0;
}
