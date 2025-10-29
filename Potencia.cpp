#include <iostream>
using namespace std;
int potencia(int b, int e){
    int r=1;
    for(int i=0;i<e;i++) r*=b;
    return r;
}
int main(){
    int base, exp;
    cin>>base>>exp;
    cout<<potencia(base,exp);
}
