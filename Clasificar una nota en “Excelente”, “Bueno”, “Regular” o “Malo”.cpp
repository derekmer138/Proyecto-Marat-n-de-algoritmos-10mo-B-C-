#include <iostream>
using namespace std;

int main() {
    int nota;
    cout << "Ingrese una nota (0-100): ";
    cin >> nota;

    if (nota >= 90)
        cout << "Excelente.";
    else if (nota >= 75)
        cout << "Bueno.";
    else if (nota >= 60)
        cout << "Regular.";
    else
        cout << "Malo.";
    return 0;
}
