#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "Es par.";
    else
        cout << "Es impar.";
    return 0;
}
