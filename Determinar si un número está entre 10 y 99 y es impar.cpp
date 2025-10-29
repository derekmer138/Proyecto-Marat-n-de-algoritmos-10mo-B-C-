#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n >= 10 && n <= 99 && n % 2 != 0)
        cout << "Es un numero de dos digitos impar.";
    else
        cout << "No cumple la condicion.";
    return 0;
}
