#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    if (a < 0 || b < 0)
        cout << "Al menos uno es negativo.";
    else
        cout << "Ninguno es negativo.";
    return 0;
}
