#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n >= 10 && n <= 99 || n <= -10 && n >= -99)
        cout << "Tiene dos digitos.";
    else
        cout << "No tiene dos digitos.";
    return 0;
}
