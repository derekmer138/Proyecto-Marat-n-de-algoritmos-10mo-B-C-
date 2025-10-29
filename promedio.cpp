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

    double suma = 0;
    double numeros[n];

    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    double promedio = suma / n;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
