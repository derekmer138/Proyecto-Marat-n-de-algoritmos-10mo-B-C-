#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;

    int mayor = a, menor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    cout << "Mayor: " << mayor << ", Menor: " << menor;
    return 0;
}
