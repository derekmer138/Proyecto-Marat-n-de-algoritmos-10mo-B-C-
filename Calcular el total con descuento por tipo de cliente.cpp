#include <iostream>
using namespace std;

int main() {
    char tipo;
    float compra;
    cout << "Ingrese tipo de cliente (A/B/C) y monto: ";
    cin >> tipo >> compra;

    switch (tipo) {
        case 'A': compra *= 0.9; break;
        case 'B': compra *= 0.85; break;
        case 'C': compra *= 0.8; break;
        default: cout << "Tipo invalido."; return 0;
    }

    cout << "Total a pagar: $" << compra;
    return 0;
}
