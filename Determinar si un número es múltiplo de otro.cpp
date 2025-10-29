#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    if (b != 0 && a % b == 0)
        cout << a << " es multiplo de " << b;
    else
        cout << "No es multiplo.";
    return 0;
}
