#include <iostream>
#include <string>
using namespace std;
int main(){
    string pass="1234", intento;
    int intentos=3;
    while(intentos>0){
        cout<<"Ingrese clave: ";
        cin>>intento;
        if(intento==pass){
            cout<<"Acceso permitido";
            return 0;
        }else{
            intentos--;
            cout<<"Incorrecto. Intentos restantes: "<<intentos<<endl;
        }
    }
    cout<<"Acceso bloqueado";
}
