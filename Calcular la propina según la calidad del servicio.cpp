#include <iostream>
using namespace std;

int main() {
    int calidad;
    float cuenta, total;
    cout << "Ingrese total de la cuenta: ";
    cin >> cuenta;
    cout << "Calidad del servicio (1:Malo, 2:Regular, 3:Excelente): ";
    cin >> calidad;

    if (calidad == 1)
        total = cuenta * 1.05;
    else if (calidad == 2)
        total = cuenta * 1.10;
    else if (calidad == 3)
        total = cuenta * 1.15;
    else {
        cout << "Opcion invalida.";
        return 0;
    }

    cout << "Total con propina: $" << total;
    return 0;
}
