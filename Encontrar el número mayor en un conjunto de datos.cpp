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

    double numeros[n];
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    double mayor = numeros[0];
    for (int i = 1; i < n; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    cout << "El numero mayor es: " << mayor << endl;

    return 0;
}
