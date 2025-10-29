#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;

    int mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;

    cout << "El mayor es: " << mayor;
    return 0;
}
