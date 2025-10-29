#include <iostream>
#include <string>
using namespace std;
int main() {
    string palabra;
    cout << "Palabra: ";
    cin >> palabra;
    for (int i = palabra.size() - 1; i >= 0; i--)
        cout << palabra[i];
}
