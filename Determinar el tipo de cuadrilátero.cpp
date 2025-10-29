#include <iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Ingrese los lados del cuadrilatero: ";
    cin >> a >> b;

    if (a == b)
        cout << "Es un cuadrado.";
    else
        cout << "Es un rectangulo.";
    return 0;
}
