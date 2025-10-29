#include <iostream>
using namespace std;

int main() {
    int edad;
    char tieneLicencia;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Tiene licencia? (s/n): ";
    cin >> tieneLicencia;

    if (edad >= 18 && (tieneLicencia == 's' || tieneLicencia == 'S'))
        cout << "Puede conducir.";
    else
        cout << "No puede conducir.";
    return 0;
}
