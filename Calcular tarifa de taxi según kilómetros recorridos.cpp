#include <iostream>
using namespace std;

int main() {
    float km, costo;
    cout << "Ingrese kilometros recorridos: ";
    cin >> km;

    if (km <= 5)
        costo = 5;
    else if (km <= 15)
        costo = 5 + (km - 5) * 0.8;
    else
        costo = 13 + (km - 15) * 0.5;

    cout << "Costo total: $" << costo;
    return 0;
}
