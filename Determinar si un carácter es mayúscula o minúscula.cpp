#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char c;
    cout << "Ingrese una letra: ";
    cin >> c;

    if (isupper(c))
        cout << "Es mayuscula.";
    else if (islower(c))
        cout << "Es minuscula.";
    else
        cout << "No es una letra.";
    return 0;
}
