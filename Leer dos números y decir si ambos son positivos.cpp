#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    if (a > 0 && b > 0)
        cout << "Ambos son positivos.";
    else
        cout << "Al menos uno no es positivo.";
    return 0;
}
