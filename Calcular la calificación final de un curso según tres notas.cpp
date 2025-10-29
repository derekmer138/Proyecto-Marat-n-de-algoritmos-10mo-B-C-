#include <iostream>
using namespace std;

int main() {
    float teoria, practica, proyecto, nota;
    cout << "Ingrese teoria, practica y proyecto: ";
    cin >> teoria >> practica >> proyecto;

    nota = teoria * 0.4 + practica * 0.3 + proyecto * 0.3;

    if (nota >= 7)
        cout << "Aprobado con " << nota;
    else
        cout << "Reprobado con " << nota;
    return 0;
}
