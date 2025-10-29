#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    int edad;

    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Hola " << nombre << ", tienes " << edad << " años." << endl;

    return 0;
}
