#include <iostream>
using namespace std;

int main() {
    int n;
    bool repetido = false;
    cout << "Ingrese un numero: ";
    cin >> n;

    string s = to_string(abs(n));
    for (size_t i = 0; i < s.size(); i++)
        for (size_t j = i + 1; j < s.size(); j++)
            if (s[i] == s[j]) repetido = true;

    if (repetido)
        cout << "Tiene digitos repetidos.";
    else
        cout << "No tiene digitos repetidos.";
    return 0;
}
