#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n % 2 == 0 && n % 7 == 0)
        cout << "Divisible por 2 y 7.";
    else if (n % 2 == 0)
        cout << "Solo divisible por 2.";
    else if (n % 7 == 0)
        cout << "Solo divisible por 7.";
    else
        cout << "No es divisible por 2 ni por 7.";
    return 0;
}
