#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n % 3 == 0 || n % 7 == 0)
        cout << "Es divisible entre 3 o 7.";
    else
        cout << "No es divisible entre 3 ni 7.";
    return 0;
}
