#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "Ingrese el rango (a y b): ";
    cin >> a >> b;

    if (n >= a && n <= b)
        cout << "El numero esta dentro del rango.";
    else
        cout << "Fuera del rango.";
    return 0;
}
