#include <iostream>
using namespace std;

int main() {
    int dia;
    cout << "Ingrese el dia (1=Lunes ... 7=Domingo): ";
    cin >> dia;

    float precio = 5.0;
    if (dia == 3)
        precio *= 0.8;
    else if (dia == 7)
        precio *= 1.2;

    cout << "Precio del boleto: $" << precio;
    return 0;
}
