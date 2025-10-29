#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    if (b != 0 && a % b == 0)
        cout << a << " es divisible por " << b;
    else if (a != 0 && b % a == 0)
        cout << b << " es divisible por " << a;
    else
        cout << "Ninguno es divisor del otro.";
    return 0;
}
