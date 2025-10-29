#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int raiz = sqrt(n);
    if (raiz * raiz == n)
        cout << "Es un cuadrado perfecto.";
    else
        cout << "No es un cuadrado perfecto.";
    return 0;
}
