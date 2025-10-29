#include <iostream>
using namespace std;

int main() {
    int dia, mes;
    cout << "Ingrese dia y mes: ";
    cin >> dia >> mes;

    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) cout << "Aries";
    else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) cout << "Tauro";
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) cout << "Geminis";
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) cout << "Cancer";
    else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) cout << "Leo";
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) cout << "Virgo";
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) cout << "Libra";
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) cout << "Escorpio";
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) cout << "Sagitario";
    else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) cout << "Capricornio";
    else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) cout << "Acuario";
    else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) cout << "Piscis";
    else cout << "Fecha invalida.";
    return 0;
}
