// ex08_sudoku_checker.cpp
#include <iostream>
#include <vector>
using namespace std;
bool valid_block(const vector<vector<int>>& s, int r0,int c0){
    bool seen[10]={0};
    for(int i=0;i<3;i++) for(int j=0;j<3;j++){
        int v=s[r0+i][c0+j];
        if(v<1 || v>9 || seen[v]) return false;
        seen[v]=true;
    }
    return true;
}
int main(){
    vector<vector<int>> s(9, vector<int>(9));
    cout<<"Ingrese 81 numeros (fila por fila):\n";
    for(int i=0;i<9;i++) for(int j=0;j<9;j++) cin>>s[i][j];
    // filas y columnas
    for(int i=0;i<9;i++){
        bool seenR[10]={0}, seenC[10]={0};
        for(int j=0;j<9;j++){
            int vr=s[i][j], vc=s[j][i];
            if(vr<1||vr>9||vc<1||vc>9||seenR[vr]||seenC[vc]){ cout<<"No valido\n"; return 0; }
            seenR[vr]=seenC[vc]=true;
        }
    }
    for(int r=0;r<9;r+=3) for(int c=0;c<9;c+=3) if(!valid_block(s,r,c)){ cout<<"No valido\n"; return 0; }
    cout<<"Sudoku valido\n";
}
