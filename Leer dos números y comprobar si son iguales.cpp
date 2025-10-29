#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    if (a == b)
        cout << "Son iguales.";
    else
        cout << "Son diferentes.";
    return 0;
}
