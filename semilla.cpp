#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de terminos de la serie Fibonacci: ";
    cin >> n;

    if (n <= 0) {
        cout << "Cantidad invalida." << endl;
        return 1;
    }

    int a = 0, b = 1, siguiente;
    cout << "Serie Fibonacci: ";

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        siguiente = a + b;
        a = b;
        b = siguiente;
    }
    cout << endl;

    return 0;
}
