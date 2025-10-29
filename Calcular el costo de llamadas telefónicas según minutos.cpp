#include <iostream>
using namespace std;

int main() {
    int minutos;
    cout << "Ingrese minutos de llamada: ";
    cin >> minutos;

    float costo = 0;
    if (minutos <= 5)
        costo = minutos * 0.5;
    else if (minutos <= 10)
        costo = 2.5 + (minutos - 5) * 0.4;
    else
        costo = 4.5 + (minutos - 10) * 0.3;

    cout << "Costo total: $" << costo;
    return 0;
}
