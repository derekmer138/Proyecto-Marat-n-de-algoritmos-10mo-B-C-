#include <iostream>
using namespace std;

int main() {
    int n;
    bool tiene5 = false;
    cout << "Ingrese un numero: ";
    cin >> n;

    n = abs(n);
    while (n > 0) {
        if (n % 10 == 5) {
            tiene5 = true;
            break;
        }
        n /= 10;
    }

    if (tiene5)
        cout << "Tiene al menos un digito 5.";
    else
        cout << "No tiene ningun 5.";
    return 0;
}
