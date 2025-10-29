#include <iostream>
using namespace std;

int main() {
    float a, b;
    char op;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    cout << "Ingrese una operacion (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+': cout << "Resultado: " << a + b; break;
        case '-': cout << "Resultado: " << a - b; break;
        case '*': cout << "Resultado: " << a * b; break;
        case '/': 
            if (b != 0) cout << "Resultado: " << a / b;
            else cout << "Division por cero no permitida.";
            break;
        default: cout << "Operacion invalida.";
    }
    return 0;
}
