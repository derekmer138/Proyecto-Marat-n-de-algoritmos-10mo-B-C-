#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Ingrese una letra: ";
    cin >> c;

    if (c >= 'A' && c <= 'Z')
        cout << "Es mayuscula.";
    else if (c >= 'a' && c <= 'z')
        cout << "Es minuscula.";
    else
        cout << "No es una letra.";
    return 0;
}
