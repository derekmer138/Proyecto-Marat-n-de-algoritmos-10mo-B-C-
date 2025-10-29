#include <iostream>
using namespace std;

int main() {
    int d, m, a;
    cout << "Ingrese dia, mes y año: ";
    cin >> d >> m >> a;

    bool valido = true;
    if (m < 1 || m > 12 || d < 1) valido = false;
    else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) valido = false;
    else if (m == 2) {
        bool bisiesto = (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0);
        if ((bisiesto && d > 29) || (!bisiesto && d > 28)) valido = false;
    } else if (d > 31) valido = false;

    cout << (valido ? "Fecha valida" : "Fecha invalida");
    return 0;
}
