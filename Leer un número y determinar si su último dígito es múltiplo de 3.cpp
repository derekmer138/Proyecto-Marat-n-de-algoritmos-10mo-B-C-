#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, ultimo;
    cout << "Ingrese un numero: ";
    cin >> n;

    ultimo = abs(n) % 10;
    if (ultimo % 3 == 0)
        cout << "El ultimo digito es multiplo de 3.";
    else
        cout << "El ultimo digito no es multiplo de 3.";
    return 0;
}
