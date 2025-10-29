#include <iostream>
using namespace std;

int main() {
    char nota;
    cout << "Ingrese su calificacion (A-F): ";
    cin >> nota;

    switch (toupper(nota)) {
        case 'A': cout << "Excelente"; break;
        case 'B': cout << "Bueno"; break;
        case 'C': cout << "Regular"; break;
        case 'D': cout << "Suficiente"; break;
        case 'F': cout << "Reprobado"; break;
        default: cout << "Calificacion invalida.";
    }
    return 0;
}
