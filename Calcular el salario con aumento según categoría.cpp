#include <iostream>
using namespace std;

int main() {
    float salario;
    int categoria;
    cout << "Ingrese salario y categoria (1-3): ";
    cin >> salario >> categoria;

    if (categoria == 1)
        salario *= 1.10;
    else if (categoria == 2)
        salario *= 1.20;
    else if (categoria == 3)
        salario *= 1.30;
    else {
        cout << "Categoria invalida.";
        return 0;
    }

    cout << "Nuevo salario: $" << salario;
    return 0;
}
