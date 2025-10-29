#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radio;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    if (radio <= 0) {
        cout << "Error: El radio debe ser positivo." << endl;
        return 1;
    }

    double area = M_PI * pow(radio, 2);
    cout << "El area del circulo es: " << area << endl;

    return 0;
}
