#include <iostream>
using namespace std;

int main() {
    int correctas;
    cout << "Ingrese numero de respuestas correctas (0-20): ";
    cin >> correctas;

    if (correctas >= 18)
        cout << "Nivel Excelente.";
    else if (correctas >= 14)
        cout << "Nivel Bueno.";
    else if (correctas >= 10)
        cout << "Nivel Regular.";
    else
        cout << "Nivel Insuficiente.";
    return 0;
}
