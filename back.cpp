// ex03_binary_search.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binary_search_idx(const vector<int>& a, int x){
    int l=0,r=(int)a.size()-1;
    while(l<=r){
        int m = l + (r-l)/2;
        if(a[m]==x) return m;
        if(a[m]<x) l=m+1; else r=m-1;
    }
    return -1;
}
int main(){
    int n; cout<<"N: "; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());
    cout<<"Arreglo ordenado: ";
    for(int v:a) cout<<v<<" ";
    int x; cout<<"\nBuscar valor: "; cin>>x;
    int idx = binary_search_idx(a,x);
    if(idx==-1) cout<<"No encontrado\n"; else cout<<"Encontrado en indice "<<idx<<"\n";
}
