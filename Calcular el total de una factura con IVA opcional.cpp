#include <iostream>
using namespace std;

int main() {
    float subtotal;
    char aplicaIVA;
    cout << "Ingrese subtotal: ";
    cin >> subtotal;
    cout << "¿Aplica IVA? (S/N): ";
    cin >> aplicaIVA;

    if (aplicaIVA == 'S' || aplicaIVA == 's')
        subtotal *= 1.12;

    cout << "Total a pagar: $" << subtotal;
    return 0;
}
