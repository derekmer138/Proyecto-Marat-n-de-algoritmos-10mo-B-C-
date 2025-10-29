#include <iostream>
#include <string>
using namespace std;
int main() {
    string palabra;
    int c = 0;
    cout << "Palabra: ";
    cin >> palabra;
    for (char x : palabra)
        if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u') c++;
    cout << "Tiene " << c << " vocales";
}
