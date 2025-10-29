#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n % 3 == 0 && n % 5 == 0)
        cout << "Es multiplo de 3 y 5.";
    else
        cout << "No cumple ambas condiciones.";
    return 0;
}
