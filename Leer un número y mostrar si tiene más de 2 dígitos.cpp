#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n >= 100 || n <= -100)
        cout << "Tiene mas de dos digitos.";
    else
        cout << "Tiene dos digitos o menos.";
    return 0;
}
