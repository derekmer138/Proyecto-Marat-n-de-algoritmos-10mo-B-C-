#include <iostream>
using namespace std;

int main() {
    float precio;
    int tipo;
    cout << "Ingrese precio base: ";
    cin >> precio;
    cout << "Tipo de producto (1: basico, 2: general, 3: lujo): ";
    cin >> tipo;

    float iva;
    switch (tipo) {
        case 1: iva = 0.05; break;
        case 2: iva = 0.12; break;
        case 3: iva = 0.25; break;
        default: iva = 0; cout << "Tipo invalido."; return 0;
    }

    cout << "Total con IVA: $" << precio * (1 + iva);
    return 0;
}
