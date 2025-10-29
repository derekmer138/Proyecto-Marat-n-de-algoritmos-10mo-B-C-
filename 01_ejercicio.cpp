#include <iostream>
#include <vector>
using namespace std;
double promedio(vector<int> v){int s=0;for(int x:v)s+=x;return (double)s/v.size();}
int main(){int n;cin>>n;vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];cout<<promedio(v);return 0;}