// ex07_matrix_multiplication.cpp
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m,p;
    cout<<"Filas A, Columnas A (=Filas B), Columnas B: ";
    cin>>n>>m>>p;
    vector<vector<int>> A(n, vector<int>(m));
    vector<vector<int>> B(m, vector<int>(p));
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>A[i][j];
    for(int i=0;i<m;i++) for(int j=0;j<p;j++) cin>>B[i][j];
    vector<vector<int>> C(n, vector<int>(p,0));
    for(int i=0;i<n;i++) for(int j=0;j<p;j++) for(int k=0;k<m;k++) C[i][j]+=A[i][k]*B[k][j];
    cout<<"Resultado:\n";
    for(int i=0;i<n;i++){ for(int j=0;j<p;j++) cout<<C[i][j]<<" "; cout<<"\n"; }
}
