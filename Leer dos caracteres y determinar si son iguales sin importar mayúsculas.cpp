#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char a, b;
    cout << "Ingrese dos letras: ";
    cin >> a >> b;

    if (tolower(a) == tolower(b))
        cout << "Son iguales.";
    else
        cout << "Son diferentes.";
    return 0;
}
