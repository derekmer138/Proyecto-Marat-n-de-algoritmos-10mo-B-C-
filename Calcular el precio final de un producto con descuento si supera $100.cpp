#include <iostream>
using namespace std;

int main() {
    float precio;
    cout << "Ingrese el precio: ";
    cin >> precio;

    if (precio > 100)
        precio *= 0.9; // 10% descuento

    cout << "Precio final: $" << precio;
    return 0;
}
