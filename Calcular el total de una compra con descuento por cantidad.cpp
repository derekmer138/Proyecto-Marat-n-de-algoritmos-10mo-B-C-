#include <iostream>
using namespace std;

int main() {
    int cantidad;
    float precioUnit;
    cout << "Ingrese cantidad y precio unitario: ";
    cin >> cantidad >> precioUnit;

    float total = cantidad * precioUnit;

    if (cantidad >= 10 && cantidad < 20)
        total *= 0.95;
    else if (cantidad >= 20)
        total *= 0.90;

    cout << "Total a pagar: $" << total;
    return 0;
}
