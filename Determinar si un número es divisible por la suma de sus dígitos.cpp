#include <iostream>
using namespace std;

int main() {
    int n, suma = 0, copia;
    cout << "Ingrese un numero: ";
    cin >> n;
    copia = n;

    while (copia > 0) {
        suma += copia % 10;
        copia /= 10;
    }

    if (suma != 0 && n % suma == 0)
        cout << "Es divisible por la suma de sus digitos.";
    else
        cout << "No es divisible.";
    return 0;
}
