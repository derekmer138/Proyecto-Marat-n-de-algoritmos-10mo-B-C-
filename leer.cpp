#include <iostream>
using namespace std;

int main() {
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;

    letra = tolower(letra);
    if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
        cout << "Es vocal." << endl;
    else
        cout << "Es consonante." << endl;

    return 0;
}
