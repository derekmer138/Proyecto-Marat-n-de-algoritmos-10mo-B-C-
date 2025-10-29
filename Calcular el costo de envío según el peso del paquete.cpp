#include <iostream>
using namespace std;

int main() {
    float peso, costo;
    cout << "Ingrese el peso del paquete (kg): ";
    cin >> peso;

    if (peso <= 1)
        costo = 5;
    else if (peso <= 5)
        costo = 10;
    else if (peso <= 10)
        costo = 15;
    else
        costo = 20;

    cout << "Costo de envio: $" << costo;
    return 0;
}
