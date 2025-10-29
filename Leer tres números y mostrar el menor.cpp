#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;

    if (a < b && a < c)
        cout << "El menor es " << a;
    else if (b < c)
        cout << "El menor es " << b;
    else
        cout << "El menor es " << c;
    return 0;
}
