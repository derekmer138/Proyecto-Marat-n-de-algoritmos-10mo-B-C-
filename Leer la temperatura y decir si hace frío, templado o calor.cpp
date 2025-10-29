#include <iostream>
using namespace std;

int main() {
    float t;
    cout << "Ingrese la temperatura: ";
    cin >> t;

    if (t < 15)
        cout << "Hace frio.";
    else if (t <= 25)
        cout << "Clima templado.";
    else
        cout << "Hace calor.";
    return 0;
}
