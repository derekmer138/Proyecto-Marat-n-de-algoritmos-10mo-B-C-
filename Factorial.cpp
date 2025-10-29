#include <iostream>
using namespace std;

int main() {
    int numero;
    long long factorial = 1;

    cout << "Introduce un número para calcular su factorial: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no existe para números negativos." << endl;
    } else {
        for (int i = 1; i <= numero; ++i) {
            factorial *= i;
        }
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }

    return 0;
}
