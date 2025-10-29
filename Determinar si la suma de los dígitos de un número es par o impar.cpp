#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese un numero: ";
    cin >> n;

    while (n != 0) {
        suma += n % 10;
        n /= 10;
    }

    if (suma % 2 == 0)
        cout << "La suma de los digitos es par.";
    else
        cout << "La suma de los digitos es impar.";
    return 0;
}
