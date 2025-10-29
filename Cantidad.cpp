#include <iostream>
using namespace std;
int main() {
    int n, suma = 0;
    cout << "Cantidad de numeros: ";
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++)
        if (v[i] % 2 == 0) suma += v[i];
    cout << "Suma de pares = " << suma;
}
