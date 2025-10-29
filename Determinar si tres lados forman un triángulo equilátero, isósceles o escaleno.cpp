#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Ingrese tres lados: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "Triangulo equilatero.";
    else if (a == b || b == c || a == c)
        cout << "Triangulo isosceles.";
    else
        cout << "Triangulo escaleno.";
    return 0;
}
