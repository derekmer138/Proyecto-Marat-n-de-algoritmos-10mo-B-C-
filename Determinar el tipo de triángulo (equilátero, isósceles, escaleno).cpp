#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Ingrese los tres lados: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "Equilatero.";
    else if (a == b || a == c || b == c)
        cout << "Isosceles.";
    else
        cout << "Escaleno.";
    return 0;
}
