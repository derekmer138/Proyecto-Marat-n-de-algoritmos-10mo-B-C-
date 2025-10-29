#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int numero;
    srand(time(0)); // semilla aleatoria

    numero = rand() % 100 + 1; // número entre 1 y 100
    cout << "El numero generado es: " << numero << "\n";

    if (numero % 2 == 0)
        cout << "El numero es par.\n";
    else
        cout << "El numero es impar.\n";

    return 0;
}
