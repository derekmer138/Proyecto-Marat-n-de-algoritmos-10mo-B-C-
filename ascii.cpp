// ex14_knapsack_backtracking.cpp
#include <iostream>
#include <vector>
using namespace std;
int best=0,n,W;
vector<int> w,v;
void backtrack(int i,int curW,int curV){
    if(curW>W) return;
    if(i==n){ best = max(best, curV); return; }
    // no tomar
    backtrack(i+1,curW,curV);
    // tomar
    backtrack(i+1,curW+w[i],curV+v[i]);
}
int main(){
    cin>>n>>W;
    w.resize(n); v.resize(n);
    for(int i=0;i<n;i++) cin>>w[i]>>v[i];
    backtrack(0,0,0);
    cout<<"Mejor valor: "<<best<<"\n";
}
