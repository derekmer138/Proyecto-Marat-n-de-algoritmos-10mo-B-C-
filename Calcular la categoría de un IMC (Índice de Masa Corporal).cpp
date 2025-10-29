#include <iostream>
using namespace std;

int main() {
    float peso, altura, imc;
    cout << "Ingrese peso (kg) y altura (m): ";
    cin >> peso >> altura;

    imc = peso / (altura * altura);
    cout << "IMC: " << imc << " - ";

    if (imc < 18.5)
        cout << "Bajo peso";
    else if (imc < 25)
        cout << "Normal";
    else if (imc < 30)
        cout << "Sobrepeso";
    else
        cout << "Obesidad";
    return 0;
}
