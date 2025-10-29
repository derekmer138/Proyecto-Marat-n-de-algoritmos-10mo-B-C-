#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n >= 1 && n <= 100 && n % 2 == 0)
        cout << "El numero esta en el rango y es par.";
    else
        cout << "No cumple la condicion.";
    return 0;
}
