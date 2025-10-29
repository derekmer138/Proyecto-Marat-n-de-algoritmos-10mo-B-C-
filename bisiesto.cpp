#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    if (n <= 0) {
        cout << "Cantidad invalida." << endl;
        return 1;
    }

    int numeros[n];
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "Numeros en orden inverso: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
