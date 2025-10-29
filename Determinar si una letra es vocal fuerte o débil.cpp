#include <iostream>
using namespace std;

int main() {
    char l;
    cout << "Ingrese una vocal: ";
    cin >> l;

    if (l == 'a' || l == 'e' || l == 'o')
        cout << "Vocal fuerte.";
    else if (l == 'i' || l == 'u')
        cout << "Vocal debil.";
    else
        cout << "No es vocal.";
    return 0;
}
