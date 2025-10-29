#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numero;
    bool esPrimo = true;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i <= sqrt(numero); i++) {
            if (numero % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    if (esPrimo)
        cout << numero << " es primo." << endl;
    else
        cout << numero << " no es primo." << endl;

    return 0;
}
