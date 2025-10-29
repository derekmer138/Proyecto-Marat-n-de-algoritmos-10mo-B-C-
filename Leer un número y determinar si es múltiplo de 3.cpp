#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n % 3 == 0)
        cout << "Es multiplo de 3.";
    else
        cout << "No es multiplo de 3.";
    return 0;
}
