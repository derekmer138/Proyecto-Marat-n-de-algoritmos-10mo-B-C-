#include <iostream>
#include <vector>
using namespace std;
int mayor(vector<int> v){int m=v[0];for(int x:v)if(x>m)m=x;return m;}
int main(){int n;cin>>n;vector<int> v(n);for(int i=0;i<n;i++)cin>>v[i];cout<<mayor(v);return 0;}