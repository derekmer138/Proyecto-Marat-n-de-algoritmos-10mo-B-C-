// ex17_date_validator.cpp
#include <iostream>
using namespace std;
bool bisiesto(int y){ return (y%4==0 && y%100!=0) || (y%400==0); }
int mdays(int m,int y){
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) return 31;
    if(m==4||m==6||m==9||m==11) return 30;
    return bisiesto(y)?29:28;
}
int main(){
    int d,m,y; cout<<"Ingrese dia mes anio: "; cin>>d>>m>>y;
    if(m<1||m>12) { cout<<"Fecha invalida\n"; return 0; }
    if(d<1||d>mdays(m,y)) { cout<<"Fecha invalida\n"; return 0; }
    cout<<"Fecha valida: "<<d<<"/"<<m<<"/"<<y<<"\n";
}
