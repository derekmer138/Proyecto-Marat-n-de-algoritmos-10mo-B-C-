#include <iostream>
using namespace std;

int main() {
    int a, b, suma = 0;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    for (int i = a; i <= b; i++)
        if (i % 2 == 0) suma += i;

    cout << "Suma de pares: " << suma << endl;
    return 0;
}
