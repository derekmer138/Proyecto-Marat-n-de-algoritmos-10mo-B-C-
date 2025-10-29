#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Ingrese un caracter: ";
    cin >> c;

    if (c >= '0' && c <= '9')
        cout << "Es un numero.";
    else
        cout << "No es un numero.";
    return 0;
}
