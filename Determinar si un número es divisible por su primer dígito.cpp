#include <iostream>
using namespace std;

int main() {
    int n, primer, copia;
    cout << "Ingrese un numero: ";
    cin >> n;
    copia = n;

    while (copia >= 10)
        copia /= 10;
    primer = copia;

    if (primer != 0 && n % primer == 0)
        cout << "Es divisible por su primer digito.";
    else
        cout << "No es divisible.";
    return 0;
}
