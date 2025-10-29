#include <iostream>
using namespace std;

int main() {
    float precio;
    char tipo;
    cout << "Ingrese precio y tipo de cliente (A/B/C): ";
    cin >> precio >> tipo;

    if (tipo == 'A') precio *= 0.9;
    else if (tipo == 'B') precio *= 0.85;
    else if (tipo == 'C') precio *= 0.8;
    else { cout << "Tipo invalido."; return 0; }

    cout << "Precio final: $" << precio;
    return 0;
}
