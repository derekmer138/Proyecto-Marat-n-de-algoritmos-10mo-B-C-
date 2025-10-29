#include <iostream>
using namespace std;

int main() {
    float largo, ancho;
    cout << "Ingrese largo y ancho del rectangulo: ";
    cin >> largo >> ancho;

    float perimetro = 2 * (largo + ancho);
    cout << "Perimetro: " << perimetro << endl;

    return 0;
}
