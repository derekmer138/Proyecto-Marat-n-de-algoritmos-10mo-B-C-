#include <iostream>
using namespace std;
int main() {
    int n, pos=0, neg=0;
    cout << "Cantidad: ";
    cin >> n;
    int v[n];
    for (int i=0;i<n;i++) cin>>v[i];
    for (int i=0;i<n;i++){
        if(v[i]>0) pos++;
        else if(v[i]<0) neg++;
    }
    cout<<"Positivos: "<<pos<<" Negativos: "<<neg;
}
