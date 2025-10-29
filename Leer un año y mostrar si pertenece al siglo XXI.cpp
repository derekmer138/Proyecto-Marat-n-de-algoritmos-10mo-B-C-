#include <iostream>
using namespace std;

int main() {
    int anio;
    cout << "Ingrese un anio: ";
    cin >> anio;

    if (anio >= 2001 && anio <= 2100)
        cout << "Pertenece al siglo XXI.";
    else
        cout << "No pertenece al siglo XXI.";
    return 0;
}
