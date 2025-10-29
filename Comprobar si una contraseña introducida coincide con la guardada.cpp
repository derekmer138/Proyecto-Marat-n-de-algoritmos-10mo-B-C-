#include <iostream>
#include <string>
using namespace std;

int main() {
    string clave, intento;
    clave = "secreto123";
    cout << "Ingrese la contrasena: ";
    cin >> intento;

    if (intento == clave)
        cout << "Acceso permitido.";
    else
        cout << "Contrasena incorrecta.";
    return 0;
}
