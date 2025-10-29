#include <iostream>
using namespace std;

int main() {
    float monto, total;
    cout << "Ingrese el monto de la compra: ";
    cin >> monto;

    if (monto < 100)
        total = monto;
    else if (monto <= 500)
        total = monto * 0.9;
    else
        total = monto * 0.8;

    cout << "Total a pagar: $" << total;
    return 0;
}
