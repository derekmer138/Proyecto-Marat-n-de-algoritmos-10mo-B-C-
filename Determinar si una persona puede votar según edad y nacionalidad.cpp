#include <iostream>
using namespace std;

int main() {
    int edad;
    char nacional;
    cout << "Ingrese edad: ";
    cin >> edad;
    cout << "Es nacional del pais? (s/n): ";
    cin >> nacional;

    if (edad >= 18 && (nacional == 's' || nacional == 'S'))
        cout << "Puede votar.";
    else
        cout << "No puede votar.";
    return 0;
}
