#include <iostream>
using namespace std;
int main() {
    int n;
    long long mult=1;
    cout<<"Cantidad: ";
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++) mult*=v[i];
    cout<<"Resultado: "<<mult;
}
