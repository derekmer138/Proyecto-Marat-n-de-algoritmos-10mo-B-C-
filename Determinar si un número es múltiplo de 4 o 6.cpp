#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n % 4 == 0 && n % 6 == 0)
        cout << "Multiplo de 4 y 6.";
    else if (n % 4 == 0)
        cout << "Multiplo de 4.";
    else if (n % 6 == 0)
        cout << "Multiplo de 6.";
    else
        cout << "No es multiplo de 4 ni 6.";
    return 0;
}
