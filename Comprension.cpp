#include <iostream>
#include <string>
using namespace std;

int main(){
    string s; cout<<"Cadena: "; cin>>s;
    string out="";
    for(size_t i=0;i<s.size();){
        char c=s[i]; size_t j=i;
        while(j<s.size() && s[j]==c) j++;
        out.push_back(c);
        out += to_string(j-i);
        i=j;
    }
    cout<<"Comprimida: "<<out<<"\n";
}
