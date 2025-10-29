#include <iostream>
using namespace std;

int main() {
    float m3, total;
    cout << "Ingrese metros cubicos consumidos: ";
    cin >> m3;

    if (m3 <= 20)
        total = m3 * 0.5;
    else if (m3 <= 50)
        total = 10 + (m3 - 20) * 0.7;
    else
        total = 31 + (m3 - 50) * 1.0;

    cout << "Total a pagar: $" << total;
    return 0;
}
