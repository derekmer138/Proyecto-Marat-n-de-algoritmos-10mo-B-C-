#include <iostream>
using namespace std;

int main() {
    float monto;
    char tarjeta;
    cout << "Ingrese monto de compra: ";
    cin >> monto;
    cout << "¿Pago con tarjeta del banco? (S/N): ";
    cin >> tarjeta;

    if (tarjeta == 'S' || tarjeta == 's')
        monto *= 0.90;

    cout << "Total a pagar: $" << monto;
    return 0;
}
