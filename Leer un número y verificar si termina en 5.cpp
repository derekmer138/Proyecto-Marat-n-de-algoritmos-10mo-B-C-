#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (abs(n) % 10 == 5)
        cout << "Termina en 5.";
    else
        cout << "No termina en 5.";
    return 0;
}
