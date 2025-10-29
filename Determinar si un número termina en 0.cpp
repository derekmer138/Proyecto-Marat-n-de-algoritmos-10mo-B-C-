#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (abs(n) % 10 == 0)
        cout << "Termina en 0.";
    else
        cout << "No termina en 0.";
    return 0;
}
