#include <iostream>
using namespace std;

int main() {
    int anios;
    float salario, bono;
    cout << "Ingrese años de servicio y salario: ";
    cin >> anios >> salario;

    if (anios < 3)
        bono = salario * 0.05;
    else if (anios < 10)
        bono = salario * 0.10;
    else
        bono = salario * 0.20;

    cout << "Bono anual: $" << bono;
    return 0;
}
