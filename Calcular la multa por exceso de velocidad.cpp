#include <iostream>
using namespace std;

int main() {
    int velocidad;
    cout << "Ingrese velocidad del vehiculo (km/h): ";
    cin >> velocidad;

    if (velocidad <= 60)
        cout << "Sin multa.";
    else if (velocidad <= 80)
        cout << "Multa leve ($50).";
    else if (velocidad <= 100)
        cout << "Multa grave ($100).";
    else
        cout << "Multa muy grave ($200).";
    return 0;
}
