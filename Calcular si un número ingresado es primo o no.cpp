#include <iostream>
using namespace std;

int main() {
    int n, cont = 0;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n <= 1) cout << "No es primo.";
    else {
        for (int i = 1; i <= n; i++)
            if (n % i == 0) cont++;
        if (cont == 2)
            cout << "Es primo.";
        else
            cout << "No es primo.";
    }
    return 0;
}
