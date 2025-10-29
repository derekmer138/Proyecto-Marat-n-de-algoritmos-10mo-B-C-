#include <iostream>
using namespace std;

int main() {
    int opcion;
    double temp, resultado;

    cout << "Conversor de Temperatura" << endl;
    cout << "1. Celsius a Fahrenheit" << endl;
    cout << "2. Fahrenheit a Celsius" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    cout << "Ingrese la temperatura: ";
    cin >> temp;

    if (opcion == 1) {
        resultado = (temp * 9.0/5.0) + 32;
        cout << temp << " °C = " << resultado << " °F" << endl;
    } else if (opcion == 2) {
        resultado = (temp - 32) * 5.0/9.0;
        cout << temp << " °F = " << resultado << " °C" << endl;
    } else {
        cout << "Opcion invalida" << endl;
    }

    return 0;
}
