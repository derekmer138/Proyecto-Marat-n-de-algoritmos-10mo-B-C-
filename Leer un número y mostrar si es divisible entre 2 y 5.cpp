#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n % 2 == 0 && n % 5 == 0)
        cout << "Es divisible entre 2 y 5.";
    else
        cout << "No es divisible entre ambos.";
    return 0;
}
