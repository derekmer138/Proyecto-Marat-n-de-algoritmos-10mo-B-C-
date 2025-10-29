#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n > 0 && (n & (n - 1)) == 0)
        cout << "Es potencia de 2.";
    else
        cout << "No es potencia de 2.";
    return 0;
}
