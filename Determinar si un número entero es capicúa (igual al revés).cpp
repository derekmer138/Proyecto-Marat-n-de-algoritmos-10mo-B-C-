#include <iostream>
using namespace std;

int main() {
    int n, original, reverso = 0;
    cout << "Ingrese un numero: ";
    cin >> n;
    original = n;

    while (n > 0) {
        reverso = reverso * 10 + n % 10;
        n /= 10;
    }

    if (original == reverso)
        cout << "Es capicua.";
    else
        cout << "No es capicua.";
    return 0;
}
