#include <iostream>
using namespace std;

int main() {
    int anios;
    cout << "Ingrese anos de servicio: ";
    cin >> anios;

    float bono;
    if (anios < 5)
        bono = 100;
    else if (anios < 10)
        bono = 300;
    else
        bono = 600;

    cout << "Bono recibido: $" << bono;
    return 0;
}
