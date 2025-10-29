#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n % 9 == 0)
        cout << "Divisible por 9.";
    else
        cout << "No divisible por 9.";
    return 0;
}
