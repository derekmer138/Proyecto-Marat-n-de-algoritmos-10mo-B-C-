#include <iostream>
using namespace std;

int main() {
    int mes;
    cout << "Ingrese el numero del mes (1-12): ";
    cin >> mes;

    if (mes == 12 || mes == 1 || mes == 2)
        cout << "Invierno.";
    else if (mes >= 3 && mes <= 5)
        cout << "Primavera.";
    else if (mes >= 6 && mes <= 8)
        cout << "Verano.";
    else if (mes >= 9 && mes <= 11)
        cout << "Otono.";
    else
        cout << "Mes invalido.";
    return 0;
}
