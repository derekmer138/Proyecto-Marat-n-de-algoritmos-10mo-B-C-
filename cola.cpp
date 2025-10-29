#include <iostream>
using namespace std;

int main() {
    double compra, total;
    cout << "Ingrese el valor de la compra: ";
    cin >> compra;

    if (compra > 100)
        total = compra * 0.90;
    else
        total = compra;

    cout << "Total a pagar: $" << total << endl;
    return 0;
}
