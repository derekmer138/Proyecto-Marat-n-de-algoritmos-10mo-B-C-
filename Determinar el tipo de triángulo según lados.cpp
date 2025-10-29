#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingrese tres lados: ";
    cin >> a >> b >> c;

    if (a == b && b == c) cout << "Equilatero.";
    else if (a == b || b == c || a == c) cout << "Isosceles.";
    else cout << "Escaleno.";
    return 0;
}
